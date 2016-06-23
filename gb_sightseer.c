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
	float fLocal_28 = 0;
	auto uLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	auto uLocal_34 = 0;
	auto uLocal_35 = 0;
	int iLocal_36 = 0;
	auto uLocal_37 = 0;
	auto uLocal_38 = 0;
	auto uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	auto uLocal_44 = 0;
	auto uLocal_45 = 0;
	auto uLocal_46 = 0;
	auto uLocal_47 = 0;
	auto uLocal_48 = 0;
	auto uLocal_49 = 0;
	auto uLocal_50 = 0;
	auto uLocal_51 = 0;
	auto uLocal_52 = 0;
	auto uLocal_53 = 0;
	auto uLocal_54 = 0;
	auto uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0;
	int[] iLocal_64 = new int[5];
	Vector3 fLocal_70 = 0;
	Vector3 fLocal_71 = 0;
	float fLocal_72 = 0;
	int iLocal_73 = 0;
	auto uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<2> Local_80 = 0;
	struct<2>[] Local_82 = new struct<2>[8];
	struct<2> Local_99 = 0;
	struct<4>[] Local_101 = new struct<4>[8];
	Vector3 fLocal_134 = 0;
	float fLocal_135 = 0;
	float fLocal_136 = 0;
	float fLocal_137 = 0;
	float fLocal_138 = 0;
	int iLocal_139 = 0;
	int[] iLocal_140 = new int[8];
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	auto uLocal_152 = 0;
	auto uLocal_153 = 8;
	auto uLocal_154 = 0;
	auto uLocal_155 = 0;
	auto uLocal_156 = 0;
	auto uLocal_157 = 0;
	auto uLocal_158 = 0;
	auto uLocal_159 = 0;
	auto uLocal_160 = 0;
	auto uLocal_161 = 0;
	auto uLocal_162 = 2;
	auto uLocal_163 = 0;
	auto uLocal_164 = 0;
	auto uLocal_165 = 8;
	auto uLocal_166 = 0;
	auto uLocal_167 = 0;
	auto uLocal_168 = 0;
	auto uLocal_169 = 0;
	auto uLocal_170 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	auto uLocal_173 = 0;
	auto uLocal_174 = 8;
	auto uLocal_175 = 0;
	auto uLocal_176 = 0;
	auto uLocal_177 = 0;
	auto uLocal_178 = 0;
	auto uLocal_179 = 0;
	auto uLocal_180 = 0;
	auto uLocal_181 = 0;
	auto uLocal_182 = 0;
	float fLocal_183 = 0;
	auto uLocal_184 = 0;
	auto uLocal_185 = 0;
	float fLocal_186 = 0;
	float fLocal_187 = 0;
	float fLocal_188 = 0;
	float fLocal_189 = 0;
	float fLocal_190 = 0;
	auto uLocal_191 = 0;
	struct<60> Local_192 = 0;
	struct<6>[] Local_252 = new struct<6>[32];
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	auto uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	Vector3 vLocal_454 = 0;
	auto uLocal_457 = 0;
	struct<18> Local_458 = 0;
	auto uLocal_476 = 0;
	auto uLocal_477 = 0;
	auto uLocal_478 = 0;
	auto uLocal_479 = 0;
	auto uLocal_480 = 0;
	auto uLocal_481 = 1015222895;
	auto uLocal_482 = 1021665346;
	auto uLocal_483 = 0;
	auto uLocal_484 = 255;
	auto uLocal_485 = 0;
	auto uLocal_486 = 0;
	auto uLocal_487 = 0;
	auto uLocal_488 = 0;
	auto uLocal_489 = 0;
	auto uLocal_490 = 0;
	auto uLocal_491 = 0;
	auto uLocal_492 = 0;
	auto uLocal_493 = -1;
	auto uLocal_494 = 996499522;
	auto uLocal_495 = 1002740646;
	auto uLocal_496 = 0;
	auto uLocal_497 = 60;
	auto uLocal_498 = 0;
	auto uLocal_499 = 0;
	auto uLocal_500 = 0;
	auto uLocal_501 = 0;
	auto uLocal_502 = 0;
	auto uLocal_503 = 0;
	auto uLocal_504 = 0;
	auto uLocal_505 = 0;
	auto uLocal_506 = 0;
	auto uLocal_507 = 0;
	auto uLocal_508 = 0;
	auto uLocal_509 = 0;
	auto uLocal_510 = 0;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	auto uLocal_513 = 0;
	auto uLocal_514 = 0;
	auto uLocal_515 = 0;
	auto uLocal_516 = 0;
	auto uLocal_517 = 0;
	auto uLocal_518 = 0;
	auto uLocal_519 = 0;
	auto uLocal_520 = 0;
	auto uLocal_521 = 0;
	auto uLocal_522 = 0;
	auto uLocal_523 = 0;
	auto uLocal_524 = 0;
	auto uLocal_525 = 0;
	auto uLocal_526 = 0;
	auto uLocal_527 = 0;
	auto uLocal_528 = 0;
	auto uLocal_529 = 0;
	auto uLocal_530 = 0;
	auto uLocal_531 = 0;
	auto uLocal_532 = 0;
	auto uLocal_533 = 0;
	auto uLocal_534 = 0;
	auto uLocal_535 = 0;
	auto uLocal_536 = 0;
	auto uLocal_537 = 0;
	auto uLocal_538 = 0;
	auto uLocal_539 = 0;
	auto uLocal_540 = 0;
	auto uLocal_541 = 0;
	auto uLocal_542 = 0;
	auto uLocal_543 = 0;
	auto uLocal_544 = 0;
	auto uLocal_545 = 0;
	auto uLocal_546 = 0;
	auto uLocal_547 = 0;
	auto uLocal_548 = 0;
	auto uLocal_549 = 0;
	auto uLocal_550 = 0;
	auto uLocal_551 = 0;
	auto uLocal_552 = 0;
	auto uLocal_553 = 0;
	auto uLocal_554 = 0;
	auto uLocal_555 = 0;
	auto uLocal_556 = 0;
	auto uLocal_557 = 0;
	auto uLocal_558 = 1016296636;
	auto uLocal_559 = 220;
	auto uLocal_560 = 255;
	auto uLocal_561 = 255;
	auto uLocal_562 = 255;
	auto uLocal_563 = 255;
	auto uLocal_564 = 255;
	auto uLocal_565 = 255;
	auto uLocal_566 = 4096;
	auto uLocal_567 = 40;
	auto uLocal_568 = 0;
	auto uLocal_569 = 0;
	auto uLocal_570 = 0;
	auto uLocal_571 = 0;
	auto uLocal_572 = 0;
	auto uLocal_573 = 0;
	auto uLocal_574 = 0;
	auto uLocal_575 = 0;
	auto uLocal_576 = 0;
	auto uLocal_577 = 0;
	auto uLocal_578 = 0;
	auto uLocal_579 = 0;
	auto uLocal_580 = 0;
	auto uLocal_581 = 0;
	auto uLocal_582 = 0;
	auto uLocal_583 = 0;
	auto uLocal_584 = 0;
	auto uLocal_585 = 0;
	auto uLocal_586 = 0;
	auto uLocal_587 = 0;
	auto uLocal_588 = 0;
	auto uLocal_589 = 0;
	auto uLocal_590 = 0;
	auto uLocal_591 = 0;
	auto uLocal_592 = 0;
	auto uLocal_593 = 0;
	auto uLocal_594 = 0;
	auto uLocal_595 = 0;
	auto uLocal_596 = 0;
	auto uLocal_597 = 0;
	auto uLocal_598 = 0;
	auto uLocal_599 = 0;
	auto uLocal_600 = 0;
	auto uLocal_601 = 0;
	auto uLocal_602 = 0;
	auto uLocal_603 = 0;
	auto uLocal_604 = 0;
	auto uLocal_605 = 0;
	auto uLocal_606 = 0;
	auto uLocal_607 = 0;
	auto uLocal_608 = 0;
	auto uLocal_609 = 0;
	auto uLocal_610 = 0;
	auto uLocal_611 = 0;
	auto uLocal_612 = 0;
	auto uLocal_613 = 0;
	auto uLocal_614 = 0;
	auto uLocal_615 = 0;
	auto uLocal_616 = 0;
	auto uLocal_617 = 0;
	auto uLocal_618 = 0;
	auto uLocal_619 = 0;
	auto uLocal_620 = 0;
	auto uLocal_621 = 0;
	auto uLocal_622 = 0;
	auto uLocal_623 = 0;
	auto uLocal_624 = 0;
	auto uLocal_625 = 0;
	auto uLocal_626 = 0;
	auto uLocal_627 = 0;
	auto uLocal_628 = 0;
	auto uLocal_629 = 0;
	auto uLocal_630 = 0;
	auto uLocal_631 = 0;
	auto uLocal_632 = 0;
	auto uLocal_633 = 0;
	auto uLocal_634 = 0;
	auto uLocal_635 = 0;
	auto uLocal_636 = 0;
	auto uLocal_637 = 0;
	auto uLocal_638 = 0;
	auto uLocal_639 = 0;
	auto uLocal_640 = 0;
	auto uLocal_641 = 0;
	auto uLocal_642 = 0;
	auto uLocal_643 = 0;
	auto uLocal_644 = 0;
	auto uLocal_645 = 0;
	auto uLocal_646 = 0;
	auto uLocal_647 = 0;
	auto uLocal_648 = 0;
	auto uLocal_649 = 0;
	auto uLocal_650 = 0;
	auto uLocal_651 = 0;
	auto uLocal_652 = 0;
	auto uLocal_653 = 0;
	auto uLocal_654 = 0;
	auto uLocal_655 = 0;
	auto uLocal_656 = 0;
	auto uLocal_657 = 0;
	auto uLocal_658 = 0;
	auto uLocal_659 = 0;
	auto uLocal_660 = 0;
	auto uLocal_661 = 0;
	auto uLocal_662 = 0;
	auto uLocal_663 = 0;
	auto uLocal_664 = 0;
	auto uLocal_665 = 0;
	auto uLocal_666 = 0;
	auto uLocal_667 = 0;
	auto uLocal_668 = 0;
	auto uLocal_669 = 0;
	auto uLocal_670 = 0;
	auto uLocal_671 = 0;
	auto uLocal_672 = 0;
	auto uLocal_673 = 0;
	auto uLocal_674 = 0;
	auto uLocal_675 = 0;
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
	auto uLocal_691 = 0;
	auto uLocal_692 = 0;
	auto uLocal_693 = 0;
	auto uLocal_694 = 0;
	auto uLocal_695 = 0;
	auto uLocal_696 = 0;
	auto uLocal_697 = 0;
	auto uLocal_698 = 0;
	auto uLocal_699 = 0;
	auto uLocal_700 = 0;
	auto uLocal_701 = 0;
	auto uLocal_702 = 0;
	auto uLocal_703 = 0;
	auto uLocal_704 = 0;
	auto uLocal_705 = 0;
	auto uLocal_706 = 0;
	auto uLocal_707 = 0;
	auto uLocal_708 = 0;
	auto uLocal_709 = 0;
	auto uLocal_710 = 0;
	auto uLocal_711 = 0;
	auto uLocal_712 = 0;
	auto uLocal_713 = 0;
	auto uLocal_714 = 0;
	auto uLocal_715 = 0;
	auto uLocal_716 = 0;
	auto uLocal_717 = 0;
	auto uLocal_718 = 0;
	auto uLocal_719 = 0;
	auto uLocal_720 = 0;
	auto uLocal_721 = 0;
	auto uLocal_722 = 0;
	auto uLocal_723 = 0;
	auto uLocal_724 = 0;
	auto uLocal_725 = 0;
	auto uLocal_726 = 0;
	auto uLocal_727 = 0;
	auto uLocal_728 = 0;
	auto uLocal_729 = 0;
	auto uLocal_730 = 0;
	auto uLocal_731 = 0;
	auto uLocal_732 = 0;
	auto uLocal_733 = 0;
	auto uLocal_734 = 0;
	auto uLocal_735 = 0;
	auto uLocal_736 = 4;
	auto uLocal_737 = 0;
	auto uLocal_738 = 0;
	auto uLocal_739 = 0;
	auto uLocal_740 = 0;
	auto uLocal_741 = 0;
	auto uLocal_742 = 1065353216;
	auto uLocal_743 = 0;
	auto uLocal_744 = 0;
	auto uLocal_745 = 1056964608;
	auto uLocal_746 = 1056964608;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	Vector3[] vLocal_753 = new Vector3[20];
	auto uLocal_814 = 0;
	auto uLocal_815 = 0;
	auto uLocal_816 = 0;
	auto uLocal_817 = 0;
	auto uLocal_818 = 0;
	auto uLocal_819 = 0;
	auto uLocal_820 = 0;
	auto uLocal_821 = 0;
	struct<20> Local_822 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_63 = 0f;
	fLocal_70 = 0f;
	fLocal_71 = 0f;
	fLocal_72 = 0f;
	fLocal_135 = 0.62f;
	fLocal_136 = 0.51f;
	fLocal_137 = 0.55f;
	fLocal_138 = 25f;
	fLocal_183 = 0.05f + 0.275f - 0.01f;
	fLocal_186 = -0.05f;
	fLocal_187 = 0.92f;
	fLocal_188 = 1.94f;
	fLocal_189 = 2.99f;
	fLocal_190 = 3.7f;
	iLocal_747 = -1;
	iLocal_748 = -1;
	iLocal_750 = -1;
	iLocal_751 = -1;
	if (network_is_game_in_progress() && func_705(player_id(), 0, 1))
	{
		func_693(Local_822);
	}
	else
	{
		func_675();
	}
	while (true)
	{
		func_674();
		if (func_666())
		{
			func_675();
		}
		Global_1727400.f_2 = Local_192.f_58;
		Global_1727400.f_3 = Local_192.f_59;
		switch (func_665(participant_id_to_int()))
		{
			case 0:
				if (func_664() == 1)
				{
					func_663();
					if (func_662())
					{
						func_649(142, 1, -1);
						set_max_wanted_level(3);
						if (!func_648())
						{
							_0x616093EC6B139DD9(player_id(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_649(142, 0, -1);
						_0x616093EC6B139DD9(player_id(), joaat("pickup_portable_package"), 0);
					}
					Local_252[participant_id_to_int() /*6*/] = 1;
				}
				else if (func_664() == 4)
				{
					Local_252[participant_id_to_int() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_645())
				{
					Local_252[participant_id_to_int() /*6*/] = 2;
				}
				if (func_664() == 1)
				{
					func_342();
					func_339();
					if (func_662() || func_338())
					{
						func_210(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
					}
					func_168();
				}
				else if (func_664() == 4)
				{
					Local_252[participant_id_to_int() /*6*/] = 3;
				}
				func_165();
				break;
			
			case 3:
				func_164(&(Local_192.f_49));
				if (func_163(&(Local_192.f_49)))
				{
					Local_252[participant_id_to_int() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_252[participant_id_to_int() /*6*/] = 4;
			
			case 4:
				func_675();
				break;
		}
		if (network_is_host_of_this_script())
		{
			switch (func_664())
			{
				case 0:
					if (func_156())
					{
						_0x6DEE77AFF8C21BD1(&(Local_192.f_58), &(Local_192.f_59));
						Local_192 = 1;
						Local_192.f_33 = participant_id_to_int();
						Local_192.f_34 = player_id();
						func_649(142, 1, -1);
					}
					break;
				
				case 1:
					func_154();
					func_4();
					if (func_2())
					{
						Local_192 = 4;
					}
					else if (func_1())
					{
						Local_192 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_1()
{
	if (Global_2460486.f_4660.f_13)
	{
		Global_2460486.f_4660.f_13 = 0;
		return true;
	}
	return false;
}

bool func_2()
{
	if (func_3())
	{
		return true;
	}
	if (is_bit_set(Local_192.f_1, 2))
	{
		return true;
	}
	return false;
}

bool func_3()
{
	return false;
}

void func_4()
{
	switch (Local_192.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (is_bit_set(Local_192.f_1, true))
			{
				Local_192.f_32 = 2;
			}
			else if (is_bit_set(Local_192.f_1, 3))
			{
				Local_192.f_32 = 2;
			}
			else if (is_bit_set(Local_192.f_1, 4))
			{
				Local_192.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_192.f_5 == 0)
	{
		if (!is_bit_set(Local_192.f_1, 6))
		{
			if (!func_9(&(Local_192.f_53)))
			{
				func_8(&(Local_192.f_53), 0, 0);
			}
			else if (func_6(&(Local_192.f_53), func_7(), 0))
			{
				set_bit(&(Local_192.f_1), 6);
			}
		}
	}
}

bool func_6(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_8(uParam0, iParam2, 0);
	if (network_is_game_in_progress() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_7()
{
	return 600000;
}

void func_8(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

auto func_9(auto uParam0)
{
	return *uParam0.f_1;
}

void func_10()
{
	if (!func_9(&(Local_192.f_51)))
	{
		func_8(&(Local_192.f_51), 0, 0);
	}
	else if (func_6(&(Local_192.f_51), func_11(), 0))
	{
		set_bit(&(Local_192.f_1), 3);
	}
}

auto func_11()
{
	return Global_262145.f_10441;
}

void func_12()
{
	int iVar0;
	
	if (Local_192.f_33 < 0)
	{
		return;
	}
	if (network_is_participant_active(int_to_participantindex(Local_192.f_33)))
	{
		if (Local_252[Local_192.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = Local_252[Local_192.f_33 /*6*/].f_4 - 1;
			if (!is_bit_set(Local_192.f_4, iVar0))
			{
				Local_192.f_36 = iVar0;
				if (func_13())
				{
					set_bit(&(Local_192.f_4), iVar0);
				}
			}
		}
	}
}

bool func_13()
{
	int iVar0;
	struct<25> Var1;
	Vector3 vVar26;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!network_does_entity_exist_with_network_id(Local_192.f_3))
	{
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (can_register_mission_objects(1))
			{
				vVar26 = {func_153()};
				if (func_14(vVar26, 5f, &vLocal_454, &uLocal_457, Var1))
				{
					Local_192.f_3 = obj_to_net(create_portable_pickup(joaat("pickup_portable_package"), vLocal_454, true, iVar0));
					set_entity_coords_no_offset(net_to_obj(Local_192.f_3), vLocal_454 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					set_model_as_no_longer_needed(iVar0);
					set_entity_invincible(net_to_obj(Local_192.f_3), true);
					_0x77F33F2CCF64B3AA(net_to_obj(Local_192.f_3), 1);
					set_activate_object_physics_as_soon_as_it_is_unfrozen(net_to_obj(Local_192.f_3), 1);
					_0x3910051CCECDB00C(net_to_obj(Local_192.f_3), false);
					activate_physics(net_to_obj(Local_192.f_3));
					func_8(&(Local_192.f_55), 0, 0);
				}
			}
		}
	}
	if (network_does_entity_exist_with_network_id(Local_192.f_3))
	{
		return true;
	}
	return false;
}

bool func_14(Vector3 vParam0, float fParam1, auto uParam2, auto uParam3, struct<13> Param4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16)
{
	struct<11> Var0;
	struct<18> Var18;
	Vector3 vVar44;
	
	if (Param6.f_5 > fParam3 - 20f)
	{
		Param6.f_5 = fParam3 - 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = {vParam0};
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_15(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			vVar44 = {vParam0 - Var0[0 /*3*/]};
			if (vVar44.z > Param6.f_12)
			{
				Var0[0 /*3*/] = {vParam0};
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = {Var0[0 /*3*/]};
		*uParam5 = Var0.f_10[0];
		return true;
	}
	return false;
}

bool func_15(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;
	int iVar17;
	Vector3 vVar18;
	Vector3 vVar21;
	auto uVar24;
	int iVar25;
	struct<56> Var26;
	int iVar83;
	
	iVar25 = false;
	switch (*uParam0.f_7)
	{
		case 0:
			if (((!Global_2404956.f_1484 == *uParam0 || !Global_2404956.f_1484.f_1 == *uParam0.f_1) || !Global_2404956.f_1484.f_2 == *uParam0.f_2) || !Global_2404956.f_1487 == *uParam0.f_4)
			{
				iVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2)
			{
				iVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404956.f_1498 == *uParam0.f_8 || !Global_2404956.f_1498.f_1 == *uParam0.f_8.f_1) || !Global_2404956.f_1498.f_2 == *uParam0.f_8.f_2) || !Global_2404956.f_1501 == *uParam0.f_11) || !Global_2404956.f_1501.f_1 == *uParam0.f_11.f_1) || !Global_2404956.f_1501.f_2 == *uParam0.f_11.f_2) || !Global_2404956.f_1504 == *uParam0.f_14)
			{
				iVar25 = true;
			}
			break;
	}
	if (iVar25)
	{
		if (Global_2404956.f_1482 == 1)
		{
			if (is_thread_active(Global_2404956.f_1491))
			{
				if (Global_2404956.f_1491 == get_id_of_this_thread())
				{
					if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) < func_152(0))
					{
						return false;
					}
				}
				else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) < func_152(0))
				{
					return false;
				}
			}
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_151();
		}
		Global_2404956.f_1482 = 0;
	}
	else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1488) > func_152(0))
	{
		Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
	}
	switch (*uParam0.f_7)
	{
		case 0:
			fVar4 = *uParam0 - *uParam0.f_4;
			fVar5 = *uParam0.f_1 - *uParam0.f_4;
			fVar6 = *uParam0 + *uParam0.f_4;
			fVar7 = *uParam0.f_1 + *uParam0.f_4;
			break;
		
		case 1:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8;
				fVar6 = *uParam0.f_11;
			}
			else
			{
				fVar4 = *uParam0.f_11;
				fVar6 = *uParam0.f_8;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1;
				fVar7 = *uParam0.f_11.f_1;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1;
				fVar7 = *uParam0.f_8.f_1;
			}
			break;
		
		case 2:
			if (*uParam0.f_8 < *uParam0.f_11)
			{
				fVar4 = *uParam0.f_8 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_11 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar4 = *uParam0.f_11 - 0.5f * *uParam0.f_14;
				fVar6 = *uParam0.f_8 + 0.5f * *uParam0.f_14;
			}
			if (*uParam0.f_8.f_1 < *uParam0.f_11.f_1)
			{
				fVar5 = *uParam0.f_8.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_11.f_1 + 0.5f * *uParam0.f_14;
			}
			else
			{
				fVar5 = *uParam0.f_11.f_1 - 0.5f * *uParam0.f_14;
				fVar7 = *uParam0.f_8.f_1 + 0.5f * *uParam0.f_14;
			}
			break;
	}
	_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (*uParam0.f_7 == 0)
	{
		vVar8 = {*uParam0};
	}
	else
	{
		vVar8 = {*uParam0.f_8 + *uParam0.f_11 * Vector(0.5f, 0.5f, 0.5f)};
	}
	vVar11 = {vVar8 + Vector(-0.1f, -0.1f, -0.1f)};
	vVar14 = {vVar8 + Vector(0.1f, 0.1f, 0.1f)};
	if (!Global_2404956.f_1482)
	{
		_0xFB8F2A6F3DF08CBE();
		_0xFEE4A5459472A9F8();
		func_151();
		if (*uParam1.f_7 && *uParam0.f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_150(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, *uParam1.f_5, *uParam0.f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = {*uParam0};
					*uParam2.f_10[0] = *uParam0.f_3;
					return true;
				}
			}
		}
		if (!_0x3C67506996001F5E())
		{
			Global_2404956.f_1505 = *uParam0.f_7;
			switch (*uParam0.f_7)
			{
				case 0:
					Global_2404956.f_1484 = {*uParam0};
					Global_2404956.f_1487 = *uParam0.f_4;
					break;
				
				case 1:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = 0f;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
				
				case 2:
					Global_2404956.f_1498 = {*uParam0.f_8};
					Global_2404956.f_1501 = {*uParam0.f_11};
					Global_2404956.f_1504 = *uParam0.f_14;
					Global_2404956.f_1484 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
					break;
			}
			if (!*uParam1.f_8 && !*uParam1.f_9)
			{
				func_149(vVar8.x, vVar8.y);
			}
			Global_2404956.f_1483 = 1;
			Global_2404956.f_1482 = 1;
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1488 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1491 = get_id_of_this_thread();
		}
		else
		{
			return false;
		}
	}
	if (Global_2404956.f_1482)
	{
		if (Global_2404956.f_1483 == 1)
		{
			if (_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 5000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (*uParam1.f_8 || *uParam1.f_9)
				{
					if (*uParam0.f_21)
					{
						*(uParam2[0 /*3*/]) = {*uParam0.f_18};
					}
					else
					{
						*(uParam2[0 /*3*/]) = {vVar8};
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26 = {*uParam1};
					Var26.f_3 = *uParam1.f_5;
					Var26.f_11 = *uParam1.f_9;
					Var26.f_18 = 1;
					switch (*uParam0.f_7)
					{
						case 0:
							Var26.f_19 = {*uParam0};
							Var26.f_25 = *uParam0.f_4;
							break;
						
						case 1:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = {*uParam0.f_8};
							Var26.f_22 = {*uParam0.f_11};
							Var26.f_25 = *uParam0.f_14;
							break;
					}
					Var26.f_26 = *uParam0.f_7;
					Var26.f_12 = *uParam0.f_15;
					if (*uParam0.f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = {*(uParam1.f_13[iVar17 /*3*/])};
						Var26.f_45[iVar17] = *uParam1.f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = *uParam1.f_23;
					Var26.f_55 = *uParam0.f_16;
					func_130(uParam2[0 /*3*/], uParam2.f_10[0], &Var26);
					if ((*uParam1.f_7 && *uParam1.f_9) && *uParam0.f_7 == 0)
					{
						if (!func_129(*(uParam2[0 /*3*/]), *uParam0, *uParam0.f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = {*uParam0};
							*uParam2.f_10[0] = *uParam0.f_3;
						}
					}
					Global_2404956.f_1483 = 9;
				}
				else
				{
					Global_2404956.f_1483 = 2;
				}
			}
		}
		if (Global_2404956.f_1483 == 2)
		{
			if ((is_navmesh_loaded_in_area(vVar11, vVar14) || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 15000) || _0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (*uParam0.f_5 && !func_126(player_id(), 0))
				{
					Global_2404956.f_1483 = 3;
				}
				else
				{
					Global_2404956.f_1483 = 4;
				}
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1493) > 7000)
			{
				func_125(vVar8.x, vVar8.y);
			}
		}
		if (Global_2404956.f_1483 == 3)
		{
			if (func_124() || get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 10000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 4;
			}
		}
		if (Global_2404956.f_1483 == 4)
		{
			if (_0x3C67506996001F5E())
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_119();
				if (*uParam0.f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (*uParam1.f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!get_player_team(player_id()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (*uParam0.f_7)
					{
						case 0:
							if (_0x5A6FFA2433E2F14C(player_id(), *uParam0, *uParam0.f_4, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 1:
							func_118(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							if (_0x4BA92A18502BCA61(player_id(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 2:
							if (_0x4BA92A18502BCA61(player_id(), *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
								Global_2404956.f_1483 = 5;
							}
							break;
					}
				}
				else
				{
					if (*uParam1.f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (*uParam1.f_10)
					{
						iVar0 += 32;
					}
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					Global_2404956.f_1483 = 5;
					switch (*uParam0.f_7)
					{
						case 0:
							_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_118(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
							_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404956.f_1483 == 5)
		{
			if (func_56(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404956.f_1509.f_5)
				{
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					Global_2404956.f_1483 = 6;
				}
				else
				{
					Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
					if (!*uParam0.f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = {*uParam1 - *(uParam2[0 /*3*/])};
							*uParam2.f_10[0] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						}
					}
					Global_2404956.f_1483 = 9;
				}
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 20000)
			{
				_0xFB8F2A6F3DF08CBE();
				_0xFEE4A5459472A9F8();
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 6)
		{
			iVar0 = 0;
			Global_2404956.f_1509.f_1 = 0;
			if (*uParam1.f_3)
			{
				iVar0++;
			}
			else if (*uParam0.f_7 == 0)
			{
				if (!func_55(*uParam0.f_4))
				{
					if (is_valid_interior(get_interior_at_coords(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_54(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14))
			{
				if (is_valid_interior(get_interior_at_coords(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (*uParam1.f_10)
			{
				iVar0 += 32;
			}
			if (*uParam0.f_15)
			{
				iVar0 += 16;
			}
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1483 = 7;
			switch (*uParam0.f_7)
			{
				case 0:
					_0x2DF9038C90AD5264(*uParam0, *uParam0.f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_118(*uParam0.f_8, *uParam0.f_11, &vVar18, &vVar21, &uVar24);
					_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					_0xB2AFF10216DEFA2F(*uParam0.f_8, *uParam0.f_11, *uParam0.f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404956.f_1483 == 7)
		{
			if (func_56(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2404956.f_1617[iVar17 /*3*/]) == 0f)
							{
								switch (*uParam0.f_7)
								{
									case 0:
										if (func_129(Global_2404956.f_1617[iVar17 /*3*/], *uParam0, *uParam0.f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 1:
										if (func_52(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									
									case 2:
										if (is_point_in_angled_area(Global_2404956.f_1617[iVar17 /*3*/], *uParam0.f_8, *uParam0.f_11, *uParam0.f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = {Global_2404956.f_1617[iVar17 /*3*/]};
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (*uParam0.f_7)
						{
							case 0:
								vVar1 = {*uParam0};
								break;
							
							case 1:
							case 2:
								vVar1 = {*uParam0.f_8 + *uParam0.f_11 / Vector(2f, 2f, 2f)};
								break;
						}
						func_18(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = {vVar1};
					}
				}
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				if (!vmag(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						vVar1 = {*uParam1 - *(uParam2[iVar17 /*3*/])};
						*uParam2.f_10[iVar17] = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2404956.f_1483 = 9;
			}
			else if (get_time_difference(NETWORK::GET_NETWORK_TIME(), Global_2404956.f_1489) > 20000)
			{
				Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 8)
		{
			if (*uParam0.f_5)
			{
				if (func_17(Global_2404956.f_468))
				{
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_16(uParam2, &(Global_2404956.f_1509.f_6));
			}
			else
			{
				if (*uParam0.f_15)
				{
					iVar83 = false;
				}
				else
				{
					iVar83 = true;
				}
				*(uParam2[0 /*3*/]) = {Global_2404956.f_1484};
				func_18(uParam2[0 /*3*/], 0, iVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404956.f_1489 = NETWORK::GET_NETWORK_TIME();
			Global_2404956.f_1483 = 9;
		}
		if (Global_2404956.f_1483 == 9)
		{
			Global_2404956.f_1482 = 0;
			_0xFB8F2A6F3DF08CBE();
			_0xFEE4A5459472A9F8();
			func_151();
			return true;
		}
		Global_2404956.f_1488 = NETWORK::GET_NETWORK_TIME();
	}
	return false;
}

void func_16(auto uParam0, auto uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = {*(uParam1[iVar0 /*8*/].f_4)};
		*uParam0.f_10[iVar0] = *(uParam1[iVar0 /*8*/]).f_7;
		*uParam0.f_14[iVar0] = *uParam1[iVar0 /*8*/];
		iVar0++;
	}
}

bool func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return true;
	}
	return false;
}

void func_18(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, auto uParam5, auto uParam6)
{
	Vector3 vVar0;
	auto uVar3;
	struct<56> Var4;
	auto uVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	Vector3 vVar65;
	Vector3 vVar68;
	Vector3 vVar71;
	float fVar74;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	if (iParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!*uParam6.f_3)
	{
		if (*uParam5.f_5)
		{
			if (!*uParam5.f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (*uParam5.f_7)
				{
					case 0:
						vVar65 = {*uParam5};
						if (func_55(*uParam5.f_4) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_54(*uParam5.f_8, *uParam5.f_11, 0f) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						vVar65 = {*uParam5.f_8 + *uParam5.f_11 * Vector(0.5f, 0.5f, 0.5f)};
						if (func_54(*uParam5.f_8, *uParam5.f_11, *uParam5.f_14) || !is_valid_interior(get_interior_at_coords(vVar65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_20(*uParam0, &vVar0, iVar64, iParam3, 1))
	{
	}
	else
	{
		iVar63 = true;
	}
	if (iVar63)
	{
		vVar0 = {*uParam0};
		Var4 = {*uParam6};
		Var4.f_8 = 1;
		Var4.f_3 = *uParam6.f_5;
		if (iParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = *uParam5.f_15;
		Var4.f_15 = iParam3;
		if (iParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = *uParam5.f_7;
			switch (*uParam5.f_7)
			{
				case 0:
					Var4.f_19 = {*uParam5};
					Var4.f_25 = *uParam5.f_4;
					break;
				
				case 1:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = {*uParam5.f_8};
					Var4.f_22 = {*uParam5.f_11};
					Var4.f_25 = *uParam5.f_14;
					break;
				}
		}
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = {*(uParam6.f_13[iVar62 /*3*/])};
			Var4.f_45[iVar62] = *uParam6.f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = *uParam6.f_23;
		Var4.f_55 = *uParam5.f_16;
		func_130(&vVar0, &uVar3, &Var4);
	}
	if (iParam4)
	{
		switch (*uParam5.f_7)
		{
			case 0:
				vVar68 = {*uParam5};
				fVar74 = *uParam5.f_4;
				break;
			
			case 1:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				break;
			
			case 2:
				vVar68 = {*uParam5.f_8};
				vVar71 = {*uParam5.f_11};
				fVar74 = *uParam5.f_14;
				break;
		}
		if (!func_19(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
		{
			if (func_20(*uParam0, &vVar0, iVar64, iParam3, 0))
			{
				if (!func_19(vVar0, *uParam5.f_7, vVar68, vVar71, fVar74))
				{
					if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
					{
						vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
					}
					else
					{
						vVar0 = {vVar68};
					}
					if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
					{
						vVar0.z = uVar61;
					}
				}
			}
			else
			{
				if (*uParam5.f_7 == 2 || *uParam5.f_7 == 1)
				{
					vVar0 = {vVar68 + vVar71 * Vector(0.5f, 0.5f, 0.5f)};
				}
				else
				{
					vVar0 = {vVar68};
				}
				if (get_ground_z_for_3d_coord(vVar0, &uVar61, 0))
				{
					vVar0.z = uVar61;
				}
			}
		}
	}
	*uParam0 = {vVar0};
	Global_2404956.f_603 = 1;
}

int func_19(Vector3 vParam0, int iParam1, Vector3 vParam2, Vector3 vParam3, float fParam4)
{
	switch (iParam3)
	{
		case 0:
			if (vdist(vParam0, vParam4) <= fParam10)
			{
				return true;
			}
			break;
		
		case 1:
			return func_52(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return false;
}

bool func_20(Vector3 vParam0, auto uParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_51(vParam0, uParam3))
	{
		if (func_21(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	if (get_safe_coord_for_ped(vParam0, 0, uParam3, iParam4))
	{
		if (func_21(vParam0, uParam3, iParam5, iParam6))
		{
			return true;
		}
	}
	return false;
}

bool func_21(Vector3 vParam0, auto uParam1, int iParam2, int iParam3)
{
	Vector3 fVar0;
	auto uVar1;
	auto uVar8;
	
	fVar0 = vdist(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_30(Global_2404956.f_481, uParam3, &uVar1, &uVar8, iParam5, 1)) || iParam4 == 0)
		{
			if (!func_22(*uParam3, 1056964608))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_22(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_27(player_id(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_23(vParam0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_23(vParam0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_23(vParam0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_23(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	Vector3 vVar12;
	Vector3 vVar15;
	
	if (vdist(vParam0, vParam3) < func_26(iParam7, 1008981770))
	{
		vVar0 = {0f, 1f, 0f};
		func_25(&vVar0, 0f, 0f, fParam6);
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
		func_24(iParam7, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
		fVar9 = absf(vVar6.y - vVar3.y);
		fVar10 = absf(vVar6.x - vVar3.x);
		fVar11 = absf(vVar6.z - vVar3.z);
		vVar12 = {vParam3 + vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar12.z -= 0.5f * fVar11 + fParam8;
		vVar15 = {vParam3 - vVar0 * Vector(0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8, 0.5f * fVar9 + fParam8)};
		vVar15.z += 0.5f * fVar11 + fParam8;
		if (is_point_in_angled_area(vParam0, vVar12, vVar15, fVar10, 0, true))
		{
			return true;
		}
	}
	return false;
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (is_model_valid(iParam0))
	{
		get_model_dimensions(iParam0, fParam1, fParam2);
	}
	if (vmag(*fParam1) <= 0.01f || vmag(*fParam2) <= 0.01f)
	{
		*fParam1 = 0f - fParam4 * 0.5f;
		*fParam2 = 0f + fParam4 * 0.5f;
		*fParam1.f_1 = 0f - fParam3 * 0.5f;
		*fParam2.f_1 = 0f + fParam3 * 0.5f;
		*fParam1.f_2 = 0f - fParam5 * 0.5f;
		*fParam2.f_2 = 0f + fParam5 * 0.5f;
	}
}

void func_25(auto uParam0, Vector3 vParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	Vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = fVar0 * *uParam0.f_1 - fVar1 * *uParam0.f_2;
	vVar2.z = fVar1 * *uParam0.f_1 + fVar0 * *uParam0.f_2;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = fVar0 * *uParam0 + fVar1 * *uParam0.f_2;
	vVar2.y = *uParam0.f_1;
	vVar2.z = fVar0 * *uParam0.f_2 - fVar1 * *uParam0;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = fVar0 * *uParam0 - fVar1 * *uParam0.f_1;
	vVar2.y = fVar1 * *uParam0 + fVar0 * *uParam0.f_1;
	vVar2.z = *uParam0.f_2;
	*uParam0 = {vVar2};
}

float func_26(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_24(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = {vVar3 - vVar0};
	fVar9 = sqrt(vVar6.x * 0.5f * vVar6.x * 0.5f + vVar6.y * 0.5f * vVar6.y * 0.5f + vVar6.z * 0.5f * vVar6.z * 0.5f) + fParam1;
	return fVar9;
}

bool func_27(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_28(iParam0))
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

int func_28(int iParam0)
{
	return func_29(iParam0);
}

int func_29(auto uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

bool func_30(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (func_45(vParam0))
	{
		if (func_44(uParam3, iParam6, 0, 1))
		{
			if (iParam6)
			{
			}
			return true;
		}
	}
	if (func_33(uParam3, iParam6, 1))
	{
		if (iParam6)
		{
		}
		return true;
	}
	if (iParam7)
	{
		if (func_32(*uParam3, 1056964608))
		{
			return true;
		}
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (vdist(*uParam3, *(uParam4[iVar0 /*3*/])) < *uParam5[iVar0])
		{
			if (iParam6)
			{
				func_31(uParam3, *(uParam4[iVar0 /*3*/]), *uParam5[iVar0], 1036831949, 0);
			}
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		return true;
	}
	return false;
}

void func_31(auto uParam0, Vector3 vParam1, float fParam2, float fParam3, int iParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {*uParam0 - vParam1};
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	}
	else
	{
		vVar0 = {0f, 1f, 0f};
		func_25(&vVar0, 0f, 0f, get_random_float_in_range(0f, 360f));
	}
	vVar0 = {vVar0 * Vector(fParam4 + fParam5, fParam4 + fParam5, fParam4 + fParam5)};
	if (!iParam6)
	{
		vVar3 = {vParam1 + vVar0};
	}
	else
	{
		vVar3 = {vParam1 - vVar0};
	}
	*uParam0 = vVar3.x;
	*uParam0.f_1 = vVar3.y;
}

bool func_32(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (vdist(vParam0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_33(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	auto uVar1;
	Vector3 vVar2;
	
	if (func_41(*uParam0, &uVar0))
	{
		if (iParam1)
		{
			vVar2 = {*uParam0};
			func_35(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 0, iParam2);
			if (func_41(vVar2, &uVar1) || func_34(vVar2))
			{
				vVar2 = {*uParam0};
				func_35(&vVar2, &(Global_2404956.f_347[uVar0 /*12*/]), 1036831949, 1, iParam2);
			}
			*uParam0 = {vVar2};
		}
		return true;
	}
	return false;
}

bool func_34(Vector3 vParam0)
{
	Vector3 fVar0;
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
		{
			return true;
		}
	}
	return false;
}

void func_35(auto uParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam4)
	{
		switch (*uParam1.f_10)
		{
			case 0:
				*uParam0 = {func_40(*uParam0, *uParam1, 0f, 0f, 0f, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, 0, fParam2, iParam3)};
				break;
			
			case 1:
				*uParam0 = {func_40(*uParam0, *uParam1, *uParam1.f_3, 0f, 1, fParam2, iParam3)};
				break;
			
			case 2:
				*uParam0 = {func_40(*uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, 2, fParam2, iParam3)};
				break;
		}
	}
	else
	{
		switch (*uParam1.f_10)
		{
			case 0:
				func_31(uParam0, *uParam1, *uParam1.f_6 + IntToFloat(Global_2404956.f_1714) * *uParam1.f_8, fParam2, iParam3);
				break;
			
			case 1:
				func_39(uParam0, *uParam1, *uParam1.f_3, fParam2, iParam3);
				break;
			
			case 2:
				func_36(uParam0, *uParam1, *uParam1.f_3, *uParam1.f_6, fParam2, iParam3);
				break;
			}
	}
}

void func_36(auto uParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	Vector3 vVar10;
	Vector3 vVar13;
	Vector3 fVar16;
	Vector3 vVar17;
	Vector3 vVar20;
	Vector3 vVar23;
	Vector3 vVar26;
	Vector3 vVar29;
	
	vVar0 = {vParam4 - vParam1};
	vVar0.z = 0f;
	vVar3 = {*uParam0 - vParam1};
	vVar3.z = 0f;
	vVar6 = {func_38(0f, 0f, 1f, vVar0)};
	vVar6 = {vVar6 / FtoV(vmag(vVar6))};
	fVar9 = vmag(vVar3) * sin(get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y));
	if (fVar9 < fParam7 * 0.5f)
	{
		if (!iParam9)
		{
			if (func_37(vVar6, vVar3) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8, fParam7 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f, fParam7 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_37(vVar6, vVar3) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f, fParam7 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8, fParam7 * 0.5f + fVar9 + fParam8)};
		}
		vVar10 = {*uParam0 + vVar6};
		fVar16 = vdist(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = {vParam1 + vParam4 / Vector(2f, 2f, 2f)};
		vVar17.z = 0f;
		vVar6 = {func_38(0f, 0f, 1f, vVar0)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		vVar6 = {vVar6 * Vector(fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f)};
		vVar20 = {vVar17 - vVar6};
		vVar23 = {vVar17 + vVar6};
		vVar26 = {vVar23 - vVar20};
		vVar26.z = 0f;
		vVar29 = {*uParam0 - vVar20};
		vVar29.z = 0f;
		vVar6 = {func_38(0f, 0f, 1f, vVar26)};
		vVar6 = {vVar6 / FtoV(vmag(vVar6))};
		fVar9 = vmag(vVar29) * sin(get_angle_between_2d_vectors(vVar26.x, vVar26.y, vVar29.x, vVar29.y));
		if (!iParam9)
		{
			if (func_37(vVar6, vVar29) >= 0f)
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8, fVar16 * 0.5f - fVar9 + fParam8)};
			}
			else
			{
				vVar6 = {vVar6 * Vector(fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f, fVar16 * 0.5f - fVar9 + fParam8 * -1f)};
			}
		}
		else if (func_37(vVar6, vVar29) >= 0f)
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f, fVar16 * 0.5f + fVar9 + fParam8 * -1f)};
		}
		else
		{
			vVar6 = {vVar6 * Vector(fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8, fVar16 * 0.5f + fVar9 + fParam8)};
		}
		vVar13 = {*uParam0 + vVar6};
		if (vdist(vVar10, *uParam0, *uParam0.f_1, 0f) < vdist(vVar13, *uParam0, *uParam0.f_1, 0f))
		{
			*uParam0 = {vVar10};
		}
		else
		{
			*uParam0 = {vVar13};
		}
	}
}

float func_37(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

Vector3 func_38(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

void func_39(auto uParam0, struct<2> Param1, auto uParam2, struct<2> Param3, auto uParam4, float fParam5, int iParam6)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = {*uParam0};
	fVar3 = *uParam0 - Param1;
	fVar4 = *uParam0 - Param4;
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = *uParam0.f_1 - Param1.f_1;
	fVar7 = *uParam0.f_1 - Param4.f_1;
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = {*uParam0};
	if (!iParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = Param1 - fParam7;
			}
			else
			{
				vVar0.x = Param4 + fParam7;
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = Param1.f_1 - fParam7;
		}
		else
		{
			vVar0.y = Param4.f_1 + fParam7;
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = Param4 + fParam7;
		}
		else
		{
			vVar0.x = Param1 - fParam7;
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = Param4.f_1 + fParam7;
	}
	else
	{
		vVar0.y = Param1.f_1 - fParam7;
	}
	*uParam0 = {vVar0};
}

Vector3 func_40(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4, float fParam5, int iParam6)
{
	int iVar0;
	Vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_31(&vParam0, vParam3, fParam9, fParam11, iParam12);
			break;
		
		case 1:
			func_39(&vParam0, vParam3, vParam6, fParam11, iParam12);
			break;
		
		case 2:
			func_36(&vParam0, vParam3, vParam6, fParam9, fParam11, iParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		get_nth_closest_vehicle_node(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_129(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_52(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!is_point_in_angled_area(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

bool func_41(Vector3 vParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_43();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_42(vParam0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_42(Vector3 vParam0, auto uParam1, float fParam2, int iParam3, int iParam4)
{
	switch (*uParam3.f_10)
	{
		case 0:
			return func_129(vParam0, *uParam3, *uParam3.f_6 + fParam4 + IntToFloat(Global_2404956.f_1714) * *uParam3.f_8, iParam5, iParam6);
			break;
		
		case 1:
			return func_52(vParam0, *uParam3 + Vector(fParam4 * -1f, fParam4 * -1f, fParam4 * -1f), *uParam3.f_3 + Vector(fParam4, fParam4, fParam4), iParam5, iParam6);
			break;
		
		case 2:
			if (iParam5 && iParam6)
			{
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false);
			}
			else if (iParam5)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z < *uParam3.f_2 && vParam0.z < *uParam3.f_3.f_2))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (iParam6)
			{
				if (is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, false) && !(vParam0.z > *uParam3.f_2 && vParam0.z > *uParam3.f_3.f_2))
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
				return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
			}
			break;
	}
	return false;
}

int func_43()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_44(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!iParam2 || (iParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_42(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (iParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = {Global_2407408[iVar0 /*17*/].f_13};
						}
						else
						{
							vVar1 = {*uParam0};
							func_35(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, iParam3);
							if (func_44(&vVar1, 0, 0, 0))
							{
								vVar1 = {*uParam0};
								func_35(&vVar1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = {vVar1};
						}
					}
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_45(Vector3 vParam0)
{
	int iVar0;
	Vector3 vVar1;
	
	if (!Global_2404956.f_484)
	{
		if (!func_49(player_id(), 1))
		{
			return true;
		}
		if (!func_48(vParam0, 1008981770))
		{
			if (!func_44(&vParam0, 0, 0, 0))
			{
				return true;
			}
			else if (func_44(&vParam0, 0, 1, 0))
			{
				return true;
			}
		}
		else
		{
			iVar0 = func_47(vParam0, 1008981770);
			if (iVar0 > -1)
			{
				vVar1 = {func_46(&(Global_2404956.f_39[iVar0 /*12*/]))};
				if (!func_44(&vVar1, 0, 0, 0))
				{
					if (!func_44(&vParam0, 0, 0, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

Vector3 func_46(auto uParam0)
{
	switch (*uParam0.f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + *uParam0.f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_47(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_48(Vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_42(vParam0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_49(int iParam0, int iParam1)
{
	if (Global_1312447 != 0)
	{
		return func_50(iParam0) != 0;
	}
	return func_27(iParam0, iParam1);
}

int func_50(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

bool func_51(Vector3 vParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 fVar2;
	Vector3 fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			fVar3 = vdist(Global_2404956.f_1281[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = {Global_2404956.f_1281[iVar1 /*4*/]};
			return true;
		}
	}
	return false;
}

bool func_52(Vector3 vParam0, Vector3 vParam1, Vector3 vParam2, int iParam3, int iParam4)
{
	func_53(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return false;
	}
	if (iParam9 && iParam10)
	{
		return true;
	}
	else if (iParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return true;
		}
	}
	else if (iParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return true;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return true;
	}
	return false;
}

void func_53(auto uParam0, auto uParam1)
{
	auto uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (*uParam0.f_1 > *uParam1.f_1)
	{
		uVar0 = *uParam1.f_1;
		*uParam1.f_1 = *uParam0.f_1;
		*uParam0.f_1 = uVar0;
	}
	if (*uParam0.f_2 > *uParam1.f_2)
	{
		uVar0 = *uParam1.f_2;
		*uParam1.f_2 = *uParam0.f_2;
		*uParam0.f_2 = uVar0;
	}
}

bool func_54(Vector3 vParam0, Vector3 vParam1, float fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar3 - vVar0) > 100f)
	{
		return true;
	}
	if (fParam6 > 50f)
	{
		return true;
	}
	return false;
}

bool func_55(float fParam0)
{
	if (fParam0 > 50f)
	{
		return true;
	}
	return false;
}

bool func_56(auto uParam0, auto uParam1, auto uParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (Global_2404956.f_1509.f_1 == 0 && Global_2404956.f_1509 == 0)
	{
		if (*uParam1.f_5 && !iParam3)
		{
			switch (_0x3C891A251567DFCE(&(Global_2404956.f_1509.f_1)))
			{
				case 0:
					func_116(uParam1, uParam2);
					if (!Global_2404956.f_1509.f_2)
					{
						if (*uParam2.f_7 && Global_2404956.f_512.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = {*uParam1};
							*uParam0.f_10[0] = *uParam1.f_3;
							return true;
						}
						else
						{
							if (*uParam1.f_21)
							{
								*(uParam0[0 /*3*/]) = {*uParam1.f_18};
							}
							else
							{
								*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
							}
							if (*uParam1.f_5 && func_17(Global_2404956.f_468))
							{
								if (!Global_2404956.f_1509.f_5)
								{
									Global_2404956.f_1509.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
							return true;
						}
					}
					break;
				
				case 1:
					func_116(uParam1, uParam2);
					break;
				
				case 2:
					return false;
					break;
				
				case 3:
					return false;
					break;
			}
		}
		else if (_0x3C67506996001F5E())
		{
			if (!_0xF445DE8DA80A1792())
			{
				if (_0xA586FBEB32A53DBB())
				{
					func_116(uParam1, uParam2);
					Global_2404956.f_1509.f_1 = _0xA635C11B8C44AFC2();
				}
				else
				{
					return false;
				}
			}
			else
			{
				_0xFEE4A5459472A9F8();
				func_116(uParam1, uParam2);
				if (!Global_2404956.f_1509.f_2)
				{
					Global_2404956.f_1509.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if (*uParam1.f_5)
	{
		func_113(Global_2404956.f_512, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64));
	}
	if (*uParam2.f_7 && !Global_2404956.f_1509.f_4)
	{
		Global_2404956.f_1509.f_4 = 1;
		func_61(*uParam1, *uParam1.f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (*uParam1.f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404956.f_1509.f_1 > 0 || Global_2404956.f_1509 > 0)
	{
		if (*uParam1.f_5 || _0x3C67506996001F5E())
		{
			iVar4 = false;
			while (iVar4 < Global_2404956.f_1509.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404956.f_1509.f_3)
					{
						iVar4 = Global_2404956.f_1509.f_3 + 1;
					}
					if (iVar4 > Global_2404956.f_1509.f_1 - 1)
					{
						iVar4 = Global_2404956.f_1509.f_1 - 1;
					}
					if (iVar4 < 0)
					{
						iVar4 = false;
					}
					if (*uParam1.f_5 && !iParam3)
					{
						network_get_respawn_result(iVar4, &vVar0, &fVar3);
						fVar3 *= 57.29578f;
					}
					else
					{
						_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (*uParam1.f_5 && !iParam3)
					{
						iVar5 = _0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_61(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404956.f_1509.f_3 = iVar4;
				}
				else
				{
					return false;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404956.f_1509.f_1;
		}
		if (Global_2404956.f_1509.f_1 == iVar4)
		{
			if (*uParam1.f_5 && func_17(Global_2404956.f_468))
			{
				if (Global_2404956.f_1509.f_2)
				{
					func_16(uParam0, &(Global_2404956.f_1509.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_16(uParam0, &(Global_2404956.f_1509.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return true;
			}
			else if (*uParam1.f_5)
			{
				iVar4 = get_random_int_in_range(false, Global_2404956.f_1509.f_1);
				network_get_respawn_result(iVar4, uParam0[0 /*3*/], uParam0.f_10[0]);
				if (!func_57(uParam0[0 /*3*/], 0))
				{
					*uParam0.f_10[0] *= 57.29578f;
					func_60(*(uParam0[0 /*3*/]));
					return true;
				}
				else
				{
					*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return true;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return true;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = {Global_2404956.f_1484};
		if (*uParam1.f_5 && func_17(Global_2404956.f_468))
		{
			if (!Global_2404956.f_1509.f_5)
			{
				Global_2404956.f_1509.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (*uParam1.f_15)
			{
				iVar8 = false;
			}
			else
			{
				iVar8 = true;
			}
			func_18(uParam0[0 /*3*/], 0, iVar8, 0, 0, uParam1, uParam2);
		}
		*uParam0.f_10[0] = get_random_float_in_range(0f, 360f);
		func_60(*(uParam0[0 /*3*/]));
		return true;
	}
	return false;
}

bool func_57(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	
	vVar1 = {*uParam0};
	uVar4 = func_59(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2408374[uVar4])
	{
		if (func_58(vVar1, &(Global_2407545[uVar4 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_36(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408374[8])
	{
		if (func_58(vVar1, &(Global_2407545[8 /*92*/][iVar0 /*7*/])))
		{
			if (iParam1)
			{
				func_36(&vVar1, Global_2407545[uVar4 /*92*/][iVar0 /*7*/], Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[uVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_58(Vector3 vParam0, auto uParam1)
{
	return is_point_in_angled_area(vParam0, *uParam3, *uParam3.f_3, *uParam3.f_6, 0, true);
}

int func_59(struct<2> Param0, auto uParam1)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0 < Global_2408388[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

void func_60(Vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404956.f_1617[3 - iVar0 /*3*/] = {Global_2404956.f_1617[3 - iVar0 + 1 /*3*/]};
		}
		iVar0++;
	}
	Global_2404956.f_1617[0 /*3*/] = {vParam0};
}

void func_61(Vector3 vParam0, Vector3 fParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	float fVar0;
	Vector3 fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	Vector3 fVar5;
	Vector3 fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	Vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<8> Var16;
	int iVar24;
	int iVar25;
	
	iVar9 = false;
	iVar7 = 0;
	iVar8 = false;
	if (*uParam4.f_5)
	{
		if (Global_2404956.f_468 == 1)
		{
			if (absf(Global_2404956.f_481.f_2 - vParam0.z) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (*uParam4.f_5)
	{
		if (func_110(player_id()))
		{
			if (iParam7 == -1)
			{
				iVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				iVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (*uParam4.f_5 && *uParam4.f_6)
	{
		if (!func_109(vParam0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (*uParam4.f_5)
	{
		if (!_0x68772DB2B2526F9F(player_ped_id(), vParam0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!_0x68772DB2B2526F9F(player_ped_id(), vParam0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (*uParam4.f_5)
	{
		if (!func_108(vParam0, *uParam5.f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	iVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (vmag(*(uParam5.f_13[iVar10 /*3*/])) > 0f)
		{
			if (!vdist(vParam0, *(uParam5.f_13[iVar10 /*3*/])) > *uParam5.f_20[iVar10])
			{
				iVar14 = false;
			}
		}
		iVar10++;
	}
	if (iVar14)
	{
		iVar7 += 256;
	}
	if (*uParam4.f_5)
	{
		if (func_102(vParam0, fParam3, *uParam4.f_15, func_107(1), *uParam4.f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404956.f_1;
		}
	}
	else if (!func_99(vParam0, 25f, player_id(), 1, 1))
	{
		if (*uParam4.f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_98(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_98(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (*uParam4.f_5)
	{
		if (!Global_2404956.f_625)
		{
			vVar11 = {Global_2404956.f_481};
			if (Global_2404956.f_468 == 26)
			{
				vVar11 = {Global_2404956.f_512.f_18};
			}
			if (func_45(vVar11))
			{
				if ((!func_44(&vParam0, 0, 0, 0) && !func_33(&vParam0, 0, 0)) && !func_97(&vParam0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_33(&vParam0, 0, 0) && !func_97(&vParam0, 0)) && !func_32(vParam0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_96(vParam0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (*uParam4.f_5)
	{
		if (!(func_95(player_id()) && func_93(player_id())))
		{
			if (!func_92(&vParam0, &(Global_2404956.f_1509.f_64), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (*uParam4.f_5)
	{
		if (!func_93(player_id()))
		{
			if (!func_91(vParam0, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_90(vParam0))
	{
		if (*uParam4.f_5)
		{
			if (func_90(vParam0))
			{
				if (func_17(Global_2404956.f_468))
				{
					if (func_48(vParam0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (*uParam4.f_5)
	{
		if (func_89(vParam0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404956.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (*uParam4.f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (is_valid_interior(get_interior_at_coords(vParam0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (is_valid_interior(get_interior_at_coords(vParam0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_57(&vParam0, 0))
	{
		iVar7 += 32768;
	}
	else
	{
		iVar7 = -1;
	}
	if (func_22(vParam0, 1056964608))
	{
		iVar7 = -1;
	}
	if (*uParam4.f_5)
	{
	}
	else if (func_88(vParam0, 1, 0, *uParam4.f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	iVar24 = false;
	iVar25 = false;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (iVar7 >= Global_2404956.f_1509.f_6[iVar15 /*8*/])
		{
			if (*uParam4.f_5)
			{
				if (!iVar24)
				{
					if (iParam6)
					{
						*uParam5.f_4 = 0;
						iVar4 = false;
					}
					else
					{
						iVar4 = true;
					}
					if (*uParam4.f_21)
					{
						fVar0 = func_80(vParam0, *uParam4.f_18, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					else
					{
						fVar0 = func_80(vParam0, Global_2404956.f_1484, *uParam5.f_6, *uParam5.f_4, iVar4, iVar9);
					}
					if (iVar8)
					{
						fVar0 *= 3f;
					}
					iVar24 = true;
				}
				if ((func_17(Global_2404956.f_468) && iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!iVar25)
					{
						fVar2 = func_78(vParam0);
						iVar25 = true;
					}
					if (fVar2 < Global_2404956.f_1509.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = {vParam0};
						Var16.f_7 = fParam3;
						Var16 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_77(Var16, iVar15);
						Global_2404956.f_1509.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar0 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_1 = fVar0;
					func_77(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
			else
			{
				if (!iVar24)
				{
					if (*uParam4.f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_76(vParam0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_63(vParam0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_62(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_62(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					iVar24 = true;
				}
				if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar3 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = {vParam0};
					Var16.f_7 = fParam3;
					Var16 = iVar7;
					Var16.f_3 = fVar3;
					func_77(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
					return;
				}
			}
		}
		iVar15++;
	}
}

float func_62(Vector3 fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = fParam3 * 0.5f;
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = fParam4 + 1f - fParam4 - 1f - fParam4 * fParam2 - fParam0 / fParam2 - fParam1;
		}
		else
		{
			fVar0 = fParam5 + 1f - fParam5 - 1f - fParam5 * fParam0 - fParam2 / fParam3 - fParam2;
		}
	}
	else
	{
		fVar0 = fParam4 + fParam0 - fParam1 / fParam3 - fParam1 * fParam5 - fParam4;
	}
	return fVar0;
}

auto func_63(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	Vector3 fVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	iVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_705(iVar11, 1, 1))
		{
			if (!iVar11 == player_id() || iParam5 == 1)
			{
				iVar4 = false;
				if (iParam3)
				{
					if (func_66(iVar11))
					{
						iVar4 = true;
					}
				}
				if (iParam4)
				{
					if (get_player_team(iVar11) == get_player_team(player_id()))
					{
						if (!get_player_team(iVar11) == -1 || !func_49(player_id(), 1))
						{
							iVar4 = true;
						}
					}
				}
				if (iVar4)
				{
					if (_0x9DE986FC9A87C474(player_id(), iVar11) || !iParam6)
					{
						if (func_65(iVar11))
						{
							vVar5 = {func_64(iVar11)};
							if (!iVar11 == player_id())
							{
								vVar8 = {unk_0x64D779659BC37B19(get_player_ped(iVar11))};
							}
							else
							{
								vVar8 = {vVar5};
							}
							if (!iParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = get_distance_between_coords(vParam0, vVar5, 1);
							fVar2 = get_distance_between_coords(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_64(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

bool func_65(int iParam0)
{
	if (is_entity_visible_to_script(get_player_ped(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
	{
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		if (!func_74(iParam0))
		{
			if (_0x9DE986FC9A87C474(player_id(), iParam0))
			{
				if (!get_player_team(iParam0) == get_player_team(player_id()))
				{
					if (func_27(player_id(), 1))
					{
						if (!func_73(get_player_team(iParam0), get_player_team(player_id()), 0))
						{
							return true;
						}
					}
					else
					{
						return true;
					}
				}
				else if (get_player_team(iParam0) == -1 && get_player_team(player_id()) == -1)
				{
					if (!func_27(player_id(), 1))
					{
						if (!func_67(iParam0))
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
		}
	}
	return false;
}

bool func_67(int iParam0)
{
	if (func_72(player_id(), iParam0))
	{
		return true;
	}
	Global_2459440 = {func_71(iParam0)};
	if (network_is_friend(&Global_2459440))
	{
		return true;
	}
	if (func_68(player_id(), iParam0))
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_69())
	{
		if (iVar0 == func_70(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_69()
{
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_69())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_69();
}

struct<13> func_71(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

bool func_72(int iParam0, int iParam1)
{
	if (_network_player_is_in_clan())
	{
		Global_2459440 = {func_71(iParam0)};
		Global_2459453 = {func_71(iParam1)};
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

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return true;
		}
		return false;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, false);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, true);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 2);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 4);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 5);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 6);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 8);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 9);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 10);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return is_bit_set(Global_1617379.f_39, 12);
				
				case 1:
					return is_bit_set(Global_1617379.f_39, 13);
				
				case 2:
					return is_bit_set(Global_1617379.f_39, 14);
				
				case 3:
					return is_bit_set(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return true;
	}
	if (func_75())
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

int func_75()
{
	return is_bit_set(Global_2359301, 3);
}

float func_76(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !iParam6)
	{
		if (func_705(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				if (is_sphere_visible(vParam0, fParam3))
				{
					fVar4 = vdist2(vParam0, get_entity_coords(player_ped_id(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						iVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_705(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if (func_65(iVar1) || !iParam8)
					{
						if (!iParam6)
						{
							if ((iParam5 || (iParam5 == 0 && get_player_team(iVar1) != get_player_team(player_id()))) || get_player_team(iVar1) == -1)
							{
								if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
								{
									fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										iVar2 = true;
									}
								}
							}
						}
						else if (get_player_team(iVar1) != iParam7 || get_player_team(iVar1) == -1)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								fVar4 = vdist2(vParam0, get_entity_coords(get_player_ped(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									iVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

void func_77(struct<8> Param0, int iParam1)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = {Global_2404956.f_1509.f_6[iParam8 /*8*/]};
	Global_2404956.f_1509.f_6[iParam8 /*8*/] = {Param0};
	if (iParam8 < 2)
	{
		func_77(Var0, iParam8 + 1);
	}
}

auto func_78(Vector3 vParam0)
{
	auto uVar0;
	
	return func_79(vParam0, &(Global_2404956.f_39), &uVar0);
}

auto func_79(Vector3 vParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (*(uParam3[iVar0 /*12*/]).f_9)
		{
			fVar1 = 0f;
			switch (*(uParam3[iVar0 /*12*/]).f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 -= *(uParam3[iVar0 /*12*/]).f_6 + IntToFloat(Global_2404956.f_1714) * *(uParam3[iVar0 /*12*/]).f_8;
					break;
				
				case 1:
				case 2:
					if (vParam0.x < *uParam3[iVar0 /*12*/])
					{
						fVar1 += *uParam3[iVar0 /*12*/] - vParam0.x;
					}
					else if (vParam0.x > *(uParam3[iVar0 /*12*/]).f_3)
					{
						fVar1 += vParam0.x - *(uParam3[iVar0 /*12*/]).f_3;
					}
					if (vParam0.y < *(uParam3[iVar0 /*12*/]).f_1)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_1 - vParam0.y;
					}
					else if (vParam0.y > *(uParam3[iVar0 /*12*/].f_3).f_1)
					{
						fVar1 += vParam0.y - *(uParam3[iVar0 /*12*/].f_3).f_1;
					}
					if (vParam0.z < *(uParam3[iVar0 /*12*/]).f_2)
					{
						fVar1 += *(uParam3[iVar0 /*12*/]).f_2 - vParam0.z;
					}
					else if (vParam0.z > *(uParam3[iVar0 /*12*/].f_3).f_2)
					{
						fVar1 += vParam0.z - *(uParam3[iVar0 /*12*/].f_3).f_2;
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_80(Vector3 vParam0, Vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	Vector3 fVar2;
	Vector3 fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = to_float(iParam9) / to_float(8);
	}
	if (iParam6)
	{
		fVar0 = func_62(vdist(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 *= fVar0 * 0.95f;
	}
	fVar0 = func_62(func_63(vParam0, 1, 0, 0, 1), 0f, func_87(), func_85(), 0f, 0.3f);
	fVar1 *= fVar0 * 0.95f;
	fVar0 = func_62(func_83(vParam0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 *= fVar0 * 0.95f;
	fVar4 = 100f;
	if (get_player_team(player_id()) == -1 && !func_49(player_id(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_62(func_82(vParam0, player_id(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 *= fVar0 * 0.95f;
	if (iParam7)
	{
		if (func_81(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_62(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 += func_62(fVar3, 0f, 0f, 6f, 1f, 0.5f);
			fVar0 *= 0.5f;
			fVar1 *= fVar0 * 0.85f;
		}
	}
	if (iParam8)
	{
		fVar0 = func_62(vdist(Global_2404956.f_481, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 *= fVar0 * 0.9f;
	}
	return fVar1;
}

bool func_81(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 vVar0;
	int iVar3;
	auto uVar4;
	auto uVar5;
	
	iVar3 = get_nth_closest_vehicle_node_id_with_heading(vParam0, true, &uVar5, &uVar4, 1, 3f, 0f);
	if (is_vehicle_node_id_valid(iVar3))
	{
		get_vehicle_node_position(iVar3, &vVar0);
		*uParam3 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = absf(vParam0.z - vVar0.z);
		return true;
	}
	return false;
}

auto func_82(Vector3 vParam0, int iParam1, int iParam2)
{
	Vector3 fVar0;
	Vector3 fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_705(iVar3, 0, 1))
			{
				if (get_player_team(iVar3) != get_player_team(iParam3) || (get_player_team(iVar3) == -1 && get_player_team(iParam3) == -1))
				{
					if (Global_2413760.f_260[iVar2])
					{
						fVar1 = vdist(Global_2413760.f_130[iVar2 /*3*/], vParam0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

auto func_83(Vector3 vParam0)
{
	Vector3 fVar0;
	Vector3 fVar1;
	int iVar2;
	Vector3 vVar3;
	var[] uVar6 = new var[32];
	int iVar39;
	
	iVar39 = get_ped_nearby_peds(player_ped_id(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (does_entity_exist(uVar6[iVar2]))
		{
			if (!is_entity_dead(uVar6[iVar2], 0))
			{
				if (func_84(uVar6[iVar2]))
				{
					vVar3 = {get_entity_coords(uVar6[iVar2], 1)};
					fVar1 = get_distance_between_coords(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

bool func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_ped_relationship_group_hash(iParam0);
	switch (get_relationship_between_groups(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	switch (get_relationship_between_groups(iVar0, Global_1574198[player_id()]))
	{
		case 3:
		case 5:
			return true;
			break;
	}
	if (Global_1587523[player_id() /*444*/] == 0)
	{
		iVar1 = get_player_team(player_id());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (get_relationship_between_groups(iVar0, Global_1573909[iVar1]))
			{
				case 3:
				case 5:
					return true;
					break;
				}
			}
	}
	return false;
}

float func_85()
{
	if (func_86())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

bool func_86()
{
	if (Global_2404956.f_39.f_65 && !Global_2404956.f_39.f_295)
	{
		if (!func_74(player_id()))
		{
			return true;
		}
	}
	return false;
}

float func_87()
{
	if (func_86())
	{
		if ((is_this_model_a_plane(Global_2404956.f_39.f_67) || is_this_model_a_heli(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

bool func_88(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (iParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && is_any_vehicle_near_point(vParam0, fParam7)) || (fVar0 > 0f && is_any_ped_near_point(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && is_any_object_near_point(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && is_any_object_near_point(vParam0, fParam9, 1)))
	{
		return true;
	}
	return false;
}

bool func_89(Vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2404956.f_39.f_55)
	{
		if (is_valid_interior(Global_2404956.f_39.f_56))
		{
			if (!_are_coords_colliding_with_exterior(vParam0))
			{
				iVar0 = get_interior_at_coords(vParam0);
				if (is_valid_interior(iVar0))
				{
					iVar1 = get_interior_group_id(iVar0);
					if (!iVar1 == Global_2404956.f_39.f_57)
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
		}
	}
	return true;
}

int func_90(Vector3 vParam0)
{
	switch (Global_2404956.f_1505)
	{
		case 0:
			return func_129(vParam0, Global_2404956.f_1484, Global_2404956.f_1487, 0, 0);
			break;
		
		case 1:
			return func_52(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, 0, 0);
			break;
		
		case 2:
			return is_point_in_angled_area(vParam0, Global_2404956.f_1498, Global_2404956.f_1501, Global_2404956.f_1504, 0, true);
			break;
	}
	return false;
}

bool func_91(Vector3 vParam0, auto uParam1, auto uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = *(uParam3[iVar1 /*4*/]).f_3 + fParam5;
		if (vdist(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return true;
		}
		iVar1++;
	}
	vVar2 = {0f, 0f, 0f};
	vVar5 = {0f, 0f, 0f};
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = {*(uParam4[iVar1 /*10*/])};
		vVar5 = {*(uParam4[iVar1 /*10*/].f_3)};
		fVar8 = *(uParam4[iVar1 /*10*/]).f_6;
		if (is_point_in_angled_area(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_92(auto uParam0, auto uParam1, int iParam2, float fParam3)
{
	int iVar0;
	Vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist(*(uParam1[iVar0 /*10*/].f_7), *uParam0) < 80f * fParam3)
		{
			if (iParam2)
			{
				vVar1 = {*uParam0};
				func_31(&vVar1, *(uParam1[iVar0 /*10*/].f_7), 80f, 1036831949, 0);
				*uParam0 = {vVar1};
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_93(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_94(iParam0))
			{
				if (Global_1587523[iParam0 /*444*/] == 0)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_94(int iParam0)
{
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

bool func_95(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_96(Vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (vdist2(Global_2404956.f_1617[iVar0 /*3*/], vParam0) < fParam3 * fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_97(auto uParam0, int iParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if (func_34(*uParam0))
	{
		if (iParam1)
		{
			vVar1 = {*uParam0};
			func_31(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_41(vVar1, &uVar0) || func_34(vVar1))
			{
				vVar1 = {*uParam0};
				func_31(&vVar1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
			}
			*uParam0 = {vVar1};
		}
	}
	return false;
}

bool func_98(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !iParam7)
	{
		if (func_705(player_id(), 1, 1))
		{
			if (!is_screen_faded_out())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (get_distance_between_coords(func_64(player_id()), vParam0, 1) <= fVar2 + fParam3)
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
		if (func_705(iVar1, 1, 1))
		{
			if (!func_126(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != player_id()))
				{
					if ((func_65(iVar1) || !iParam10) && !Global_2418472[iVar1 /*313*/].f_255)
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
								if (get_distance_between_coords(func_64(iVar1), vParam0, 1) <= fVar2 + fParam3)
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
							if (get_distance_between_coords(func_64(iVar1), vParam0, 1) <= fVar2 + fParam3)
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

bool func_99(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_101(vParam0, fParam3, iParam4, iParam5, 0) || func_100(vParam0, iParam4, iParam6))
	{
		return true;
	}
	return false;
}

bool func_100(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_23(vParam0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
				{
					if (func_705(iVar1, 0, 1) && func_705(iParam3, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_101(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (iParam6)
			{
				if (func_705(iVar1, 0, 1) && func_705(iParam4, 0, 1))
				{
					if (get_player_team(iVar1) == get_player_team(iParam4))
					{
						return false;
					}
				}
			}
			if (func_705(iVar1, 0, 1) && func_705(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
					{
						return true;
					}
				}
				else if (vdist(func_64(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (vdist(Global_2413760.f_130[iVar0 /*3*/], vParam0) < fParam3)
				{
					return true;
				}
			}
			else if (func_705(iVar1, 0, 1))
			{
				if (vdist(func_64(iVar1), vParam0) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_102(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, int iParam12)
{
	Global_2404956.f_1 = 0;
	if (!func_99(vParam0, 0.5f, player_id(), 0, 0))
	{
		Global_2404956.f_1++;
		if (iParam5)
		{
			if (func_150(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_106(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_22(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (!iParam4)
		{
			if (func_150(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
			{
				Global_2404956.f_1 += Global_2404956;
				if (!func_106(vParam0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_103(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404956.f_1++;
						if (!func_22(vParam0, 1056964608))
						{
							Global_2404956.f_1++;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2404956.f_1 += Global_2404956;
			}
		}
		else if (func_150(vParam0, 6f, 5f, 5f, 5f, 0, iParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, iParam14, 0))
		{
			Global_2404956.f_1 += Global_2404956;
			if (!func_106(vParam0, fParam12))
			{
				Global_2404956.f_1++;
				if (!func_103(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404956.f_1++;
					if (!func_22(vParam0, 1056964608))
					{
						Global_2404956.f_1++;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2404956.f_1 += Global_2404956;
		}
	}
	return false;
}

bool func_103(Vector3 vParam0, Vector3 fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!player_id() == iVar1)
		{
			if ((func_705(iVar1, 1, 1) && func_65(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
			{
				if (!func_105(player_id(), iVar1, -2, 0))
				{
					if (func_104(func_64(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_104(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, float fParam3, float fParam4, float fParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	fParam6 *= -1f;
	fParam6 += 360f;
	vVar0.x = sin(fParam6);
	vVar0.y = cos(fParam6);
	vVar0.z = 0f;
	vVar0 = {vVar0 / FtoV(vmag(vVar0))};
	vVar0 = {vVar0 * Vector(fParam7, fParam7, fParam7)};
	vVar3 = {vParam3 + vVar0};
	vVar3.z = vParam3.z;
	vVar3.z += fParam9;
	vParam3.z += fParam9;
	return is_point_in_angled_area(vParam0, vParam3, vVar3, fParam8, 0, true);
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && get_player_team(iParam1) == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == get_player_team(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (get_player_team(iParam0) == -1 && iParam2 == -1)
			{
				return false;
			}
		}
		return get_player_team(iParam0) == iParam2;
	}
	return get_player_team(iParam0) == iParam2;
}

bool func_106(Vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_705(iVar1, 1, 1) && func_65(iVar1)) && _0x9DE986FC9A87C474(player_id(), iVar1))
		{
			if ((get_player_team(player_id()) == -1 && get_player_team(iVar1) == -1) && !func_49(player_id(), 1))
			{
				return false;
			}
			else if ((get_player_team(player_id()) == -1 && !player_id() == iVar1) || !func_105(player_id(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_64(iVar1)) < fParam3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_107(int iParam0)
{
	if ((Global_2404956.f_468 == 9 || Global_2404956.f_468 == 9) || (Global_2404956.f_468 == 15 && iParam0 == 1))
	{
		return true;
	}
	return false;
}

bool func_108(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && player_id() != iVar1) || iParam8 == 0)
		{
			if (func_705(iVar1, iParam4, iParam5))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam7 || (!is_ped_injured(get_player_ped(iVar1)) && func_65(iVar1)))
					{
						if ((!iParam6 || (iParam6 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam9) && iParam6) && func_67(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (get_distance_between_coords(func_64(iVar1), vParam0, 1) < fParam3)
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

bool func_109(Vector3 vParam0, Vector3 fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = get_player_team(player_id());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_705(iVar1, 1, 1))
			{
				if ((!func_126(iVar1, 0) && _0x9DE986FC9A87C474(player_id(), iVar1)) && iVar1 != player_id())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!get_player_team(iVar1) == -1)
						{
							if (get_player_team(iVar1) == get_player_team(player_id()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (get_player_team(iVar1) == iVar3)
					{
						if (get_distance_between_coords(func_64(iVar1), vParam0, 1) <= fVar2 + fParam3)
						{
							if (is_sphere_visible_to_player(iVar1, vParam0, fParam3))
							{
								return true;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_110(int iParam0)
{
	if ((func_49(iParam0, 1) || func_112(iParam0)) || func_111(iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return true;
	}
	return false;
}

int func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return false;
}

void func_113(Vector3 vParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	Vector3 vVar16;
	Vector3 vVar19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = {Var2};
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = {Var6};
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!is_bit_set(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam3[iVar0 /*4*/])) == 0f || vdist(Global_2359718[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var2 = {Global_2359718[iVar1 /*26*/].f_3};
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_115(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar16 = {Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f)};
			vVar19 = {*(uParam4[iVar0 /*10*/]) + *(uParam4[iVar0 /*10*/].f_3) * Vector(0.5f, 0.5f, 0.5f)};
			if (vmag(*(uParam4[iVar0 /*10*/])) == 0f || vdist(vVar16, vParam0) < vdist(vVar19, vParam0))
			{
				Var6 = {Global_1311025[iVar1 /*8*/].f_1};
				Var6.f_3 = {Global_1311025[iVar1 /*8*/].f_4};
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = {Global_2359394[iVar1 /*3*/]};
				func_114(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_114(auto uParam0, auto uParam1, int iParam2)
{
	Global_2409351 = {*(uParam1[iParam2 /*10*/])};
	*(uParam1[iParam2 /*10*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_114(&Global_2409351, uParam1, iParam2 + 1);
	}
}

void func_115(auto uParam0, auto uParam1, int iParam2)
{
	Global_2409347 = {*(uParam1[iParam2 /*4*/])};
	*(uParam1[iParam2 /*4*/]) = {*uParam0};
	if (iParam2 + 1 < *uParam1)
	{
		func_115(&Global_2409347, uParam1, iParam2 + 1);
	}
}

void func_116(auto uParam0, auto uParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			if (func_117(Global_2404956.f_1281[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404956.f_1281[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = {*uParam1 - Global_2404956.f_1281[iVar0 /*4*/]};
					fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
				}
				func_61(Global_2404956.f_1281[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404956.f_1509++;
			}
			iVar0++;
		}
	}
}

int func_117(Vector3 vParam0, auto uParam1)
{
	switch (*uParam3.f_7)
	{
		case 0:
			return func_19(vParam0, *uParam3.f_7, *uParam3, 0f, 0f, 0f, *uParam3.f_4);
		
		case 1:
		case 2:
			return func_19(vParam0, *uParam3.f_7, *uParam3.f_8, *uParam3.f_11, *uParam3.f_14);
		
		default:
	}
	return false;
}

void func_118(Vector3 vParam0, Vector3 vParam1, auto uParam2, auto uParam3, auto uParam4)
{
	float fVar0;
	
	func_53(&vParam0, &vParam3);
	fVar0 = vParam3.x - vParam0.x;
	*uParam6 = vParam0.x + fVar0 * 0.5f;
	*uParam6.f_1 = vParam0.y;
	*uParam6.f_2 = vParam0.z;
	*uParam7 = *uParam6;
	*uParam7.f_1 = vParam3.y;
	*uParam7.f_2 = vParam3.z;
	*uParam8 = fVar0 * 0.5f;
}

void func_119()
{
	func_123();
	func_122();
	func_121();
	func_120();
}

void func_120()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404956.f_1509.f_64[iVar10 /*10*/] = {Var0};
		iVar10++;
	}
}

void func_121()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404956.f_1509.f_31[iVar4 /*4*/] = {Var0};
		iVar4++;
	}
}

void func_122()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404956.f_1509.f_6[iVar8 /*8*/] = {Var0};
		iVar8++;
	}
}

void func_123()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404956.f_1509 = {Var0};
}

auto func_124()
{
	return Global_1310987.f_4;
}

void func_125(float fParam0, float fParam1)
{
	func_151();
	func_149(fParam0, fParam1);
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_127(-1, 0) == 8;
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

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_128();
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

auto func_128()
{
	return Global_1312747;
}

int func_129(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam7 && iParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (iParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return vdist(vParam0, vParam3) < fParam6 + 0.01f;
	}
	return vdist(vParam0, vParam3) < fParam6 + 0.01f;
}

void func_130(auto uParam0, auto uParam1, auto uParam2)
{
	if (Global_2404956.f_1150 > 0 && func_148(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_131(uParam0, uParam1, uParam2);
	}
}

void func_131(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	auto uVar6;
	auto uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	Vector3 vVar25;
	auto uVar28;
	Vector3 vVar29;
	Vector3 fVar32;
	int iVar33;
	
	iVar0 = false;
	if (!vmag(*uParam2.f_35) > 0f)
	{
		*uParam2.f_35 = {*uParam0};
	}
	if (*uParam2.f_15)
	{
		if (func_30(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
		{
			*uParam2.f_6 = 9999.9f;
			*uParam2.f_7 = 9999.9f;
		}
	}
	if (*uParam2.f_51)
	{
		*uParam2.f_6 = 9999.9f;
	}
	if (*uParam2.f_48)
	{
		if (func_147(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (*uParam2.f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (*uParam2.f_10 == 0 || (*uParam2.f_33 > 0 && *uParam2.f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (*uParam2.f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = {0f, 0f, 0f};
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = get_nth_closest_vehicle_node_id_with_heading(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (is_vehicle_node_id_valid(iVar8))
		{
			get_vehicle_node_position(iVar8, &vVar1);
			iVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				iVar12 = true;
			}
			Global_2409361.f_165 = {vVar1};
			if (((*uParam2.f_10 || *uParam2.f_33 > 0) || !_get_is_slow_road_flag(iVar8)) || _get_supports_gps_route_flag(iVar8))
			{
				get_vehicle_node_properties(vVar1, &uVar6, &uVar7);
				if (vdist(vVar1, *uParam2.f_35) > *uParam2.f_4)
				{
					if (!func_97(&vVar1, 0))
					{
						if ((*uParam2.f_13 || uVar7 & 64 == 0) || *uParam2.f_33 == 1)
						{
							if (*uParam2.f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_146(vVar1))
									{
										if (!func_22(vVar1, 5f))
										{
											if (vVar1.z >= *uParam2.f_35.f_2 - *uParam2.f_7 || *uParam2.f_33 >= 2)
											{
												if (vVar1.z <= *uParam2.f_35.f_2 + *uParam2.f_6 || *uParam2.f_33 >= 2)
												{
													if (func_145(vVar1, uParam2) || *uParam2.f_33 >= 2)
													{
														if ((*uParam2.f_48 && !func_147(&vVar1, 0)) || *uParam2.f_48 == 0)
														{
															vVar1 = {func_143(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, iVar12, 1, *uParam2.f_51)};
															if (!iVar12)
															{
																if (iVar11)
																{
																	iVar0 += -1;
																}
															}
															if (vmag(vVar1) > 0f)
															{
																if (((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f) || *uParam2.f_33 >= 2)
																{
																	if ((*uParam2.f_12 && !func_138(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
																	{
																		if (!*uParam2.f_15 || !func_30(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
																		{
																			if (*uParam2.f_8)
																			{
																				iVar17 = *uParam2.f_31;
																				iVar18 = true;
																				iVar19 = 1;
																				fVar20 = *uParam2.f_49;
																				if (!*uParam2.f_55)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (*uParam2.f_17)
																				{
																					iVar17 = 0;
																					iVar18 = false;
																					iVar19 = 0;
																					if (*uParam2.f_33 == 1)
																					{
																						fVar20 *= 0.375f;
																					}
																				}
																				else
																				{
																					iVar18 = true;
																					iVar19 = 1;
																					if (*uParam2.f_28)
																					{
																						if (*uParam2.f_33 == 1)
																						{
																							fVar20 *= 0.375f;
																						}
																					}
																				}
																				iVar21 = 0;
																				if (*uParam2.f_3 > 7f)
																				{
																					if (func_150(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_150(vVar1, 6f, 1f, 1f, 5f, iVar17, iVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || *uParam2.f_33 >= 2)
																				{
																					if (((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52) || *uParam2.f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (*uParam2.f_52)
																						{
																							iVar22 = func_136(vVar1, *uParam2.f_54, &fVar23);
																						}
																						if (!*uParam2.f_52 || (*uParam2.f_52 && iVar22 <= *uParam2.f_53))
																						{
																							if (*uParam2.f_52)
																							{
																								if (iVar22 < *uParam2.f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = {0f, 0f, 0f};
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									*uParam2.f_53 = iVar22;
																								}
																							}
																							if (*uParam2.f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = {vVar1};
																									Global_2409361.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar16 /*3*/], *uParam2.f_35))
																											{
																												func_135(vVar1, fVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
																								Global_2409361.f_121[Global_2409361.f_162] = fVar4;
																								Global_2409361.f_162++;
																								if (func_145(vVar1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																						}
																					}
																					else
																					{
																						*uParam0 = {vVar1};
																						*uParam1 = fVar4;
																						return;
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			else
																			{
																				*uParam0 = {vVar1};
																				*uParam1 = fVar4;
																				return;
																			}
																		}
																	}
																	else
																	{
																		iVar15++;
																	}
																}
																else
																{
																	iVar0 = 100;
																}
															}
														}
														else
														{
															iVar0++;
														}
													}
													else if (!*uParam2.f_32)
													{
														iVar0 = 100;
													}
												}
												else
												{
													iVar0++;
												}
											}
											else
											{
												iVar0++;
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= 40 + iVar15 || iVar0 >= 100)
			{
				if (Global_2409361.f_162 > 0 && ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_33 >= 2))
				{
					if (*uParam2.f_30)
					{
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_133(0, uParam2);
						}
						iVar24 = get_random_int_in_range(false, Global_2409361.f_162);
						vVar25 = {Global_2409361[0 /*3*/]};
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = {Global_2409361[iVar24 /*3*/]};
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = {vVar25};
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = {Global_2409361[0 /*3*/]};
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
				}
				else
				{
					*uParam2.f_33++;
					if (*uParam2.f_33 < 3)
					{
						func_131(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = get_random_int_in_range(1 + iVar15, 40 + iVar15);
						get_nth_closest_vehicle_node_with_heading(*uParam0, iVar0, &vVar1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						vVar1 = {func_143(vVar1, &fVar4, iVar9, *uParam2.f_9, *uParam2, iVar10, *uParam2.f_11, *uParam2.f_34, &iVar11, 0, 0, *uParam2.f_51)};
						vVar29 = {vVar1};
						fVar32 = fVar4;
						if (!*uParam2.f_50)
						{
							iVar33 = true;
						}
						else
						{
							iVar33 = false;
						}
						if (func_30(*uParam2.f_35, &vVar29, uParam2.f_38, uParam2.f_45, iVar33, 1) || func_147(&vVar29, iVar33))
						{
							if (!*uParam2.f_50)
							{
								*uParam2.f_33 = 0;
								*uParam2.f_50 = 1;
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								*uParam2.f_6 = 9999.9f;
								*uParam2.f_7 = 9999.9f;
								func_131(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = {vVar29};
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = {vVar29};
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 3)
			{
				func_131(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_132(&Global_1312061, uParam0, uParam1, *uParam0);
				if (*uParam2.f_11)
				{
					*uParam2.f_27 = 1;
				}
				return;
			}
		}
		Global_2409361.f_164 = iVar8;
	}
}

void func_132(auto uParam0, auto uParam1, auto uParam2, Vector3 vParam3)
{
	Vector3 fVar0;
	Vector3 fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_99(*(uParam0[iVar2 /*4*/]), 5f, player_id(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = {*(uParam0[iVar3 /*4*/])};
		*uParam2 = *(uParam0[iVar3 /*4*/]).f_3;
	}
}

void func_133(int iParam0, auto uParam1)
{
	if (!func_145(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162--;
		func_134(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
		{
			func_133(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_133(iParam0 + 1, uParam1);
	}
}

void func_134(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409361[iParam0 /*3*/] = {Global_2409361[iParam0 + 1 /*3*/]};
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_135(Vector3 vParam0, Vector3 fParam1, int iParam2)
{
	Vector3 vVar0;
	auto uVar3;
	
	vVar0 = {Global_2409361[iParam4 /*3*/]};
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = {vParam0};
	Global_2409361.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_135(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_136(Vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	Vector3 fVar6;
	Vector3 fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_66(iVar5))
		{
			vVar1 = {func_64(iVar5)};
			fVar7 = vdist(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

bool func_137(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && player_id() != iVar1) || iParam9 == 0)
		{
			if (func_705(iVar1, iParam5, iParam6))
			{
				if (_0x9DE986FC9A87C474(player_id(), iVar1))
				{
					if (!iParam8 || (!is_ped_injured(get_player_ped(iVar1)) && func_65(iVar1)))
					{
						if ((!iParam7 || (iParam7 == 1 && get_player_team(player_id()) != get_player_team(iVar1))) || get_player_team(player_id()) == -1)
						{
							if (((get_player_team(player_id()) == -1 && iParam10) && iParam7) && func_67(iVar1))
							{
							}
							else if (does_entity_exist(get_player_ped(iVar1)))
							{
								if (func_23(func_64(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

bool func_138(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_142(vParam0, fParam3, iParam4, iParam5, iParam6) || func_139(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return true;
	}
	return false;
}

bool func_139(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_141(vParam0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_140(vParam0, fParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
				{
					if (func_705(iVar1, 0, 1) && func_705(iParam5, 0, 1))
					{
						return true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_140(Vector3 vParam0, Vector3 fParam1, int iParam2, Vector3 vParam3, Vector3 fParam4, int iParam5)
{
	int iVar0;
	Vector3[] vVar1 = new Vector3[4];
	Vector3 vVar14;
	Vector3 vVar17;
	float fVar20;
	float fVar21;
	float fVar22;
	Vector3 vVar23;
	Vector3 vVar26;
	
	if (func_23(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return true;
	}
	func_24(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	fVar20 = absf(vVar17.y - vVar14.y);
	fVar21 = absf(vVar17.x - vVar14.x);
	fVar22 = absf(vVar17.z - vVar14.z);
	vVar23 = {0f, fVar20 * 0.5f, 0f};
	func_25(&vVar23, 0f, 0f, fParam3);
	vVar26 = {fVar21 * 0.5f, 0f, 0f};
	func_25(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = {vParam0 + vVar23 + vVar26};
	vVar1[0 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[1 /*3*/] = {vParam0 + vVar23 - vVar26};
	vVar1[1 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[2 /*3*/] = {vParam0 - vVar23 + vVar26};
	vVar1[2 /*3*/].f_2 += 0.5f * fVar22;
	vVar1[3 /*3*/] = {vParam0 - vVar23 - vVar26};
	vVar1[3 /*3*/].f_2 += 0.5f * fVar22;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_23(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_141(Vector3 vParam0, int iParam1, Vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	Vector3 fVar2;
	
	fVar0 = func_26(iParam3, 1008981770);
	fVar1 = func_26(iParam7, 1008981770);
	fVar2 = vdist(vParam0, vParam4);
	if (fVar2 < fVar0 + fVar1)
	{
		return true;
	}
	return false;
}

bool func_142(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_705(iVar1, 0, 1) && func_705(iParam5, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (func_23(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
				else if (func_23(func_64(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_23(Global_2413760.f_130[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return true;
				}
			}
			else if (func_705(iVar1, 0, 0))
			{
				if (does_entity_exist(get_player_ped(iVar1)))
				{
					if (func_23(func_64(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_143(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, Vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	Vector3 vVar0;
	auto uVar3;
	auto uVar4;
	auto uVar5;
	auto uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	Vector3 vVar24;
	Vector3 vVar27;
	Vector3 vVar30;
	
	if (iParam15)
	{
		if (vmag(vParam6) > 0f)
		{
			if (!func_144(vParam0, *fParam3, vParam6))
			{
				*fParam3 += 180f;
			}
		}
		return vParam0;
	}
	get_vehicle_node_properties(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !iParam10)
	{
		get_closest_road(vParam0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*iParam12 = 1;
		}
		if (iParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (iVar11 + iVar12 != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *iParam12)
		{
			*fParam3 += 180f;
			if (*fParam3 > 360f)
			{
				*fParam3 += -360f;
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			iVar15 = true;
		}
		else
		{
			iVar15 = false;
		}
		iVar16 = false;
		if (iVar15)
		{
			if (iVar11 == 0)
			{
				if (iParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				iVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			iVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (iVar15)
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar11) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar11);
				}
				if (iVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 += IntToFloat(iVar11 - 2) * 1f;
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 += IntToFloat(iVar11 - 1) * 1f;
				}
			}
			else
			{
				if (iVar16)
				{
					fVar14 = 4.2f * to_float(iVar12) * 0.5f;
				}
				else
				{
					fVar14 = 4.2f * to_float(iVar12);
				}
				if (iVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 += IntToFloat(iVar12 - 2) * 1f;
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 += IntToFloat(iVar12 - 1) * 1f;
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 += 0.95f * fVar13;
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 += -0.5f;
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 += -1f;
			}
			if (!iParam5 || !uVar4 & 8 == 0)
			{
				fVar14 += 4.2f * -0.5f;
			}
			if (!iParam11 == 0)
			{
				func_24(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				if (fVar23 > 1.8f)
				{
					fVar14 += fVar23 - 1.8f * -0.5f;
				}
			}
		}
	}
	if (vmag(vParam6) > 0f)
	{
		if (!func_144(vParam0, *fParam3, vParam6))
		{
			if (iParam5)
			{
				*fParam3 += 180f;
			}
			else if (iParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	vVar0 = {_get_object_offset_from_coords(vParam0, *fParam3, fVar14, 0f, 0f)};
	if (iParam5)
	{
		if (unk_0xA0F8A7517A273C05(vParam0, *fParam3, &vVar24))
		{
			vVar27 = {vVar24 - vParam0};
			if (!iParam11 == 0)
			{
				vVar30 = {vVar27 / FtoV(vmag(vVar27))};
				func_24(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = fVar20 - fVar17;
				vVar30 = {vVar30 * Vector(fVar23 * 0.5f, fVar23 * 0.5f, fVar23 * 0.5f)};
				vVar27 = {vVar27 - vVar30};
				vVar24 = {vParam0 + vVar27};
			}
			vVar30 = {vVar0 - vVar24};
			vVar0 = {vVar24};
		}
	}
	return vVar0;
}

bool func_144(Vector3 vParam0, Vector3 fParam1, Vector3 vParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {0f, 1f, 0f};
	func_25(&vVar0, 0f, 0f, fParam3);
	vVar3 = {vParam4 - vParam0};
	if (func_37(vVar3, vVar0) >= 0f)
	{
		return true;
	}
	return false;
}

bool func_145(Vector3 vParam0, auto uParam1)
{
	if (*uParam3.f_18)
	{
		switch (*uParam3.f_26)
		{
			case 0:
				if (func_129(vParam0, *uParam3.f_19, *uParam3.f_25, 0, 0))
				{
					return true;
				}
				break;
			
			case 1:
				if (func_52(vParam0, *uParam3.f_19, *uParam3.f_22, 0, 0))
				{
					return true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(vParam0, *uParam3.f_19, *uParam3.f_22, *uParam3.f_25, 0, true))
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_146(Vector3 vParam0)
{
	int iVar0;
	auto uVar1;
	
	uVar1 = func_59(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[uVar1])
	{
		if (func_58(vParam0, &(Global_2408393[uVar1 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_58(vParam0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_147(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = false;
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_129(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 1:
				if (func_52(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					iVar0 = true;
				}
				break;
			
			case 2:
				if (is_point_in_angled_area(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, true))
				{
					iVar0 = true;
				}
				break;
		}
		if (iVar0)
		{
			if (iParam1)
			{
				*uParam0 = {func_40(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0)};
			}
		}
	}
	return iVar0;
}

int func_148(auto uParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	Vector3 vVar14;
	auto uVar17;
	
	if (Global_2404956.f_1150 > 0)
	{
		iVar0 = 0;
		if (!vmag(*uParam2.f_35) > 0f)
		{
			*uParam2.f_35 = {*uParam0};
		}
		if (*uParam2.f_15)
		{
			if (func_30(*uParam2.f_35, uParam0, uParam2.f_38, uParam2.f_45, 1, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		if (*uParam2.f_48)
		{
			if (func_147(uParam0, 1))
			{
				*uParam2.f_6 = 9999.9f;
				*uParam2.f_7 = 9999.9f;
			}
		}
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			vVar1 = {Global_2404956.f_1151[iVar0 /*4*/]};
			fVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (vmag(vVar1) > 0f)
			{
				if ((*uParam2.f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, *uParam2.f_35, *uParam2.f_35.f_1, 0f) < *uParam2.f_5) || *uParam2.f_5 <= 0f)
				{
					if ((*uParam2.f_12 && !func_138(vVar1, fVar4, *uParam2.f_34, player_id(), 0, *uParam2.f_56)) || !*uParam2.f_12)
					{
						if (!*uParam2.f_15 || !func_30(*uParam2.f_35, &vVar1, uParam2.f_38, uParam2.f_45, 0, 1))
						{
							if (*uParam2.f_8)
							{
								iVar6 = *uParam2.f_31;
								iVar7 = true;
								iVar8 = 1;
								fVar9 = *uParam2.f_49;
								if (!*uParam2.f_55)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (*uParam2.f_17)
								{
									iVar6 = 0;
									iVar7 = false;
									iVar8 = 0;
									if (*uParam2.f_33 == 1)
									{
										fVar9 *= 0.375f;
									}
								}
								else
								{
									iVar7 = true;
									iVar8 = 1;
									if (*uParam2.f_28)
									{
										if (*uParam2.f_33 == 1)
										{
											fVar9 *= 0.375f;
										}
									}
								}
								iVar10 = false;
								if (*uParam2.f_3 > 7f)
								{
									if (func_150(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, *uParam2.f_3, 0, 0, 0, 0))
									{
										iVar10 = true;
									}
								}
								else if (func_150(vVar1, 6f, 1f, 1f, 5f, iVar6, iVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_137(vVar1, fVar4, *uParam2.f_34, 1, 1, 0, 0, 0, 0))
								{
									iVar10 = true;
								}
								if (iVar10)
								{
									if ((*uParam2.f_29 || *uParam2.f_30) || *uParam2.f_52)
									{
										fVar12 = 0f;
										if (*uParam2.f_52)
										{
											iVar11 = func_136(vVar1, *uParam2.f_54, &fVar12);
										}
										if (!*uParam2.f_52 || (*uParam2.f_52 && iVar11 <= *uParam2.f_53))
										{
											if (*uParam2.f_52)
											{
												if (iVar11 < *uParam2.f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = {0f, 0f, 0f};
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													*uParam2.f_53 = iVar11;
												}
											}
											if (*uParam2.f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = {vVar1};
													Global_2409361.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (vdist2(vVar1, *uParam2.f_35) < vdist2(Global_2409361[iVar5 /*3*/], *uParam2.f_35))
															{
																func_135(vVar1, fVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = {vVar1};
												Global_2409361.f_121[Global_2409361.f_162] = fVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((*uParam2.f_52 && *uParam2.f_53 == 0) || *uParam2.f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = {vVar1};
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = {vVar1};
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (*uParam2.f_30)
			{
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_133(0, uParam2);
				}
				iVar13 = get_random_int_in_range(false, Global_2409361.f_162);
				vVar14 = {Global_2409361[0 /*3*/]};
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = {Global_2409361[iVar13 /*3*/]};
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = {vVar14};
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = {Global_2409361[0 /*3*/]};
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
		}
		else
		{
			*uParam2.f_33++;
			if (*uParam2.f_33 < 2)
			{
				return func_148(uParam0, uParam1, uParam2);
			}
			else
			{
				*uParam2.f_33 = 0;
				func_131(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_149(float fParam0, float fParam1)
{
	add_navmesh_required_region(fParam0, fParam1, 0.1f);
	Global_2404956.f_1492 = get_id_of_this_thread();
	Global_2404956.f_1490 = 1;
	Global_2404956.f_1493 = NETWORK::GET_NETWORK_TIME();
}

bool func_150(Vector3 vParam0, float fParam1, float fParam2, float fParam3, Vector3 fParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, float fParam14, int iParam15, int iParam16)
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
		if (func_108(vParam0, fParam14, 1, 1, iParam15, iParam17, 0, iParam15))
		{
			return false;
		}
	}
	Global_2404956++;
	if (iParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_98(vParam0, fParam6, iParam7, iParam9, fParam10, iParam11, iParam12, fParam16, iParam17))
			{
				return false;
			}
		}
	}
	Global_2404956++;
	return true;
}

void func_151()
{
	if (Global_2404956.f_1490)
	{
		if (get_id_of_this_thread() == Global_2404956.f_1492)
		{
			remove_navmesh_required_regions();
		}
		else
		{
			remove_navmesh_required_regions();
		}
		Global_2404956.f_1490 = 0;
	}
}

int func_152(int iParam0)
{
	if (is_screen_faded_out())
	{
		return 10000;
	}
	if (iParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_153()
{
	return Local_192.f_38[Local_192.f_36 /*3*/];
}

void func_154()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = false;
	if (Local_192 != 4)
	{
		iLocal_447 = false;
		while (iLocal_447 < _network_get_num_participants_host())
		{
			if (network_is_participant_active(int_to_participantindex(iLocal_447)))
			{
				iVar2 = network_get_player_index(int_to_participantindex(iLocal_447));
				if (func_705(iVar2, 1, 1))
				{
				}
				if (!is_bit_set(Local_192.f_1, true))
				{
					if (is_bit_set(Local_252[iLocal_447 /*6*/].f_1, 2))
					{
						if (Local_192.f_37 != iVar2)
						{
							Local_192.f_37 = iVar2;
						}
					}
				}
				if (!is_bit_set(Local_192.f_1, true))
				{
					if (Local_252[iLocal_447 /*6*/].f_5 > 0)
					{
						iVar0 += Local_252[iLocal_447 /*6*/].f_5;
					}
				}
				if (!is_bit_set(Local_192.f_1, 4))
				{
					if (is_bit_set(Local_252[iLocal_447 /*6*/].f_1, 5))
					{
						set_bit(&(Local_192.f_1), 4);
						Local_192.f_35 = iVar2;
					}
				}
				if (!is_bit_set(Local_192.f_1, 2))
				{
					if (!iVar1)
					{
						if (((is_bit_set(Local_192.f_1, true) || is_bit_set(Local_192.f_1, 3)) || is_bit_set(Local_192.f_1, 4)) || is_bit_set(Local_192.f_1, 5))
						{
							if (!is_bit_set(Local_252[iLocal_447 /*6*/].f_1, 4))
							{
								iVar1 = true;
							}
						}
						else
						{
							iVar1 = true;
						}
					}
				}
			}
			else if (!is_bit_set(Local_192.f_1, 5))
			{
				if (Local_192.f_33 > -1)
				{
					if (iLocal_447 == Local_192.f_33)
					{
						set_bit(&(Local_192.f_1), 5);
					}
				}
			}
			iLocal_447++;
		}
		if (!is_bit_set(Local_192.f_1, true))
		{
			iVar0 += Local_192.f_6;
			if (iVar0 >= func_155())
			{
				set_bit(&(Local_192.f_1), true);
			}
			if (Local_192.f_5 != iVar0)
			{
				if (Local_192.f_5 < iVar0)
				{
					Local_192.f_5 = iVar0;
				}
				else if (Local_192.f_6 != Local_192.f_5 - iVar0)
				{
					Local_192.f_6 = Local_192.f_5 - iVar0;
				}
			}
		}
		if (!is_bit_set(Local_192.f_1, 2))
		{
			if (!iVar1)
			{
				set_bit(&(Local_192.f_1), 2);
			}
		}
	}
}

auto func_155()
{
	return Global_262145.f_10443;
}

bool func_156()
{
	int iVar0;
	int iVar1;
	
	if (func_160() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = get_random_int_in_range(false, 20);
				if (func_157(iVar1))
				{
					Local_192.f_38[iVar0 /*3*/] = {vLocal_753[iVar1 /*3*/]};
					vLocal_753[iVar1 /*3*/] = {0f, 0f, 0f};
				}
			}
			iVar0++;
		}
	}
	else
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_157(int iParam0)
{
	int iVar0;
	Vector3 fVar1;
	
	if (func_159(vLocal_753[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_159(Local_192.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = get_distance_between_coords(Local_192.f_38[iVar0 /*3*/], vLocal_753[iParam0 /*3*/], 1);
				if (fVar1 < func_158())
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

auto func_158()
{
	return to_float(Global_262145.f_10444);
}

int func_159(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

auto func_160()
{
	int iVar0;
	
	if (Local_192.f_48 != -1)
	{
		return Local_192.f_48;
	}
	iVar0 = get_random_int_in_range(false, 4);
	if (!func_162(iVar0))
	{
		Local_192.f_48 = iVar0;
		func_161();
	}
	return Local_192.f_48;
}

void func_161()
{
	switch (Local_192.f_48)
	{
		case 0:
			vLocal_753[0 /*3*/] = {959.4771f, -1673.839f, 29.0562f};
			vLocal_753[1 /*3*/] = {711.3848f, -1230.569f, 25.5556f};
			vLocal_753[2 /*3*/] = {282.5148f, -217.2699f, 62.4801f};
			vLocal_753[3 /*3*/] = {388.7341f, -356.1966f, 47.023f};
			vLocal_753[4 /*3*/] = {1112.403f, -645.8195f, 55.8211f};
			vLocal_753[5 /*3*/] = {1112.403f, -645.8195f, 55.8211f};
			vLocal_753[6 /*3*/] = {175.7449f, 557.355f, 179.142f};
			vLocal_753[7 /*3*/] = {1061.679f, 214.6577f, 83.9904f};
			vLocal_753[8 /*3*/] = {768.462f, 1279.458f, 359.2967f};
			vLocal_753[9 /*3*/] = {2590.469f, 486.6694f, 107.69f};
			vLocal_753[10 /*3*/] = {2820.659f, -760.044f, 1.4262f};
			vLocal_753[11 /*3*/] = {1169.637f, -1382.508f, 33.7916f};
			vLocal_753[12 /*3*/] = {1590.301f, -1691.78f, 87.103f};
			vLocal_753[13 /*3*/] = {857.6887f, -2497.098f, 27.3195f};
			vLocal_753[14 /*3*/] = {1292.737f, -3097.068f, 4.9066f};
			vLocal_753[15 /*3*/] = {590.4111f, -2902.535f, 5.2464f};
			vLocal_753[16 /*3*/] = {491.5606f, -2122.398f, 4.9175f};
			vLocal_753[17 /*3*/] = {210.1278f, -937.7384f, 23.1416f};
			vLocal_753[18 /*3*/] = {483.4742f, -1480.009f, 28.2904f};
			vLocal_753[19 /*3*/] = {2288.854f, 1727.706f, 67.0398f};
			break;
		
		case 1:
			vLocal_753[0 /*3*/] = {-884.5568f, -2477.55f, 12.9877f};
			vLocal_753[1 /*3*/] = {-81.4004f, -2707.403f, 5.4398f};
			vLocal_753[2 /*3*/] = {-176.0256f, -633.2856f, 47.9812f};
			vLocal_753[3 /*3*/] = {-777.4452f, 20.5786f, 39.6541f};
			vLocal_753[4 /*3*/] = {-2333.458f, 237.6722f, 168.602f};
			vLocal_753[5 /*3*/] = {-1096.042f, -323.1984f, 36.8237f};
			vLocal_753[6 /*3*/] = {-822.8544f, -1222.888f, 6.3704f};
			vLocal_753[7 /*3*/] = {-590.8558f, -911.0305f, 22.8747f};
			vLocal_753[8 /*3*/] = {-110.7806f, 356.4308f, 111.6961f};
			vLocal_753[9 /*3*/] = {-330.9974f, -1314.573f, 30.5497f};
			vLocal_753[10 /*3*/] = {-330.9974f, -1314.573f, 30.5497f};
			vLocal_753[11 /*3*/] = {-255.1383f, -1543.092f, 30.9032f};
			vLocal_753[12 /*3*/] = {-1659.014f, 235.419f, 61.391f};
			vLocal_753[13 /*3*/] = {-3276.446f, 967.604f, 7.3522f};
			vLocal_753[14 /*3*/] = {-1997.696f, -257.592f, 28.0968f};
			vLocal_753[15 /*3*/] = {-388.8625f, -2282.671f, 6.6082f};
			vLocal_753[16 /*3*/] = {-1048.599f, -1120.179f, 1.1586f};
			vLocal_753[17 /*3*/] = {-287.5583f, 11.2136f, 53.7525f};
			vLocal_753[18 /*3*/] = {-481.1961f, 1101.528f, 324.8545f};
			vLocal_753[19 /*3*/] = {-1521.989f, 1493.556f, 110.593f};
			break;
		
		case 2:
			vLocal_753[0 /*3*/] = {-1585.629f, 2084.206f, 71.3231f};
			vLocal_753[1 /*3*/] = {-2188.034f, 4249.606f, 47.9395f};
			vLocal_753[2 /*3*/] = {-685.67f, 5794.155f, 16.331f};
			vLocal_753[3 /*3*/] = {-329.5496f, 6150.002f, 31.3133f};
			vLocal_753[4 /*3*/] = {-275.9802f, 6637.051f, 6.4552f};
			vLocal_753[5 /*3*/] = {-800.4709f, 5392.421f, 33.4985f};
			vLocal_753[6 /*3*/] = {-59.013f, 4416.56f, 55.8893f};
			vLocal_753[7 /*3*/] = {-207.2786f, 3658.027f, 50.7524f};
			vLocal_753[8 /*3*/] = {-596.9946f, 2091.172f, 130.4128f};
			vLocal_753[9 /*3*/] = {-2080.822f, 2608.639f, 2.089f};
			vLocal_753[10 /*3*/] = {-1622.297f, 3191.923f, 29.2567f};
			vLocal_753[11 /*3*/] = {-1098.166f, 2725.338f, 17.8007f};
			vLocal_753[12 /*3*/] = {-31.1729f, 1953.42f, 189.1861f};
			vLocal_753[13 /*3*/] = {-281.9674f, 2847.181f, 52.8867f};
			vLocal_753[14 /*3*/] = {-1633.186f, 4736.728f, 52.2963f};
			vLocal_753[15 /*3*/] = {-520.748f, 5307.176f, 79.2448f};
			vLocal_753[16 /*3*/] = {50.1324f, 7117.781f, 2.1957f};
			vLocal_753[17 /*3*/] = {163.8223f, 6654.26f, 30.5682f};
			vLocal_753[18 /*3*/] = {59.0807f, 6310.772f, 30.3764f};
			vLocal_753[19 /*3*/] = {-1901.756f, 1911.103f, 165.2867f};
			break;
		
		case 3:
			vLocal_753[0 /*3*/] = {721.9799f, 2314.477f, 49.4146f};
			vLocal_753[1 /*3*/] = {376.9765f, 2628.43f, 43.6444f};
			vLocal_753[2 /*3*/] = {1535.214f, 6597.865f, 2.1543f};
			vLocal_753[3 /*3*/] = {2446.757f, 4963.825f, 45.5766f};
			vLocal_753[4 /*3*/] = {2467.821f, 4080.605f, 37.0648f};
			vLocal_753[5 /*3*/] = {1648.711f, 3811.429f, 37.6556f};
			vLocal_753[6 /*3*/] = {1297.271f, 4342.019f, 40.3207f};
			vLocal_753[7 /*3*/] = {1541.145f, 6335.578f, 23.0751f};
			vLocal_753[8 /*3*/] = {2014.187f, 4721.405f, 40.609f};
			vLocal_753[9 /*3*/] = {3800.848f, 4475.054f, 4.9977f};
			vLocal_753[10 /*3*/] = {2661.859f, 3467.084f, 54.8171f};
			vLocal_753[11 /*3*/] = {430.2967f, 6467.513f, 27.7718f};
			vLocal_753[12 /*3*/] = {2930.072f, 4623.018f, 47.7272f};
			vLocal_753[13 /*3*/] = {2973.685f, 3480.115f, 70.4423f};
			vLocal_753[14 /*3*/] = {1989.081f, 3781.611f, 31.1808f};
			vLocal_753[15 /*3*/] = {908.6296f, 3648.458f, 35.1522f};
			vLocal_753[16 /*3*/] = {1560.581f, 2167.013f, 77.7169f};
			vLocal_753[17 /*3*/] = {1230.12f, 2742.618f, 37.0054f};
			vLocal_753[18 /*3*/] = {2545.243f, 2588.249f, 36.9449f};
			vLocal_753[19 /*3*/] = {260.401f, 3180.358f, 41.6992f};
			break;
	}
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10386;
		
		case 1:
			return Global_262145.f_10387;
		
		case 2:
			return Global_262145.f_10385;
		
		case 3:
			return Global_262145.f_10384;
		
		default:
	}
	return 0;
}

bool func_163(auto uParam0)
{
	if (*uParam0.f_1)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return true;
		}
	}
	return false;
}

void func_164(auto uParam0)
{
	if (!*uParam0.f_1)
	{
		if (network_is_host_of_this_script())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_165()
{
	func_167();
	if (is_bit_set(iLocal_446, 9))
	{
		return;
	}
	if (func_662())
	{
		if (!is_bit_set(iLocal_446, false))
		{
			set_audio_flag("DisableFlightMusic", 1);
			set_audio_flag("WantedMusicDisabled", 1);
			set_bit(&iLocal_446, false);
		}
		if (!is_bit_set(iLocal_446, true))
		{
			if (trigger_music_event("BG_SIGHTSEER_START"))
			{
				set_bit(&iLocal_446, true);
			}
		}
		if (is_bit_set(iLocal_446, true))
		{
			if (!is_bit_set(iLocal_446, 3))
			{
				if (Local_192.f_5 == 1)
				{
					if (trigger_music_event("BG_SIGHTSEER_MID"))
					{
						set_bit(&iLocal_446, 3);
					}
				}
			}
		}
		if (is_bit_set(iLocal_446, 3))
		{
			if (!is_bit_set(iLocal_446, 4))
			{
				if (Local_192.f_5 == 2)
				{
					if (trigger_music_event("BG_SIGHTSEER_FINAL"))
					{
						set_bit(&iLocal_446, 4);
					}
				}
			}
		}
		if (is_bit_set(Local_192.f_1, true) || is_bit_set(Local_192.f_1, 4))
		{
			if (is_bit_set(iLocal_446, 4))
			{
				if (!is_bit_set(iLocal_446, 6))
				{
					if (trigger_music_event("BG_SIGHTSEER_STOP"))
					{
						set_bit(&iLocal_446, 6);
						set_bit(&iLocal_446, 2);
						set_audio_flag("DisableFlightMusic", 0);
						set_audio_flag("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_338())
	{
		if (func_166(player_id(), 20))
		{
			if (!is_bit_set(iLocal_446, false))
			{
				set_audio_flag("DisableFlightMusic", 1);
				set_audio_flag("WantedMusicDisabled", 1);
				set_bit(&iLocal_446, false);
			}
			if (!is_bit_set(iLocal_446, 7))
			{
				if (trigger_music_event("BG_SIGHTSEER_START_ATTACK"))
				{
					set_bit(&iLocal_446, 7);
				}
			}
			if (is_bit_set(Local_192.f_1, true) || is_bit_set(Local_192.f_1, 4))
			{
				if (is_bit_set(iLocal_446, 7))
				{
					if (!is_bit_set(iLocal_446, 6))
					{
						if (trigger_music_event("BG_SIGHTSEER_STOP"))
						{
							set_bit(&iLocal_446, 6);
							set_bit(&iLocal_446, 2);
							set_audio_flag("DisableFlightMusic", 0);
							set_audio_flag("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

int func_166(int iParam0, int iParam1)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

void func_167()
{
	if (is_bit_set(iLocal_446, 8))
	{
		if (is_bit_set(iLocal_446, 9))
		{
			if (!is_bit_set(iLocal_446, 10))
			{
				if (is_bit_set(iLocal_446, 11))
				{
					if (!is_bit_set(iLocal_446, 12))
					{
						set_user_radio_control_enabled(1);
						set_audio_flag("AllowScoreAndRadio", 0);
					}
				}
				if (!is_bit_set(iLocal_446, 15))
				{
					if (trigger_music_event("APT_COUNTDOWN_30S_KILL"))
					{
						set_bit(&iLocal_446, 15);
					}
				}
				if (is_bit_set(iLocal_446, 15))
				{
					if (!is_bit_set(iLocal_446, 13))
					{
						if (trigger_music_event("APT_FADE_IN_RADIO"))
						{
							set_bit(&iLocal_446, 13);
						}
					}
					if (is_bit_set(iLocal_446, 13))
					{
						set_bit(&iLocal_446, 10);
					}
				}
			}
		}
	}
}

void func_168()
{
	Vector3 vVar0;
	int iVar3;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (Local_192.f_34 > -1)
	{
		iVar3 = int_to_playerindex(Local_192.f_34);
		if (network_is_player_active(iVar3))
		{
			vVar0 = {get_entity_coords(get_player_ped(iVar3), 0)};
		}
	}
	if (!func_159(vVar0, 0f, 0f, 0f, 0))
	{
		func_169(142, vVar0, &uLocal_821, 1140457472, 1144750080, 0);
	}
}

void func_169(int iParam0, Vector3 vParam1, auto uParam2, float fParam3, float fParam4, int iParam5)
{
	Vector3 fVar0;
	float fVar1;
	
	if (((func_112(player_id()) && !func_209(player_id())) && !is_bit_set(Global_1610316[player_id() /*174*/].f_1, 8)) && (func_208(player_id()) || func_207(player_id())))
	{
		return;
	}
	Global_1727391 = {vParam1};
	fVar0 = vdist(get_entity_coords(player_ped_id(), 0), vParam1);
	func_203(iParam0, fVar0);
	if (is_pause_menu_active() && get_pause_menu_state() == 15)
	{
		if (func_202(player_id()) || func_200(player_id()))
		{
			if (!_0x84698AB38D0C6636(1344549371))
			{
				_0xDD564BDD0472C936(1344549371);
			}
		}
		else if (_0x84698AB38D0C6636(1344549371))
		{
			object_decal_toggle(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_199(player_id(), 21))
		{
			func_198(vParam1, 1, 0);
		}
		if (!*uParam4 && func_705(player_id(), 1, 1))
		{
			*uParam4 = 1;
			if (func_197(iParam0))
			{
				set_wanted_level_multiplier(func_196(iParam0));
				if (func_195(iParam0, -1))
				{
					set_max_wanted_level(false);
					if (get_player_wanted_level(player_id()) > 0)
					{
						set_player_wanted_level(player_id(), false, 1);
						set_player_wanted_level_now(player_id(), 1);
					}
					set_bit(&(Global_1727391.f_3), false);
				}
			}
			if (func_194(iParam0))
			{
				fVar1 = func_193(iParam0);
				if (fVar1 != 1f)
				{
					func_190(fVar1);
					set_bit(&(Global_1727391.f_3), true);
				}
			}
			if (!Global_2391042)
			{
				if (func_189(iParam0) && func_202(player_id()))
				{
					func_188(1);
					func_187(2);
				}
			}
			func_186(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_166(player_id(), 19))
			{
				func_185(19);
			}
		}
		if (*uParam4 && func_705(player_id(), 1, 1))
		{
			*uParam4 = 0;
			if (func_197(iParam0))
			{
				if (is_bit_set(Global_1727391.f_3, false))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					clear_bit(&(Global_1727391.f_3), false);
				}
			}
			if (func_194(iParam0))
			{
				func_184();
				clear_bit(&(Global_1727391.f_3), true);
			}
			if (iParam7 && !func_112(player_id()))
			{
				if (func_183(player_id()) != 152)
				{
					func_172();
				}
			}
			if (func_171(2))
			{
				func_188(0);
				func_170(2);
			}
		}
	}
}

void func_170(int iParam0)
{
	clear_bit(&(Global_2460486.f_4660.f_18), iParam0);
}

int func_171(int iParam0)
{
	return is_bit_set(Global_2460486.f_4660.f_18, iParam0);
}

void func_172()
{
	Global_2404956.f_20 = {Global_2406765};
	Global_2404956.f_22 = {Global_2406767};
	func_181();
	func_173(1, 1);
}

void func_173(int iParam0, int iParam1)
{
	if (iParam1)
	{
		Global_2404956.f_39 = {Global_2406784};
	}
	else
	{
		Global_2404956.f_39 = {Global_2406784};
		Global_2404956.f_39.f_49 = {Global_2406784.f_49};
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (iParam0)
	{
		func_180();
	}
	func_176(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_175(0);
	func_174();
}

void func_174()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == get_id_of_this_thread())
	{
		Global_2404956.f_469 = {Var0};
	}
}

void func_175(int iParam0)
{
	if (iParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_178();
		func_177(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_178();
		func_177(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = get_id_of_this_thread();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_178()
{
	func_179();
	Global_2404956.f_635 = 0;
}

void func_179()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = {Var1};
		iVar0++;
	}
}

void func_180()
{
	Global_2404956.f_347 = {Global_2407092};
}

void func_181()
{
	func_182();
	Global_2404956.f_1280 = 0;
}

void func_182()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404956.f_1281[iVar0 /*4*/] = {Var1};
		iVar0++;
	}
}

int func_183(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

void func_184()
{
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && Global_2460486.f_4655 < 1f)
		{
			return;
		}
	}
	Global_2460486.f_4656 = -1;
	Global_2460486.f_4655 = 1f;
}

void func_185(int iParam0)
{
	clear_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

void func_186(int iParam0)
{
	set_bit(&(Global_1610316[player_id() /*174*/].f_10.f_4), iParam0);
}

void func_187(int iParam0)
{
	set_bit(&(Global_2460486.f_4660.f_18), iParam0);
}

void func_188(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

bool func_189(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return true;
		
		default:
	}
	return false;
}

void func_190(float fParam0)
{
	Vector3 fVar0;
	
	if (get_hash_key(get_this_script_name()) == func_191())
	{
		return;
	}
	fVar0 = Global_2460486.f_4655 - fParam0;
	if (is_thread_active(Global_2460486.f_4656))
	{
		if (!Global_2460486.f_4656 == get_id_of_this_thread() && absf(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2460486.f_4655 = fParam0;
	Global_2460486.f_4656 = get_id_of_this_thread();
}

int func_191()
{
	switch (func_192())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

auto func_192()
{
	return Global_25120;
}

float func_193(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_194(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return true;
		
		default:
	}
	return false;
}

bool func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return true;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return true;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return true;
	}
	return false;
}

float func_196(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

bool func_197(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return true;
		
		default:
	}
	return false;
}

void func_198(Vector3 vParam0, int iParam1, int iParam2)
{
	Global_2404956.f_39.f_49 = {vParam0};
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

int func_199(int iParam0, int iParam1)
{
	return is_bit_set(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

bool func_200(int iParam0)
{
	if (func_201(iParam0))
	{
		if (func_202(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_201(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_166(iParam0, 9);
	}
	return false;
}

void func_203(int iParam0, Vector3 fParam1)
{
	int iVar0;
	
	iVar0 = func_206(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_204();
	}
}

void func_204()
{
	if (!func_205(player_id()))
	{
		func_186(25);
	}
}

int func_205(int iParam0)
{
	return func_166(iParam0, 25);
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10461;
		
		case 142:
			return Global_262145.f_10449;
		
		case 157:
			return Global_262145.f_10416;
		
		case 159:
			return Global_262145.f_10399;
		
		case 162:
			return Global_262145.f_10510;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, false);
	}
	return false;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return is_bit_set(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return false;
}

int func_209(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 2);
}

void func_210(auto uParam0, int iParam1, int iParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int[] iVar1 = new int[32];
	int iVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	Vector3 fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_328(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = false;
	iVar50 = 0;
	*uParam3.f_36 = 0;
	if (func_326() || iParam2 == 24)
	{
		if (func_282(iParam1, iParam2, uParam3, Global_1573685, 0, func_324()))
		{
			func_281(1);
			if ((!func_279() && !func_277()) || is_bit_set(Global_2460486.f_4426, true))
			{
				if (func_276())
				{
					func_273();
				}
				else
				{
					_set_screen_draw_position(76, 84);
					if (*uParam3.f_27 == 0)
					{
						func_272(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_271(iParam1);
							if (is_bit_set(*uParam3.f_33, 7))
							{
								clear_bit(uParam3.f_33, 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = false;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = false;
							while (iVar52 < 32)
							{
								if (func_705(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
									if (!func_126(iVar35, 0))
									{
										if ((_0x9DE986FC9A87C474(iVar35, player_id()) || Global_2418472[iVar35 /*313*/].f_232 != -1) || func_94(iVar35))
										{
											iVar44 = iVar35;
											if (func_201(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_268(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_266(player_id(), 0))
						{
							iVar34 = iVar0 > 0;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							if (func_264())
							{
								if (func_705(int_to_playerindex(iVar52), 0, 1))
								{
									iVar35 = int_to_playerindex(iVar52);
								}
								else
								{
									iVar35 = func_69();
								}
							}
							else
							{
								iVar35 = *(uParam0[iVar52 /*47*/]).f_1;
							}
							if ((func_263(iVar35) && func_258(iVar35, iParam2)) && func_705(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
								Var38 = {func_253(iVar35)};
								if (iVar35 == player_id())
								{
									*uParam3.f_35 = iVar53;
								}
								StringCopy(uParam3.f_1, get_player_name(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = {func_71(iVar35)};
								iVar37 = func_247(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = get_pedheadshot_txd_string(iVar37);
								}
								Global_1573685++;
								if (*(uParam0[iVar52 /*47*/]).f_22 != -1f)
								{
									fVar45 = *(uParam0[iVar52 /*47*/]).f_22;
								}
								if (*(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									iVar46 = *(uParam0[iVar52 /*47*/]).f_30;
								}
								if (*(uParam0[iVar52 /*47*/]).f_46 != -1)
								{
									iVar47 = *(uParam0[iVar52 /*47*/]).f_46;
								}
								iVar43 = *(uParam0[iVar52 /*47*/]).f_9;
								if ((*(uParam0[iVar52 /*47*/]).f_9 != -1 || *(uParam0[iVar52 /*47*/]).f_22 != -1f) || *(uParam0[iVar52 /*47*/]).f_30 != -1)
								{
									if (!func_264())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_242(&iVar43, &fVar45, *(uParam0[iVar52 /*47*/]).f_9, iParam5);
									StringCopy(uParam3.f_104, func_241(iParam5, 1, 0, 0), 16);
								}
								if (iParam6)
								{
									iVar48 = *(uParam0[iVar52 /*47*/]).f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_235(iVar35, 0);
								if (iVar34)
								{
									if (func_234(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = iVar0 + iVar56;
										iVar56++;
									}
								}
								*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
								if (func_233(iParam5))
								{
									func_232(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								else
								{
									func_232(iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, uParam0[iVar52 /*47*/].f_37, uParam0[iVar52 /*47*/].f_41, *(uParam0[iVar52 /*47*/]).f_45, iVar48, iParam6);
								}
								set_bit(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = false;
						while (iVar52 < 32)
						{
							iVar35 = int_to_playerindex(iVar52);
							if (func_705(iVar35, 0, 1) && !is_bit_set(iVar49, iVar35))
							{
								iVar35 = int_to_playerindex(iVar52);
							}
							else
							{
								iVar35 = func_69();
							}
							if (func_263(iVar35))
							{
								if (func_705(int_to_playerindex(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587523[iVar44 /*444*/].f_195.f_6;
									Var38 = {func_253(iVar35)};
									*(uParam4[iVar52 /*13*/]) = {func_71(iVar35)};
									iVar37 = func_247(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = get_pedheadshot_txd_string(iVar37);
									}
									Global_1573685++;
									iVar51 = func_235(iVar35, 1);
									if (iVar34)
									{
										if (func_234(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = iVar0 + iVar56;
											iVar56++;
										}
									}
									*(uParam3.f_38[iVar44 /*2*/]).f_1 = iVar53;
									func_224(get_player_name(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (is_bit_set(*uParam3.f_33, 11))
						{
							func_221(uParam3, iParam1);
						}
						func_220(uParam3.f_21);
						func_219();
						*uParam3.f_27 = 2;
					}
					if (*uParam3.f_27 == 2)
					{
						if (!is_bit_set(*uParam3.f_33, 7))
						{
							func_218(uParam3, iParam1);
							func_217(iParam1, 0, 1);
							set_bit(uParam3.f_33, 7);
						}
						func_218(uParam3, iParam1);
						if (!is_bit_set(*uParam3.f_33, 11))
						{
							set_bit(uParam3.f_33, 11);
						}
						if (func_213(uParam3))
						{
							Global_1573833 = 1;
						}
						func_211(uParam3);
						if (Global_1573833 == 1)
						{
							*uParam3.f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							*uParam3.f_27 = 0;
						}
					}
					if (has_scaleform_movie_loaded(*iParam1))
					{
						_set_2d_layer(7);
						draw_scaleform_movie(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_set_2d_layer(4);
					}
				}
			}
		}
		else
		{
			*uParam3.f_27 = 0;
			func_219();
			func_272(0);
			if (is_bit_set(*uParam3.f_33, 7))
			{
				clear_bit(uParam3.f_33, 7);
			}
			if (is_bit_set(*uParam3.f_33, 10))
			{
				clear_bit(uParam3.f_33, 10);
			}
		}
	}
	_0xE3A3DB414A373DAB();
}

void func_211(auto uParam0)
{
	if (!func_9(uParam0.f_21))
	{
		func_8(uParam0.f_21, 0, 0);
	}
	else if (func_6(uParam0.f_21, 250, 0))
	{
		func_220(uParam0.f_21);
		func_212(0);
	}
}

void func_212(int iParam0)
{
	if (iParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_213(auto uParam0)
{
	auto uVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	uVar0 = *uParam0.f_37;
	iVar15 = int_to_playerindex(*uParam0.f_37);
	if (iVar15 != func_69() && func_705(iVar15, 0, 1))
	{
		Var2 = {func_71(iVar15)};
		iVar1 = func_216(uParam0, *uParam0.f_37);
		if (func_215(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, uVar0, 2);
						}
					}
					else if (network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_214(uParam0, uVar0, 1);
					}
					break;
				
				case 2:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_talking(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, uVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_214(uParam0, uVar0, 0);
					}
					break;
				
				case 1:
					if (network_can_communicate_with_gamer(&Var2))
					{
						if (!network_is_gamer_muted_by_me(&Var2))
						{
							iVar16 = 1;
							func_214(uParam0, uVar0, 0);
						}
					}
					else if (!network_is_gamer_muted_by_me(&Var2))
					{
						iVar16 = 1;
						func_214(uParam0, uVar0, 0);
					}
					break;
				}
			}
	}
	*uParam0.f_37++;
	if (*uParam0.f_37 >= 32)
	{
		*uParam0.f_37 = 0;
	}
	return iVar16;
}

void func_214(auto uParam0, auto uParam1, int iParam2)
{
	*uParam0.f_38[uParam1 /*2*/] = iParam2;
}

int func_215(auto uParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

auto func_216(auto uParam0, auto uParam1)
{
	return *uParam0.f_38[uParam1 /*2*/];
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	if (_push_scaleform_movie_function(*iParam0, "COLLAPSE"))
	{
		_push_scaleform_movie_function_parameter_bool(iParam1);
		_pop_scaleform_movie_function_void();
	}
	if (iParam2 == 1)
	{
		if (_push_scaleform_movie_function(*iParam0, "DISPLAY_VIEW"))
		{
			_pop_scaleform_movie_function_void();
		}
	}
}

void func_218(auto uParam0, int iParam1)
{
	if (!is_bit_set(*uParam0.f_33, 10))
	{
		_push_scaleform_movie_function(*iParam1, "SET_HIGHLIGHT");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_35);
		_pop_scaleform_movie_function_void();
		set_bit(uParam0.f_33, 10);
	}
}

void func_219()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_220(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_221(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (iVar2 != func_69())
		{
			if (func_705(iVar2, 0, 1))
			{
				if (*(uParam0.f_38[iVar0 /*2*/]).f_1 != -1)
				{
					iVar1 = func_223(*uParam0.f_38[iVar0 /*2*/], 0);
					func_222(iParam1, *(uParam0.f_38[iVar0 /*2*/]).f_1, iVar1, Global_1587523[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_222(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*uParam0))
	{
		if (_push_scaleform_movie_function(*uParam0, "SET_ICON"))
		{
			_push_scaleform_movie_function_parameter_int(iParam1);
			_push_scaleform_movie_function_parameter_int(iParam2);
			if (iParam2 == 65)
			{
				_push_scaleform_movie_function_parameter_int(iParam3);
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (iParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_224(char* sParam0, int iParam1, auto uParam2, int iParam3, char* sParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_231() && iParam3 < func_230())
	{
		iParam3 %= 16;
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (_push_scaleform_movie_function(*iParam1, sVar1))
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
			if (is_bit_set(*uParam2.f_33, 8) || *uParam2.f_108 == 6)
			{
				func_229("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(iParam9);
			}
			func_229(sParam0);
			_push_scaleform_movie_function_parameter_int(iParam10);
			if (*uParam2.f_108 == 6)
			{
				func_229("");
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(65);
			}
			_push_scaleform_movie_function_parameter_int(-1);
			func_229("");
			if (*uParam2.f_108 == 6)
			{
				func_229("");
			}
			else
			{
				func_229(&sParam4);
			}
			_push_scaleform_movie_function_parameter_bool(*uParam2.f_36);
			_push_scaleform_movie_function_parameter_string(sParam8);
			_push_scaleform_movie_function_parameter_string(sParam8);
			if (func_228(uParam2))
			{
				func_227("DPAD_FRIEND");
			}
			else if (func_226(uParam2))
			{
				func_227("DPAD_FRIEND");
			}
			else if (func_225(uParam2))
			{
				func_227("DPAD_CREW");
			}
			else
			{
				func_227("");
			}
			_pop_scaleform_movie_function_void();
		}
	}
}

int func_225(auto uParam0)
{
	return is_bit_set(*uParam0.f_33, 6);
}

int func_226(auto uParam0)
{
	return is_bit_set(*uParam0.f_33, 5);
}

void func_227(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

bool func_228(auto uParam0)
{
	if (func_226(uParam0) && func_225(uParam0))
	{
		return true;
	}
	return false;
}

void func_229(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_230()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_231()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_232(int iParam0, auto uParam1, int iParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, Vector3 fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_231() && iParam2 < func_230())
	{
		iParam2 %= 16;
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (iParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (has_scaleform_movie_loaded(*iParam0))
		{
			if (_push_scaleform_movie_function(*iParam0, sVar1))
			{
				_push_scaleform_movie_function_parameter_int(iParam2);
				if (is_bit_set(*uParam1.f_33, 8) || *uParam1.f_108 == 6)
				{
					func_229("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(iParam8);
				}
				if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					func_227(sParam15);
				}
				else
				{
					func_229(uParam1.f_1);
				}
				_push_scaleform_movie_function_parameter_int(iParam10);
				if (*uParam1.f_108 == 6)
				{
					func_229("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(65);
				}
				if (iParam11 == 1)
				{
					_push_scaleform_movie_function_parameter_int(iVar0);
				}
				else
				{
					_push_scaleform_movie_function_parameter_int(-1);
				}
				if (func_264())
				{
					func_229("");
				}
				else if (*uParam1.f_108 == 6 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 5 && !is_string_null_or_empty(sParam15))
				{
					_begin_text_component("FM_AE_ONE_INT");
					_add_text_component_item_string(sParam15);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if ((*uParam1.f_108 == 7 && !is_string_null_or_empty(sParam15)) && !is_string_null_or_empty(sParam16))
				{
					_begin_text_component("FM_AE_TWO_INT");
					_add_text_component_item_string(sParam15);
					_add_text_component_item_string(sParam16);
					add_text_component_integer(iParam17);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 8 && !is_string_null_or_empty(uParam1.f_104))
				{
					_begin_text_component("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						add_text_component_float(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						add_text_component_integer(iParam9);
					}
					_add_text_component_item_string(uParam1.f_104);
					_end_text_component();
				}
				else if (*uParam1.f_108 == 9)
				{
					_begin_text_component("FM_AE_CASH");
					_add_text_component_substring_cash(iParam9, 1);
					_end_text_component();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !is_string_null_or_empty(uParam1.f_104))
					{
						func_227(uParam1.f_104);
					}
					else
					{
						func_229("");
					}
				}
				else if (iParam13 != -1)
				{
					_begin_text_component("STRING");
					add_text_component_substring_time(iParam13, 6);
					_end_text_component();
				}
				else if (fParam12 != -1f)
				{
					_begin_text_component("NUMBER");
					add_text_component_float(fParam12, 1);
					_end_text_component();
				}
				else if (iParam9 != -1)
				{
					_push_scaleform_movie_function_parameter_int(iParam9);
				}
				else
				{
					func_229("");
				}
				if (*uParam1.f_108 == 6)
				{
					func_229("");
				}
				else
				{
					func_229(&sParam3);
				}
				_push_scaleform_movie_function_parameter_bool(*uParam1.f_36);
				if (iParam11 == 1 || is_string_null_or_empty(sParam7))
				{
					func_229("");
					func_229("");
				}
				else
				{
					_push_scaleform_movie_function_parameter_string(sParam7);
					_push_scaleform_movie_function_parameter_string(sParam7);
				}
				if (func_228(uParam1))
				{
					func_227("DPAD_FRIEND");
				}
				else if (func_226(uParam1))
				{
					func_227("DPAD_FRIEND");
				}
				else if (func_225(uParam1))
				{
					func_227("DPAD_CREW");
				}
				else
				{
					func_227("");
				}
				_pop_scaleform_movie_function_void();
			}
		}
	}
}

bool func_233(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_234(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_201(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_69();
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!iParam1 && func_112(iParam0)) && !func_240(iParam0))
	{
		iVar0 = func_239();
	}
	iVar1 = func_238(iParam0);
	if (!iVar1 == -1)
	{
		return func_236(iVar1);
	}
	return iVar0;
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_237(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

auto func_237(auto uParam0)
{
	return Global_2413760.f_1946.f_44[uParam0 /*2*/].f_1;
}

int func_238(int iParam0)
{
	if (!iParam0 == func_69())
	{
		if (func_234(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_70(iParam0)];
		}
	}
	return -1;
}

int func_239()
{
	return 21;
}

int func_240(int iParam0)
{
	return func_166(iParam0, 20);
}

char* func_241(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_M_LB";
				}
				else if (iParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (iParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (iParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (iParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (iParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (iParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (iParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 || iParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (iParam1 || iParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

bool func_242(auto uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_246(iParam3))
	{
		*fParam1 = func_243(iParam3, iParam2) / 10f;
		return true;
	}
	if (func_233(iParam3))
	{
		*fParam1 = func_243(iParam3, iParam2) / 1000f;
		return true;
	}
	*uParam0 = iParam2;
	return false;
}

float func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_245(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_244(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_244(Vector3 fParam0)
{
	return fParam0 / 1.609344f;
}

float func_245(Vector3 fParam0)
{
	return fParam0 / 0.3048f;
}

bool func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return true;
		
		default:
	}
	return false;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		func_248(iParam0, 1);
		return 0;
	}
	Global_1348553[iVar0 /*5*/].f_4 = 1;
	return Global_1348553[iVar0 /*5*/].f_2;
}

void func_248(int iParam0, int iParam1)
{
	if (!func_705(iParam0, 0, 1))
	{
		return;
	}
	if (func_250(iParam0) != -1)
	{
		return;
	}
	if (Global_1348716)
	{
		if (iParam0 == Global_1348716.f_1)
		{
			return;
		}
	}
	if (func_249(iParam0))
	{
		return;
	}
	if (Global_1348754 >= 32)
	{
		return;
	}
	Global_1348721[Global_1348754] = iParam0;
	Global_1348754++;
	if (iParam1)
	{
	}
}

bool func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348754)
	{
		if (Global_1348721[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (!func_705(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348714 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348714)
	{
		if (Global_1348553[iVar0 /*5*/].f_1 == iParam0)
		{
			if (is_pedheadshot_valid(Global_1348553[iVar0 /*5*/].f_2) && is_pedheadshot_ready(Global_1348553[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_251(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_251(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348714)
	{
		return;
	}
	if (is_pedheadshot_valid(Global_1348553[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348553[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, get_pedheadshot_txd_string(Global_1348553[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unregister_pedheadshot(Global_1348553[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348714)
	{
		Global_1348553[iVar32 /*5*/] = {Global_1348553[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_252(&(Global_1348553[iVar32 /*5*/]));
	Global_1348714--;
}

void func_252(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = func_69();
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	if (network_is_game_in_progress())
	{
		*uParam0.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_253(int iParam0)
{
	struct<4> Var0;
	
	if (func_705(iParam0, 0, 1))
	{
		Global_2459440 = {func_71(iParam0)};
		if (is_durango_version())
		{
			if (func_215(Global_2459440))
			{
				if (!_0xB57A49545BA53CE7(&Global_2459440))
				{
					return Var0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_257(&Global_2459440))
		{
			Global_2459370 = {func_255(iParam0)};
			func_254(&Global_2459370, &Var0);
		}
	}
	return Var0;
}

void func_254(auto uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_255(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_256(iParam0))
	{
		return Global_1315947[player_id() /*35*/];
	}
	Var0 = {func_71(iParam0)};
	network_clan_player_get_desc(&Var13, 35, &Var0);
	return Var13;
}

bool func_256(int iParam0)
{
	if (iParam0 == player_id())
	{
		return true;
	}
	return false;
}

bool func_257(auto uParam0)
{
	if (is_player_online())
	{
		if (_network_player_is_in_clan() && network_clan_player_is_active(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_209(iParam0) || func_262(iParam0)) || func_261(iParam0))
		{
			return false;
		}
	}
	if (!func_260(iParam0))
	{
		return false;
	}
	if ((!func_259(iParam0) && Global_2418472[iParam0 /*313*/].f_232 == -1) && !func_94(iParam0))
	{
		return false;
	}
	return true;
}

bool func_259(int iParam0)
{
	if (func_705(iParam0, 0, 1))
	{
		if (func_705(player_id(), 0, 1))
		{
			if (_0x9DE986FC9A87C474(iParam0, player_id()))
			{
				return true;
			}
		}
	}
	return false;
}

int func_260(int iParam0)
{
	return is_bit_set(Global_1587523[iParam0 /*444*/].f_131, 22);
}

int func_261(int iParam0)
{
	if (func_209(iParam0))
	{
		return true;
	}
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8);
}

int func_262(auto uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return (is_bit_set(Global_1610316[uParam0 /*174*/].f_1, 10) || is_bit_set(Global_1610316[uParam0 /*174*/].f_1, 9));
	}
	return false;
}

bool func_263(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return false;
	}
	if (func_126(iParam0, 0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (is_bit_set(Global_1587523[iVar0 /*444*/].f_131, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_264()
{
	switch (func_265(player_id()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return true;
			break;
	}
	if (func_240(player_id()))
	{
		switch (func_183(player_id()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return true;
				break;
			}
	}
	return false;
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/];
	}
	return -1;
}

bool func_266(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 && func_267(Global_1610316[iParam0 /*174*/].f_10.f_28))
	{
		return true;
	}
	if (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1)
	{
		if (func_267(Global_1610316[iParam0 /*174*/].f_10.f_27))
		{
			return true;
		}
	}
	return false;
}

bool func_267(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (func_705(int_to_playerindex(iVar0), 0, 1))
		{
			iVar1 = int_to_playerindex(iVar0);
			if (!func_126(iVar1, 0))
			{
				if ((_0x9DE986FC9A87C474(iVar1, player_id()) || Global_2418472[iVar1 /*313*/].f_232 != -1) || func_94(iVar1))
				{
					if (func_269(iVar1, iParam1, 0))
					{
						*iParam0[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_269(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_69())
	{
		if (!iParam2)
		{
			if (func_270(iParam0, iParam1))
			{
				return false;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return false;
}

int func_270(int iParam0, int iParam1)
{
	if (iParam1 != func_69())
	{
		if (iParam0 != func_69())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_69())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return false;
}

void func_271(int iParam0)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_DATA_SLOT_EMPTY");
		_push_scaleform_movie_function_parameter_int(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_272(int iParam0)
{
	if (iParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_273()
{
	if (is_bit_set(Global_2460486.f_4426, true))
	{
		if (func_275())
		{
			func_274();
		}
	}
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
		}
		iVar0++;
	}
}

int func_275()
{
	return Global_2428492.f_2171[0 /*72*/].f_1 != 0;
}

bool func_276()
{
	if (is_bit_set(Global_2460486.f_4426, false) && func_275())
	{
		return true;
	}
	if (is_bit_set(Global_2460486.f_4426, true) && func_275())
	{
		return true;
	}
	return false;
}

bool func_277()
{
	if (func_275())
	{
		if (func_278(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_278(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return true;
		
		default:
	}
	return false;
}

bool func_279()
{
	if (func_275())
	{
		if (func_280(Global_2428492.f_2171[0 /*72*/].f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_280(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return true;
		
		default:
	}
	return false;
}

void func_281(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

bool func_282(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	iVar6 = func_323(iParam1);
	if (iParam1 == 17)
	{
		iVar5 = true;
	}
	fVar7 = func_322();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_321())
		{
			if (func_320() > 0 && Global_1573687)
			{
				_0x25F87B30C382FCA7();
				_0x55598D21339CB998(fVar7);
				hide_hud_component_this_frame(18);
				if (is_help_message_being_displayed())
				{
					hide_help_text_this_frame();
				}
				hide_hud_component_this_frame(10);
			}
		}
	}
	if (!iParam5)
	{
		if (!func_308())
		{
			func_307(iParam0, uParam2, 1);
			return false;
		}
	}
	if (is_bit_set(Global_2460486.f_4429, 26))
	{
		func_307(iParam0, uParam2, 1);
		return false;
	}
	if (!func_9(uParam2.f_19))
	{
		if (func_320() == 1)
		{
			func_306(iVar6, iParam0, 0);
			func_8(uParam2.f_19, 0, 0);
			func_307(iParam0, uParam2, 0);
		}
	}
	if (func_9(uParam2.f_19) || iParam5)
	{
		if (is_help_message_being_displayed())
		{
			hide_help_text_this_frame();
		}
		hide_hud_component_this_frame(10);
		if (func_6(uParam2.f_19, 10000, 0) || (func_320() == 0 && !iParam5))
		{
			func_307(iParam0, uParam2, 1);
			return false;
		}
		else
		{
			if (iVar5 == 0)
			{
				func_305();
				if (iParam1 == 23 || iParam1 == 24)
				{
					_0x25F87B30C382FCA7();
				}
				hide_hud_component_this_frame(18);
			}
			if (is_bit_set(*uParam2.f_33, false))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				_0x55598D21339CB998(fVar7);
				if (iVar5)
				{
					if (*uParam2.f_34 != Global_1573686)
					{
						clear_bit(uParam2.f_33, false);
					}
				}
				return true;
			}
			else
			{
				if (iVar5 == 0)
				{
					func_305();
					if (iParam1 == 23 || iParam1 == 24)
					{
						_0x25F87B30C382FCA7();
					}
					hide_hud_component_this_frame(18);
				}
				_0x55598D21339CB998(fVar7);
				if (func_306(iVar6, iParam0, 0))
				{
					func_271(iParam0);
					sVar4 = func_303(iParam1, &(Global_1617379.f_70372), iParam4);
					if (iParam4)
					{
						func_300(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_293(iParam0, func_297(uParam2), func_294(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_290(iParam0, func_292(), func_291(), -1);
					}
					else if (iVar5)
					{
						*uParam2.f_34 = Global_1573686;
						func_300(iParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = {func_288(iParam1)};
						iVar8 = func_283(iParam1);
						func_300(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					set_bit(uParam2.f_33, false);
				}
			}
		}
	}
	return false;
}

int func_283(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_287())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_286(player_id()))
			{
				iVar0 = 20;
			}
			if (func_285(player_id()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_284(player_id()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_284(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 4;
}

int func_285(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

int func_286(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_287()
{
	return Global_1617379.f_1 == 0;
}

struct<4> func_288(int iParam0)
{
	char[16] cVar0;
	
	StringCopy(&cVar0, "", 16);
	if (func_289(player_id()) || func_284(player_id()))
	{
		return cVar0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&cVar0, "LBD_DIF_", 16);
			StringIntConCat(&cVar0, Global_1617379.f_23, 16);
			break;
	}
	return cVar0;
}

int func_289(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 5;
}

void func_290(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_227(sParam1);
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_227("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_291()
{
	switch (func_183(player_id()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_292()
{
	switch (func_183(player_id()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_293(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (is_string_null_or_empty(sParam2))
		{
			func_227(sParam1);
		}
		else if (func_265(player_id()) == 133)
		{
			_begin_text_component("FM_AE_BRACKT_C");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		else
		{
			_begin_text_component("FM_AE_BRACKT");
			_add_text_component_item_string(sParam1);
			_add_text_component_item_string(sParam2);
			_end_text_component();
		}
		func_227("");
		if (iParam3 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam3);
		}
		_pop_scaleform_movie_function_void();
	}
}

char* func_294(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_265(player_id());
	if (func_296())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_295())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_295()
{
	if (func_265(player_id()) == 133)
	{
		return Global_2460486.f_4647;
	}
	return -1;
}

auto func_296()
{
	return Global_1587522;
}

char* func_297(auto uParam0)
{
	int iVar0;
	
	iVar0 = func_265(player_id());
	if (func_296())
	{
		if (*uParam0.f_103 != -1)
		{
			iVar0 = *uParam0.f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_299() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_299() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_295())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_298() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

auto func_298()
{
	return Global_2460486.f_4650;
}

int func_299()
{
	if (func_265(player_id()) == 132)
	{
		return Global_2460486.f_4645;
	}
	return -1;
}

void func_300(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (has_scaleform_movie_loaded(*iParam0))
	{
		_push_scaleform_movie_function(*iParam0, "SET_TITLE");
		if (iParam3)
		{
			func_229(sParam1);
		}
		else if (iParam5 != -1)
		{
			_begin_text_component(sParam1);
			add_text_component_integer(iParam5);
			_end_text_component();
		}
		else
		{
			func_227(sParam1);
		}
		if (func_321() && iParam6)
		{
			if (func_302())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = true;
				iVar1 = 2;
			}
			_begin_text_component("LBD_DPD_CNT");
			add_text_component_integer(iVar0);
			add_text_component_integer(iVar1);
			_end_text_component();
		}
		else
		{
			func_227(sParam2);
		}
		if (iParam4 != -1)
		{
			_push_scaleform_movie_function_parameter_int(iParam4);
			if (func_301(player_id()))
			{
				_push_scaleform_movie_function_parameter_int(166);
			}
		}
		_pop_scaleform_movie_function_void();
	}
}

bool func_301(int iParam0)
{
	if (func_286(iParam0) || func_285(iParam0))
	{
		return true;
	}
	return false;
}

auto func_302()
{
	return Global_1573687;
}

char* func_303(int iParam0, char* sParam1, int iParam2)
{
	auto uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_304();
		return uVar0;
	}
	else if (iParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!is_string_null_or_empty(sParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_304()
{
	if (_0xFBCFA2EA2E206890())
	{
		return "HUD_LBD_FMF";
	}
	if (_0x74732C6CA90DA2B4())
	{
		return "HUD_LBD_FMC";
	}
	if (_0xF3929C2379B60CCE())
	{
		return "HUD_LBD_FMS";
	}
	if (_0xCEF70AA5B3F89BA1())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_305()
{
	Global_36611 = 1;
}

int func_306(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (iParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return has_scaleform_movie_loaded(*iParam1);
}

void func_307(int iParam0, auto uParam1, int iParam2)
{
	clear_bit(uParam1.f_33, 7);
	Global_1573685 = 0;
	func_219();
	Global_1573684 = 0;
	*uParam1.f_27 = 0;
	if (iParam2)
	{
		if (func_9(uParam1.f_19))
		{
			func_220(uParam1.f_19);
		}
	}
	if (has_scaleform_movie_loaded(*iParam0))
	{
		set_scaleform_movie_as_no_longer_needed(iParam0);
	}
	if (is_bit_set(*uParam1.f_33, false))
	{
		clear_bit(uParam1.f_33, false);
	}
	_0x55598D21339CB998(0f);
}

bool func_308()
{
	if (func_319())
	{
		return false;
	}
	if (func_318())
	{
		return false;
	}
	if (!func_316())
	{
		return false;
	}
	if (!func_314())
	{
		return false;
	}
	if (func_313(8, -1))
	{
		return false;
	}
	if (func_320() == 2)
	{
		return false;
	}
	if (Global_2460486.f_4404)
	{
		return false;
	}
	if (func_312())
	{
		return false;
	}
	else if (!func_27(player_id(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return false;
	}
	if (((func_311(1) || func_309(1)) || Global_17118.f_124) || Global_17118)
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (func_74(player_id()))
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (Global_1715402)
	{
		return false;
	}
	if (func_171(0))
	{
		return false;
	}
	if (is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 4))
	{
		return false;
	}
	return true;
}

bool func_309(int iParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (func_310(player_ped_id()))
			{
				if (is_control_pressed(0, 25) || is_control_pressed(0, 68))
				{
					return false;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return false;
	}
	if (is_control_pressed(0, 19) || (!iParam0 && is_disabled_control_pressed(0, 19)))
	{
		return true;
	}
	if (is_pc_version())
	{
		if (((is_control_pressed(0, 166) || is_control_pressed(0, 167)) || is_control_pressed(0, 168)) || is_control_pressed(0, 169))
		{
			return true;
		}
		if (!iParam0)
		{
			if (((is_disabled_control_pressed(0, 166) || is_disabled_control_pressed(0, 167)) || is_disabled_control_pressed(0, 168)) || is_disabled_control_pressed(0, 169))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_310(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!is_ped_injured(iParam0))
		{
			get_current_ped_weapon(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

int func_311(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

int func_312()
{
	return Global_1587523[player_id() /*444*/].f_180 != 0;
}

int func_313(int iParam0, int iParam1)
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

bool func_314()
{
	if (func_315() == 0)
	{
		return true;
	}
	return false;
}

auto func_315()
{
	return Global_1312466.f_18;
}

bool func_316()
{
	if (func_317())
	{
		return true;
	}
	if (is_screen_faded_out())
	{
		return false;
	}
	if (is_screen_fading_out() || is_screen_fading_in())
	{
		return false;
	}
	if (is_frontend_fading())
	{
		return false;
	}
	return true;
}

auto func_317()
{
	return Global_1312438;
}

int func_318()
{
	return Global_1587523[player_id() /*444*/] == 5;
}

int func_319()
{
	return get_game_timer() <= Global_17257.f_5745 + 100;
}

auto func_320()
{
	return Global_1338622.f_68;
}

bool func_321()
{
	if (Global_1573686 > 16)
	{
		return true;
	}
	return false;
}

float func_322()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = 1f - 1f - get_safe_zone_size();
	fVar0 = 1f - fVar1 - fVar2;
	return fVar0;
}

bool func_323(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return true;
			break;
	}
	return false;
}

int func_324()
{
	if (func_325(player_id()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_325(int iParam0)
{
	if (network_is_game_in_progress())
	{
		if (func_126(iParam0, 0))
		{
			return network_player_is_rockstar_dev(iParam0);
		}
	}
	return false;
}

bool func_326()
{
	if (func_324())
	{
		return true;
	}
	if (func_261(player_id()))
	{
		return false;
	}
	if (func_296())
	{
		return true;
	}
	if (func_112(player_id()))
	{
		switch (func_265(player_id()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return true;
				break;
			
			case 140:
				if (!func_327(player_id()))
				{
					return true;
				}
				break;
			
			case 129:
				if (!func_327(player_id()))
				{
					return true;
				}
				break;
			}
	}
	return false;
}

int func_327(int iParam0)
{
	return is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 4);
}

bool func_328(int iParam0)
{
	if ((iParam0 == 24 && func_112(player_id())) && !func_240(player_id()))
	{
		return true;
	}
	if (iParam0 == 23)
	{
		if (func_111(player_id(), 0) && func_240(player_id()))
		{
			return true;
		}
		if (func_329(player_id()) == 3)
		{
			return true;
		}
	}
	return false;
}

int func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	auto uVar4;
	
	iVar0 = 2;
	iVar1 = ((func_112(iParam0) && !func_209(iParam0)) && !is_bit_set(Global_1610316[iParam0 /*174*/].f_1, 8));
	iVar2 = func_240(iParam0);
	uVar3 = func_337();
	uVar4 = func_331();
	if ((iVar1 && (func_208(iParam0) || func_207(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!iVar2 && !func_202(iParam0)) && !func_330(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2460486.f_4660.f_22 != iVar0)
	{
		Global_2460486.f_4660.f_22 = iVar0;
	}
	return iVar0;
}

int func_330(int iParam0)
{
	return func_166(iParam0, 19);
}

bool func_331()
{
	if ((func_166(player_id(), 21) || func_166(player_id(), 22)) || func_334())
	{
		return true;
	}
	if (func_332())
	{
		func_186(22);
		return true;
	}
	return false;
}

bool func_332()
{
	if (func_111(player_id(), 0))
	{
		if ((func_337() && !func_333()) || func_199(player_id(), 21))
		{
			if (!func_166(player_id(), 27))
			{
				return true;
			}
		}
		else
		{
			func_185(27);
		}
	}
	return false;
}

auto func_333()
{
	return Global_1312416.f_1;
}

int func_334()
{
	return func_335(283, -1);
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_336(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_128();
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

auto func_337()
{
	return Global_1312416;
}

int func_338()
{
	return is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, true);
}

void func_339()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_340(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_340(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (get_event_data(1, iParam0, &Var0, 10))
	{
		if (Local_192.f_34 > -1)
		{
			if (func_338())
			{
				if (!func_331())
				{
					if (!is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 5))
					{
						if (!is_bit_set(Local_192.f_1, 4))
						{
							if (does_entity_exist(Var0))
							{
								if (Var0.f_3)
								{
									if (is_entity_a_ped(Var0))
									{
										iVar11 = get_ped_index_from_entity_index(Var0);
										if (is_ped_a_player(iVar11))
										{
											iVar12 = _network_get_ped_player(iVar11);
											if (iVar12 == int_to_playerindex(Local_192.f_34))
											{
												if (does_entity_exist(Var0.f_1))
												{
													if (is_entity_a_ped(Var0.f_1))
													{
														iVar10 = get_ped_index_from_entity_index(Var0.f_1);
														if (is_ped_a_player(iVar10))
														{
															iVar13 = _network_get_ped_player(iVar10);
															if (iVar13 == player_id())
															{
																set_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 5);
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
				}
			}
		}
	}
	if (func_338())
	{
		if (!func_166(player_id(), 20))
		{
			if (does_entity_exist(Var0))
			{
				if (is_entity_a_ped(Var0))
				{
					iVar11 = get_ped_index_from_entity_index(Var0);
					if (is_ped_a_player(iVar11))
					{
						iVar12 = _network_get_ped_player(iVar11);
						if (does_entity_exist(Var0.f_1))
						{
							if (is_entity_a_ped(Var0.f_1))
							{
								iVar10 = get_ped_index_from_entity_index(Var0.f_1);
								if (is_ped_a_player(iVar10))
								{
									iVar13 = _network_get_ped_player(iVar10);
									if (iVar13 == player_id())
									{
										if (network_is_player_a_participant(iVar12))
										{
											if (func_234(iVar12, 1))
											{
												if (Local_192.f_33 > -1)
												{
													iVar14 = network_get_player_index(int_to_participantindex(Local_192.f_33));
													if (func_269(iVar12, iVar14, 1))
													{
														func_341(0);
														func_204();
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
		}
	}
}

void func_341(int iParam0)
{
	if (!func_240(player_id()))
	{
		if (iParam0 || func_329(player_id()) != 0)
		{
			func_186(20);
			if (func_112(player_id()))
			{
				if (!is_bit_set(Global_1610316[player_id() /*174*/].f_1, 8))
				{
					set_bit(&(Global_1610316[player_id() /*174*/].f_1), 8);
				}
			}
		}
	}
}

void func_342()
{
	switch (Local_252[participant_id_to_int() /*6*/].f_2)
	{
		case 0:
			func_532();
			func_343();
			if (Local_192.f_32 == 2)
			{
				Local_252[participant_id_to_int() /*6*/].f_2 = 2;
			}
			else if (Local_192.f_32 == 3)
			{
				Local_252[participant_id_to_int() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_343();
			if (Local_192.f_32 == 3)
			{
				Local_252[participant_id_to_int() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_675();
			break;
	}
}

void func_343()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar10 = func_69();
	iVar11 = func_69();
	iVar12 = func_69();
	if (!is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 4))
	{
		if (!is_bit_set(iLocal_445, 9))
		{
			if (is_bit_set(Local_192.f_1, true))
			{
				if (participant_id_to_int() == Local_192.f_33 || func_663() == Local_192.f_33)
				{
					if (func_329(player_id()) >= 2)
					{
						sVar13 = func_531();
						iVar14 = func_530(player_id());
						func_528(85, "GB_WINNER", "BIGM_SGHTYD", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
					}
					if (!is_bit_set(iLocal_445, 6))
					{
						func_527(1, 1);
						set_bit(&iLocal_445, 6);
					}
					func_409(142, 1, &Var0);
					clear_player_wanted_level(player_id());
				}
				else if (func_338())
				{
					if (func_234(player_id(), 1))
					{
						if (func_329(player_id()) >= 2)
						{
							sVar13 = func_405(int_to_playerindex(Local_192.f_34));
							iVar14 = func_530(int_to_playerindex(Local_192.f_34));
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!is_bit_set(iLocal_445, 6))
						{
							func_527(0, 2);
							set_bit(&iLocal_445, 6);
						}
						func_409(142, 0, &Var0);
					}
					else
					{
						if (func_329(player_id()) >= 2)
						{
							sVar13 = func_405(int_to_playerindex(Local_192.f_34));
							iVar14 = func_530(int_to_playerindex(Local_192.f_34));
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						if (!is_bit_set(iLocal_445, 6))
						{
							func_527(0, 2);
							set_bit(&iLocal_445, 6);
						}
						func_409(142, 0, &Var0);
					}
				}
				set_bit(&iLocal_445, 9);
			}
			else if (is_bit_set(Local_192.f_1, 3))
			{
				func_404(86, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2);
				if (!is_bit_set(iLocal_445, 6))
				{
					func_527(0, 7);
					set_bit(&iLocal_445, 6);
				}
				func_409(142, 0, &Var0);
				set_bit(&iLocal_445, 9);
			}
			else if (is_bit_set(Local_192.f_1, 4))
			{
				if (Local_192.f_35 > -1)
				{
					iVar11 = int_to_playerindex(Local_192.f_35);
				}
				if (participant_id_to_int() == Local_192.f_33)
				{
					if (func_329(player_id()) >= 2)
					{
						if (network_is_player_active(iVar11))
						{
							if (func_234(iVar11, 1))
							{
								sVar13 = func_405(iVar11);
								iVar14 = func_530(iVar11);
							}
							else
							{
								sVar13 = get_player_name(iVar11);
								iVar14 = 1;
							}
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
						}
					}
					func_409(142, 0, &Var0);
					if (!is_bit_set(iLocal_445, 6))
					{
						func_527(0, 2);
						set_bit(&iLocal_445, 6);
					}
				}
				else if (func_663() == Local_192.f_33)
				{
					iVar10 = int_to_playerindex(Local_192.f_34);
					if (iVar10 != func_69())
					{
						if (func_329(player_id()) >= 2)
						{
							if (network_is_player_active(iVar11))
							{
								if (func_234(iVar11, 1))
								{
									sVar13 = func_405(iVar11);
									iVar14 = func_530(iVar11);
								}
								else
								{
									sVar13 = get_player_name(iVar11);
									iVar14 = 1;
								}
								func_528(86, "GB_WORK_OVER", "BIGM_SGHTGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_528(86, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
							}
						}
						func_409(142, 0, &Var0);
						if (!is_bit_set(iLocal_445, 6))
						{
							func_527(0, 2);
							set_bit(&iLocal_445, 6);
						}
					}
				}
				else if (func_338())
				{
					iVar11 = int_to_playerindex(Local_192.f_35);
					if (iVar11 != func_69())
					{
						if (iVar11 == player_id())
						{
							if (func_329(player_id()) >= 2)
							{
								if (func_403(1))
								{
									func_404(85, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2);
								}
								else
								{
									func_404(85, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2);
								}
							}
							clear_player_wanted_level(player_id());
							if (!is_bit_set(iLocal_445, 6))
							{
								func_527(1, 1);
								set_bit(&iLocal_445, 6);
							}
							func_409(142, 1, &Var0);
						}
						else if (func_403(1))
						{
							iVar12 = func_402();
							if (func_269(iVar11, iVar12, 1))
							{
								if (func_329(player_id()) >= 2)
								{
									func_383(85, iVar11, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2);
								}
								if (!is_bit_set(iLocal_445, 6))
								{
									func_527(1, 1);
									set_bit(&iLocal_445, 6);
								}
								func_409(142, 0, &Var0);
							}
							else
							{
								if (func_329(player_id()) >= 2)
								{
									if (network_is_player_active(iVar11))
									{
										if (func_234(iVar11, 1))
										{
											sVar13 = func_405(iVar11);
											iVar14 = func_530(iVar11);
										}
										else
										{
											sVar13 = get_player_name(iVar11);
											iVar14 = 1;
										}
										func_528(86, "GB_WORK_OVER", "BIGM_SGHTWK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_404(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
									}
								}
								if (!is_bit_set(iLocal_445, 6))
								{
									func_527(0, 2);
									set_bit(&iLocal_445, 6);
								}
								func_409(142, 0, &Var0);
							}
						}
						else
						{
							if (func_329(player_id()) >= 2)
							{
								if (network_is_player_active(iVar11))
								{
									if (func_234(iVar11, 1))
									{
										sVar13 = func_405(iVar11);
										iVar14 = func_530(iVar11);
									}
									else
									{
										sVar13 = get_player_name(iVar11);
										iVar14 = 1;
									}
									func_528(86, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar13, iVar14, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_404(86, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2);
								}
							}
							if (!is_bit_set(iLocal_445, 6))
							{
								func_527(0, 2);
								set_bit(&iLocal_445, 6);
							}
							func_409(142, 0, &Var0);
						}
					}
				}
				set_bit(&iLocal_445, 9);
			}
			else if (is_bit_set(Local_192.f_1, 5))
			{
				if (func_370())
				{
					if (func_662())
					{
						if (func_329(player_id()) >= 2)
						{
						}
					}
					else if (func_329(player_id()) >= 2)
					{
						func_404(86, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2);
					}
				}
				if (!is_bit_set(iLocal_445, 6))
				{
					func_527(0, 8);
					set_bit(&iLocal_445, 6);
				}
				func_409(159, 0, &Var0);
				set_bit(&iLocal_445, 9);
			}
		}
		if (is_bit_set(iLocal_445, 9))
		{
			func_363();
			if (!is_bit_set(iLocal_446, 8))
			{
				set_bit(&iLocal_446, 8);
			}
			if (!is_bit_set(iLocal_445, 10))
			{
				if (Local_192.f_34 != -1)
				{
					if (is_bit_set(iLocal_445, 5))
					{
						if (network_is_player_active(int_to_playerindex(Local_192.f_34)))
						{
							func_361(int_to_playerindex(Local_192.f_34), 432, 0);
							func_359(int_to_playerindex(Local_192.f_34), 1, 0);
							func_358(int_to_playerindex(Local_192.f_34), 0, 0);
							func_357(int_to_playerindex(Local_192.f_34), 0);
							func_356(int_to_playerindex(Local_192.f_34), Global_262145.f_10294, 0);
							set_bit(&iLocal_445, 10);
						}
					}
				}
			}
			if (func_344(&uLocal_814, 1))
			{
				set_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 4);
			}
		}
	}
}

bool func_344(auto uParam0, int iParam1)
{
	int iVar0;
	
	func_186(29);
	if ((*uParam0 > 0 && !func_275()) && func_329(player_id()) != 0)
	{
		if (!func_355())
		{
			func_354();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(uParam0.f_3))
			{
				func_8(uParam0.f_3, 0, 0);
			}
			else if (func_6(uParam0.f_3, 1000, 0))
			{
				set_bit(&(Global_1727391.f_3), 2);
				if (iParam1)
				{
					set_bit(&(Global_2460486.f_4426), false);
					func_8(uParam0.f_5, 0, 0);
				}
				func_8(uParam0.f_1, 0, 0);
				func_353(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(uParam0.f_5))
			{
				if (func_6(uParam0.f_5, 3000, 0))
				{
					iVar0 = true;
				}
			}
			else
			{
				iVar0 = true;
			}
			if (iVar0)
			{
				func_348();
				func_353(uParam0, 2);
			}
			break;
		
		case 2:
			func_348();
			if (func_6(uParam0.f_1, 15000, 0))
			{
				if (func_345(func_346()))
				{
					clear_help(1);
				}
				func_353(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(uParam0.f_1, 23500, 0))
			{
				clear_bit(&(Global_2460486.f_4426), true);
				clear_bit(&(Global_1727391.f_3), 2);
				func_353(uParam0, 4);
				return true;
			}
			break;
		
		case 4:
			clear_bit(&(Global_2460486.f_4426), true);
			clear_bit(&(Global_1727391.f_3), 2);
			return true;
	}
	return false;
}

int func_345(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

char* func_346()
{
	if (func_267(func_347()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

auto func_347()
{
	return Global_1615885;
}

void func_348()
{
	if (is_bit_set(Global_2460486.f_4426, false))
	{
		if ((((((((!is_radar_hidden() && !is_bit_set(Global_2460486.f_743, 2)) && func_705(player_id(), 1, 1)) && !Global_68058) && !Global_52930) && !is_screen_faded_out()) && !func_166(player_id(), 22)) && func_329(player_id()) != 0) && !func_351(func_352()))
		{
			set_bit(&(Global_2460486.f_4426), true);
			func_350(func_346(), -1);
			func_349(1);
			clear_bit(&(Global_2460486.f_4426), false);
		}
	}
}

void func_349(int iParam0)
{
	if (iParam0 && !func_275())
	{
		play_sound_frontend(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_350(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, false, iParam1);
}

bool func_351(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
		
		default:
	}
	return false;
}

int func_352()
{
	char* sVar0;
	
	sVar0 = get_this_script_name();
	if (are_strings_equal(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (are_strings_equal(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (are_strings_equal(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (are_strings_equal(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (are_strings_equal(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (are_strings_equal(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (are_strings_equal(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (are_strings_equal(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (are_strings_equal(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (are_strings_equal(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_353(auto uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_354()
{
	Global_2444574 = 1;
}

bool func_355()
{
	if (func_183(player_id()) == 170)
	{
		return true;
	}
	return false;
}

void func_356(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (!is_thread_active(Global_2412879.f_691[iParam0]) || Global_2412879.f_691[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			set_bit(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_493[iVar0] = uParam1;
			Global_2412879.f_691[iParam0] = get_id_of_this_thread();
		}
		else
		{
			clear_bit(&(Global_2412879.f_388), iVar0);
			Global_2412879.f_691[iParam0] = -1;
		}
	}
}

void func_357(int iParam0, int iParam1)
{
	if (iParam1)
	{
		set_bit(&(Global_2412879.f_365), iParam0);
	}
	else
	{
		clear_bit(&(Global_2412879.f_365), iParam0);
	}
	if (does_blip_exist(Global_2412879[iParam0]))
	{
		if (iParam1)
		{
			set_blip_as_short_range(Global_2412879[iParam0], false);
		}
		else
		{
			set_blip_as_short_range(Global_2412879[iParam0], true);
		}
	}
}

void func_358(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (func_705(iParam0, 1, 1))
		{
			Global_2412879.f_625[iParam0] = get_id_of_this_thread();
			set_bit(&(Global_2412879.f_364), iParam0);
			func_357(iParam0, iParam2);
		}
	}
	else
	{
		func_357(iParam0, iParam2);
		clear_bit(&(Global_2412879.f_364), iParam0);
		Global_2412879.f_625[iParam0] = -1;
	}
}

void func_359(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_360(iParam0))
	{
		if (iParam2)
		{
			set_bit(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = get_id_of_this_thread();
			Global_2412879.f_427[iVar0] = iParam1;
		}
		else
		{
			clear_bit(&(Global_2412879.f_386), iVar0);
			Global_2412879.f_559[iParam0] = -1;
		}
	}
}

bool func_360(int iParam0)
{
	if (!is_thread_active(Global_2412879.f_559[iParam0]) || Global_2412879.f_559[iParam0] == get_id_of_this_thread())
	{
		return true;
	}
	return false;
}

void func_361(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0 == func_69())
	{
		return;
	}
	if (get_hash_key(get_this_script_name()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!is_thread_active(Global_2412879.f_526[iParam0]) || Global_2412879.f_526[iParam0] == get_id_of_this_thread())
	{
		if (iParam2)
		{
			if (!is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_362();
			}
			set_bit(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_394[iVar0] = uVar1;
			Global_2412879.f_526[iParam0] = get_id_of_this_thread();
		}
		else
		{
			if (is_bit_set(Global_2412879.f_385, iVar0))
			{
				func_362();
			}
			clear_bit(&(Global_2412879.f_385), iVar0);
			Global_2412879.f_526[iParam0] = -1;
		}
	}
}

void func_362()
{
	Global_2412879.f_880 = 1;
}

void func_363()
{
	if (!func_369())
	{
		return;
	}
	if (!get_hash_key(get_this_script_name()) == Global_1312577.f_7)
	{
		return;
	}
	func_364();
}

void func_364()
{
	func_366();
	func_365(0);
}

void func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = network_is_game_in_progress();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (iVar0)
	{
		Global_1312577.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (iParam0)
	{
		return;
	}
}

void func_366()
{
	if (!func_368())
	{
	}
	if (func_369())
	{
		_0xE124FA80A759019C(&(Global_1312577.f_10));
		func_367();
		_0xFCC75460ABA29378();
	}
}

void func_367()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			add_text_component_integer(Global_1312577.f_50);
			return;
		
		case 2:
			add_text_component_integer(Global_1312577.f_50);
			add_text_component_integer(Global_1312577.f_51);
			return;
		
		case 3:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 4:
			_add_text_component_item_string(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 5:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 6:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 7:
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 8:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 9:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 10:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		case 12:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 11:
			_0x5F68520888E69014(&(Global_1312577.f_14));
			return;
		
		case 13:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 14:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_55);
			_add_text_component_item_string(&(Global_1312577.f_30));
			return;
		
		case 16:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			return;
		
		case 15:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			return;
		
		case 18:
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_14));
			return;
		
		case 17:
			add_text_component_substring_player_name(&(Global_1312577.f_14));
			_0x39BBF623FC803EAC(Global_1312577.f_54);
			_add_text_component_item_string(&(Global_1312577.f_46));
			add_text_component_substring_player_name(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_368()
{
	if (!func_369())
	{
		return 0;
	}
	_0x853648FD1063A213(&(Global_1312577.f_10));
	func_367();
	return _0x8A9BA1AB3E237613();
}

bool func_369()
{
	if (Global_1312577 == 19)
	{
		return false;
	}
	return true;
}

bool func_370()
{
	if (!func_371(1))
	{
		return false;
	}
	if (func_331())
	{
		return false;
	}
	return true;
}

bool func_371(int iParam0)
{
	if (func_199(player_id(), 21))
	{
		return false;
	}
	if (network_is_in_tutorial_session())
	{
		return false;
	}
	if (iParam0)
	{
		if (network_is_in_mp_cutscene())
		{
			return false;
		}
	}
	if (func_95(player_id()))
	{
		return false;
	}
	if (func_382())
	{
		return false;
	}
	if (func_318())
	{
		return false;
	}
	if (func_381())
	{
		return false;
	}
	if (func_312())
	{
		return false;
	}
	if (network_is_activity_session())
	{
		return false;
	}
	if (func_28(player_id()))
	{
		return false;
	}
	if (!func_314())
	{
		return false;
	}
	if (func_199(player_id(), 0) || func_199(player_id(), 3))
	{
		return false;
	}
	if ((func_199(player_id(), 12) || func_199(player_id(), 14)) || func_199(player_id(), 13))
	{
		return false;
	}
	if (func_380(player_id(), 0, 0))
	{
		if ((!func_379(Global_1587523[player_id() /*444*/].f_250.f_9) && !func_377(player_id())) || (func_183(player_id()) != 167 && func_183(player_id()) != 168))
		{
			return false;
		}
	}
	if (func_376())
	{
		return false;
	}
	if (Global_1715399)
	{
		return false;
	}
	if (func_375(player_id()))
	{
		return false;
	}
	if (func_374())
	{
		return false;
	}
	if (func_373(player_id()))
	{
		return false;
	}
	if (func_372(player_id()))
	{
		return false;
	}
	return true;
}

bool func_372(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418472[iParam0 /*313*/].f_257.f_5)
	{
		return true;
	}
	return false;
}

bool func_373(int iParam0)
{
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_374()
{
	if (Global_2552549.f_796 > -1)
	{
		return true;
	}
	return false;
}

int func_375(int iParam0)
{
	if (!func_705(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587523[iParam0 /*444*/].f_35;
}

int func_376()
{
	return Global_91330.f_297 > 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_69())
	{
		if (func_705(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_378(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

bool func_379(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
			break;
	}
	return false;
}

bool func_380(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!iParam2)
	{
		if (func_377(iParam0))
		{
			return true;
		}
	}
	return false;
}

auto func_381()
{
	return Global_1315913;
}

int func_382()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, false);
}

int func_383(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_384(&Var0);
}

bool func_384(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return false;
		}
	}
	func_387(uParam0, *uParam0.f_16);
	func_386(uParam0);
	if (func_385(*uParam0.f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = {*uParam0};
			return true;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = {Global_2428492.f_2171[iVar0 /*72*/]};
			iVar0 += -1;
		}
		Global_2428492.f_2171[1 /*72*/] = {*uParam0};
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = {*uParam0};
			return true;
		}
		else
		{
			if (*uParam0.f_1 == 1)
			{
				set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), true);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (*uParam0.f_1 == 84)
			{
				if (func_278(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					set_bit(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), false);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_385(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

void func_386(auto uParam0)
{
	if (func_280(*uParam0.f_1))
	{
		*uParam0.f_66 = func_239();
	}
}

void func_387(auto uParam0, int iParam1)
{
	if (func_280(*uParam0.f_1))
	{
		*uParam0.f_67 = 1;
	}
	if (iParam1 == func_69())
	{
		return;
	}
	if (func_278(*uParam0.f_1))
	{
		if (*uParam0.f_65 == 1)
		{
			*uParam0.f_67 = func_388(iParam1, -2, 0, 0);
		}
	}
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_74(iParam0))
	{
		if (iParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_74(player_id()) || (func_400() && func_399()))
	{
		iVar0 = func_398();
		if (does_entity_exist(iVar0))
		{
			if (is_ped_a_player(iVar0))
			{
				if (_network_get_ped_player(iVar0) != -1)
				{
					if (func_705(_network_get_ped_player(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_397(iParam1, iParam0, 0);
							}
							else
							{
								return func_395(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
							}
						}
						else
						{
							return func_395(iParam0, _network_get_ped_player(iVar0), iParam1, iParam2, iParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_397(iParam1, iParam0, 0);
				}
				else
				{
					return func_389(0, -1, 0);
				}
			}
			else
			{
				return func_389(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && network_is_activity_session()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_397(iParam1, iParam0, 0);
		}
		else
		{
			return func_395(iParam0, player_id(), iParam1, iParam2, iParam3);
		}
	}
	return func_395(iParam0, player_id(), iParam1, iParam2, iParam3);
}

int func_389(int iParam0, int iParam1, int iParam2)
{
	return func_390(player_id(), iParam0, iParam1, iParam2);
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_team(iParam0);
	if (iParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !is_bit_set(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_394(1);
				}
				else
				{
					return func_394(0);
				}
			}
			else if (iParam3)
			{
				return 28;
			}
			else if (is_bit_set(Global_1617379.f_4, 20))
			{
				return func_391(iVar0, iParam2, 1);
			}
			else
			{
				return func_391(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_394(1);
	}
	return func_394(0);
}

int func_391(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_393(iParam0, iParam1);
	if (func_392(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (iParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

bool func_392(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_394(int iParam0)
{
	if (iParam0)
	{
		return 118;
	}
	return 116;
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = get_player_team(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[player_id() /*444*/] == 148)
	{
		iVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			iVar1 = true;
		}
	}
	if (!iVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_105(iParam1, iParam0, iVar0, 0) && !is_bit_set(Global_1617379.f_15, 18)) || ((func_73(get_player_team(iParam1), get_player_team(iParam0), 0) && is_bit_set(Global_1617379.f_15, 23)) && !is_bit_set(Global_1617379.f_15, 18)))
			{
				return func_394(1);
			}
			else if (is_bit_set(Global_1617379.f_15, 26))
			{
				return func_396(1);
			}
			else
			{
				return func_390(iParam1, 1, iVar0, iParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_394(1);
			}
			else
			{
				return func_390(iParam1, 1, iVar0, iParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_238(iParam0);
	if (!iVar3 == -1)
	{
		return func_236(iVar3);
	}
	if (iParam3)
	{
		return 0;
	}
	return 1;
}

int func_396(int iParam0)
{
	if (iParam0)
	{
		return 119;
	}
	return 116;
}

int func_397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (is_bit_set(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_390(iParam1, !iParam2, iParam0, 0);
	}
	return iVar0;
}

auto func_398()
{
	return Global_2359301.f_2;
}

int func_399()
{
	return is_bit_set(Global_2359301, 4);
}

int func_400()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

void func_401(auto uParam0, auto uParam1, int iParam2, char* sParam3, char* sParam4)
{
	*uParam1.f_16 = func_69();
	*uParam1.f_17 = func_69();
	*uParam1.f_18 = func_69();
	*uParam1.f_1 = uParam0;
	*uParam1.f_2 = 1;
	StringCopy(uParam1.f_19, sParam4, 16);
	StringCopy(uParam1.f_8, sParam3, 32);
	*uParam1.f_3 = iParam2;
	*uParam1.f_65 = 1;
	*uParam1.f_68 = 1;
	*uParam1.f_69 = 1;
	*uParam1.f_67 = 0;
	StringCopy(uParam1.f_23, "", 64);
	StringCopy(uParam1.f_39, "", 64);
}

auto func_402()
{
	return Global_1610316[player_id() /*174*/].f_10;
}

int func_403(int iParam0)
{
	return func_234(player_id(), iParam0);
}

int func_404(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_384(&Var0);
}

char* func_405(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == player_id())
	{
		sVar0 = func_408(&(Global_1610316[iParam0 /*174*/].f_10.f_74));
		return sVar0;
	}
	if (((func_166(iParam0, 28) || func_166(player_id(), 28)) || func_407(iParam0)) && !func_406(iParam0))
	{
		return _get_label_text("GB_REST_ACC");
	}
	iVar1 = func_70(iParam0);
	if (iVar1 != func_69())
	{
		sVar0 = func_408(&(Global_1610316[iVar1 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar0))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_406(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_71(iParam0)};
	if (is_durango_version() && _0xB57A49545BA53CE7(&Var0))
	{
		return true;
	}
	return false;
}

bool func_407(int iParam0)
{
	struct<13> Var0;
	
	Var0 = {func_71(iParam0)};
	if (is_orbis_version() || is_pc_version())
	{
		if (_0x72D918C99BCACC54(0))
		{
			return false;
		}
	}
	else if (is_durango_version())
	{
		if (_0xB57A49545BA53CE7(&Var0))
		{
			return false;
		}
	}
	return true;
}

auto func_408(auto uParam0)
{
	return uParam0;
}

void func_409(int iParam0, int iParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	auto uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	auto uVar18;
	auto uVar19;
	int iVar20;
	int iVar21;
	auto uVar22;
	
	func_525(iParam0, &fVar2, &fVar3);
	if (*uParam2.f_6 == 0)
	{
		iVar1 += *uParam2.f_1;
		iVar0 += *uParam2;
	}
	if (iParam1)
	{
		iVar1 += func_524(iParam0);
		iVar1 = round(to_float(iVar1) / to_float(*uParam2.f_4));
		iVar1 = round(IntToFloat(iVar1) * fVar3);
		iVar1 = round(IntToFloat(iVar1) * *uParam2.f_3);
		iVar0 += func_523(iParam0);
		iVar0 = round(to_float(iVar0) / to_float(*uParam2.f_4));
		iVar0 = round(IntToFloat(iVar0) * fVar2);
		iVar0 = round(IntToFloat(iVar0) * *uParam2.f_2);
	}
	if (iParam1)
	{
		if (func_522(player_id()) > 0)
		{
			func_521();
		}
		else
		{
			func_520();
		}
	}
	else
	{
		func_519();
	}
	if (iParam0 == 168)
	{
		if (iParam1)
		{
			if (func_201(player_id()))
			{
				if (*uParam2.f_5)
				{
					iVar0 += func_511(Global_1610316[player_id() /*174*/].f_10.f_119);
				}
				else
				{
					iVar4 = *uParam2.f_7;
					if (*uParam2.f_8 > 0)
					{
						iVar4 += *uParam2.f_8;
					}
					iVar5 = func_510(iVar4);
					iVar6 = iVar5 * iVar4;
					iVar0 += iVar6;
					iVar8 = func_509(&uVar7);
					iVar9 = Global_262145.f_13508;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = ceil(IntToFloat(iVar8) * Global_262145.f_12730);
					iVar11 = iVar0 / 100 * iVar10;
					iVar0 += iVar11;
					if (*uParam2.f_6)
					{
						iVar0 += *uParam2;
					}
					if (iVar8 > 0 && *uParam2.f_9 != 4)
					{
						func_508(44);
					}
				}
				func_502(iVar0);
				func_501();
				Global_2460486.f_4660.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < _network_get_num_participants_host())
				{
					iVar13 = iVar12;
					if (network_is_participant_active(iVar13))
					{
						iVar14 = network_get_player_index(iVar13);
						if (func_500(iVar14))
						{
							func_492(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_201(player_id()))
		{
			func_491();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_201(player_id()))
		{
			if (iParam1)
			{
				func_490();
			}
			func_489();
		}
	}
	iVar15 = func_488();
	if (iVar15 != func_69() && iParam0 != 148)
	{
		if (func_234(player_id(), 0))
		{
			if (!func_269(player_id(), iVar15, 1))
			{
				func_475(&iVar0, 1);
			}
		}
	}
	func_472(iParam0, &iVar16, &iVar17);
	iVar1 += iVar16;
	iVar0 += iVar17;
	if (iVar1 > 0)
	{
		Global_1727400.f_10 = iVar1;
		func_471();
		func_425(0, player_ped_id(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1727400.f_9 = iVar0;
		iVar20 = func_402();
		if (iVar20 != func_69())
		{
			func_424(iVar20, &uVar18, &uVar19);
		}
		iVar21 = !func_403(1);
		if (iParam0 == 168)
		{
			if (!func_423())
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar4);
			}
		}
		else if (func_423())
		{
			func_414(-856006867, iVar0, &uVar22, 0, 1, 0);
			Global_2558146[uVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2558146[uVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2558146[uVar22 /*73*/].f_8.f_56 = iVar21;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar18, uVar19, iVar0, iVar21);
		}
		if (func_413(iParam0))
		{
			if (func_412(iParam0) > -1)
			{
				func_411(func_412(iParam0), iVar0);
			}
		}
		Global_2445403 = iVar0;
		func_410(&Global_2443512, 0, 0);
	}
}

void func_410(auto uParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	*uParam0.f_1 = 1;
}

void func_411(auto uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2460486.f_269 = uParam0;
		if (iParam1 > Global_262145.f_4989)
		{
			iParam1 = Global_262145.f_4989;
		}
		Global_2460486.f_270 = iParam1;
		Global_2460486.f_271 = 0;
	}
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		default:
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_414(int iParam0, int iParam1, auto uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (!func_423())
	{
		return;
	}
	iVar0 = 1;
	if (iParam4)
	{
		iVar0 = 4;
	}
	else if (iParam3)
	{
		iVar0 = 2;
	}
	else if (iParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_415(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
			func_415(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

bool func_415(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = false;
	if (!func_423())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_128()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (iVar0 || _0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (iVar0 || _0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_422(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (iVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return true;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		iVar4 = false;
		if (iVar4)
		{
			func_421(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_416(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return false;
}

void func_416(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			set_bit(&(Global_2418472[player_id() /*313*/].f_121.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_417(iParam0);
	}
}

void func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_423())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_420(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_418(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_418(auto uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_419(uParam0.f_8.f_3);
	func_419(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_419(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_420(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

void func_421(int iParam0, int iParam1)
{
	Global_2445534 = iParam1;
	Global_2445533 = iParam0;
}

int func_422(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_423())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_423()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

void func_424(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = Global_1610316[iParam0 /*174*/].f_10.f_7[0];
	*uParam2 = Global_1610316[iParam0 /*174*/].f_10.f_7[1];
}

int func_425(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	return func_426(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, iParam9);
}

int func_426(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_436(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (does_entity_exist(iParam1))
		{
			if (is_entity_a_ped(iParam1))
			{
				iVar1 = get_ped_index_from_entity_index(iParam1);
				func_432(get_ped_bone_coords(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_427(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_427(int iParam0, int iParam1, char* sParam2)
{
	Vector3 vVar0;
	
	vVar0 = {func_430(iParam0, 1)};
	if (iParam0 == func_429(player_ped_id()))
	{
		func_428(1);
	}
	func_432(vVar0, iParam1, 0, sParam2);
}

void func_428(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_429(int iParam0)
{
	return iParam0;
}

Vector3 func_430(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	float fVar10;
	
	if (iParam0 == func_431(player_ped_id()) && _0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = {get_offset_from_entity_in_world_coords(iParam0, 0f, 2f, -0.2f)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	fVar3 = 0f;
	if (!is_entity_dead(iParam0, 0))
	{
		fVar3 = get_entity_heading(iParam0);
	}
	get_model_dimensions(get_entity_model(iParam0), &vVar4, &vVar7);
	if (iParam1)
	{
		fVar10 = vVar7.z + 0.18f;
	}
	else
	{
		fVar10 = vVar4.z + 0.18f;
	}
	vVar0 = {_get_object_offset_from_coords(vVar0, fVar3, 0f, 0f, fVar10)};
	return vVar0;
}

int func_431(int iParam0)
{
	return iParam0;
}

void func_432(Vector3 vParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = {vParam0};
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_435(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_434();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_433();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

bool func_433()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return true;
	}
	Global_2428492.f_1355 = 0;
	return false;
}

auto func_434()
{
	auto uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_435(Vector3 vParam0, auto uParam1, auto uParam2)
{
	Vector3 fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = get_distance_between_coords(get_gameplay_cam_coord(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = 1f - fVar0 - 5f / 20f - 5f;
	fVar2 = fVar1 * 0.402f - 0.212f;
	fVar3 = fVar1 * 0.476f - 0.286f;
	*uParam3 = fVar2 + 0.212f;
	*uParam4 = fVar3 + 0.286f;
	return fVar1;
}

auto func_436(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	auto uVar0;
	
	uVar0 = func_437(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, iParam7);
	return uVar0;
}

int func_437(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 fVar3;
	
	if (func_470(player_id()) || func_469(player_id()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_468(sParam2))
	{
	}
	if (func_467())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round(IntToFloat(iParam3) * IntToFloat(iParam4) + fVar0);
		iVar1 = func_465(iVar1);
		fVar3 = to_float(iVar1) * Global_262145.f_1;
		iVar1 = round(fVar3);
		if (iParam10)
		{
			iVar1 = func_464(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_462(0, &iVar1);
					break;
				
				case 3:
					func_462(1, &iVar1);
					break;
				
				case 1:
					func_460(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (iParam7)
		{
			func_457(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_447(func_456(player_id()) + iVar1, iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				playstats_award_xp(iVar1, iParam8, iParam9);
				if (Global_1587523[player_id() /*444*/].f_39.f_2 != -1)
				{
					func_457(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_442(iVar1);
				}
			}
		}
		if (iParam5)
		{
		}
		if (iParam7)
		{
			if (iParam6 == -1)
			{
				func_438(func_440(player_id()) + iVar1);
			}
			else
			{
				func_438(func_440(player_id()) + iParam6);
			}
		}
		if (iParam7)
		{
		}
	}
	return iVar1;
}

void func_438(int iParam0)
{
	if (func_467())
	{
		Global_1587523[player_id() /*444*/].f_195.f_5 = iParam0;
		func_439(joaat("mpply_globalxp"), iParam0);
	}
}

void func_439(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
}

int func_440(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_705(iParam0, 0, 1))
		{
			if (iParam0 == player_id())
			{
				return func_441(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_441(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_441(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = iParam0;
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_442(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = {func_71(player_id())};
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(&Var0))
		{
			iVar13 = func_445(func_446(&Var0));
			if (iVar13 == 0)
			{
				func_444(&Global_1347641, iParam0);
				func_443(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_444(&Global_1347642, iParam0);
				func_443(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_444(&Global_1347643, iParam0);
				func_443(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_444(&Global_1347644, iParam0);
				func_443(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_444(&Global_1347645, iParam0);
				func_443(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_443(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_444(auto uParam0, int iParam1)
{
	*uParam0 += iParam1;
}

int func_445(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

auto func_446(auto uParam0)
{
	if (_network_player_is_in_clan())
	{
		if (network_clan_player_is_active(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

void func_447(int iParam0, int iParam1, int iParam2)
{
	if (func_467())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_336(-1)])
				{
					playstats_award_xp(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_336(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				playstats_award_xp(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				playstats_award_xp(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_455(player_id()))
		{
			Global_1587523[player_id() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[player_id() /*444*/].f_195.f_6 = func_453(iParam0, 1);
		}
		func_452(632, iParam0, -1, 1);
		func_451(633, func_453(iParam0, 1), -1, 1);
		Global_1347756[func_336(-1)] = iParam0;
		func_448(7, 0);
	}
}

void func_448(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (func_450(iParam0, iParam1))
	{
		uVar0 = func_449();
		Global_2442990[uVar0] = iParam0;
	}
}

int func_449()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_450(int iParam0, auto uParam1)
{
	if (Global_1315901)
	{
		return false;
	}
	if (iParam0 == 22)
	{
		return true;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_336(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_336(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_336(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_336(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_336(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_336(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_336(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_336(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_336(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_336(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_336(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_336(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_336(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_336(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_336(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_336(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_336(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_336(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_336(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_336(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_336(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_336(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_336(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_336(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_336(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_336(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_336(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_336(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_336(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_336(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_336(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_336(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_453(int iParam0, int iParam1)
{
	if (iParam1)
	{
	}
	return func_454(iParam0, 0);
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = false;
	iVar3 = iVar1 - iVar2 / 2;
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = true;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1--;
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = to_float(iVar1) - to_float(iVar2) / 2f + to_float(iVar2);
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_455(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	else
	{
		return is_bit_set(Global_2428492.f_1, iParam0);
	}
	return true;
}

int func_456(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == player_id())
			{
				return Global_1347756[func_336(-1)];
			}
			else if (func_455(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_336(-1)];
	}
	return 0;
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_459(iParam0, func_336(iParam2), 0);
	iVar0 += iParam1;
	if (!func_458(iParam0))
	{
		func_451(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_452(iParam0, iVar0, iParam2, 1);
	}
}

bool func_458(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return true;
				break;
			}
	}
	return false;
}

int func_459(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_336(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_460(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = get_player_team(player_id());
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		iVar4 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar4))
		{
			iVar5 = network_get_player_index(iVar4);
			if (get_player_team(iVar5) != -1)
			{
				if (get_player_team(iVar5) == iVar1 || func_73(get_player_team(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != player_id())
					{
						if (func_72(player_id(), iVar5))
						{
							iVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar3)
	{
		iVar6 = round(func_461(*iParam0, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round(func_461(*iParam0, 100) * 20f * Global_262145.f_4204);
	}
	*iParam0 += iVar6;
	*iParam0 += iVar7;
}

float func_461(int iParam0, int iParam1)
{
	Vector3 fVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = fVar0 / fVar1;
	return fVar2;
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0)
	{
		iVar0 = 0;
		while (iVar0 < _network_get_num_participants_host())
		{
			iVar3 = iVar0;
			if (network_is_participant_active(iVar3))
			{
				iVar4 = network_get_player_index(iVar3);
				if (func_705(iVar4, 0, 1))
				{
					if (iVar4 != player_id())
					{
						iVar1++;
						if (func_72(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_705(iVar4, 1, 1))
			{
				if (iVar4 != player_id())
				{
					if (func_463(player_id(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_72(player_id(), iVar4))
						{
							iVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar2)
	{
		iVar5 = round(func_461(*iParam1, 100) * 10f * Global_262145.f_4211);
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round(func_461(*iParam1, 100) * 20f * Global_262145.f_4204);
	}
	*iParam1 += iVar5;
	*iParam1 += iVar6;
}

float func_463(int iParam0, int iParam1)
{
	return vdist(func_64(iParam0), func_64(iParam1));
	return 0f;
}

auto func_464(int iParam0)
{
	int iVar0;
	
	if (get_local_player_aim_state() != 3)
	{
		return *iParam0;
	}
	iVar0 = round(func_461(*iParam0, 100) * 25f);
	*iParam0 += iVar0;
	return *iParam0;
}

int func_465(int iParam0)
{
	if (iParam0 < 0)
	{
		if (absi(iParam0) > func_456(player_id()))
		{
			iParam0 = -func_456(player_id());
		}
	}
	if (func_466(8000, 0, 0) > 0)
	{
		if (func_466(8000, 0, 0) < iParam0 + func_456(player_id()))
		{
			iParam0 = func_466(8000, 0, 0) - func_456(player_id());
		}
	}
	return iParam0;
}

auto func_466(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (iParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

bool func_467()
{
	return true;
}

bool func_468(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	else if (are_strings_equal(sParam0, "") || are_strings_equal(sParam0, "0"))
	{
		return true;
	}
	return false;
}

int func_469(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_470(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_471()
{
	Global_2444573 = 1;
}

void func_472(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_171(7))
	{
		return;
	}
	iVar0 = func_474(iParam0);
	iVar1 = func_473(iParam0);
	iVar2 = absi(get_time_difference(Global_2460486.f_4660.f_67, NETWORK::GET_NETWORK_TIME()));
	if (iVar2 > Global_262145.f_10334)
	{
		iVar2 = Global_262145.f_10334;
	}
	iVar3 = floor(to_float(iVar2) / 1000f * 60f);
	if (iVar3 < 1)
	{
		iVar3 = true;
	}
	*uParam1 = iVar3 * iVar1;
	*uParam2 = iVar3 * iVar0;
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10425;
		
		case 152:
			return Global_262145.f_10460;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10448;
		
		case 157:
			return Global_262145.f_10415;
		
		case 159:
			return Global_262145.f_10398;
		
		case 164:
			return Global_262145.f_10438;
		
		case 160:
			return Global_262145.f_10488;
		
		case 162:
			return Global_262145.f_10508;
		
		case 163:
			return Global_262145.f_10473;
		
		case 154:
			return Global_262145.f_10543;
		
		case 155:
			return Global_262145.f_10533;
		
		case 153:
			return Global_262145.f_10497;
		
		case 170:
			return Global_262145.f_12375;
		
		case 171:
			return Global_262145.f_12434;
		
		case 172:
			return Global_262145.f_12452;
		
		case 173:
			return Global_262145.f_12393;
		
		case 166:
			return Global_262145.f_12408;
		
		case 167:
			return Global_262145.f_12499;
		
		case 169:
			return Global_262145.f_12471;
		
		case 168:
			return Global_262145.f_12464;
		
		default:
	}
	return 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10424;
		
		case 152:
			return Global_262145.f_10459;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10447;
		
		case 157:
			return Global_262145.f_10414;
		
		case 159:
			return Global_262145.f_10397;
		
		case 164:
			return Global_262145.f_10437;
		
		case 160:
			return Global_262145.f_10487;
		
		case 162:
			return Global_262145.f_10507;
		
		case 163:
			return Global_262145.f_10472;
		
		case 154:
			return Global_262145.f_10542;
		
		case 155:
			return Global_262145.f_10532;
		
		case 153:
			return Global_262145.f_10496;
		
		case 170:
			return Global_262145.f_12374;
		
		case 171:
			return Global_262145.f_12433;
		
		case 172:
			return Global_262145.f_12451;
		
		case 173:
			return Global_262145.f_12392;
		
		case 166:
			return Global_262145.f_12407;
		
		default:
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_648())
		{
			if (func_403(0))
			{
				if (network_is_player_active(func_402()))
				{
					if (func_487() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = *iParam0 / 100 * func_487();
						*iParam0 -= iVar0;
					}
					func_485(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_478("GB_BCUT_TICK1", func_402(), iVar0, 0, 0, 1, 1);
					}
					func_508(20);
					func_476(func_402(), iVar0, 1);
				}
			}
		}
	}
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_705(iParam0, 0, 1))
	{
		Var0 = 447;
		Var0.f_1 = player_id();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		trigger_script_event(1, &Var0, 5, func_477(iParam0));
	}
}

auto func_477(int iParam0)
{
	auto uVar0;
	
	set_bit(&uVar0, iParam0);
	return uVar0;
}

int func_478(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam5)
	{
		if (!iParam4)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(func_388(iParam1, -2, 1, 0));
		add_text_component_substring_player_name(func_483(&Var1));
		if (!iParam3 == 0)
		{
			_0x39BBF623FC803EAC(iParam3);
		}
		add_text_component_integer(iParam2);
		iVar0 = _draw_notification(0, 1);
		func_479(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_479(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_482() || !network_is_activity_session()) || !func_126(player_id(), 0))
	{
		return;
	}
	iVar0 = func_480(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_480(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_1724230 - 1)
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_481(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return Global_1724230 - 1;
}

void func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = {Global_1724230.f_5[iVar0 - 1 /*53*/]};
		iVar0 += -1;
	}
}

int func_482()
{
	return is_dlc_present(-1762644250);
}

auto func_483(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_484(&cVar0);
}

auto func_484(char[4] cParam0)
{
	return cParam0;
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1)
	{
		iVar1 = func_486(1);
	}
	else
	{
		iVar1 = func_486(0);
	}
	iVar0 = *iParam0 / 100 * iVar1;
	*iParam0 -= iVar0;
}

int func_486(int iParam0)
{
	if (iParam0)
	{
		return round(0.05f * 100f);
	}
	return Global_262145.f_10329;
}

auto func_487()
{
	return Global_262145.f_10328;
}

auto func_488()
{
	return Global_1610316[player_id() /*174*/].f_10.f_30;
}

void func_489()
{
	int iVar0;
	
	iVar0 = Global_2493048[func_128()];
	iVar0++;
	Global_2493048[func_128()] = iVar0;
	func_452(3245, iVar0, -1, 1);
}

void func_490()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2493043[func_128()];
	iVar1 = Global_2493058[func_128()];
	iVar0++;
	iVar1++;
	Global_2493043[func_128()] = iVar0;
	Global_2493058[func_128()] = iVar1;
	Global_1587523[player_id() /*444*/].f_250.f_85 = iVar1;
	func_452(3243, iVar0, -1, 1);
	func_452(3244, iVar1, -1, 1);
}

void func_491()
{
	int iVar0;
	
	iVar0 = Global_2493053[func_128()];
	iVar0++;
	func_452(3247, iVar0, -1, 1);
}

void func_492(int iParam0, int iParam1)
{
	auto uVar0;
	
	uVar0 = func_494(iParam0);
	func_493(iParam0, uVar0, iParam1);
}

void func_493(int iParam0, auto uParam1, auto uParam2)
{
	struct<4> Var0;
	
	Var0 = 444;
	Var0.f_1 = player_id();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_69())
	{
		if (network_is_player_active(iParam0))
		{
			trigger_script_event(1, &Var0, 4, func_477(iParam0));
		}
	}
}

int func_494(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_499();
	iVar0 = func_497(iParam0, iVar0);
	iVar1 = Global_1610316[func_402() /*174*/].f_10.f_152;
	iVar0 += iVar1 * Global_262145.f_12335;
	if (iVar0 < func_496())
	{
		iVar0 = func_496();
	}
	if (iVar0 > func_495())
	{
		iVar0 = func_495();
	}
	return iVar0;
}

auto func_495()
{
	return Global_262145.f_12336;
}

auto func_496()
{
	return Global_262145.f_13498;
}

int func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_522(iParam0) * func_498();
	iParam1 -= iVar0;
	return iParam1;
}

auto func_498()
{
	return Global_262145.f_13497;
}

auto func_499()
{
	return Global_262145.f_10320;
}

bool func_500(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		if (iParam0 != player_id())
		{
			if (func_269(iParam0, player_id(), 0))
			{
				if (!func_166(iParam0, 26))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_501()
{
	int iVar0;
	
	iVar0 = Global_2493063[func_128()];
	iVar0++;
	func_452(3246, iVar0, -1, 1);
}

void func_502(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2493068[func_128()];
	iVar0 += iParam0;
	func_452(3248, iVar0, -1, 1);
	if (func_505(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_504(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_503(7666, iVar2, -1, 1);
	}
}

auto func_503(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_128();
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

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13641;
			break;
		
		case 2:
			return Global_262145.f_13642;
			break;
		
		case 3:
			return Global_262145.f_13643;
			break;
		
		case 4:
			return Global_262145.f_13644;
			break;
		
		case 5:
			return Global_262145.f_13645;
			break;
		
		case 6:
			return Global_262145.f_13646;
			break;
		
		case 7:
			return Global_262145.f_13647;
			break;
		
		case 8:
			return Global_262145.f_13648;
			break;
		
		case 9:
			return Global_262145.f_13649;
			break;
		
		case 10:
			return Global_262145.f_13650;
			break;
		
		case 11:
			return Global_262145.f_13651;
			break;
		
		case 12:
			return Global_262145.f_13652;
			break;
		
		case 13:
			return Global_262145.f_13653;
			break;
		
		case 14:
			return Global_262145.f_13654;
			break;
		
		case 15:
			return Global_262145.f_13655;
			break;
		
		case 16:
			return Global_262145.f_13656;
			break;
		
		case 17:
			return Global_262145.f_13657;
			break;
		
		case 18:
			return Global_262145.f_13658;
			break;
		
		case 19:
			return Global_262145.f_13659;
			break;
		
		case 20:
			return Global_262145.f_13660;
			break;
		
		case 21:
			return Global_262145.f_13661;
			break;
		
		case 22:
			return Global_262145.f_13662;
			break;
		
		case 23:
			return Global_262145.f_13663;
			break;
		
		case 24:
			return Global_262145.f_13664;
			break;
	}
	return 0;
}

int func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	iVar0 = 0;
	iVar1 = func_507(iParam0, iParam1);
	iVar2 = func_506(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_506(int iParam0)
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

int func_507(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_128();
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

void func_508(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	set_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_509(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = false;
	while (iVar0 < 32)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)))
		{
			iVar2 = int_to_playerindex(iVar0);
			if (!func_126(iVar2, 0) && !func_269(iVar2, player_id(), 1))
			{
				iVar1++;
			}
			else if (func_126(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

auto func_510(int iParam0)
{
	if (iParam0 >= Global_262145.f_12708)
	{
		return Global_262145.f_12729;
	}
	else if (iParam0 >= Global_262145.f_12707)
	{
		return Global_262145.f_12728;
	}
	else if (iParam0 >= Global_262145.f_12706)
	{
		return Global_262145.f_12727;
	}
	else if (iParam0 >= Global_262145.f_12705)
	{
		return Global_262145.f_12726;
	}
	else if (iParam0 >= Global_262145.f_12704)
	{
		return Global_262145.f_12725;
	}
	else if (iParam0 >= Global_262145.f_12703)
	{
		return Global_262145.f_12724;
	}
	else if (iParam0 >= Global_262145.f_12702)
	{
		return Global_262145.f_12723;
	}
	else if (iParam0 >= Global_262145.f_12701)
	{
		return Global_262145.f_12722;
	}
	else if (iParam0 >= Global_262145.f_12700)
	{
		return Global_262145.f_12721;
	}
	else if (iParam0 >= Global_262145.f_12699)
	{
		return Global_262145.f_12720;
	}
	else if (iParam0 >= Global_262145.f_12698)
	{
		return Global_262145.f_12719;
	}
	else if (iParam0 >= Global_262145.f_12697)
	{
		return Global_262145.f_12718;
	}
	else if (iParam0 >= Global_262145.f_12696)
	{
		return Global_262145.f_12717;
	}
	else if (iParam0 >= Global_262145.f_12695)
	{
		return Global_262145.f_12716;
	}
	else if (iParam0 >= Global_262145.f_12694)
	{
		return Global_262145.f_12715;
	}
	else if (iParam0 >= Global_262145.f_12693)
	{
		return Global_262145.f_12714;
	}
	else if (iParam0 >= Global_262145.f_12692)
	{
		return Global_262145.f_12713;
	}
	else if (iParam0 >= Global_262145.f_12691)
	{
		return Global_262145.f_12712;
	}
	else if (iParam0 >= Global_262145.f_12690)
	{
		return Global_262145.f_12711;
	}
	else if (iParam0 >= Global_262145.f_12689)
	{
		return Global_262145.f_12710;
	}
	return Global_262145.f_12709;
}

int func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_518(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_517(iParam0, iVar3))
			{
				iVar0 += func_516(iVar3);
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_512(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= func_512(iParam0) - iVar1)
			{
				iVar0 += func_516(get_random_int_in_range(true, 6));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_512(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = func_513(func_514(iParam0));
		return func_459(iVar0, -1, 0);
	}
	return 0;
}

int func_513(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_515(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_516(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_12908;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_12906;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_12910;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_12904;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_12902;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_12912;
	}
	return 0;
}

bool func_517(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1728679[iVar0] == iParam1 && Global_1728686[iVar0] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_518(int iParam0)
{
	int iVar0;
	
	if (func_515(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[player_id() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_519()
{
	if (func_648())
	{
		Global_2435528.f_3065.f_70 = 0;
		Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
	}
}

void func_520()
{
	if (func_648())
	{
		if (Global_2435528.f_3065.f_70 < 10)
		{
			Global_2435528.f_3065.f_70++;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

void func_521()
{
	if (func_648())
	{
		if (Global_2435528.f_3065.f_70 > 0)
		{
			Global_2435528.f_3065.f_70--;
			Global_1610316[player_id() /*174*/].f_10.f_152 = Global_2435528.f_3065.f_70;
		}
	}
}

auto func_522(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_23;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10445) * Global_262145.f_10450);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10395) * Global_262145.f_10400);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10422) * Global_262145.f_10426);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10435) * Global_262145.f_10439);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10457) * Global_262145.f_10462);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10619) * Global_262145.f_10620);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10625) * Global_262145.f_10626);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10623) * Global_262145.f_10624);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10617) * Global_262145.f_10618);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10621) * Global_262145.f_10622);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10615) * Global_262145.f_10616);
		
		case 170:
			return false;
		
		case 171:
			return Global_262145.f_12431;
		
		case 172:
			return Global_262145.f_12447;
		
		case 173:
			return Global_262145.f_12390;
		
		case 166:
			return false;
		
		default:
	}
	return false;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return round(IntToFloat(Global_262145.f_10446) * Global_262145.f_10451);
		
		case 157:
			return false;
		
		case 159:
			return round(IntToFloat(Global_262145.f_10396) * Global_262145.f_10401);
		
		case 151:
			return false;
		
		case 148:
			return round(IntToFloat(Global_262145.f_10423) * Global_262145.f_10427);
		
		case 164:
			return round(IntToFloat(Global_262145.f_10436) * Global_262145.f_10440);
		
		case 152:
			return round(IntToFloat(Global_262145.f_10458) * Global_262145.f_10463);
		
		case 153:
			return round(IntToFloat(Global_262145.f_10495) * Global_262145.f_10498);
		
		case 154:
			return round(IntToFloat(Global_262145.f_10541) * Global_262145.f_10544);
		
		case 155:
			return round(IntToFloat(Global_262145.f_10531) * Global_262145.f_10534);
		
		case 160:
			return round(IntToFloat(Global_262145.f_10486) * Global_262145.f_10489);
		
		case 162:
			return round(IntToFloat(Global_262145.f_10506) * Global_262145.f_10511);
		
		case 163:
			return round(IntToFloat(Global_262145.f_10471) * Global_262145.f_10474);
		
		case 170:
			return Global_262145.f_12373;
		
		case 171:
			return Global_262145.f_12432;
		
		case 172:
			return Global_262145.f_12448;
		
		case 173:
			return Global_262145.f_12391;
		
		case 166:
			return false;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return false;
}

void func_525(int iParam0, auto uParam1, auto uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_526(iParam0))
	{
		if (!func_648())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10339;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10338;
	*uParam2 = Global_262145.f_10337;
	if (func_234(player_id(), 1))
	{
		*uParam1 = Global_262145.f_10336;
		*uParam2 = Global_262145.f_10335;
	}
	iVar0 = func_488();
	if (iVar0 != func_69())
	{
		if (func_269(player_id(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

bool func_526(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return true;
		
		default:
	}
	return false;
}

void func_527(int iParam0, int iParam1)
{
	Global_1727400.f_6 = _get_posix_time();
	if (iParam0)
	{
		Global_1727400.f_7 = 1;
	}
	else
	{
		Global_1727400.f_7 = 0;
	}
	Global_1727400.f_8 = iParam1;
	if (Global_1727400.f_4 == 0)
	{
		if ((func_202(player_id()) || func_330(player_id())) || func_240(player_id()))
		{
			Global_1727400.f_4 = 1;
		}
	}
}

int func_528(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	
	uVar0 = func_69();
	uVar1 = func_69();
	uVar2 = func_69();
	return func_529(iParam0, sParam1, sParam2, sParam3, iParam4, uVar0, uVar1, uVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_529(auto uParam0, char* sParam1, char* sParam2, char* sParam3, auto uParam4, auto uParam5, auto uParam6, auto uParam7, char* sParam8, int iParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_401(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = uParam5;
	Var0.f_17 = uParam6;
	Var0.f_18 = uParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	set_bit(&(Var0.f_63), 2);
	return func_384(&Var0);
}

int func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = func_238(iParam0);
	if (iVar0 != -1)
	{
		return func_236(iVar0);
	}
	return 1;
}

char* func_531()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_70(player_id());
	if (iVar0 != func_69())
	{
		if (iVar0 != player_id())
		{
			if (((func_166(iVar0, 28) || func_166(player_id(), 28)) || func_407(iVar0)) && !func_406(iVar0))
			{
				return _get_label_text("GB_REST_ACC");
			}
		}
		sVar1 = func_408(&(Global_1610316[iVar0 /*174*/].f_10.f_74));
		if (is_string_null_or_empty(sVar1))
		{
			return _get_label_text("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_532()
{
	func_644();
	func_621();
	func_610();
	func_600();
	func_554();
	func_549();
	func_536();
	func_533();
}

void func_533()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_752 != Local_192.f_5)
	{
		if (Local_192.f_34 != -1)
		{
			if (func_370())
			{
				if (func_329(player_id()) >= 1)
				{
					if (Local_192.f_5 > 0)
					{
						if (Local_192.f_37 > -1)
						{
							iVar0 = int_to_playerindex(Local_192.f_37);
							if (network_is_player_active(iVar0))
							{
								if (iVar0 != player_id())
								{
									if (func_234(iVar0, 1))
									{
										iVar1 = func_238(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_236(iVar1);
											func_534("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_534("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_752 = Local_192.f_5;
		}
	}
}

int func_534(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (_0x9DE986FC9A87C474(player_id(), iParam1) || iParam4)
	{
		if (!iParam3)
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, get_player_name(iParam1), 64);
		}
		_set_notification_text_entry(sParam0);
		_0x39BBF623FC803EAC(iParam2);
		add_text_component_substring_player_name(func_483(&Var1));
		if (!iParam5)
		{
			iVar0 = _draw_notification(0, 1);
		}
		else
		{
			Global_2459440 = {func_71(iParam1)};
			if (network_clan_player_get_desc(&Global_2459370, 35, &Global_2459440))
			{
				iVar17 = 0;
				if (are_strings_equal(&(Global_2459370.f_22), "Leader") && Global_2459370.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2459370.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (iParam7)
				{
					if (iParam8)
					{
						Var1 = {func_535(&Var1)};
					}
					iVar0 = _0x137BC35589E34E1E(iVar18, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, &Var1, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = _0x97C9E4E7024A8F2C(iVar18, _0x7543BB439F63792B(&Global_2459370, 35), &(Global_2459370.f_17), Global_2459370.f_30, iVar17, 0, Global_2459370, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = _draw_notification(0, 1);
			}
		}
		func_479(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_535(char* sParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>", 64);
	return cVar0;
}

void func_536()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (is_bit_set(Local_458, false))
	{
		return;
	}
	if (!func_370())
	{
		return;
	}
	iVar0 = func_329(player_id());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_192.f_51)))
	{
		iVar1 = func_11() - func_548(&(Local_192.f_51), 0, 0);
		iVar2 = func_155() - Local_192.f_5;
		func_547(iVar1);
		if (iVar1 > 30000)
		{
			func_537(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_537(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_537(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_537(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_545(0) == 0)
	{
		return;
	}
	func_544();
	func_541(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_468(sParam4))
	{
		sVar0 = sParam4;
	}
	func_538(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0);
}

void func_538(auto uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, auto uParam8, int iParam9, int iParam10, int iParam11, auto uParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_540(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_539(7, iVar0);
		Global_1339940.f_4109[iVar0] = uParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = uParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = uParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_539(int iParam0, int iParam1)
{
	set_bit(&(Global_1339940.f_4726[iParam0]), iParam1);
}

int func_540(int iParam0, int iParam1)
{
	return is_bit_set(Global_1339940.f_4726[iParam0], iParam1);
}

void func_541(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = false;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_540(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_539(6, iVar0);
		Global_1339940.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_3557.f_183[iVar0] = iParam3;
		Global_1339940.f_3557.f_172[iVar0] = iParam2;
		Global_1339940.f_3557.f_260[iVar0] = iParam4;
		Global_1339940.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339940.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339940.f_3557.f_443[iVar0] = iParam7;
		Global_1339940.f_3557.f_454[iVar0] = iParam8;
		Global_1339940.f_3557.f_497[iVar0] = iParam9;
		Global_1339940.f_3557.f_508[iVar0] = iParam10;
		Global_1339940.f_3557.f_205[iVar0] = iParam11;
		Global_1339940.f_3557.f_216[iVar0] = iParam12;
		Global_1339940.f_3557.f_227[iVar0] = iParam13;
		Global_1339940.f_3557.f_238[iVar0] = iParam14;
		Global_1339940.f_3557.f_249[iVar0] = iParam15;
		Global_1339940.f_3557.f_519[iVar0] = iParam16;
		Global_1339940.f_3557.f_530[iVar0] = iParam17;
		Global_1339940.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_543())
		{
			Global_1339940.f_941 = 1;
		}
		if (is_pc_version())
		{
			iVar2 = 0;
			_get_screen_active_resolution(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339940.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339940.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339940.f_941 = 1;
			}
			if (func_542())
			{
				Global_1339940.f_945 = 1;
			}
		}
	}
}

bool func_542()
{
	int iVar0;
	auto uVar1;
	
	if (is_pc_version())
	{
		_get_screen_active_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

bool func_543()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

void func_544()
{
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	Global_2444577 = 1;
}

bool func_545(int iParam0)
{
	if (func_546())
	{
		return false;
	}
	if (func_312())
	{
		return false;
	}
	if (!iParam0)
	{
		if (func_705(player_id(), 1, 1) == 0)
		{
			return false;
		}
	}
	return true;
}

int func_546()
{
	return is_bit_set(Global_2359301, 12);
}

void func_547(int iParam0)
{
	if (is_bit_set(iLocal_446, 8))
	{
		func_167();
		return;
	}
	if (!is_bit_set(iLocal_446, 15))
	{
		if (iParam0 <= 35000)
		{
			if (trigger_music_event("APT_PRE_COUNTDOWN_STOP"))
			{
				set_bit(&iLocal_446, 15);
				set_bit(&iLocal_446, 9);
			}
		}
	}
	if (is_bit_set(iLocal_446, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!is_bit_set(iLocal_446, 11))
			{
				if (prepare_music_event("APT_COUNTDOWN_30S_KILL"))
				{
					set_audio_flag("AllowScoreAndRadio", 1);
					set_user_radio_control_enabled(0);
					set_bit(&iLocal_446, 11);
				}
			}
			if (!is_bit_set(iLocal_446, 14))
			{
				if (trigger_music_event("APT_COUNTDOWN_30S"))
				{
					set_bit(&iLocal_446, 14);
				}
			}
			if (is_bit_set(iLocal_446, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!is_bit_set(iLocal_446, 12))
					{
						set_user_radio_control_enabled(1);
						set_audio_flag("AllowScoreAndRadio", 0);
						set_bit(&iLocal_446, 12);
					}
					if (iParam0 <= 500)
					{
						if (trigger_music_event("APT_FADE_IN_RADIO"))
						{
							cancel_music_event("APT_COUNTDOWN_30S_KILL");
							clear_bit(&iLocal_446, 9);
						}
					}
				}
			}
		}
	}
}

int func_548(auto uParam0, int iParam1, int iParam2)
{
	if (network_is_game_in_progress() && !iParam1)
	{
		if (!iParam2)
		{
			return get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return get_time_difference(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return get_time_difference(get_game_timer(), *uParam0);
}

void func_549()
{
	int iVar0;
	
	if (!is_ped_injured(player_ped_id()))
	{
		if (network_does_entity_exist_with_network_id(Local_192.f_3))
		{
			if (!is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 2))
			{
				if (is_entity_attached_to_entity(net_to_obj(Local_192.f_3), player_ped_id()))
				{
					set_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 2);
					iLocal_750 = get_sound_id();
					play_sound_frontend(iLocal_750, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					Local_252[participant_id_to_int() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_448 != Local_192.f_5)
	{
		if (is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 3))
		{
			clear_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 3);
		}
		if (is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 2))
		{
			if (network_has_control_of_network_id(Local_192.f_3))
			{
				iVar0 = net_to_ent(Local_192.f_3);
				delete_entity(&iVar0);
				clear_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 2);
			}
			else
			{
				network_request_control_of_network_id(Local_192.f_3);
			}
		}
		else
		{
			iLocal_448 = Local_192.f_5;
		}
	}
	if (network_does_entity_exist_with_network_id(Local_192.f_3))
	{
		if (func_648())
		{
			if (func_662())
			{
				func_551();
			}
		}
		if (!is_bit_set(iLocal_445, 13))
		{
			if (!func_662() || !func_648())
			{
				_0x92AEFB5F6E294023(net_to_obj(Local_192.f_3), 1, 1);
				set_bit(&iLocal_445, 13);
			}
		}
		if (!is_bit_set(iLocal_445, 3))
		{
			set_entity_lod_dist(net_to_obj(Local_192.f_3), 1200);
			set_bit(&iLocal_445, 3);
		}
	}
	else
	{
		if (is_bit_set(iLocal_445, 13))
		{
			clear_bit(&iLocal_445, 13);
		}
		if (is_bit_set(iLocal_445, 3))
		{
			clear_bit(&iLocal_445, 3);
		}
		if (does_blip_exist(iLocal_450))
		{
			remove_blip(&iLocal_450);
		}
	}
	func_550();
}

void func_550()
{
	int iVar0;
	int iVar1;
	int iVar2;
	auto uVar3;
	
	if (!func_370())
	{
		return;
	}
	if (func_329(player_id()) >= 1)
	{
		if (network_does_network_id_exist(Local_192.f_3) && !is_entity_dead(net_to_obj(Local_192.f_3), 0))
		{
			if (!is_entity_attached_to_any_ped(net_to_obj(Local_192.f_3)))
			{
				get_hud_colour(18, &iVar0, &iVar1, &iVar2, &uVar3);
				draw_marker(2, get_entity_coords(net_to_ent(Local_192.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
		}
	}
}

void func_551()
{
	int iVar0;
	
	iVar0 = func_329(player_id());
	if (iVar0 < 2)
	{
		if (does_blip_exist(iLocal_450))
		{
			remove_blip(&iLocal_450);
		}
		return;
	}
	if (does_blip_exist(iLocal_450))
	{
		return;
	}
	clear_bit(&iLocal_445, 11);
	iLocal_450 = add_blip_for_entity(net_to_ent(Local_192.f_3));
	set_blip_priority(iLocal_450, 12);
	set_blip_sprite(iLocal_450, 459);
	set_blip_name_from_text_file(iLocal_450, "GB_SGHT_BLP");
	set_blip_route(iLocal_450, true);
	set_blip_scale(iLocal_450, Global_262145.f_10294);
	if (func_662())
	{
		func_552(&iLocal_450, 18);
	}
	_0x75A16C3DA34F1245(iLocal_450, true);
	iLocal_751 = get_sound_id();
	play_sound_frontend(iLocal_751, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
}

void func_552(int iParam0, int iParam1)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_colour(*iParam0, func_553(iParam1));
	}
}

int func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	get_hud_colour(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return iVar0 * 16777216 + iVar1 * 65536 + iVar2 * 256 + iVar3;
	return 0;
}

void func_554()
{
	if (participant_id_to_int() != Local_192.f_33)
	{
		return;
	}
	if (network_does_entity_exist_with_network_id(Local_192.f_3))
	{
		if (iLocal_747 != -1)
		{
			iLocal_747 = -1;
		}
		if (is_bit_set(Global_2563397, 20))
		{
			clear_bit(&Global_2563397, 20);
		}
		return;
	}
	if (!is_bit_set(Global_2563397, 20))
	{
		if (!is_bit_set(Global_2563397, 21))
		{
			if (iLocal_747 < 0)
			{
				set_bit(&Global_2563397, 20);
			}
		}
	}
	if (iLocal_748 == -1)
	{
		iLocal_748 = get_random_int_in_range(false, 3);
	}
	if (iLocal_747 < 0)
	{
		if (is_bit_set(Global_2563397, 21))
		{
			clear_bit(&Global_2563397, 21);
			iLocal_747 = 0;
		}
	}
	func_555();
}

void func_555()
{
	int iVar0;
	
	if (!is_bit_set(iLocal_445, 4))
	{
		if (iLocal_747 >= 0)
		{
			if (is_ped_injured(player_ped_id()))
			{
				clear_bit(&Local_458, false);
				iLocal_747 = -1;
			}
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					func_599(1);
				}
			}
		}
	}
	else if (!is_ped_injured(player_ped_id()))
	{
		func_598(&Local_458);
		func_597(&Local_458);
		clear_bit(&iLocal_445, 4);
	}
	switch (iLocal_747)
	{
		case 0:
			func_596(1);
			request_additional_text("HACK", 3);
			iLocal_747++;
			break;
		
		case 1:
			if (func_595(1) && has_additional_text_loaded(3))
			{
				set_bit(&Local_458, false);
				set_bit(&(Local_458.f_1), false);
				func_363();
				iLocal_749 = 10;
				if (iLocal_748 == 2)
				{
					Local_458.f_17 = 1;
				}
				else if (iLocal_748 == 1)
				{
					Local_458.f_17 = 0;
					iLocal_749 = 77;
				}
				else if (iLocal_748 == 0)
				{
					iLocal_749 = 50;
					Local_458.f_17 = 0;
				}
				func_591(player_id(), 0, 66048);
				iLocal_747++;
			}
			else
			{
				if (!func_595(1))
				{
				}
				if (!has_additional_text_loaded(3))
				{
				}
			}
			break;
		
		case 2:
			hide_hud_and_radar_this_frame();
			hide_scripted_hud_component_this_frame(19);
			if (!func_171(0))
			{
				func_187(0);
			}
			if (iLocal_748 == 0)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_568(&Local_458, 1))
				{
					iVar0 = true;
				}
			}
			else if (iLocal_748 == 1)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1);
				if (func_567(&Local_458, 1))
				{
					iVar0 = true;
				}
			}
			else if (iLocal_748 == 2)
			{
				func_569(&Local_458, 5, 5, iLocal_749, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1);
				if (func_556(&Local_458, 1))
				{
					iVar0 = true;
				}
			}
			if (is_bit_set(Local_458.f_1, true))
			{
				clear_bit(&Local_458, false);
				func_598(&Local_458);
				func_591(player_id(), 1, 0);
				if (func_171(0))
				{
					func_170(0);
				}
				iLocal_747 = -1;
			}
			else if (iVar0)
			{
				clear_bit(&Local_458, false);
				func_598(&Local_458);
				Local_252[participant_id_to_int() /*6*/].f_4++;
				set_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), 3);
				iLocal_748++;
				if (iLocal_748 >= 3)
				{
					iLocal_748 = 0;
				}
				if (func_171(0))
				{
					func_170(0);
				}
				func_591(player_id(), 1, 0);
				iLocal_747++;
			}
			break;
	}
}

bool func_556(int iParam0, int iParam1)
{
	if (is_bit_set(*iParam0, 26))
	{
		if (iParam1)
		{
			func_557(iParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_557(int iParam0, int iParam1, int iParam2)
{
	clear_bit(iParam0, false);
	set_bit(iParam0, 12);
	_0xC6372ECD45D73BCD(0);
	if (iParam2)
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			set_ped_current_weapon_visible(player_ped_id(), 1, 1, 1, 0);
		}
	}
	if (is_minigame_in_progress())
	{
		set_minigame_in_progress(0);
	}
	clear_help(1);
	if (iParam1)
	{
		set_player_control(player_id(), true, 0);
	}
	destroy_cam(iLocal_73, 0);
	func_561(0);
	func_560();
	_0x9B079E5221D984D3(0);
	func_559(iParam0, 1, 1);
	func_558(0, 1, 1, 0);
}

int func_558(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_559(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 4;
	while (iVar0 <= 0)
	{
		if (iLocal_64[iVar0] != -1)
		{
			if (!has_sound_finished(iLocal_64[iVar0]))
			{
				stop_sound(iLocal_64[iVar0]);
				iLocal_64[iVar0] = -1;
			}
		}
		iVar0++;
	}
	clear_bit(iParam0, 25);
	clear_bit(iParam0, 5);
	if (iParam2 == 1)
	{
		clear_bit(iParam0, 12);
		clear_bit(iParam0, 9);
		clear_bit(iParam0, 18);
		clear_bit(iParam0, 27);
		clear_bit(iParam0, 28);
	}
	*iParam0.f_1 = 0;
	*iParam0.f_7 = *iParam0.f_6;
	iLocal_76 = 0;
	if (iParam1)
	{
		set_scaleform_movie_as_no_longer_needed(&iLocal_75);
	}
	clear_bit(iParam0, 29);
}

void func_560()
{
	int iVar0;
	
	Global_1338622.f_948 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1338622.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2460486.f_4391 = 1;
}

void func_561(int iParam0)
{
	if (iParam0)
	{
		func_566();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			set_bit(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_565(0))
		{
			func_562(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_562(int iParam0)
{
	if (Global_14571)
	{
		func_564(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_563())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_563()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_564(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_565(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

bool func_565(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
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

void func_566()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

bool func_567(int iParam0, int iParam1)
{
	if (is_bit_set(*iParam0, 9))
	{
		if (iParam1)
		{
			func_557(iParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_568(int iParam0, int iParam1)
{
	if (is_bit_set(*iParam0, 18))
	{
		if (iParam1)
		{
			func_557(iParam0, 1, 1);
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_569(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (is_bit_set(*iParam0, false))
	{
		func_570(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, 0, iParam14, iParam15, iParam16);
	}
}

void func_570(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Vector3 fVar6;
	Vector3 fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int[] iVar11 = new int[4];
	int iVar16;
	
	_0x7F4724035FDCA1DD(0);
	_0x7F4724035FDCA1DD(2);
	_0xC6372ECD45D73BCD(1);
	if (iParam17)
	{
		func_590(1);
	}
	func_589(4, -1);
	func_588();
	if (func_595(iParam16))
	{
		if (!is_pause_menu_active())
		{
			hide_hud_and_radar_this_frame();
			_set_2d_layer(1);
			if (get_pause_menu_state() == 0 && !is_pause_menu_active())
			{
				draw_scaleform_movie_fullscreen(iLocal_75, 255, 255, 255, false, 0);
			}
		}
		if (_is_input_just_disabled(2))
		{
			*iParam0.f_285 = _0x5B84D09CEC5209C5(2, 239);
			*iParam0.f_286 = _0x5B84D09CEC5209C5(2, 240);
			if (*iParam0.f_287 != *iParam0.f_285 || *iParam0.f_288 != *iParam0.f_286)
			{
				_push_scaleform_movie_function(iLocal_75, "SET_CURSOR");
				_push_scaleform_movie_function_parameter_float(*iParam0.f_285);
				_push_scaleform_movie_function_parameter_float(*iParam0.f_286);
				_pop_scaleform_movie_function_void();
			}
			*iParam0.f_287 = *iParam0.f_285;
			*iParam0.f_288 = *iParam0.f_286;
		}
		else
		{
			func_587(&iVar2, &iVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = to_float(iVar2) * 8f * timestep();
			fVar7 = to_float(iVar3) * 8f * timestep();
			if (iLocal_76 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					_push_scaleform_movie_function(iLocal_75, "MOVE_CURSOR");
					_push_scaleform_movie_function_parameter_float(fVar6);
					_push_scaleform_movie_function_parameter_float(fVar7);
					_pop_scaleform_movie_function_void();
				}
			}
		}
		if (iLocal_76 > 4)
		{
			if (_is_input_just_disabled(2))
			{
				*iParam0.f_285 = get_control_normal(2, 239);
				*iParam0.f_286 = get_control_normal(2, 240);
				if (is_orbis_version())
				{
					if (*iParam0.f_287 != *iParam0.f_285)
					{
						if (*iParam0.f_285 < 0.49f)
						{
							play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(10);
							_pop_scaleform_movie_function_void();
						}
						else if (*iParam0.f_285 > 0.51f)
						{
							play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(11);
							_pop_scaleform_movie_function_void();
						}
					}
				}
				*iParam0.f_287 = *iParam0.f_285;
				*iParam0.f_288 = *iParam0.f_286;
			}
			if (_is_input_disabled(2))
			{
				fVar8 = get_disabled_control_normal(2, 1);
				fVar9 = get_disabled_control_normal(2, 2);
				iVar10 = false;
				fLocal_63 += timestep();
				fLocal_70 += fVar8;
				fLocal_71 += fVar9;
				fLocal_72++;
				if (fLocal_63 > 0.15f)
				{
					fLocal_63 = 0f;
					fLocal_70 /= fLocal_72;
					fLocal_71 /= fLocal_72;
					if (absf(fLocal_71) < 0.2f)
					{
						if (fLocal_70 < 0f)
						{
							iVar10 = true;
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(10);
							_pop_scaleform_movie_function_void();
						}
						else if (fLocal_70 > 0f)
						{
							iVar10 = true;
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(11);
							_pop_scaleform_movie_function_void();
						}
					}
					if (absf(fLocal_70) < 0.2f)
					{
						if (fLocal_71 < 0f)
						{
							iVar10 = true;
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(8);
							_pop_scaleform_movie_function_void();
						}
						else if (fLocal_71 > 0f)
						{
							iVar10 = true;
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
							_push_scaleform_movie_function_parameter_int(9);
							_pop_scaleform_movie_function_void();
						}
					}
					if (iVar10)
					{
						play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_70 = 0f;
					fLocal_71 = 0f;
					fLocal_72 = 0f;
				}
			}
			func_586(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (absi(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (has_sound_finished(*iParam0.f_15))
						{
							if (iLocal_76 != 8)
							{
								play_sound_frontend(*iParam0.f_15, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((is_control_just_pressed(2, 195) || is_control_just_pressed(2, 196)) || is_control_pressed(2, 195)) || is_control_pressed(2, 196))
			{
			}
			if (_is_input_disabled(2))
			{
				if (is_control_just_pressed(2, 32) || is_control_just_pressed(2, 172))
				{
					play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
					_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
					_push_scaleform_movie_function_parameter_int(8);
					_pop_scaleform_movie_function_void();
				}
				else if (is_control_just_pressed(2, 33) || is_control_just_pressed(2, 173))
				{
					play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
					_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
					_push_scaleform_movie_function_parameter_int(9);
					_pop_scaleform_movie_function_void();
				}
				else if (is_control_just_pressed(2, 34) || is_control_just_pressed(2, 174))
				{
					play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
					_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
					_push_scaleform_movie_function_parameter_int(10);
					_pop_scaleform_movie_function_void();
				}
				else if (is_control_just_pressed(2, 35) || is_control_just_pressed(2, 175))
				{
					play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
					_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
					_push_scaleform_movie_function_parameter_int(11);
					_pop_scaleform_movie_function_void();
				}
			}
			else if (is_control_just_pressed(2, 188))
			{
				play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
				_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
				_push_scaleform_movie_function_parameter_int(8);
				_pop_scaleform_movie_function_void();
			}
			else if (is_control_just_pressed(2, 187))
			{
				play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
				_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
				_push_scaleform_movie_function_parameter_int(9);
				_pop_scaleform_movie_function_void();
			}
			else if (is_control_just_pressed(2, 189))
			{
				play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
				_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
				_push_scaleform_movie_function_parameter_int(10);
				_pop_scaleform_movie_function_void();
			}
			else if (is_control_just_pressed(2, 190))
			{
				play_sound_frontend(-1, "HACKING_MOVE_CURSOR", 0, 1);
				_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT");
				_push_scaleform_movie_function_parameter_int(11);
				_pop_scaleform_movie_function_void();
			}
		}
		if (iParam12)
		{
			if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
			{
				_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
				uLocal_74 = _pop_scaleform_movie_function();
			}
			if (_0x768FF8961BA904D6(uLocal_74))
			{
				iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				if (iVar0 == 6)
				{
					func_585(iParam0);
				}
			}
		}
		func_584();
	}
	if (iLocal_76 == 5 || iLocal_76 == 6)
	{
		if (iLocal_60)
		{
			func_583(iParam15 - get_game_timer() - iLocal_59, &iLocal_56, &iLocal_57, &iLocal_58);
			if ((iLocal_56 >= 0 && iLocal_57 >= 0) && iLocal_58 >= 0)
			{
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COUNTDOWN", to_float(iLocal_56), to_float(iLocal_57), to_float(iLocal_58), -1082130432, -1082130432);
			}
			else
			{
				iLocal_56 = false;
				iLocal_57 = false;
				iLocal_58 = false;
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COUNTDOWN", to_float(iLocal_56), to_float(iLocal_57), to_float(iLocal_58), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_76 == 5)
	{
		if (func_582(&iLocal_77, 10000 / iParam4))
		{
			if (*iParam0.f_9 > 20f)
			{
				*iParam0.f_9--;
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", *iParam0.f_9, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_77 = get_game_timer();
			}
		}
	}
	if (iLocal_76 == 6)
	{
		if (func_582(&iLocal_77, 10000 / iParam4))
		{
			if (*iParam0.f_9 > 20f)
			{
				*iParam0.f_9--;
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 0f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 1f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 2f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 3f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 4f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 5f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 6f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 7f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
				iLocal_77 = get_game_timer();
			}
		}
	}
	if (is_bit_set(*iParam0.f_1, false))
	{
		if (iLocal_76 == 2)
		{
			iLocal_76 = 3;
		}
		else if (iLocal_76 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_76 == 4)
		{
			if (iParam8)
			{
				iVar0 = 82;
			}
			else if (iParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_76)
	{
		case 0:
			if (!is_bit_set(*iParam0, 29))
			{
				func_581(iParam0, iParam14);
			}
			func_596(1);
			_0x9B079E5221D984D3(1);
			*iParam0.f_15 = get_sound_id();
			iLocal_150 = 0;
			iLocal_151 = 0;
			*iParam0.f_18 = 0;
			iLocal_76++;
			break;
		
		case 1:
			iLocal_64[0] = -1;
			iLocal_64[1] = -1;
			_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), to_float(iParam2), -1082130432, -1082130432, -1082130432);
			_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
			if (iParam12 == 1)
			{
				_call_scaleform_movie_function_mixed_params(iLocal_75, "ADD_PROGRAM", to_float(7), to_float(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			*iParam0.f_7 = iParam1;
			*iParam0.f_9 = to_float(iParam3);
			clear_bit(iParam0, true);
			fLocal_70 = 0f;
			fLocal_71 = 0f;
			fLocal_72 = 0f;
			iLocal_64[0] = get_sound_id();
			iLocal_64[1] = get_sound_id();
			func_558(1, 0, 1, 0);
			if (*iParam0.f_17)
			{
				iLocal_76 = 8;
			}
			else
			{
				iLocal_76++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					if (!func_345("H_EXIT_PROMPT"))
					{
						if (!func_345("HACKOBJ1"))
						{
							func_580("HACKOBJ1");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (_is_input_just_disabled(2))
				{
					if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
					{
						_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = _pop_scaleform_movie_function();
					}
				}
				else if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
				{
					_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
					uLocal_74 = _pop_scaleform_movie_function();
				}
			}
			if (_0x768FF8961BA904D6(uLocal_74))
			{
				iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_345("H_EXIT_PROMPT"))
						{
							clear_help(1);
						}
					}
					iLocal_61 = 0;
					iLocal_76++;
				}
			}
			if (iLocal_79 == 1)
			{
				if (get_game_timer() - iLocal_78 > 500)
				{
					if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (_0x768FF8961BA904D6(uLocal_74))
			{
				iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				if (iVar0 == 80)
				{
					if (iLocal_79 == 0)
					{
						play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
						func_579(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_76 == 3)
				{
					if (iLocal_61 == 0)
					{
						if (!func_345("HACKOBJ2"))
						{
							func_580("HACKOBJ2");
							iLocal_61 = 1;
						}
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (!_0x768FF8961BA904D6(uLocal_74))
				{
					if (_is_input_just_disabled(2))
					{
						if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
						{
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = _pop_scaleform_movie_function();
						}
					}
					else if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
					{
						_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = _pop_scaleform_movie_function();
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (iLocal_79 == 0)
				{
					if (!_0x768FF8961BA904D6(uLocal_74))
					{
						if (is_control_just_pressed(2, 202))
						{
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_BACK");
							uLocal_74 = _pop_scaleform_movie_function();
							if (iParam7 == 1)
							{
								if (func_345("HACKOBJ2"))
								{
									clear_help(1);
								}
								func_580("H_EXIT_PROMPT");
								iLocal_61 = 0;
								iLocal_76--;
							}
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if (get_game_timer() - iLocal_78 > 500)
				{
					if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (_0x768FF8961BA904D6(uLocal_74))
				{
					iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
					func_579(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_61 = 0;
				iLocal_76++;
			}
			break;
		
		case 4:
			if (iLocal_64[1] != -1)
			{
				if (!has_sound_finished(iLocal_64[1]))
				{
					stop_sound(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iLocal_64[0] != -1)
			{
				if (!has_sound_finished(iLocal_64[0]))
				{
					stop_sound(iLocal_64[0]);
					iLocal_64[0] = -1;
				}
			}
			if (iLocal_64[1] != -1)
			{
				if (!has_sound_finished(iLocal_64[1]))
				{
					stop_sound(iLocal_64[1]);
					iLocal_64[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_76 == 4)
				{
					if (iParam9 == 1)
					{
						if (!is_bit_set(*iParam0, 5))
						{
							if (iLocal_61 == 0)
							{
								if (!func_345("HACKOBJ5"))
								{
									func_580("HACKOBJ5");
									iLocal_61 = 1;
								}
							}
						}
					}
					else if (!is_bit_set(*iParam0, 18))
					{
						if (iLocal_61 == 0)
						{
							if (!func_345("HACKOBJ3"))
							{
								func_580("HACKOBJ3");
								iLocal_61 = 1;
							}
						}
					}
					else if (!is_bit_set(*iParam0, 5))
					{
						if (iLocal_61 == 0)
						{
							if (!func_345("HACKOBJ5"))
							{
								func_580("HACKOBJ5");
								iLocal_61 = 1;
							}
						}
					}
					else if (iLocal_61 == 1)
					{
						if (func_345("HACKOBJ5"))
						{
							clear_help(1);
							iLocal_61 = 0;
						}
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (iLocal_79 == 0)
				{
					if (!_0x768FF8961BA904D6(uLocal_74))
					{
						if (_is_input_just_disabled(2))
						{
							if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
							{
								_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
								uLocal_74 = _pop_scaleform_movie_function();
							}
						}
						else if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
						{
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = _pop_scaleform_movie_function();
						}
					}
				}
			}
			if (iLocal_79 == 0)
			{
				if (!_0x768FF8961BA904D6(uLocal_74))
				{
					if (is_control_just_pressed(2, 202))
					{
						_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_BACK");
						uLocal_74 = _pop_scaleform_movie_function();
						if (iParam7 == 1)
						{
							if (func_345("HACKOBJ5") || func_345("HACKOBJ3"))
							{
								clear_help(1);
							}
							iLocal_61 = 0;
							iLocal_76--;
						}
					}
				}
			}
			if (iLocal_79 == 1)
			{
				if (get_game_timer() - iLocal_78 > 500)
				{
					if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
					{
						func_579(0, "");
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (_0x768FF8961BA904D6(uLocal_74))
				{
					iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_79 == 0)
				{
					play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
					func_579(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 1)
					{
						iLocal_77 = get_game_timer();
						*iParam0.f_9 = to_float(iParam3);
						if (!is_bit_set(*iParam0.f_1, false))
						{
							_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", *iParam0.f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", *iParam0.f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "RUN_PROGRAM", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_59 = get_game_timer();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = get_sound_id();
						play_sound_frontend(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else if (!is_bit_set(*iParam0, 18))
					{
						iLocal_77 = get_game_timer();
						*iParam0.f_9 = to_float(iParam3);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", *iParam0.f_9, -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(false), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_59 = get_game_timer();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[0] = get_sound_id();
						play_sound_frontend(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_76++;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if (get_game_timer() - iLocal_78 > 500)
							{
								if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
								{
									func_579(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
							if (iParam13 && is_bit_set(*iParam0, 9))
							{
								func_579(1, "TRYDL");
							}
							else
							{
								func_579(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if (get_game_timer() - iLocal_78 > 500)
						{
							if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
							{
								func_579(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
						if (iParam13 && is_bit_set(*iParam0, 9))
						{
							func_579(1, "TRYDL");
						}
						else
						{
							func_579(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (iParam8 == 0)
				{
					if (iParam9 == 1)
					{
						iLocal_77 = get_game_timer();
						*iParam0.f_9 = to_float(iParam3);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 0f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 1f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 2f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 3f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 4f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 5f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 6f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 7f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						if (!is_bit_set(*iParam0.f_1, false))
						{
							_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							_call_scaleform_movie_function_float_params(iLocal_75, "RUN_PROGRAM", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
							_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_59 = get_game_timer();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = get_sound_id();
						if (iParam10)
						{
							func_578(iParam0);
						}
						_call_scaleform_movie_function_string_params(iLocal_75, "SET_ROULETTE_WORD", *iParam0.f_14, 0, 0, 0, 0);
						play_sound_frontend(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else if ((!iParam11 || is_bit_set(*iParam0, 18)) && !is_bit_set(*iParam0, 9))
					{
						iLocal_77 = get_game_timer();
						*iParam0.f_9 = to_float(iParam3);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_SPEED", to_float(iParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 0f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 1f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 2f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 3f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 4f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 5f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 6f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_COLUMN_SPEED", 7f, *iParam0.f_9, -1082130432, -1082130432, -1082130432);
						_call_scaleform_movie_function_float_params(iLocal_75, "OPEN_APP", to_float(true), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_59 = get_game_timer();
						iLocal_60 = 1;
						iLocal_61 = 0;
						iLocal_64[1] = get_sound_id();
						if (iParam10)
						{
							func_578(iParam0);
						}
						if (func_345("HACKOBJ5"))
						{
							clear_help(1);
						}
						_call_scaleform_movie_function_string_params(iLocal_75, "SET_ROULETTE_WORD", *iParam0.f_14, 0, 0, 0, 0);
						play_sound_frontend(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_76 = 6;
					}
					else
					{
						if (iLocal_79 == 1)
						{
							if (get_game_timer() - iLocal_78 > 500)
							{
								if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
								{
									func_579(0, "");
								}
							}
						}
						if (iLocal_79 == 0)
						{
							play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
							if (iParam13 && is_bit_set(*iParam0, 18))
							{
								func_579(1, "TRYDL");
							}
							else
							{
								func_579(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_79 == 1)
					{
						if (get_game_timer() - iLocal_78 > 500)
						{
							if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
							{
								func_579(0, "");
							}
						}
					}
					if (iLocal_79 == 0)
					{
						play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
						if (iParam13 && is_bit_set(*iParam0, 18))
						{
							func_579(1, "TRYDL");
						}
						else
						{
							func_579(1, "TRYHACK");
						}
					}
				}
			}
			if (iParam13)
			{
				if (is_bit_set(*iParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (is_bit_set(*iParam0, 18) && is_bit_set(*iParam0, 9))
						{
							if (!is_bit_set(*iParam0, 28))
							{
								set_bit(iParam0, 28);
								iLocal_76 = 8;
							}
						}
						else
						{
							if (iLocal_79 == 1)
							{
								if (get_game_timer() - iLocal_78 > 500)
								{
									if ((get_game_timer() - iLocal_78 > 2500 || is_control_just_pressed(2, 201)) || is_control_just_pressed(2, 237))
									{
										func_579(0, "");
									}
								}
							}
							if (iLocal_79 == 0)
							{
								play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
								if (is_bit_set(*iParam0, 18))
								{
									func_579(1, "TRYBRUTE");
								}
								else
								{
									func_579(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					func_577("H_USE_PC6", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_577("H_USE_PC7", -1);
					iLocal_62 = 0;
				}
			}
			if (!is_pause_menu_active())
			{
				if (!is_bit_set(*iParam0.f_1, true))
				{
					if (!_0x768FF8961BA904D6(uLocal_74))
					{
						if (is_control_just_pressed(2, 202))
						{
							*iParam0.f_7 = iParam1;
							call_scaleform_movie_method(iLocal_75, "CLOSE_APP");
							if (iLocal_64[1] != -1)
							{
								if (!has_sound_finished(iLocal_64[1]))
								{
									stop_sound(iLocal_64[1]);
									iLocal_64[1] = -1;
								}
							}
							if (iLocal_64[0] != -1)
							{
								if (!has_sound_finished(iLocal_64[0]))
								{
									stop_sound(iLocal_64[0]);
									iLocal_64[0] = -1;
								}
							}
							if (!is_bit_set(*iParam0.f_1, false))
							{
								iLocal_76 = 4;
							}
							else
							{
								set_bit(iParam0.f_1, true);
							}
						}
					}
				}
			}
			if (!is_pause_menu_active())
			{
				if (!_0x768FF8961BA904D6(uLocal_74))
				{
					if (_is_input_just_disabled(2))
					{
						if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
						{
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = _pop_scaleform_movie_function();
						}
					}
					else if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
					{
						_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = _pop_scaleform_movie_function();
					}
				}
				if (_0x768FF8961BA904D6(uLocal_74))
				{
					iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				}
			}
			if (iVar0 == 85)
			{
				if (*iParam0.f_7 > 1)
				{
					*iParam0.f_7--;
					_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(*iParam0.f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!has_sound_finished(iLocal_64[0]))
					{
						stop_sound(iLocal_64[0]);
					}
					set_bit(iParam0, 25);
					iLocal_60 = 0;
					iLocal_62 = 1;
					play_sound_frontend(-1, "HACKING_FAILURE", 0, 1);
					_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				*iParam0.f_7 = iParam1;
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				*iParam0.f_9 = to_float(iParam3);
				iLocal_59 = get_game_timer();
				iLocal_64[0] = get_sound_id();
				play_sound_frontend(iLocal_64[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				set_bit(iParam0, 25);
				iLocal_60 = 1;
			}
			if (iVar0 == 91)
			{
				*iParam0.f_7 = iParam1;
				call_scaleform_movie_method(iLocal_75, "CLOSE_APP");
				if (iLocal_64[0] != -1)
				{
					if (!has_sound_finished(iLocal_64[0]))
					{
						stop_sound(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				set_bit(iParam0, 25);
				iLocal_76 = 4;
			}
			if (iLocal_60 == 1)
			{
				iVar1 = 60000 - get_game_timer() - iLocal_59;
				if (iVar1 < 1)
				{
					set_bit(iParam0, 25);
					*iParam0.f_7 = iParam1;
					_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					*iParam0.f_9 = to_float(iParam3);
					iLocal_59 = get_game_timer();
					iLocal_60 = 0;
					iLocal_62 = 1;
					play_sound_frontend(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_64[0] != -1)
					{
						if (!has_sound_finished(iLocal_64[0]))
						{
							stop_sound(iLocal_64[0]);
							iLocal_64[0] = -1;
						}
					}
					_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				iLocal_77 = get_game_timer();
				set_bit(iParam0, 18);
				iLocal_60 = 0;
				iLocal_61 = 0;
				play_sound_frontend(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_64[0] != -1)
				{
					if (!has_sound_finished(iLocal_64[0]))
					{
						stop_sound(iLocal_64[0]);
						iLocal_64[0] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_61 == 0)
				{
					func_577("H_USE_PC8", -1);
					iLocal_61 = 1;
				}
				else if (iLocal_62 == 1)
				{
					func_577("H_USE_PC9", -1);
					iLocal_62 = 0;
				}
			}
			if (!is_pause_menu_active())
			{
				if (!_0x768FF8961BA904D6(uLocal_74))
				{
					if (!is_bit_set(*iParam0.f_1, true))
					{
						if (is_control_just_pressed(2, 202))
						{
							*iParam0.f_7 = iParam1;
							call_scaleform_movie_method(iLocal_75, "CLOSE_APP");
							if (!has_sound_finished(iLocal_64[0]))
							{
								stop_sound(iLocal_64[0]);
							}
							if (!is_bit_set(*iParam0.f_1, false))
							{
								iLocal_76 = 4;
							}
							else
							{
								set_bit(iParam0.f_1, true);
							}
						}
					}
				}
				if (!_0x768FF8961BA904D6(uLocal_74))
				{
					if (_is_input_just_disabled(2))
					{
						if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
						{
							_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
							uLocal_74 = _pop_scaleform_movie_function();
						}
					}
					else if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
					{
						_push_scaleform_movie_function(iLocal_75, "SET_INPUT_EVENT_SELECT");
						uLocal_74 = _pop_scaleform_movie_function();
					}
				}
				if (_0x768FF8961BA904D6(uLocal_74))
				{
					iVar0 = _0x2DE7EFA66B906036(uLocal_74);
				}
			}
			if (iVar0 == 86)
			{
				play_sound_frontend(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				play_sound_frontend(-1, "HACKING_CLICK", 0, 1);
			}
			if (is_bit_set(*iParam0, 23))
			{
				if (func_582(iParam0.f_10, 500))
				{
					call_scaleform_movie_method(iLocal_75, "RESET_ROULETTE");
					clear_bit(iParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (*iParam0.f_7 > 1)
				{
					play_sound_frontend(-1, "HACKING_CLICK_BAD", 0, 1);
					call_scaleform_movie_method(iLocal_75, "STOP_ROULETTE");
					*iParam0.f_10 = get_game_timer();
					set_bit(iParam0, 23);
					set_bit(iParam0, 31);
					if (func_192() == 0)
					{
						*iParam0.f_7--;
						_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(*iParam0.f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					set_bit(iParam0, 25);
					set_bit(iParam0, 31);
					play_sound_frontend(-1, "HACKING_FAILURE", 0, 1);
					*iParam0.f_7 = iParam1;
					_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					*iParam0.f_9 = to_float(iParam3);
					iLocal_59 = get_game_timer();
					if (iLocal_64[1] != -1)
					{
						if (!has_sound_finished(iLocal_64[1]))
						{
							stop_sound(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					if (func_192() == 0)
					{
						_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_60 == 1)
			{
				iVar1 = 60000 - get_game_timer() - iLocal_59;
				if (iVar1 < 1)
				{
					*iParam0.f_7 = iParam1;
					set_bit(iParam0, 25);
					_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					*iParam0.f_9 = to_float(iParam3);
					iLocal_59 = get_game_timer();
					iLocal_60 = 0;
					iLocal_62 = 1;
					play_sound_frontend(-1, "HACKING_FAILURE", 0, 1);
					clear_help(1);
					if (iLocal_64[1] != -1)
					{
						if (!has_sound_finished(iLocal_64[1]))
						{
							stop_sound(iLocal_64[1]);
							iLocal_64[1] = -1;
						}
					}
					_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				*iParam0.f_7 = iParam1;
				set_bit(iParam0, 25);
				_call_scaleform_movie_function_float_params(iLocal_75, "SET_LIVES", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				*iParam0.f_9 = to_float(iParam3);
				iLocal_59 = get_game_timer();
				iLocal_64[1] = get_sound_id();
				play_sound_frontend(iLocal_64[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_60 = 1;
			}
			if (iVar0 == 89)
			{
				*iParam0.f_7 = iParam1;
				set_bit(iParam0, 25);
				call_scaleform_movie_method(iLocal_75, "CLOSE_APP");
				if (iLocal_64[1] != -1)
				{
					if (!has_sound_finished(iLocal_64[1]))
					{
						stop_sound(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 4;
			}
			if (iVar0 == 86)
			{
				_call_scaleform_movie_function_mixed_params(iLocal_75, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				iLocal_77 = get_game_timer();
				set_bit(iParam0, 9);
				play_sound_frontend(-1, "HACKING_SUCCESS", 0, 1);
				if (iLocal_64[1] != -1)
				{
					if (!has_sound_finished(iLocal_64[1]))
					{
						stop_sound(iLocal_64[1]);
						iLocal_64[1] = -1;
					}
				}
				iLocal_76 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (is_bit_set(*iParam0, 9) && is_bit_set(*iParam0, 18))
				{
					if (iLocal_150 == 0)
					{
						if (!func_345("HACKOBJ7"))
						{
							func_580("HACKOBJ7");
							iLocal_150 = 1;
						}
					}
				}
				if (((func_345("H_USE_PC6") || func_345("H_USE_PC7")) || func_345("H_USE_PC8")) || func_345("H_USE_PC9"))
				{
					clear_help(1);
				}
			}
			if ((is_bit_set(*iParam0, 9) && is_bit_set(*iParam0, 18)) && (!iParam13 || (iParam13 && is_bit_set(*iParam0, 28))))
			{
				if (func_345("HACKOBJ7"))
				{
					clear_help(1);
				}
				if (!iLocal_151)
				{
					play_sound_from_entity(-1, "unlocked_bleep", player_ped_id(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_151 = 1;
				}
				if (func_582(&iLocal_77, 3000))
				{
					clear_bit(iParam0, false);
					set_bit(iParam0, 12);
					_0x9B079E5221D984D3(0);
				}
			}
			else
			{
				if (((iParam13 && !is_bit_set(*iParam0, 27)) && is_bit_set(*iParam0, 9)) && is_bit_set(*iParam0, 18))
				{
					_push_scaleform_movie_function(iLocal_75, "OPEN_DOWNLOAD");
					_push_scaleform_movie_function_parameter_bool(true);
					_pop_scaleform_movie_function_void();
					set_bit(iParam0, 27);
				}
				if (func_582(&iLocal_77, 2000))
				{
					call_scaleform_movie_method(iLocal_75, "CLOSE_APP");
					iLocal_76 = 4;
				}
			}
			break;
		
		case 8:
			func_571(iParam0);
			break;
	}
}

void func_571(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (*iParam0.f_18 > 0)
	{
		if (is_bit_set(*iParam0, 22))
		{
			if (has_streamed_texture_dict_loaded("hackingNG"))
			{
				if (!is_pause_menu_active())
				{
					draw_sprite("hackingNG", "DHMain", Local_80, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_101[0 /*4*/] == 1 && Local_101[1 /*4*/] == 1) && Local_101[2 /*4*/] == 1) && Local_101[3 /*4*/] == 1) && Local_101[4 /*4*/] == 1) && Local_101[5 /*4*/] == 1) && Local_101[6 /*4*/] == 1) && Local_101[7 /*4*/] == 1)
	{
		play_sound_frontend(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_345("H1_HNG"))
		{
			clear_help(1);
		}
		if (is_pc_version())
		{
			if (func_345("H1_HNG_KM"))
			{
				clear_help(1);
			}
		}
		set_bit(iParam0, 26);
	}
	else if (_is_input_disabled(2))
	{
		if (!func_345("H1_HNG_KM"))
		{
			func_580("H1_HNG_KM");
		}
	}
	else if (!func_345("H1_HNG"))
	{
		func_580("H1_HNG");
	}
	switch (*iParam0.f_18)
	{
		case 0:
			request_streamed_texture_dict("hackingNG", false);
			clear_bit(iParam0, 22);
			func_576();
			iLocal_139 = get_game_timer();
			Local_99 = 0;
			clear_bit(&iLocal_149, false);
			clear_bit(&iLocal_149, true);
			clear_bit(&iLocal_149, 2);
			clear_bit(&iLocal_149, 3);
			clear_bit(&iLocal_149, 4);
			clear_bit(&iLocal_149, 5);
			clear_bit(&iLocal_149, 6);
			clear_bit(&iLocal_149, 7);
			*iParam0.f_18++;
			break;
		
		case 1:
			if (has_streamed_texture_dict_loaded("hackingNG"))
			{
				set_bit(iParam0, 22);
				_push_scaleform_movie_function(iLocal_75, "SET_CURSOR_VISIBILITY");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
				*iParam0.f_18++;
			}
			break;
		
		case 2:
			iVar0 = false;
			while (iVar0 <= 7)
			{
				if (Local_101[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_101[iVar0 /*4*/].f_2 < 1f)
					{
						Local_101[iVar0 /*4*/].f_2 += Local_101[iVar0 /*4*/].f_1 * timestep() * fLocal_138;
					}
					else
					{
						Local_101[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_101[iVar0 /*4*/].f_2 > 0f)
				{
					Local_101[iVar0 /*4*/].f_2 -= Local_101[iVar0 /*4*/].f_1 * timestep() * fLocal_138;
				}
				else
				{
					Local_101[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_101[iVar0 /*4*/] == 0)
				{
					Local_82[iVar0 /*2*/].f_1 = func_574(0.744f, 0.4f, Local_101[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = false;
			while (iVar0 <= 7)
			{
				if (Local_101[iVar0 /*4*/] == 0)
				{
					if (Local_99 == iVar0)
					{
						if (!is_bit_set(iLocal_149, iVar0))
						{
							iLocal_140[iVar0] = get_sound_id();
							play_sound_frontend(iLocal_140[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							set_bit(&iLocal_149, iVar0);
						}
						else
						{
							if (Local_101[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_134 = 2f * 1f - Local_101[iVar0 /*4*/].f_2;
							}
							else
							{
								fLocal_134 = 2f * Local_101[iVar0 /*4*/].f_2;
							}
							set_variable_on_sound(iLocal_140[iVar0], "PinMovementY", fLocal_134);
						}
					}
				}
				else if (is_bit_set(iLocal_149, iVar0))
				{
					stop_sound(iLocal_140[iVar0]);
					release_sound_id(iLocal_140[iVar0]);
					clear_bit(&iLocal_149, iVar0);
				}
				iVar0++;
			}
			if (func_573(Local_99))
			{
				play_sound_frontend(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
			{
				if (func_582(&iLocal_139, 300))
				{
					if (func_572(Local_99))
					{
						Local_101[Local_99 /*4*/] = 1;
						Local_82[Local_99 /*2*/].f_1 = 0.572f;
						play_sound_frontend(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_99 != 7)
						{
							Local_99++;
						}
					}
					else
					{
						if (Local_99 != 0)
						{
							if (is_bit_set(iLocal_149, Local_99))
							{
								stop_sound(iLocal_140[Local_99]);
								release_sound_id(iLocal_140[Local_99]);
								clear_bit(&iLocal_149, Local_99);
							}
							Local_101[Local_99 - 1 /*4*/] = 0;
							Local_99--;
						}
						if (!is_pause_menu_active())
						{
							draw_rect(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						iLocal_139 = get_game_timer();
						set_pad_shake(0, 100, 100);
						play_sound_frontend(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_99.f_1 = 1;
					}
				}
				else
				{
					if (!is_pause_menu_active())
					{
						draw_sprite("hackingNG", "DHMain", Local_80, Local_80.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					iLocal_139 = get_game_timer();
					set_pad_shake(0, 100, 100);
				}
			}
			if (!is_pause_menu_active())
			{
				if (Local_99 == 0)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[0 /*2*/], Local_82[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 1)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[1 /*2*/], Local_82[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 2)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[2 /*2*/], Local_82[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 3)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[3 /*2*/], Local_82[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 4)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[4 /*2*/], Local_82[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 5)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[5 /*2*/], Local_82[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 6)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[6 /*2*/], Local_82[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_99 == 7)
				{
					draw_sprite("hackingNG", "DHCompHi", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					draw_sprite("hackingNG", "DHComp", Local_82[7 /*2*/], Local_82[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (is_bit_set(*iParam0.f_1, false))
				{
					if (!is_bit_set(*iParam0.f_1, true))
					{
						if (is_control_just_pressed(2, 202))
						{
							set_bit(iParam0.f_1, true);
							clear_help(1);
						}
					}
				}
			}
			break;
	}
}

bool func_572(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 >= fLocal_136 && Local_82[iParam0 /*2*/].f_1 <= fLocal_135)
	{
		return true;
	}
	return false;
}

bool func_573(int iParam0)
{
	if (Local_82[iParam0 /*2*/].f_1 == 0.5f)
	{
		return true;
	}
	return false;
}

float func_574(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = 1f - cos(func_575(fParam2 * 3.141593f)) * 0.5f;
	return fParam0 * 1f - fVar0 + fParam1 * fVar0;
}

float func_575(float fParam0)
{
	return fParam0 * 57.29578f;
}

void func_576()
{
	fLocal_135 = 0.6f;
	fLocal_136 = 0.53f;
	Local_101[0 /*4*/].f_1 = 0.02f * fLocal_137;
	Local_101[1 /*4*/].f_1 = 0.025f * fLocal_137;
	Local_101[2 /*4*/].f_1 = 0.03f * fLocal_137;
	Local_101[3 /*4*/].f_1 = 0.035f * fLocal_137;
	Local_101[4 /*4*/].f_1 = 0.04f * fLocal_137;
	Local_101[5 /*4*/].f_1 = 0.045f * fLocal_137;
	Local_101[6 /*4*/].f_1 = 0.048f * fLocal_137;
	Local_101[7 /*4*/].f_1 = 0.05f * fLocal_137;
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
	Local_80 = 0.5f;
	Local_80.f_1 = 0.5f;
	Local_82[0 /*2*/] = 0.35f;
	Local_82[0 /*2*/].f_1 = 0.4f;
	Local_82[1 /*2*/] = 0.39f;
	Local_82[1 /*2*/].f_1 = 0.4f;
	Local_82[2 /*2*/] = 0.43f;
	Local_82[2 /*2*/].f_1 = 0.4f;
	Local_82[3 /*2*/] = 0.47f;
	Local_82[3 /*2*/].f_1 = 0.4f;
	Local_82[4 /*2*/] = 0.51f;
	Local_82[4 /*2*/].f_1 = 0.74f;
	Local_82[5 /*2*/] = 0.55f;
	Local_82[5 /*2*/].f_1 = 0.74f;
	Local_82[6 /*2*/] = 0.59f;
	Local_82[6 /*2*/].f_1 = 0.74f;
	Local_82[7 /*2*/] = 0.63f;
	Local_82[7 /*2*/].f_1 = 0.74f;
}

void func_577(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_578(int iParam0)
{
	int iVar0;
	
	iVar0 = get_random_int_in_range(false, 8);
	if (iVar0 == 0)
	{
		*iParam0.f_14 = "PASSWORD";
	}
	else if (iVar0 == 1)
	{
		*iParam0.f_14 = "PETSNAME";
	}
	else if (iVar0 == 2)
	{
		*iParam0.f_14 = "DYNAMITE";
	}
	else if (iVar0 == 3)
	{
		*iParam0.f_14 = "BACKDOOR";
	}
	else if (iVar0 == 4)
	{
		*iParam0.f_14 = "MORPHEUS";
	}
	else if (iVar0 == 5)
	{
		*iParam0.f_14 = "CREAMPIE";
	}
	else if (iVar0 == 6)
	{
		*iParam0.f_14 = "WORMSIGN";
	}
	else if (iVar0 == 7)
	{
		*iParam0.f_14 = "UNLOCKED";
	}
	else if (iVar0 == 8)
	{
		*iParam0.f_14 = "BLUEBOOK";
	}
	else if (iVar0 == 9)
	{
		*iParam0.f_14 = "DECIPHER";
	}
	else if (iVar0 == 10)
	{
		*iParam0.f_14 = "JUNKYARD";
	}
	else
	{
		*iParam0.f_14 = "PASSWORD";
	}
}

void func_579(int iParam0, char* sParam1)
{
	if (iParam0)
	{
		_call_scaleform_movie_function_mixed_params(iLocal_75, "OPEN_ERROR_POPUP", to_float(true), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_78 = get_game_timer();
		iLocal_79 = 1;
	}
	else
	{
		_call_scaleform_movie_function_mixed_params(iLocal_75, "OPEN_ERROR_POPUP", to_float(false), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_79 = 0;
	}
}

void func_580(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_581(int iParam0, int iParam1)
{
	if (!is_bit_set(*iParam0, 29))
	{
		_call_scaleform_movie_function_float_params(iLocal_75, "SET_BACKGROUND", to_float(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
		if (get_is_widescreen())
		{
			_call_scaleform_movie_function_mixed_params(iLocal_75, "ADD_PROGRAM", to_float(7), to_float(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			_call_scaleform_movie_function_mixed_params(iLocal_75, "ADD_PROGRAM", to_float(8), to_float(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		_push_scaleform_movie_function(iLocal_75, "SET_LABELS");
		func_227("H_ICON_1");
		if (iParam1 == 0)
		{
			func_227("H_ICON_2a");
		}
		else
		{
			func_227("H_ICON_2");
		}
		func_227("H_ICON_3");
		func_227("H_ICON_4");
		func_227("H_ICON_5");
		func_227("H_ICON_6");
		_pop_scaleform_movie_function_void();
		set_bit(iParam0, 29);
	}
}

bool func_582(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_game_timer();
	if (iVar0 - *iParam0 > iParam1)
	{
		return true;
	}
	return false;
}

void func_583(int iParam0, auto uParam1, auto uParam2, auto uParam3)
{
	*uParam1 = iParam0 % 3600000 / 60000;
	*uParam2 = iParam0 % 3600000 % 60000 / 1000;
	*uParam3 = iParam0 % 3600000 % 60000 % 1000;
}

void func_584()
{
	if (iLocal_76 < 5)
	{
		if (is_control_just_pressed(2, 201) || is_control_just_pressed(2, 237))
		{
			play_sound_frontend(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_585(int iParam0)
{
	set_ped_current_weapon_visible(player_ped_id(), 1, 1, 1, 0);
	if (is_minigame_in_progress())
	{
		set_minigame_in_progress(0);
	}
	clear_help(1);
	set_player_control(player_id(), true, 0);
	destroy_cam(iLocal_73, 0);
	func_561(0);
	func_560();
	set_bit(iParam0, true);
	_0x9B079E5221D984D3(0);
	func_559(iParam0, 1, 0);
	func_558(0, 1, 1, 0);
}

void func_586(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	*uParam0 = floor(_0x5B84D09CEC5209C5(2, 218) * 127f);
	*uParam1 = floor(_0x5B84D09CEC5209C5(2, 219) * 127f);
	*uParam2 = floor(_0x5B84D09CEC5209C5(2, 220) * 127f);
	*uParam3 = floor(_0x5B84D09CEC5209C5(2, 221) * 127f);
	if (iParam4)
	{
		if (!is_control_enabled(2, 218))
		{
			*uParam0 = floor(_0x4F8A26A890FD62FB(2, 218) * 127f);
		}
		if (!is_control_enabled(2, 219))
		{
			*uParam1 = floor(_0x4F8A26A890FD62FB(2, 219) * 127f);
		}
		if (!is_control_enabled(2, 220))
		{
			*uParam2 = floor(_0x4F8A26A890FD62FB(2, 220) * 127f);
		}
		if (!is_control_enabled(2, 221))
		{
			*uParam3 = floor(_0x4F8A26A890FD62FB(2, 221) * 127f);
		}
	}
	if (_is_input_disabled(2))
	{
		if (iParam5)
		{
			if (is_look_inverted())
			{
				*uParam3 *= -1;
			}
			if (_0xE1615EC03B3BB4FD())
			{
				*uParam3 *= -1;
			}
		}
	}
}

void func_587(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4)
{
	*uParam0 = floor(get_control_normal(2, 218) * 127f);
	*uParam1 = floor(get_control_normal(2, 219) * 127f);
	*uParam2 = floor(get_control_normal(2, 220) * 127f);
	*uParam3 = floor(get_control_normal(2, 221) * 127f);
	if (iParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor(get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = floor(get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor(get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = floor(get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

void func_588()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_565(0))
		{
			func_562(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_589(int iParam0, int iParam1)
{
	set_bit(&(Global_1338622.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1338622.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_590(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

void func_591(int iParam0, int iParam1, int iParam2)
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
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam1)
	{
		if (_get_no_loading_screen())
		{
			set_no_loading_screen(0);
		}
	}
	if (!network_is_game_in_progress())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, iParam1, iVar0);
	}
	else
	{
		iVar1 = iParam2 & 2 != false;
		iVar2 = iParam2 & 4 != false;
		iVar3 = iParam2 & 8 != false;
		iVar4 = iParam2 & 16 != false;
		iVar5 = iParam2 & 32 != false;
		iVar6 = iParam2 & 64 != false;
		iVar7 = iParam2 & 128 != false;
		iVar8 = iParam2 & 256 != false;
		iVar9 = iParam2 & 512 != false;
		iVar10 = iParam2 & 1024 != false;
		iVar11 = iParam2 & 2048 != false;
		iVar12 = iParam2 & 4096 != false;
		iVar13 = iParam2 & 8192 != false;
		iVar14 = iParam2 & 16384 != false;
		iVar15 = iParam2 & 32768 != false;
		iVar16 = iParam2 & 65536 != false;
		iVar17 = iParam2 & 131072 != false;
		iVar18 = iParam2 & 262144 != false;
		iVar19 = iParam2 & 524288 != false;
		iVar20 = iParam2 & 1048576 != false;
		iVar21 = iParam2 & 2097152 != false;
		iVar22 = iParam2 & 4194304 != false;
		iVar23 = iParam2 & 8388608 != false;
		if (!func_314())
		{
			iVar24 = false;
			if (iParam1 == 1)
			{
				iVar24 = true;
			}
			if (iVar15 == 0 && !iVar20)
			{
				iVar24 = true;
			}
			if (iVar9 == 1)
			{
				iVar24 = true;
			}
			if (iVar24)
			{
				return;
			}
		}
		if (iVar17)
		{
		}
		if (network_is_player_active(iParam0) && is_player_playing(iParam0))
		{
			iVar25 = get_player_ped(iParam0);
			if (!iVar19)
			{
				if ((iVar18 && iParam1 == 0) && network_is_game_in_progress())
				{
					fade_out_local_player(1);
				}
				else
				{
					set_entity_visible(iVar25, !iVar13, 0);
				}
				if (!iVar13)
				{
					if (network_is_game_in_progress() && !iVar18)
					{
						fade_out_local_player(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (iParam1)
			{
				if (!func_594(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, true, 0);
					}
				}
				if (!is_entity_attached(iVar25))
				{
					if (!iVar20)
					{
						freeze_entity_position(iVar25, false);
					}
					_0x3910051CCECDB00C(iVar25, true);
				}
				else if (!iVar20)
				{
					freeze_entity_position(iVar25, false);
				}
				set_ped_can_be_targetted(iVar25, true);
				set_player_invincible(iParam0, 0);
				_0x4668D80430D6C299(iVar25);
				set_ped_can_ragdoll(iVar25, 1);
				func_593();
				func_592();
				if (is_player_teleport_active())
				{
					if (!iVar22)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!iVar23)
				{
					iVar2 = true;
				}
			}
			else
			{
				if (!func_594(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, !iVar14, 0);
					}
					if (!is_entity_attached(iVar25))
					{
						if (!iVar20)
						{
							freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15)
						{
							_0x3910051CCECDB00C(iVar25, true);
						}
					}
				}
				if (iVar9)
				{
					set_player_invincible(iParam0, 0);
				}
				else
				{
					set_player_invincible(iParam0, 1);
				}
				set_ped_can_be_targetted(iVar25, iVar16);
				if (iVar2)
				{
					if (!is_ped_fatally_injured(iVar25) && !is_ped_in_any_vehicle(iVar25, 0))
					{
						clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (iVar1)
			{
				iVar26 |= 2;
			}
			if (iVar2)
			{
				iVar26 |= 4;
			}
			if (iVar3)
			{
				iVar26 |= 8;
			}
			if (iVar4)
			{
				iVar26 |= 16;
			}
			if (iVar5)
			{
				iVar26 |= 32;
			}
			if (iVar6)
			{
				iVar26 |= 64;
			}
			if (iVar7)
			{
				iVar26 |= 128;
			}
			if (iVar8)
			{
				iVar26 |= 256;
			}
			if (iVar9)
			{
				iVar26 |= 512;
			}
			if (iVar10)
			{
				iVar26 |= 1024;
			}
			if (iVar11)
			{
				iVar26 |= 2048;
			}
			if (iVar12)
			{
				iVar26 |= 4096;
			}
			set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

void func_592()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_593()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_594(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_595(int iParam0)
{
	if (has_scaleform_movie_loaded(iLocal_75) && (!iParam0 || (((((has_streamed_texture_dict_loaded("HACKING_PC_desktop_0") && has_streamed_texture_dict_loaded("HACKING_PC_desktop_1")) && has_streamed_texture_dict_loaded("HACKING_PC_desktop_2")) && has_streamed_texture_dict_loaded("HACKING_PC_desktop_3")) && has_streamed_texture_dict_loaded("HACKING_PC_desktop_4")) && has_streamed_texture_dict_loaded("HACKING_PC_desktop_5"))))
	{
		return true;
	}
	return false;
}

void func_596(int iParam0)
{
	if (iParam0)
	{
		request_streamed_texture_dict("HACKING_PC_desktop_0", false);
		request_streamed_texture_dict("HACKING_PC_desktop_1", false);
		request_streamed_texture_dict("HACKING_PC_desktop_2", false);
		request_streamed_texture_dict("HACKING_PC_desktop_3", false);
		request_streamed_texture_dict("HACKING_PC_desktop_4", false);
		request_streamed_texture_dict("HACKING_PC_desktop_5", false);
	}
	iLocal_75 = _request_scaleform_movie3("Hacking_PC");
}

void func_597(int iParam0)
{
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_current_weapon_visible(player_ped_id(), 1, 1, 1, 0);
	}
	if (is_minigame_in_progress())
	{
		set_minigame_in_progress(0);
	}
	_0xC6372ECD45D73BCD(0);
	clear_help(1);
	set_player_control(player_id(), true, 0);
	destroy_cam(iLocal_73, 0);
	clear_bit(iParam0, false);
	clear_bit(iParam0, 12);
	func_561(0);
	func_560();
	_0x9B079E5221D984D3(0);
}

void func_598(int iParam0)
{
	func_559(iParam0, 1, 1);
	*iParam0 = 0;
	*iParam0.f_18 = 0;
	Local_99 = false;
	Local_99.f_1 = 0;
	clear_bit(iParam0, 26);
	Local_101[0 /*4*/] = 0;
	Local_101[1 /*4*/] = 0;
	Local_101[2 /*4*/] = 0;
	Local_101[3 /*4*/] = 0;
	Local_101[4 /*4*/] = 0;
	Local_101[5 /*4*/] = 0;
	Local_101[6 /*4*/] = 0;
	Local_101[7 /*4*/] = 0;
}

void func_599(int iParam0)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam0)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	disable_control_action(0, 69, 1);
	disable_control_action(0, 70, 1);
	disable_control_action(0, 68, 1);
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
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
}

void func_600()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (is_bit_set(Local_458, false))
	{
		return;
	}
	if (!func_370())
	{
		if (func_345("GB_SGHT_HLP1"))
		{
			clear_help(1);
		}
		if (func_345("GB_SGHT_HLP2"))
		{
			clear_help(1);
		}
		if (func_338())
		{
			sVar0 = func_405(int_to_playerindex(Local_192.f_34));
			iVar1 = func_530(int_to_playerindex(Local_192.f_34));
			if (func_234(player_id(), 1))
			{
				if (func_609("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					clear_help(1);
				}
			}
			else if (func_609("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				clear_help(1);
			}
		}
		if (func_345("GB_SGHT_RVL"))
		{
			clear_help(1);
		}
		return;
	}
	iVar2 = func_329(player_id());
	if (iVar2 < 2)
	{
		if (func_345("GB_SGHT_HLP1"))
		{
			clear_help(1);
		}
		if (func_345("GB_SGHT_HLP2"))
		{
			clear_help(1);
		}
		if (func_338())
		{
			sVar0 = func_405(int_to_playerindex(Local_192.f_34));
			iVar1 = func_530(int_to_playerindex(Local_192.f_34));
			if (func_234(player_id(), 1))
			{
				if (func_609("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					clear_help(1);
				}
			}
			else if (func_609("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				clear_help(1);
			}
		}
		if (func_345("GB_SGHT_RVL"))
		{
			clear_help(1);
		}
		return;
	}
	if (!is_bit_set(iLocal_445, 2))
	{
		if (!func_608(84))
		{
			if (iLocal_747 == -1)
			{
				if (func_602(0, 1, 1, 1))
				{
					if (participant_id_to_int() == Local_192.f_33)
					{
						func_350("GB_SGHT_HLP1", -1);
						func_349(1);
						set_bit(&iLocal_445, 2);
					}
					else if (func_663() == Local_192.f_33)
					{
						func_350("GB_SGHT_HLP2", -1);
						func_349(1);
						set_bit(&iLocal_445, 2);
					}
					else if (func_338())
					{
						sVar0 = func_405(int_to_playerindex(Local_192.f_34));
						iVar1 = func_530(int_to_playerindex(Local_192.f_34));
						if (func_234(player_id(), 1))
						{
							func_601("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_349(1);
						}
						else
						{
							func_601("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_349(1);
						}
						set_bit(&iLocal_445, 2);
					}
				}
			}
			else
			{
				set_bit(&iLocal_445, 2);
			}
		}
	}
	if (is_bit_set(iLocal_445, 2))
	{
		if (!is_bit_set(iLocal_445, 7))
		{
			if (iLocal_747 == -1)
			{
				if (participant_id_to_int() == Local_192.f_33)
				{
					if (func_602(0, 1, 1, 1))
					{
						func_350("GB_SGHT_APPH", -1);
						func_349(1);
						set_bit(&iLocal_445, 7);
					}
				}
				else
				{
					set_bit(&iLocal_445, 7);
				}
			}
			else
			{
				set_bit(&iLocal_445, 7);
			}
		}
	}
	if (!is_bit_set(iLocal_445, 8))
	{
		if (func_662())
		{
			if (func_648())
			{
				if (network_does_entity_exist_with_network_id(Local_192.f_3))
				{
					if (func_602(0, 1, 1, 1))
					{
						func_350("GB_SGHT_PKGH", -1);
						func_349(1);
						set_bit(&iLocal_445, 8);
					}
				}
			}
		}
	}
	if (!is_bit_set(iLocal_445, 12))
	{
		if (func_662())
		{
			if (Local_192.f_5 > 0 || is_bit_set(Local_192.f_1, 6))
			{
				if (func_602(0, 1, 1, 1))
				{
					func_350("GB_SGHT_RVL", -1);
					func_349(1);
					set_bit(&iLocal_445, 12);
				}
			}
		}
	}
}

void func_601(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	_set_text_component_format(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	if (!iParam4 == 0)
	{
		_0x39BBF623FC803EAC(iParam4);
	}
	_add_text_component_item_string(sParam3);
	_display_help_text_from_string_label(0, 0, false, iParam5);
}

bool func_602(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 && is_help_message_being_displayed())
	{
		return false;
	}
	if (func_607())
	{
		return false;
	}
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_319())
	{
		return false;
	}
	if (func_382())
	{
		return false;
	}
	if (iParam1)
	{
		if (func_27(player_id(), 1))
		{
			return false;
		}
	}
	if (iParam0)
	{
		if (func_606(player_id()))
		{
			return false;
		}
	}
	if (func_605())
	{
		return false;
	}
	if (is_ped_injured(player_ped_id()))
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if (iParam3)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (Global_1573684)
	{
		return false;
	}
	if (func_604())
	{
		return false;
	}
	if (func_603())
	{
		return false;
	}
	if (func_312())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (Global_2467968)
	{
		return false;
	}
	return true;
}

auto func_603()
{
	return Global_2434762.f_567;
}

auto func_604()
{
	return Global_2434762.f_717;
}

auto func_605()
{
	return Global_2428492.f_2462.f_585;
}

bool func_606(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_206 == 0)
	{
		return false;
	}
	return true;
}

bool func_607()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_608(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

int func_609(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	_0x0A24DA3A41B718F5(sParam0);
	if (!iParam2 == 0)
	{
		_0x39BBF623FC803EAC(iParam2);
	}
	add_text_component_substring_player_name(sParam1);
	if (!iParam4 == 0)
	{
		_0x39BBF623FC803EAC(iParam4);
	}
	_add_text_component_item_string(sParam3);
	return _0x10BDDBFC529428DD(0);
}

void func_610()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_bit_set(Local_458, false))
	{
		return;
	}
	if (!func_370())
	{
		if (is_bit_set(iLocal_445, 5))
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_238(int_to_playerindex(Local_192.f_34));
				if (iVar0 > -1)
				{
					if (network_is_player_active(int_to_playerindex(Local_192.f_34)))
					{
						iVar1 = func_236(iVar0);
						iVar2 = func_553(iVar1);
						func_361(int_to_playerindex(Local_192.f_34), 432, 0);
						func_359(int_to_playerindex(Local_192.f_34), iVar2, 0);
						func_358(int_to_playerindex(Local_192.f_34), 0, 0);
						func_357(int_to_playerindex(Local_192.f_34), 0);
						func_356(int_to_playerindex(Local_192.f_34), Global_262145.f_10294, 0);
						clear_bit(&iLocal_445, 5);
					}
					else
					{
						clear_bit(&iLocal_445, 5);
					}
				}
			}
			func_363();
		}
		return;
	}
	if (!network_does_entity_exist_with_network_id(Local_192.f_3))
	{
		if (participant_id_to_int() == Local_192.f_33)
		{
			if (!is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, 3))
			{
				if (!is_bit_set(Local_458, false))
				{
					if (Local_252[participant_id_to_int() /*6*/].f_5 < 3)
					{
						if (func_329(player_id()) == 3)
						{
							if (!func_620("GB_SGHT_HCK"))
							{
								func_617("GB_SGHT_HCK", 0);
							}
						}
						else if (func_620("GB_SGHT_HCK"))
						{
							func_363();
						}
					}
					else
					{
						func_363();
					}
				}
			}
		}
		else if (func_663() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (func_329(player_id()) == 3)
				{
					if (!func_620("GB_SGHT_PROT"))
					{
						iVar0 = func_238(int_to_playerindex(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							func_611("GB_SGHT_PROT", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_620("GB_SGHT_PROT"))
				{
					func_363();
				}
			}
		}
		else if (func_338())
		{
			if (Local_192.f_34 != -1)
			{
				if (func_329(player_id()) == 3)
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_238(int_to_playerindex(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							if (func_234(player_id(), 1))
							{
								if (!func_620("GB_SGHT_STOP"))
								{
									func_611("GB_SGHT_STOP", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_620("GB_SGHT_STOP"))
							{
								func_611("GB_SGHT_STOP", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_620("GB_SGHT_STOP"))
					{
						func_363();
					}
					if (func_620("GB_SGHT_STOP2"))
					{
						func_363();
					}
				}
				if (func_329(player_id()) >= 2)
				{
					if (!is_bit_set(iLocal_445, 5))
					{
						if (Local_192.f_34 != -1)
						{
							if (network_is_player_active(int_to_playerindex(Local_192.f_34)))
							{
								if (func_705(int_to_playerindex(Local_192.f_34), 1, 1))
								{
									iVar0 = func_238(int_to_playerindex(Local_192.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_236(iVar0);
										iVar2 = func_553(iVar1);
										func_361(int_to_playerindex(Local_192.f_34), 432, 1);
										func_359(int_to_playerindex(Local_192.f_34), iVar2, 1);
										func_358(int_to_playerindex(Local_192.f_34), 1, 1);
										func_357(int_to_playerindex(Local_192.f_34), 1);
										func_356(int_to_playerindex(Local_192.f_34), Global_262145.f_10294, 1);
										set_bit(&iLocal_445, 5);
									}
								}
							}
						}
					}
				}
				else if (is_bit_set(iLocal_445, 5))
				{
					if (Local_192.f_34 != -1)
					{
						iVar0 = func_238(int_to_playerindex(Local_192.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_236(iVar0);
							iVar2 = func_553(iVar1);
							func_361(int_to_playerindex(Local_192.f_34), 432, 0);
							func_359(int_to_playerindex(Local_192.f_34), iVar2, 0);
							func_358(int_to_playerindex(Local_192.f_34), 0, 0);
							func_357(int_to_playerindex(Local_192.f_34), 0);
							func_356(int_to_playerindex(Local_192.f_34), Global_262145.f_10294, 0);
							clear_bit(&iLocal_445, 5);
						}
					}
				}
			}
		}
	}
	else if (func_329(player_id()) == 3)
	{
		if (participant_id_to_int() == Local_192.f_33)
		{
			if (!is_bit_set(Local_458, false))
			{
				if (!func_620("GB_SGHT_RETP"))
				{
					func_617("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_663() == Local_192.f_33)
		{
			if (Local_192.f_34 != -1)
			{
				if (!func_620("GB_SGHT_PROT"))
				{
					iVar0 = func_238(int_to_playerindex(Local_192.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_236(iVar0);
						func_611("GB_SGHT_PROT", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_338())
		{
			if (Local_192.f_34 != -1)
			{
				iVar0 = func_238(int_to_playerindex(Local_192.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_236(iVar0);
					if (func_234(player_id(), 1))
					{
						if (!func_620("GB_SGHT_STOP"))
						{
							func_611("GB_SGHT_STOP", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_620("GB_SGHT_STOP"))
					{
						func_611("GB_SGHT_STOP", int_to_playerindex(Local_192.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_620("GB_SGHT_PROT"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_RETP"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_STOP"))
		{
			func_363();
		}
		if (func_620("GB_SGHT_STOP2"))
		{
			func_363();
		}
	}
}

void func_611(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_612(sParam0, get_player_name(iParam1), sParam2, iParam5, iParam3))
	{
		Global_1312577 = 14;
		Global_1312577.f_54 = iParam3;
		Global_1312577.f_55 = iParam4;
	}
}

bool func_612(char* sParam0, char* sParam1, char* sParam2, int iParam3, auto uParam4)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam1) > 63)
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (_0x43E4111189E54F0E(sParam2) > 63)
	{
		return false;
	}
	if (func_616(sParam0, sParam1, sParam2) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return false;
	}
	func_364();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	Global_1312577.f_56 = uParam4;
	func_615();
	func_614(iParam3);
	func_613();
	return true;
}

void func_613()
{
	set_bit(&(Global_1312577.f_57), true);
}

void func_614(int iParam0)
{
	if (iParam0)
	{
		set_bit(&(Global_1312577.f_57), false);
		return;
	}
	clear_bit(&(Global_1312577.f_57), false);
}

void func_615()
{
	Global_1312577.f_8 = get_time_offset(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312577.f_9 = NETWORK::GET_NETWORK_TIME();
}

int func_616(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_369())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	if (!get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10)))
	{
		return false;
	}
	if (!get_hash_key(sParam1) == get_hash_key(&(Global_1312577.f_14)))
	{
		return false;
	}
	return get_hash_key(sParam2) == get_hash_key(&(Global_1312577.f_30));
}

void func_617(char* sParam0, int iParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_618(sParam0))
	{
		return;
	}
	func_364();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), get_this_script_name(), 24);
	Global_1312577.f_7 = get_hash_key(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_615();
	func_614(iParam1);
	func_613();
}

int func_618(char* sParam0)
{
	if (!func_369())
	{
		return false;
	}
	if (Global_1312577 == 11)
	{
		return func_619(sParam0);
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_10));
}

int func_619(char* sParam0)
{
	if (!func_369())
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return get_hash_key(sParam0) == get_hash_key(&(Global_1312577.f_14));
}

int func_620(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!func_369())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (_0x43E4111189E54F0E(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	return func_618(sParam0);
}

void func_621()
{
	int iVar0;
	char* sVar1;
	auto uVar2;
	
	if (!func_662() && !func_338())
	{
		return;
	}
	if (!func_370())
	{
		return;
	}
	if (!is_bit_set(iLocal_445, true))
	{
		iVar0 = func_329(player_id());
		if (iVar0 >= 2)
		{
			if (participant_id_to_int() == Local_192.f_33 || func_663() == Local_192.f_33)
			{
				if (func_627(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_404(84, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2);
					_0x78857FC65CADB909(1);
					_0x616093EC6B139DD9(player_id(), joaat("pickup_portable_package"), 1);
					func_626(1);
					func_622();
				}
			}
			else if (func_234(player_id(), 1))
			{
				sVar1 = func_405(int_to_playerindex(Local_192.f_34));
				uVar2 = func_530(int_to_playerindex(Local_192.f_34));
				func_528(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				_0x616093EC6B139DD9(player_id(), joaat("pickup_portable_package"), 0);
				func_622();
			}
			else
			{
				sVar1 = func_405(int_to_playerindex(Local_192.f_34));
				uVar2 = func_530(int_to_playerindex(Local_192.f_34));
				func_528(84, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				_0x616093EC6B139DD9(player_id(), joaat("pickup_portable_package"), 0);
				func_622();
			}
		}
		set_bit(&iLocal_445, true);
	}
}

void func_622()
{
	if (func_402() != func_69())
	{
		Global_1727400 = func_625(func_402());
		Global_1727400.f_1 = func_624(func_402());
	}
	Global_1727400.f_5 = _get_posix_time();
	Global_1727400.f_13 = func_623();
	Global_1727400.f_15 = 0;
	if (func_403(1))
	{
		if (func_488() == func_402())
		{
			Global_1727400.f_15 = 1;
		}
	}
}

int func_623()
{
	int iVar0;
	
	iVar0 = func_402();
	if (iVar0 != func_69())
	{
		return Global_1610316[iVar0 /*174*/].f_10.f_68;
	}
	return 0;
}

auto func_624(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[1];
}

auto func_625(auto uParam0)
{
	return Global_1610316[uParam0 /*174*/].f_10.f_7[0];
}

void func_626(int iParam0)
{
	if (iParam0)
	{
		if (!func_166(player_id(), 9))
		{
			if (func_329(player_id()) != 0)
			{
				func_186(9);
			}
		}
	}
	else if (func_166(player_id(), 9))
	{
		func_185(9);
	}
}

bool func_627(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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
	if (func_628(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, iParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

bool func_628(auto uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, auto uParam8, auto uParam9, int iParam10, auto uParam11, auto uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (are_strings_equal(sParam14, sParam15))
	{
	}
	func_638();
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
	if (func_637() == 0)
	{
		func_635();
		return false;
	}
	func_634(Global_16779);
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
		func_633(0);
		func_633(2);
		func_633(1);
	}
	else
	{
		func_638();
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
					func_633(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_633(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_633(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_633(3);
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
		func_638();
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
			if (!func_381())
			{
				play_sound_frontend(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_632(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_629(1);
			func_632(Global_14394, "DISPLAY_VIEW", 1f, to_float(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return true;
}

void func_629(int iParam0)
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
		if (func_631(14))
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
								func_227(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(iVar2);
								_pop_scaleform_movie_function_void();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = false;
									iVar4 = Global_2562131;
									func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								_push_scaleform_movie_function(Global_14394, "SET_DATA_SLOT");
								_push_scaleform_movie_function_parameter_int(true);
								_push_scaleform_movie_function_parameter_int(iVar0);
								_push_scaleform_movie_function_parameter_int(Global_2290[iVar1 /*15*/].f_10);
								_push_scaleform_movie_function_parameter_int(false);
								func_227(&(Global_2290[iVar1 /*15*/]));
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
								func_227(&(Global_2290[iVar1 /*15*/]));
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
								func_227(&(Global_2290[iVar1 /*15*/]));
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
								func_227(&(Global_2290[iVar1 /*15*/]));
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
								func_227(&(Global_2290[iVar1 /*15*/]));
								_push_scaleform_movie_function_parameter_int(42);
								_pop_scaleform_movie_function_void();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = false;
								iVar8 = Global_1609099.f_1;
								func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_630(Global_14394, "SET_DATA_SLOT", to_float(true), to_float(iVar0), to_float(Global_2290[iVar1 /*15*/].f_10), to_float(false), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_630(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_227(sParam7);
	}
	if (!is_string_null_or_empty(sParam8))
	{
		func_227(sParam8);
	}
	if (!is_string_null_or_empty(sParam9))
	{
		func_227(sParam9);
	}
	if (!is_string_null_or_empty(sParam10))
	{
		func_227(sParam10);
	}
	if (!is_string_null_or_empty(sParam11))
	{
		func_227(sParam11);
	}
	_pop_scaleform_movie_function_void();
}

int func_631(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_632(int iParam0, char* sParam1, Vector3 fParam2, Vector3 fParam3, Vector3 fParam4, Vector3 fParam5, Vector3 fParam6)
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

void func_633(int iParam0)
{
	auto uVar0;
	auto uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_634(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	auto uVar4;
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

void func_635()
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
		if (!func_636(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

bool func_636(struct<6> Param0, struct<6> Param1)
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

bool func_637()
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
			if (!func_636(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
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

void func_638()
{
	if (func_631(14))
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
		Global_14413 = func_639();
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

auto func_639()
{
	func_640();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_640()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_643(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_642(player_ped_id());
			if (func_641(iVar0) && (!func_631(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_641(Global_101154.f_1826.f_539.f_3549))
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

int func_641(int iParam0)
{
	return iParam0 < 3;
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_643(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_643(int iParam0)
{
	if (func_641(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_644()
{
	if (!is_bit_set(Local_252[participant_id_to_int() /*6*/].f_1, true))
	{
		if (!func_662())
		{
			if (Local_192.f_5 > 0 || is_bit_set(Local_192.f_1, 6))
			{
				func_188(1);
				set_bit(&(Local_252[participant_id_to_int() /*6*/].f_1), true);
			}
		}
	}
}

bool func_645()
{
	if (func_646(1))
	{
		return true;
	}
	if (Global_2460486.f_4660.f_14)
	{
		Global_2460486.f_4660.f_14 = 0;
		return true;
	}
	return false;
}

bool func_646(int iParam0)
{
	int iVar0;
	
	if (!func_403(1))
	{
		iVar0 = false;
		if (Global_1610316[player_id() /*174*/].f_10.f_51 != func_69())
		{
			if (func_705(Global_1610316[player_id() /*174*/].f_10.f_51, 0, 1) && Global_1610316[player_id() /*174*/].f_10.f_19 == 4)
			{
				iVar0 = true;
			}
		}
		else if (func_647(func_183(player_id())) == 0)
		{
			iVar0 = true;
		}
		if (iVar0)
		{
			if (iParam0)
			{
				func_508(31);
				if (network_is_player_active(Global_1610316[player_id() /*174*/].f_10.f_51))
				{
					Global_1609014 = func_388(Global_1610316[player_id() /*174*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609014 = 1;
				}
				Global_1608998 = {Global_1610316[player_id() /*174*/].f_10.f_74};
			}
			return true;
		}
	}
	return false;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

int func_648()
{
	return func_201(player_id());
}

void func_649(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != iParam0)
	{
		func_661(-1);
		Global_1610316[player_id() /*174*/].f_10.f_28 = iParam0;
		if (func_660() != -1)
		{
			func_659(-1);
		}
		if (func_658() != -1)
		{
			func_657(-1);
		}
		func_655(iParam2);
		func_653(iParam0);
		if (!func_194(iParam0))
		{
			fVar0 = func_193(iParam0);
			if (fVar0 != 1f)
			{
				func_190(fVar0);
				set_bit(&(Global_1727391.f_3), true);
			}
		}
		if (!func_197(iParam0))
		{
			if (func_195(iParam0, iParam2))
			{
				set_max_wanted_level(false);
				set_player_wanted_level(player_id(), false, 0);
				set_player_wanted_level_now(player_id(), 0);
				set_bit(&(Global_1727391.f_3), false);
			}
			else if (get_max_wanted_level() < 5)
			{
				set_wanted_level_multiplier(1f);
				set_max_wanted_level(5);
			}
		}
		if (func_337())
		{
			func_186(27);
		}
		if (iParam1)
		{
			if (!func_331())
			{
				func_188(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((is_bit_set(Global_2460486.f_4414, true) || is_bit_set(Global_2460486.f_4414, 4)) || is_bit_set(Global_2460486.f_4414, false))
			{
				func_508(6);
			}
			func_652();
		}
		if (iParam0 == 164)
		{
			_0xDC0F817884CDD856(3, false);
			_0xDC0F817884CDD856(5, false);
		}
		if (func_112(player_id()) && func_202(player_id()))
		{
			set_bit(&(Global_1610316[player_id() /*174*/].f_1), 8);
		}
		func_650();
	}
}

void func_650()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_651();
	iVar2 = func_70(player_id());
	iVar0 = false;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			if (func_269(iVar1, iVar2, 1))
			{
				unk_0x55FCC0C390620314(player_id(), iVar1, iVar3);
				unk_0x55FCC0C390620314(iVar1, player_id(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_651()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	if (iVar0 != func_69())
	{
		if (func_705(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return is_bit_set(Global_1610316[iVar1 /*174*/].f_1, 16);
			}
		}
	}
	return false;
}

void func_652()
{
	if (is_bit_set(Global_2460486.f_4414, true))
	{
		clear_bit(&(Global_2460486.f_4414), true);
	}
	if (is_bit_set(Global_2460486.f_4414, 4))
	{
		clear_bit(&(Global_2460486.f_4414), 4);
	}
	if (is_bit_set(Global_2460486.f_4414, 6))
	{
		clear_bit(&(Global_2460486.f_4414), 6);
	}
	clear_bit(&(Global_2460486.f_4414), false);
	clear_bit(&(Global_2460486.f_4414), 2);
	Global_1587523[player_id() /*444*/].f_365 = 0;
	if (Global_2460486.f_4416 > 0)
	{
		set_max_wanted_level(Global_2460486.f_4416);
	}
	Global_2460486.f_4415 = 0;
}

void func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_459(3351, -1, 0);
	iVar1 = func_654(iParam0);
	if (iVar1 != -1)
	{
		set_bit(&iVar0, iVar1);
		func_451(3351, iVar0, -1, 1);
	}
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		default:
	}
	return -1;
}

void func_655(int iParam0)
{
	func_656(player_id(), iParam0);
}

void func_656(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_118 != iParam1)
	{
		Global_1610316[iParam0 /*174*/].f_10.f_118 = iParam1;
	}
}

void func_657(int iParam0)
{
	if (Global_2460486.f_4660.f_138 != iParam0)
	{
		Global_2460486.f_4660.f_138 = iParam0;
	}
}

auto func_658()
{
	return Global_2460486.f_4660.f_138;
}

void func_659(int iParam0)
{
	if (Global_2460486.f_4660.f_137 != iParam0)
	{
		Global_2460486.f_4660.f_137 = iParam0;
	}
}

auto func_660()
{
	return Global_2460486.f_4660.f_137;
}

void func_661(int iParam0)
{
	Global_1610316[player_id() /*174*/].f_10.f_27 = iParam0;
}

bool func_662()
{
	int iVar0;
	
	iVar0 = func_663();
	if (iVar0 > -1)
	{
		if (Local_192.f_33 == iVar0)
		{
			return true;
		}
	}
	return false;
}

auto func_663()
{
	int iVar0;
	
	if (Local_252[participant_id_to_int() /*6*/].f_3 != -1)
	{
		return Local_252[participant_id_to_int() /*6*/].f_3;
	}
	if (func_201(player_id()))
	{
		Local_252[participant_id_to_int() /*6*/].f_3 = participant_id_to_int();
		if (participant_id_to_int() == Local_192.f_33)
		{
			func_626(1);
		}
	}
	else if (func_234(player_id(), 1))
	{
		iVar0 = func_402();
		if (iVar0 != func_69())
		{
			if (network_is_player_a_participant(iVar0))
			{
				Local_252[participant_id_to_int() /*6*/].f_3 = network_get_participant_index(iVar0);
			}
		}
	}
	return Local_252[participant_id_to_int() /*6*/].f_3;
}

int func_664()
{
	return Local_192;
}

auto func_665(int iParam0)
{
	return Local_252[iParam0 /*6*/];
}

bool func_666()
{
	int iVar0;
	
	func_671(&iVar0);
	if (iVar0)
	{
		return true;
	}
	if (Global_1315888 == 0)
	{
		if (!network_is_game_in_progress())
		{
			return true;
		}
	}
	if (func_670())
	{
		return true;
	}
	if (Global_2445442)
	{
		return true;
	}
	if (func_669())
	{
		return true;
	}
	if (func_668(157))
	{
		if (!func_667())
		{
			return true;
		}
	}
	if (func_668(155))
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (func_191() != 0)
	{
		if (_get_number_of_instances_of_streamed_script(func_191()) == 0)
		{
			return true;
		}
	}
	return false;
}

auto func_667()
{
	return Global_2434762.f_574;
}

bool func_668(int iParam0)
{
	if (get_event_exists(1, iParam0))
	{
		return true;
	}
	return false;
}

auto func_669()
{
	return Global_2443085;
}

auto func_670()
{
	return Global_2434762.f_569;
}

void func_671(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == 168)
		{
			get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_672(iVar0);
					break;
				
				case 2:
					get_event_data(1, iVar0, &vVar4, 3);
					if (vVar4.z == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_672(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (get_event_data(1, iParam0, &vVar0, 3))
	{
		if (func_705(vVar0.y, 1, 1))
		{
			iVar3 = get_player_ped(vVar0.y);
			if (does_entity_exist(iVar3))
			{
				if (is_ped_in_any_vehicle(iVar3, 0))
				{
					iVar4 = get_vehicle_ped_is_in(iVar3, 0);
					if (is_vehicle_window_intact(iVar4, vVar0.z) && network_get_this_script_is_network_script())
					{
						if (func_673(iVar4, &iVar5))
						{
							remove_vehicle_window(iVar4, vVar0.z);
						}
						if (iVar5)
						{
							set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

bool func_673(int iParam0, auto uParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_674()
{
	wait(0);
}

void func_675()
{
	if (!is_bit_set(iLocal_445, 6))
	{
		if (network_is_game_in_progress())
		{
			if (func_662() || func_338())
			{
				func_527(0, 4);
				set_bit(&iLocal_445, 6);
			}
		}
	}
	func_691(3, 3, -1, -1082130432);
	if (network_is_game_in_progress())
	{
		if (participant_id_to_int() == Local_192.f_33)
		{
			if (iLocal_747 >= 0)
			{
				func_598(&Local_458);
				func_597(&Local_458);
			}
		}
	}
	if (get_ped_relationship_group_hash(player_ped_id()) == iLocal_451)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(player_ped_id(), iLocal_453);
	}
	if (iLocal_747 > 0)
	{
		if (is_bit_set(Local_192.f_1, 3))
		{
			func_591(player_id(), 1, 0);
		}
	}
	func_690();
	if (Local_192.f_34 != -1)
	{
		if (is_bit_set(iLocal_445, 5))
		{
			if (network_is_player_active(int_to_playerindex(Local_192.f_34)))
			{
				func_361(int_to_playerindex(Local_192.f_34), 432, 0);
				func_359(int_to_playerindex(Local_192.f_34), 1, 0);
				func_358(int_to_playerindex(Local_192.f_34), 0, 0);
				func_357(int_to_playerindex(Local_192.f_34), 0);
				func_356(int_to_playerindex(Local_192.f_34), Global_262145.f_10294, 0);
			}
		}
	}
	if (func_171(0))
	{
		func_170(0);
	}
	if (is_bit_set(iLocal_446, false))
	{
		if (!is_bit_set(iLocal_446, 2))
		{
			set_audio_flag("DisableFlightMusic", 0);
			set_audio_flag("WantedMusicDisabled", 0);
			trigger_music_event("BG_SIGHTSEER_STOP");
		}
	}
	set_bit(&iLocal_446, 8);
	func_167();
	_0x78857FC65CADB909(1);
	func_626(0);
	func_677(1);
	set_max_wanted_level(5);
	clear_bit(&Global_2563397, 21);
	clear_bit(&Global_2563397, 20);
	func_676();
}

void func_676()
{
	terminate_this_thread();
}

void func_677(int iParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 167 || Global_1610316[player_id() /*174*/].f_10.f_28 == 168)
	{
		func_688();
		clear_bit(&(Global_1727391.f_3), 4);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 == 164)
	{
		_0xDC0F817884CDD856(3, true);
		_0xDC0F817884CDD856(5, true);
	}
	if (Global_1610316[player_id() /*174*/].f_10.f_28 != -1)
	{
		Global_1610316[player_id() /*174*/].f_10.f_28 = -1;
		if (!is_bit_set(Global_1573883.f_1, 14) && !func_112(player_id()))
		{
			func_188(0);
		}
	}
	else if (func_686(player_id()) != -1)
	{
		func_661(-1);
	}
	func_655(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_684(iVar0);
		iVar0++;
	}
	if (is_bit_set(Global_1727391.f_3, false))
	{
		set_wanted_level_multiplier(1f);
		set_max_wanted_level(5);
		clear_bit(&(Global_1727391.f_3), false);
	}
	if (func_267(func_352()))
	{
		func_683(-1);
	}
	else if (func_351(func_352()))
	{
	}
	else
	{
		func_679(-1, 1);
	}
	func_185(19);
	func_185(20);
	func_185(21);
	func_185(22);
	func_185(27);
	func_170(3);
	func_170(4);
	func_170(7);
	func_678();
	if (func_202(player_id()))
	{
		func_626(0);
	}
	func_185(29);
	Global_1610316[player_id() /*174*/].f_10.f_51 = func_69();
	if (Global_2460486.f_4660.f_14 != 0)
	{
		Global_2460486.f_4660.f_14 = 0;
	}
	if (iParam0)
	{
		func_172();
	}
	if (!func_112(player_id()))
	{
		func_184();
		clear_bit(&(Global_1727391.f_3), true);
	}
}

void func_678()
{
	if (func_205(player_id()))
	{
		func_185(25);
	}
}

void func_679(int iParam0, int iParam1)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_352();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_69())
		{
			if (func_682(player_id()) == player_id())
			{
				Global_2459488.f_35[func_681(iParam0)] = 1;
			}
		}
		uVar0 = func_681(159);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(157);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(148);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(164);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(142);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(152);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(166);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(170);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(173);
		if (func_680(uVar0, Global_262145.f_10545, iParam1))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

bool func_680(auto uParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		if ((!func_166(player_id(), 19) && !func_166(player_id(), 20)) && !func_166(player_id(), 9))
		{
			return false;
		}
	}
	if (Global_2459488.f_35[uParam0] == 1 && func_9(&(Global_2459488[uParam0 /*2*/])))
	{
		if (func_548(&(Global_2459488[uParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2459488.f_35[uParam0] = 0;
			return true;
		}
		return false;
	}
	return true;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

auto func_682(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_30;
}

void func_683(int iParam0)
{
	auto uVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_352();
	}
	if (iParam0 > 0)
	{
		if (func_402() != func_69())
		{
			Global_2459488.f_35[func_681(iParam0)] = 1;
		}
		uVar0 = func_681(155);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(163);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(160);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(153);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(162);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(154);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(171);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
		uVar0 = func_681(172);
		if (func_680(uVar0, Global_262145.f_10546, 0))
		{
			func_220(&(Global_2459488[uVar0 /*2*/]));
			func_8(&(Global_2459488[uVar0 /*2*/]), 1, 0);
		}
	}
}

void func_684(int iParam0)
{
	if (!func_159(Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/], func_685(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_104[iParam0 /*3*/] = {func_685()};
	}
	if (!func_159(Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/], func_685(), 0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_94[iParam0 /*3*/] = {func_685()};
	}
}

Vector3 func_685()
{
	Vector3 vVar0;
	
	return vVar0;
}

int func_686(int iParam0)
{
	if (func_687(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_27;
	}
	return -1;
}

bool func_687(auto uParam0, int iParam1)
{
	if (Global_1610316[uParam0 /*174*/].f_10.f_27 != -1 || (iParam1 && Global_1610316[uParam0 /*174*/].f_10.f_28 != -1))
	{
		return true;
	}
	return false;
}

void func_688()
{
	clear_bit(&(Global_2460486.f_1643), 28);
	clear_bit(&(Global_2460486.f_1643), 29);
	func_689(24);
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	clear_bit(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_690()
{
	remove_relationship_group(iLocal_452);
	remove_relationship_group(iLocal_451);
}

void func_691(int iParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	sVar0 = get_this_script_name();
	Var1 = Global_1727400;
	Var1.f_1 = Global_1727400.f_1;
	Var1.f_2 = Global_1727400.f_2;
	Var1.f_3 = Global_1727400.f_3;
	Var1.f_4 = Global_1727400.f_4;
	Var1.f_5 = Global_1727400.f_5;
	Var1.f_6 = Global_1727400.f_6;
	Var1.f_7 = Global_1727400.f_7;
	Var1.f_8 = Global_1727400.f_8;
	Var1.f_9 = Global_1727400.f_9;
	Var1.f_10 = Global_1727400.f_10;
	Var1.f_11 = Global_1727400.f_11;
	Var1.f_12 = Global_1727400.f_12;
	Var1.f_13 = Global_1727400.f_14;
	if (network_is_game_in_progress())
	{
		if (are_strings_equal(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = {Var1};
			Var15.f_14 = Global_1727400.f_15;
			Var15.f_15 = Global_1727400.f_16;
			Var15.f_16 = Global_1727400.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (are_strings_equal(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = {Var1};
			Var32.f_14 = Global_1727400.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (are_strings_equal(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = {Var1};
			Var49.f_14 = Global_1727400.f_15;
			Var49.f_15 = iParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (are_strings_equal(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = {Var1};
			Var65.f_14 = Global_1727400.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (are_strings_equal(sVar0, "GB_ASSAULT"))
		{
			Var82 = {Var1};
			Var82.f_14 = Global_1727400.f_15;
			Var82.f_15 = iParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (are_strings_equal(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = {Var1};
			Var98.f_14 = Global_1727400.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (are_strings_equal(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = {Var1};
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1727400.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (are_strings_equal(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = {Var1};
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1727400.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (are_strings_equal(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = {Var1};
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1727400.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_692();
}

void func_692()
{
	struct<18> Var0;
	
	Global_1727400 = {Var0};
}

void func_693(struct<20> Param0)
{
	func_703(func_704(Param0), Param0);
	reserve_network_mission_objects(3);
	func_701(0, -1, 0);
	network_register_host_broadcast_variables(&Local_192, 60);
	network_register_player_broadcast_variables(&Local_252, 193);
	if (!func_700())
	{
		func_675();
	}
	if (network_is_game_in_progress())
	{
		set_this_script_can_be_paused(0);
		if (network_is_host_of_this_script())
		{
		}
		func_699();
		func_694(0, 0);
		Local_252[participant_id_to_int() /*6*/] = 0;
	}
	else
	{
		func_675();
	}
}

void func_694(int iParam0, int iParam1)
{
	func_698();
	func_697();
	if ((iParam0 != 0 && network_is_player_active(iParam1)) && func_696(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				set_bit(&Global_1727386, false);
				break;
			}
	}
	if (!func_648() && !func_234(player_id(), 1))
	{
		if (func_334())
		{
			func_187(3);
		}
		func_187(4);
	}
	if (func_403(0))
	{
		Global_1610316[player_id() /*174*/].f_10.f_51 = func_402();
	}
	func_695();
}

void func_695()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_69();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_696(int iParam0, int iParam1)
{
	return func_269(player_id(), iParam0, iParam1);
}

void func_697()
{
	func_689(33);
	func_689(34);
	func_689(35);
	func_689(36);
	func_689(37);
	func_689(38);
	func_689(39);
	func_689(40);
	func_689(43);
	func_689(41);
	func_689(54);
	func_689(42);
	func_689(47);
}

void func_698()
{
	struct<14> Var0;
	
	Global_1727400 = {Var0};
	Global_1727400.f_14 = 0;
	Global_1727400.f_15 = 0;
}

void func_699()
{
}

bool func_700()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!network_is_game_in_progress())
		{
			return false;
		}
		if (_0x5D10B3795F3FC886())
		{
			return true;
		}
		if (func_670())
		{
			return false;
		}
		if (func_668(155))
		{
			return false;
		}
		if (iVar0 >= 3600)
		{
			return false;
		}
		wait(0);
	}
	return false;
}

bool func_701(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_script_status();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!iParam2)
			{
				func_676();
			}
			else
			{
				return false;
			}
		}
		if (!func_702())
		{
			if (iParam0 == 0)
			{
				if (!network_is_game_in_progress())
				{
					if (!iParam2)
					{
						func_676();
					}
					else
					{
						return false;
					}
				}
				if (func_670())
				{
					if (!iParam2)
					{
						func_676();
					}
					else
					{
						return false;
					}
				}
				if (func_668(155))
				{
					if (!iParam2)
					{
						func_676();
					}
					else
					{
						return false;
					}
				}
			}
			else if (!network_is_in_session())
			{
				if (!iParam2)
				{
					func_676();
				}
				else
				{
					return false;
				}
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!network_is_game_in_progress())
		{
			if (!iParam2)
			{
				func_676();
			}
			else
			{
				return false;
			}
		}
	}
	else if (!network_is_in_session())
	{
		if (!iParam2)
		{
			func_676();
		}
		else
		{
			return false;
		}
	}
	return true;
}

auto func_702()
{
	return Global_1315888;
}

void func_703(int iParam0, struct<17> Param1, auto uParam2, auto uParam3, auto uParam4)
{
	if (!network_is_game_in_progress())
	{
		func_676();
	}
	network_set_this_script_is_network_script(iParam0, 0, Param1.f_16);
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

bool func_705(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
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

