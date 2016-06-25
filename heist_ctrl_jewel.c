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
	float fLocal_21 = 0;
	auto uLocal_22 = 0;
	auto uLocal_23 = 0;
	auto uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = 0;
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
	auto uLocal_558 = 0;
	auto uLocal_559 = 0;
	auto uLocal_560 = 0;
	auto uLocal_561 = 0;
	auto uLocal_562 = 0;
	auto uLocal_563 = 0;
	auto uLocal_564 = 0;
	auto uLocal_565 = 0;
	auto uLocal_566 = 0;
	auto uLocal_567 = 0;
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
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_738 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_233();
	}
	func_232(3);
	func_221(&(Local_46.f_1), func_231(Global_87640[1 /*19*/], Global_87640[2 /*19*/]));
	func_220(&Local_46, 0);
	while (!func_219(4))
	{
		if (!Global_69758)
		{
			if (!func_218(86) && !func_217(14))
			{
				func_206(&Local_46, 32f, 35f);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_46.f_449, false))
			{
				func_204(&Local_46);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_46.f_449, false))
			{
				if (func_203() == 86)
				{
					while (!func_204(&Local_46))
					{
						wait(0);
					}
				}
			}
			func_201(&Local_46);
			func_192();
			func_145();
			if (func_143(0) || GAMEPLAY::IS_BIT_SET(Local_46.f_449, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (_get_number_of_instances_of_streamed_script(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		wait(0);
	}
	func_1(3);
	func_233();
}

bool func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
		return true;
	}
	return false;
}

void func_2()
{
	int iVar0;
	
	if (Global_69749)
	{
		return;
	}
	if (!is_player_playing(get_player_index()))
	{
		return;
	}
	iVar0 = round(1f + 1000f * timestep());
	Global_87831.f_8 += iVar0;
}

void func_3(auto uParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_87619, *uParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
		{
			GAMEPLAY::SET_BIT(uParam0.f_449, 15);
			GAMEPLAY::SET_BIT(uParam0.f_449, 16);
			GAMEPLAY::SET_BIT(uParam0.f_449, 14);
			GAMEPLAY::CLEAR_BIT(&Global_87619, *uParam0);
		}
	}
}

void func_4(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != *uParam0.f_464 && !(iVar1 == 2 && *uParam0.f_464 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && *uParam0.f_464 == 4))
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			*uParam0.f_464 = iVar1;
		}
	}
}

void func_5(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 != *uParam0.f_464)
	{
		if (*uParam0.f_680 == 0)
		{
			func_64(uParam0);
			*uParam0.f_464 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(auto uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			GAMEPLAY::SET_BIT(uParam0.f_449, 5);
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 4);
			break;
		
		case 1:
			func_63(uParam0);
			GAMEPLAY::SET_BIT(uParam0.f_449, 5);
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 4);
			*uParam0.f_452 = -1;
			break;
		
		case 2:
			func_35(uParam0, *uParam0.f_417, iParam2);
			GAMEPLAY::SET_BIT(uParam0.f_449, 5);
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 4);
			*uParam0.f_457 = GAMEPLAY::GET_GAME_TIMER();
			break;
		
		case 3:
			func_17(uParam0);
			GAMEPLAY::SET_BIT(uParam0.f_449, 5);
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 4);
			GAMEPLAY::SET_BIT(uParam0.f_449, 9);
			*uParam0.f_457 = GAMEPLAY::GET_GAME_TIMER();
			break;
		
		case 4:
			func_13(uParam0.f_1.f_108[0 /*4*/], 1);
			func_13(uParam0.f_1.f_108[1 /*4*/], 1);
			Global_101154.f_1.f_6[*uParam0] = 1;
			clear_help(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			GAMEPLAY::SET_BIT(uParam0.f_449, 5);
			GAMEPLAY::SET_BIT(uParam0.f_449, 4);
			*uParam0.f_457 = GAMEPLAY::GET_GAME_TIMER();
			break;
	}
	func_7(uParam0);
}

void func_7(auto uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	
	sVar0 = _0x80C2FD58D720C801(2, 13, true);
	sVar1 = _0x80C2FD58D720C801(2, 11, true);
	sVar2 = _get_control_action_name(0, 32, true);
	sVar3 = _0x80C2FD58D720C801(0, 1, true);
	sVar4 = _get_control_action_name(2, 201, true);
	sVar5 = _get_control_action_name(2, 202, true);
	if (_is_input_disabled(2))
	{
		sVar0 = _0x80C2FD58D720C801(2, 6, true);
		sVar1 = _0x80C2FD58D720C801(2, 7, true);
		sVar2 = _0x80C2FD58D720C801(0, 29, true);
	}
	iVar6 = func_10(1, *uParam0);
	_push_scaleform_movie_function(*uParam0.f_414, "SET_MAX_WIDTH");
	_push_scaleform_movie_function_parameter_float(0.6f);
	_pop_scaleform_movie_function_void();
	switch (*uParam0.f_464)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				if (iVar6)
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					_pop_scaleform_movie_function_void();
				}
				_push_scaleform_movie_function(*uParam0.f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			break;
		
		case 1:
			_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			_push_scaleform_movie_function_parameter_bool(false);
			_pop_scaleform_movie_function_void();
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
				_pop_scaleform_movie_function_void();
				if (*uParam0 == 2)
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					_pop_scaleform_movie_function_void();
				}
				_push_scaleform_movie_function(*uParam0.f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			break;
		
		case 3:
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 9))
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
				}
				else
				{
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(true);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					_pop_scaleform_movie_function_void();
					_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(false);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					_pop_scaleform_movie_function_void();
				}
				_push_scaleform_movie_function(*uParam0.f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			break;
		
		case 4:
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT_EMPTY");
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(true);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(*uParam0.f_414, "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(false);
				func_9(sVar4);
				func_8("PB_H_CONF");
				_pop_scaleform_movie_function_void();
				_push_scaleform_movie_function(*uParam0.f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_9(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

void func_11(auto uParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::SET_BIT(uParam0.f_449, 18);
		if (((!func_12(uParam0.f_1.f_20[0 /*4*/]) && !func_12(uParam0.f_1.f_20[1 /*4*/])) && !func_12(uParam0.f_1.f_108[0 /*4*/])) && !func_12(uParam0.f_1.f_108[1 /*4*/]))
		{
			clear_help(0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, 18);
	}
}

int func_12(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_99796 && iParam1)
	{
		if (func_12(sParam0) && !is_help_message_fading_out())
		{
			clear_help(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(sParam0, &(Global_101154.f_24935[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= Global_101154.f_24935.f_145 - 2)
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15(Global_101154.f_24935.f_145 - 1);
			Global_101154.f_24935.f_145--;
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
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
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_16(int iParam0, auto uParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = {Global_101154.f_24935[uParam1 /*16*/]};
	Global_101154.f_24935[iParam0 /*16*/].f_4 = {Global_101154.f_24935[uParam1 /*16*/].f_4};
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[uParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[uParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[uParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[uParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[uParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[uParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[uParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[uParam1 /*16*/].f_15;
}

void func_17(auto uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
	_pop_scaleform_movie_function_void();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(8);
			_pop_scaleform_movie_function_void();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(9);
			_pop_scaleform_movie_function_void();
		}
	}
	Var1 = *uParam0.f_1.f_16 + *uParam0.f_1.f_18;
	Var1.f_1 = *uParam0.f_1.f_16.f_1 + *uParam0.f_1.f_18.f_1;
	func_25(uParam0, &Var1, *uParam0.f_1.f_10);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(auto uParam0)
{
	auto uVar0;
	
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 7))
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 18))
		{
			switch (*uParam0.f_464)
			{
				case 3:
					if (!Global_101154.f_1[*uParam0])
					{
						if (!are_strings_equal(uParam0.f_1.f_20[0 /*4*/], ""))
						{
							func_21(uParam0.f_1.f_20[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!are_strings_equal(uParam0.f_1.f_20[1 /*4*/], ""))
						{
							func_21(uParam0.f_1.f_20[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_101154.f_1[*uParam0] = 1;
					}
					else if (func_20() && !is_help_message_being_displayed())
					{
						if (((!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11) && !GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 10)) && !func_19()) && *uParam0.f_483 == 0)
						{
							_set_text_component_format("PB_H_CHOICE");
							_display_help_text_from_string_label(0, 1, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_101154.f_1.f_6[*uParam0])
					{
						if (!are_strings_equal(uParam0.f_1.f_108[0 /*4*/], ""))
						{
							func_21(uParam0.f_1.f_108[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!are_strings_equal(uParam0.f_1.f_108[1 /*4*/], ""))
						{
							func_21(uParam0.f_1.f_108[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_101154.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !is_help_message_being_displayed())
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								uVar0 = func_65(func_30(*uParam0));
								if (*uParam0.f_417 < 5)
								{
									if (((!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11) && !GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 10)) && !func_19()) && *uParam0.f_483 == 0)
									{
										switch (Global_87640[uVar0 /*19*/].f_1[*uParam0.f_417])
										{
											case 1:
												_set_text_component_format("PB_H_GUNM");
												_display_help_text_from_string_label(0, 1, false, -1);
												break;
											
											case 2:
												_set_text_component_format("PB_H_HACK");
												_display_help_text_from_string_label(0, 1, false, -1);
												break;
											
											case 3:
												_set_text_component_format("PB_H_DRIV");
												_display_help_text_from_string_label(0, 1, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

bool func_19()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

bool func_20()
{
	if (Global_101154.f_24935.f_145 > 0)
	{
		return false;
	}
	return true;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
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
		func_14();
	}
}

void func_23(auto uParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_1.f_303, iParam1))
	{
		if (!are_strings_equal(uParam0.f_1.f_280[iParam1 /*2*/], ""))
		{
			func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_280[iParam1 /*2*/]), iParam2);
			GAMEPLAY::SET_BIT(uParam0.f_1.f_303, iParam1);
		}
	}
}

void func_24(auto uParam0, struct<2> Param1, struct<2> Param2, int iParam3)
{
	if (*uParam0.f_483 == 3)
	{
		return;
	}
	if (!is_string_null_or_empty(&Param3))
	{
		*(uParam0.f_467[*uParam0.f_483 /*5*/]) = {Param1};
		*(uParam0.f_467[*uParam0.f_483 /*5*/].f_2) = {Param3};
		*(uParam0.f_467[*uParam0.f_483 /*5*/]).f_4 = iParam5;
		*uParam0.f_483++;
	}
}

void func_25(auto uParam0, auto uParam1, float fParam2)
{
	Vector3 vVar0;
	
	*uParam0.f_411 = *uParam1;
	*uParam0.f_411.f_1 = *uParam1.f_1;
	*uParam0.f_454 = GAMEPLAY::GET_GAME_TIMER() + 1000;
	vVar0 = {func_27(uParam0, uParam0.f_411)};
	func_26(uParam0.f_649, vVar0, fParam2);
}

void func_26(auto uParam0, Vector3 vParam1, float fParam2)
{
	*uParam0.f_11 = {vParam1};
	if (fParam4 != -1f)
	{
		*uParam0.f_7 = fParam4;
	}
}

Vector3 func_27(auto uParam0, auto uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	fVar0 = *uParam0.f_1.f_4;
	fVar1 = *uParam0.f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = fVar0 * fVar2 - 0.5f;
	fVar5 = -fVar1 * fVar3 - 0.5f;
	fVar6 = *uParam0.f_404;
	vVar7 = {*uParam0.f_401};
	vVar7 = {vVar7 + Vector(fVar5, fVar4 * cos(90f - fVar6), fVar4 * sin(90f - fVar6))};
	fVar10 = fVar4;
	fVar11 = atan(fVar10 / *uParam0.f_1.f_8);
	fVar12 = *uParam0.f_401.f_2 - *uParam0.f_649.f_1.f_2;
	fVar13 = vVar7.z - *uParam0.f_649.f_1.f_2;
	fVar14 = fVar13 - fVar12;
	fVar15 = atan(fVar14 / *uParam0.f_1.f_8);
	fVar16 = fVar11 * 3f / 18f;
	return fVar15 * 0.95f, fVar16, -fVar11 * 0.85f;
}

void func_28(auto uParam0, auto uParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = *uParam0.f_1.f_2;
	iVar1 = *uParam0.f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (*uParam1.f_1 < 0 || *uParam1.f_1 > iVar1)
	{
		return;
	}
	*uParam2 = to_float(*uParam1) / to_float(iVar0);
	*uParam3 = to_float(*uParam1.f_1) / to_float(iVar1);
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(auto uParam0)
{
	int iVar0;
	
	_push_scaleform_movie_function(*uParam0.f_413, "CREATE_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
	_push_scaleform_movie_function_parameter_int(true);
	_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_16));
	_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_16.f_1));
	_pop_scaleform_movie_function_void();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(2);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_int(true);
			_pop_scaleform_movie_function_void();
			break;
		
		case 1:
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(3);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_int(4);
			_pop_scaleform_movie_function_void();
			break;
		
		case 3:
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(6);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_int(7);
			_pop_scaleform_movie_function_void();
			break;
		
		case 4:
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(8);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
			_push_scaleform_movie_function_parameter_int(true);
			_push_scaleform_movie_function_parameter_int(9);
			_pop_scaleform_movie_function_void();
			break;
	}
	_push_scaleform_movie_function(*uParam0.f_413, "DISPLAY_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
	_push_scaleform_movie_function_parameter_bool(func_32(*uParam0, *uParam0.f_1.f_29));
	_pop_scaleform_movie_function_void();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
		_pop_scaleform_movie_function_void();
		if (iVar0 == func_29(*uParam0, 0))
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(8);
			_pop_scaleform_movie_function_void();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(9);
			_pop_scaleform_movie_function_void();
		}
		_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
		_push_scaleform_movie_function_parameter_int(99);
		_pop_scaleform_movie_function_void();
	}
}

int func_32(auto uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_120[uParam0], iParam1);
}

void func_33(auto uParam0)
{
	_push_scaleform_movie_function(*uParam0.f_413, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	_pop_scaleform_movie_function_void();
}

void func_34(auto uParam0)
{
	_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT_EMPTY");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415);
	_pop_scaleform_movie_function_void();
}

void func_35(auto uParam0, int iParam1, int iParam2)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= *uParam0.f_1.f_96)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	uVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_87640[uVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, uVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, uVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, uVar0, 2);
			break;
	}
	func_61(uParam0, *uParam0.f_417);
	func_36(uParam0, *uParam0.f_417);
	*uParam0.f_450 = iParam1;
	_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_bool(true);
	_pop_scaleform_movie_function_void();
	_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_pop_scaleform_movie_function_void();
	func_25(uParam0, uParam0.f_1.f_97[iParam1 /*2*/], *uParam0.f_1.f_10);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (*uParam0.f_418[iVar2] != iParam2)
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
			_push_scaleform_movie_function_parameter_int(9);
			_pop_scaleform_movie_function_void();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(auto uParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	uVar1 = func_65(iVar0);
	iVar2 = Global_87640[uVar1 /*19*/].f_1[iParam1];
	_push_scaleform_movie_function(*uParam0.f_413, "CREATE_VIEW");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_push_scaleform_movie_function_parameter_int(false);
	_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_97[iParam1 /*2*/]));
	_push_scaleform_movie_function_parameter_float(to_float(*(uParam0.f_1.f_97[iParam1 /*2*/]).f_1));
	_pop_scaleform_movie_function_void();
	func_33(uParam0);
	iVar3 = false;
	if (Global_101154.f_1.f_12[uVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_101154.f_1.f_12[uVar1 /*6*/][iParam1];
		func_41(*uParam0.f_413, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = false;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(*uParam0.f_413, iVar6, iParam1, iVar3, iVar5);
								*uParam0.f_418[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_101154.f_1.f_12[uVar1 /*6*/][iParam1] != 0)
	{
		_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
	_push_scaleform_movie_function(*uParam0.f_413, "DISPLAY_VIEW");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_pop_scaleform_movie_function_void();
}

bool func_37(auto uParam0, int iParam1)
{
	auto uVar0;
	int iVar1;
	
	uVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < *uParam0.f_417)
	{
		if (Global_101154.f_1.f_12[uVar0 /*6*/][iVar1] == iParam1)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_38(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_118, iParam0);
}

int func_39(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_116, iParam0);
}

auto func_40(int iParam0)
{
	return Global_87486[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
	_push_scaleform_movie_function_parameter_int(iParam2);
	_push_scaleform_movie_function_parameter_int(iParam3);
	_push_scaleform_movie_function_parameter_int(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			_push_scaleform_movie_function_parameter_int(func_54(iParam1, 0));
			func_8(func_57(1));
			_push_scaleform_movie_function_parameter_int(func_54(iParam1, 1));
			func_8(func_57(2));
			_push_scaleform_movie_function_parameter_int(func_54(iParam1, 2));
			func_8(func_57(3));
			_push_scaleform_movie_function_parameter_int(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			_push_scaleform_movie_function_parameter_int(func_50(iParam1, 0));
			func_8(func_53(1));
			_push_scaleform_movie_function_parameter_int(func_50(iParam1, 1));
			func_8(func_53(2));
			_push_scaleform_movie_function_parameter_int(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			_push_scaleform_movie_function_parameter_int(func_43(iParam1, 0));
			func_8(func_48(1));
			_push_scaleform_movie_function_parameter_int(func_43(iParam1, 1));
			func_8(func_48(2));
			_push_scaleform_movie_function_parameter_int(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	_push_scaleform_movie_function_parameter_int(func_42(iParam1));
	_pop_scaleform_movie_function_void();
}

auto func_42(int iParam0)
{
	return Global_87486[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return round(to_float(func_45(iParam0, iParam1)) / to_float(func_44(iParam1)) * 100f);
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_101154.f_1.f_73[iParam0 /*3*/].f_1, Global_101154.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return shift_right(iParam1, 15 * iParam0) & 32767;
			break;
		
		case 2:
		case 3:
			return shift_right(iParam2, 15 * iParam0 - 2) & 32767;
			break;
	}
	return -1;
}

auto func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)
{
	return round(to_float(func_52(iParam0, iParam1)) / to_float(func_51(iParam1)) * 100f);
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

auto func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return round(to_float(func_56(iParam0, iParam1)) / to_float(func_55(iParam1)) * 100f);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

auto func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
{
	switch (Global_87486[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

auto func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(auto uParam0, int iParam1)
{
	_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT_EMPTY");
	_push_scaleform_movie_function_parameter_int(iParam1);
	_pop_scaleform_movie_function_void();
}

void func_62(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_87640[iParam1 /*19*/].f_18, iParam2))
	{
		if (!are_strings_equal(&(Global_87640[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, *uParam0.f_1.f_276, Global_87640[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			GAMEPLAY::SET_BIT(&(Global_87640[iParam1 /*19*/].f_18), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (are_strings_equal(&(Global_87640[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_87640[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					GAMEPLAY::SET_BIT(&(Global_87640[iVar0 /*19*/].f_18), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(auto uParam0)
{
	func_25(uParam0, uParam0.f_1.f_12, 45f);
	_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
	_push_scaleform_movie_function_parameter_int(99);
	_pop_scaleform_movie_function_void();
	func_18(uParam0);
}

void func_64(auto uParam0)
{
	switch (*uParam0.f_464)
	{
		case 1:
		case 2:
		case 3:
			_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
			_push_scaleform_movie_function_parameter_int(99);
			_pop_scaleform_movie_function_void();
			break;
	}
	clear_help(0);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_205[iParam0];
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(auto uParam0)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
	{
		func_68(uParam0);
	}
}

void func_68(auto uParam0)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar0 = false;
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
				{
					if (vdist2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), *uParam0.f_401) < 4f)
					{
						vVar1 = {*uParam0.f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)};
						fVar4 = get_heading_from_vector_2d(vVar1.x, vVar1.y);
						fVar5 = absf(*uParam0.f_404 - fVar4);
						if (fVar5 <= 70f)
						{
							iVar0 = true;
						}
						else
						{
							fVar6 = *uParam0.f_404;
							if (fVar6 > 180f)
							{
								fVar6 -= 360f;
							}
							else if (fVar6 < -180f)
							{
								fVar6 += 360f;
							}
							if (fVar6 - fVar4 < fVar5)
							{
								fVar5 = absf(fVar6 - fVar4);
							}
							if (fVar5 <= 70f)
							{
								iVar0 = true;
							}
							else
							{
								if (fVar4 > 180f)
								{
									fVar4 -= 360f;
								}
								else if (fVar4 < -180f)
								{
									fVar4 += 360f;
								}
								if (*uParam0.f_404 - fVar4 < fVar5)
								{
									fVar5 = absf(*uParam0.f_404 - fVar4);
								}
								if (fVar5 <= 70f)
								{
									iVar0 = true;
								}
								else
								{
									if (fVar6 - fVar4 < fVar5)
									{
										fVar5 = absf(fVar6 - fVar4);
									}
									if (fVar5 <= 70f)
									{
										iVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iVar0)
		{
			if (*uParam0.f_451 == -1)
			{
				func_132(uParam0.f_451, 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_131(*uParam0.f_451, 1))
			{
				func_129(uParam0.f_451);
				func_115(uParam0);
			}
		}
		else if (*uParam0.f_451 != -1)
		{
			func_129(uParam0.f_451);
		}
	}
	else
	{
		iVar7 = func_10(1, *uParam0);
		func_77(uParam0);
		if (((!iVar7 && *uParam0.f_453 > 15) && (is_control_just_pressed(2, iLocal_36) || is_control_just_pressed(2, 238))) || GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 8))
		{
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	
	*uParam0.f_453 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		freeze_entity_position(PLAYER::PLAYER_PED_ID(), false);
		if (!iParam1)
		{
			vVar0 = {*uParam0.f_401};
			vVar0 = {vVar0 + Vector(0f, 1f * cos(180f - *uParam0.f_404), 1f * sin(180f - *uParam0.f_404))};
			get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), 0);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar0, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), *uParam0.f_404);
			set_gameplay_cam_relative_heading(0);
			set_gameplay_cam_relative_pitch(0, 1f);
			force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -1871534317, false, 0, 0);
			_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
	}
	if (is_player_playing(player_id()))
	{
		set_player_control(player_id(), true, 134);
	}
	display_radar(true);
	func_72(0);
	func_71();
	_0xE1CD1E48E025E661();
	reset_hud_component_values(17);
	_0xD39D13C9FEBF0511(false);
	func_70(uParam0.f_649, 0, 1);
	func_13(uParam0.f_1.f_20[0 /*4*/], 1);
	func_13(uParam0.f_1.f_20[1 /*4*/], 1);
	func_13(uParam0.f_1.f_108[0 /*4*/], 1);
	func_13(uParam0.f_1.f_108[1 /*4*/], 1);
	clear_help(1);
	while (is_help_message_being_displayed())
	{
		clear_help(1);
		wait(0);
	}
	iVar3 = get_interior_at_coords(*uParam0.f_401);
	if (iVar3 != 0)
	{
		unpin_interior(iVar3);
	}
	unregister_script_with_audio();
	func_64(uParam0);
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, 7);
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, 2);
	Global_87618 = 0;
}

void func_70(auto uParam0, int iParam1, int iParam2)
{
	if (does_cam_exist(*uParam0))
	{
		if (iParam2)
		{
			render_script_cams(false, false, 3000, 1, iParam1, 0);
		}
		if (is_cam_active(*uParam0))
		{
			set_cam_active(*uParam0, false);
		}
		destroy_cam(*uParam0, iParam1);
	}
	if (*uParam0.f_23)
	{
		unlock_minimap_angle();
		*uParam0.f_23 = 0;
	}
	*uParam0.f_1 = {0f, 0f, 0f};
	*uParam0.f_4 = {0f, 0f, 0f};
	*uParam0.f_7 = 0f;
	*uParam0.f_20 = 0;
	*uParam0.f_21 = 0;
	*uParam0.f_22 = 0;
	*uParam0.f_8 = {0f, 0f, 0f};
	*uParam0.f_11 = {0f, 0f, 0f};
	*uParam0.f_14 = {0f, 0f, 0f};
	*uParam0.f_17 = 0f;
	*uParam0.f_18 = 0f;
}

void func_71()
{
	Global_17118.f_5 = 0;
}

void func_72(int iParam0)
{
	if (iParam0)
	{
		func_76();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
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

void func_73(int iParam0)
{
	if (Global_14571)
	{
		func_75(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_74())
	{
		Global_14413.f_1 = 3;
	}
}

bool func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_75(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_142(0))
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

void func_76()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_77(auto uParam0)
{
	char* sVar0;
	int iVar1;
	Vector3 vVar2;
	
	sVar0 = _0x80C2FD58D720C801(0, 1, true);
	if (!are_strings_equal(sVar0, *uParam0.f_466))
	{
		func_7(uParam0);
	}
	*uParam0.f_466 = sVar0;
	func_113();
	func_101(uParam0);
	func_85(uParam0);
	if (*uParam0.f_464 == 1)
	{
		func_82(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	iVar1 = *uParam0.f_454 > GAMEPLAY::GET_GAME_TIMER();
	func_78(uParam0.f_649, GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 4), (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 5) && !iVar1), 1, 0, 1045220557, 1, 1065353216);
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 7))
	{
		if ((!is_cutscene_playing() && is_screen_faded_in()) && !is_pause_menu_active())
		{
			if (*uParam0.f_464 != 1)
			{
				if (*uParam0.f_464 == 0 || (((!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11) && !GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 10)) && !func_19()) && *uParam0.f_483 == 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 18) || *uParam0.f_464 == 2)
					{
						draw_scaleform_movie_fullscreen(*uParam0.f_414, 255, 255, 255, false, 0);
					}
				}
			}
		}
	}
	display_radar(false);
	hide_hud_component_this_frame(2);
	hide_hud_component_this_frame(1);
	hide_hud_component_this_frame(8);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(3);
	_0x25F87B30C382FCA7();
	_set_screen_draw_position(82, 66);
	set_hud_component_position(17, 0.612f, 0.818f);
	_0xE3A3DB414A373DAB();
	if (!is_cutscene_playing())
	{
		set_input_exclusive(2, 201);
	}
	set_input_exclusive(2, 202);
	set_input_exclusive(2, 188);
	set_input_exclusive(2, 187);
	set_input_exclusive(2, 189);
	set_input_exclusive(2, 190);
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 7))
	{
		if (!is_cutscene_playing())
		{
			vVar2 = {*uParam0.f_401};
			vVar2 = {vVar2 + Vector(0.5f, 2.9f * cos(180f - *uParam0.f_404), 2.9f * sin(180f - *uParam0.f_404))};
			get_ground_z_for_3d_coord(vVar2, &(vVar2.f_2), 0);
			set_player_control(player_id(), false, 134);
			AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
			freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar2, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), *uParam0.f_404);
			GAMEPLAY::SET_BIT(uParam0.f_449, 7);
		}
	}
}

void func_78(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7)
{
	int[] iVar0 = new int[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	
	_0x7F4724035FDCA1DD(2);
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (is_look_inverted())
	{
		iVar0[3] *= -1;
	}
	if (_is_input_disabled(2))
	{
		fVar5 = _0x5B84D09CEC5209C5(2, 239);
		fVar6 = _0x5B84D09CEC5209C5(2, 240);
		fVar7 = fVar5 - *uParam0.f_29;
		fVar8 = fVar6 - *uParam0.f_30;
		*uParam0.f_29 = fVar5;
		*uParam0.f_30 = fVar6;
		if (iParam4)
		{
			iVar0[2] = -round(fVar7 * fParam5 * 127f);
			iVar0[3] = -round(fVar8 * fParam5 * 127f);
		}
		else
		{
			iVar0[2] = round(_0x5B84D09CEC5209C5(2, 290) * fParam5 * 127f);
			iVar0[3] = round(_0x5B84D09CEC5209C5(2, 291) * fParam5 * 127f);
		}
		iVar0[2] = func_80(iVar0[2] + *uParam0.f_24, -127, 127);
		iVar0[3] = func_80(iVar0[3] + *uParam0.f_25, -127, 127);
	}
	if (*uParam0.f_24 == iVar0[2] && *uParam0.f_25 == iVar0[3])
	{
		if (*uParam0.f_27 < GAMEPLAY::GET_GAME_TIMER())
		{
			*uParam0.f_24 = 0;
			*uParam0.f_25 = 0;
			if (_is_input_disabled(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				*uParam0.f_28 = 1;
			}
		}
	}
	else
	{
		*uParam0.f_24 = iVar0[2];
		*uParam0.f_25 = iVar0[3];
		*uParam0.f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
		*uParam0.f_28 = 0;
	}
	if (iParam2)
	{
		*uParam0.f_8.f_2 = -to_float(iVar0[2]) / 127f * IntToFloat(*uParam0.f_20);
		*uParam0.f_8.f_1 = -*uParam0.f_8.f_2 * IntToFloat(*uParam0.f_22) / IntToFloat(*uParam0.f_20);
		*uParam0.f_8 = -to_float(iVar0[3]) / 127f * IntToFloat(*uParam0.f_21);
	}
	else
	{
		*uParam0.f_8 = {0f, 0f, 0f};
		*uParam0.f_24 = 0;
		*uParam0.f_25 = 0;
	}
	fVar9 = 30f * timestep();
	vVar10 = {*uParam0.f_8 + *uParam0.f_11};
	if ((_is_input_disabled(2) && iParam2) && !*uParam0.f_28)
	{
		*uParam0.f_14 = vVar10.x;
		*uParam0.f_14.f_1 = vVar10.y;
		*uParam0.f_14.f_2 = vVar10.z;
	}
	else
	{
		*uParam0.f_14 += func_79(vVar10.x - *uParam0.f_14 * 0.05f * fVar9 * fParam7, -3f, 3f);
		*uParam0.f_14.f_1 += func_79(vVar10.y - *uParam0.f_14.f_1 * 0.05f * fVar9 * fParam7, -3f, 3f);
		*uParam0.f_14.f_2 += func_79(vVar10.z - *uParam0.f_14.f_2 * 0.05f * fVar9 * fParam7, -3f, 3f);
	}
	if (*uParam0.f_26)
	{
		*uParam0.f_14 = func_79(*uParam0.f_14, to_float(-*uParam0.f_21), to_float(*uParam0.f_21));
		*uParam0.f_14.f_1 = func_79(*uParam0.f_14.f_1, to_float(-*uParam0.f_22), to_float(*uParam0.f_22));
		*uParam0.f_14.f_2 = func_79(*uParam0.f_14.f_2, to_float(-*uParam0.f_20), to_float(*uParam0.f_20));
	}
	if (_is_input_disabled(0) && iParam1)
	{
		if (*uParam0.f_28)
		{
			*uParam0.f_17 = *uParam0.f_7;
		}
	}
	else
	{
		*uParam0.f_17 = *uParam0.f_7;
	}
	if (iParam1)
	{
		if (_is_input_disabled(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (iParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (is_disabled_control_just_pressed(0, iVar13))
			{
				*uParam0.f_17 -= 5f;
				*uParam0.f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
				*uParam0.f_28 = 0;
			}
			else if (is_disabled_control_just_pressed(0, iVar14))
			{
				*uParam0.f_17 += 5f;
				*uParam0.f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
				*uParam0.f_28 = 0;
			}
			if (iParam3)
			{
				*uParam0.f_17 = func_79(*uParam0.f_17, *uParam0.f_7 - *uParam0.f_19, *uParam0.f_7);
			}
			else
			{
				*uParam0.f_17 = func_79(*uParam0.f_17, *uParam0.f_7 - *uParam0.f_19, *uParam0.f_7 + *uParam0.f_19);
			}
		}
		else if (iParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				*uParam0.f_17 += IntToFloat(round(to_float(iVar0[1]) / 128f * *uParam0.f_19));
			}
		}
		else
		{
			*uParam0.f_17 += IntToFloat(round(to_float(iVar0[1]) / 128f * *uParam0.f_19));
		}
	}
	*uParam0.f_18 += *uParam0.f_17 - *uParam0.f_18 * 0.06f * fVar9;
	set_cam_params(*uParam0, *uParam0.f_1, *uParam0.f_4 + *uParam0.f_14, *uParam0.f_18, false, 1, 1, 2);
	if (does_cam_exist(*uParam0))
	{
		if (is_cam_active(*uParam0))
		{
			if (is_cam_rendering(*uParam0))
			{
				_0xAF66DCEE6609B148();
			}
		}
	}
}

float func_79(float fParam0, Vector3 fParam1, Vector3 fParam2)
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

int func_80(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_81(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
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

void func_82(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (*uParam0.f_483 == 0 && *uParam0.f_455 > 3)
		{
			if (*uParam0.f_452 == -1)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 19))
				{
					*uParam0.f_452 = GAMEPLAY::GET_GAME_TIMER() + 500;
				}
				else
				{
					*uParam0.f_452 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > *uParam0.f_452)
			{
				iVar0 = false;
				iVar1 = false;
				while (iVar1 < *uParam0.f_1.f_369)
				{
					if (!iVar0)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_1.f_303, iVar1 + 4))
						{
							func_84(uParam0, iVar1);
							if (GAMEPLAY::IS_BIT_SET(*uParam0.f_1.f_370, iVar1))
							{
								GAMEPLAY::SET_BIT(uParam0.f_449, 19);
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(uParam0.f_449, 19);
							}
							iVar0 = true;
						}
					}
					iVar1++;
				}
				if (!iVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	iVar0 = GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iParam0], iParam1);
	if (iVar0 == iParam2)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_7775.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_7775.f_99.f_219[iParam0]), iParam1);
	}
}

void func_84(auto uParam0, int iParam1)
{
	_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
	_push_scaleform_movie_function_parameter_int(99);
	_pop_scaleform_movie_function_void();
	func_25(uParam0, uParam0.f_1.f_371[iParam1 /*2*/], *uParam0.f_1.f_11);
	func_23(uParam0, iParam1 + 4, 1);
	*uParam0.f_452 = -1;
}

void func_85(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && is_screen_faded_in()) && !is_cutscene_playing())
	{
		if (*uParam0.f_483 > 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 13))
			{
				if (func_86(uParam0.f_484, uParam0.f_467[0 /*5*/], uParam0.f_467[0 /*5*/].f_2, 4, 0, 0, 0))
				{
					*uParam0.f_455 = 0;
					if (*(uParam0.f_467[0 /*5*/]).f_4)
					{
						GAMEPLAY::CLEAR_BIT(uParam0.f_449, 11);
					}
					else
					{
						GAMEPLAY::SET_BIT(uParam0.f_449, 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						*(uParam0.f_467[iVar0 /*5*/]) = {*(uParam0.f_467[iVar0 + 1 /*5*/])};
						*(uParam0.f_467[iVar0 /*5*/].f_2) = {*(uParam0.f_467[iVar0 + 1 /*5*/].f_2)};
						*(uParam0.f_467[iVar0 /*5*/]).f_4 = *(uParam0.f_467[iVar0 + 1 /*5*/]).f_4;
						iVar0++;
					}
					*uParam0.f_483--;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					*(uParam0.f_467[iVar1 /*5*/]) = {*(uParam0.f_467[iVar1 + 1 /*5*/])};
					*(uParam0.f_467[iVar1 /*5*/].f_2) = {*(uParam0.f_467[iVar1 + 1 /*5*/].f_2)};
					*(uParam0.f_467[iVar1 /*5*/]).f_4 = *(uParam0.f_467[iVar1 + 1 /*5*/]).f_4;
					iVar1++;
				}
				*uParam0.f_483--;
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 13);
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 11);
			}
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 11);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 13))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 13);
			}
			*uParam0.f_455++;
		}
	}
}

int func_86(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_100(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_87(sParam2, iParam3, 0);
}

bool func_87(char* sParam0, int iParam1, int iParam2)
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
					func_99();
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
		if (func_98(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_97();
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
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_91();
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
				if (func_90())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
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
			if (func_74())
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
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_89();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_88();
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
		func_99();
	}
	return false;
}

void func_88()
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

void func_89()
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
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_90()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
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

void func_91()
{
	if (func_217(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
		Global_14413 = func_92();
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

auto func_92()
{
	func_93();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_93()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_95(PLAYER::PLAYER_PED_ID());
			if (func_94(iVar0) && (!func_217(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_94(Global_101154.f_1826.f_539.f_3549))
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

int func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)
{
	if (func_94(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()
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

int func_98(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_99()
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

void func_100(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, auto uParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

void func_101(auto uParam0)
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
	
	*uParam0.f_453++;
	if (_0x6CD79468A1E595C6(2))
	{
		func_7(uParam0);
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11))
	{
		if ((is_control_just_pressed(2, iLocal_37) || is_control_just_pressed(2, iLocal_39)) || (_is_input_disabled(2) && (is_control_just_pressed(2, iLocal_38) || is_control_just_pressed(2, iLocal_40))))
		{
			func_111();
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 12))
			{
				GAMEPLAY::SET_BIT(uParam0.f_449, 13);
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 11);
				GAMEPLAY::CLEAR_BIT(uParam0.f_449, 10);
			}
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 12);
		}
	}
	func_81(uParam0.f_458[0], uParam0.f_458[1], uParam0.f_458[2], uParam0.f_458[3], 0, 0);
	if (_is_input_disabled(2))
	{
		*uParam0.f_458[2] /= 10;
		*uParam0.f_458[3] /= 10;
		*uParam0.f_458[2] = func_80(*uParam0.f_458[2] + *uParam0.f_649.f_24, -127, 127);
		*uParam0.f_458[3] = func_80(*uParam0.f_458[3] + *uParam0.f_649.f_25, -127, 127);
	}
	*uParam0.f_649.f_24 = *uParam0.f_458[2];
	*uParam0.f_649.f_25 = *uParam0.f_458[3];
	if (is_look_inverted())
	{
		*uParam0.f_458[3] = -*uParam0.f_458[3];
	}
	if (*uParam0.f_454 > GAMEPLAY::GET_GAME_TIMER())
	{
		*uParam0.f_458[2] = 0;
		*uParam0.f_458[3] = 0;
	}
	if (*uParam0.f_464 == 0 || *uParam0.f_464 == 4)
	{
		if (*uParam0.f_453 > 15)
		{
			GAMEPLAY::SET_BIT(uParam0.f_449, 4);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 4);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 10))
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 11))
		{
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_456 > 200)
			{
				if ((*uParam0.f_464 == 2 || *uParam0.f_464 == 3) || *uParam0.f_464 == 4)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_457 > 25000)
					{
						func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_280[3 /*2*/]), 1);
						*uParam0.f_457 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(false, 8000);
					}
				}
				if (*uParam0.f_464 == 2)
				{
					if ((((*uParam0.f_458[1] < -85 || *uParam0.f_458[0] < -85) || is_control_pressed(2, 188)) || is_control_pressed(2, 189)) || (_is_input_disabled(2) && is_disabled_control_just_pressed(2, 241)))
					{
						_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
						_push_scaleform_movie_function_parameter_int(8);
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(*uParam0.f_413, "GET_CURRENT_SELECTION");
						*uParam0.f_682 = _pop_scaleform_movie_function();
						*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_457 = *uParam0.f_456;
					}
					else if ((((*uParam0.f_458[1] > 85 || *uParam0.f_458[0] > 85) || is_control_pressed(2, 187)) || is_control_pressed(2, 190)) || (_is_input_disabled(2) && is_disabled_control_just_pressed(0, 242)))
					{
						_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
						_push_scaleform_movie_function_parameter_int(9);
						_pop_scaleform_movie_function_void();
						_push_scaleform_movie_function(*uParam0.f_413, "GET_CURRENT_SELECTION");
						*uParam0.f_682 = _pop_scaleform_movie_function();
						*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_457 = *uParam0.f_456;
					}
				}
				if (*uParam0.f_464 == 3)
				{
					if ((*uParam0.f_458[1] < -85 || is_control_pressed(2, 188)) || (_is_input_disabled(2) && is_disabled_control_just_pressed(0, 40)))
					{
						_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
						_push_scaleform_movie_function_parameter_int(8);
						_pop_scaleform_movie_function_void();
						if (*uParam0.f_416 != 0)
						{
							play_sound_frontend(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						*uParam0.f_416 = 0;
						if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 9))
						{
							GAMEPLAY::CLEAR_BIT(uParam0.f_449, 9);
							func_7(uParam0);
						}
						*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_457 = *uParam0.f_456;
					}
					else if ((*uParam0.f_458[1] > 85 || is_control_pressed(2, 187)) || (_is_input_disabled(2) && is_disabled_control_just_pressed(0, 41)))
					{
						_push_scaleform_movie_function(*uParam0.f_413, "SET_INPUT_EVENT");
						_push_scaleform_movie_function_parameter_int(9);
						_pop_scaleform_movie_function_void();
						if (*uParam0.f_416 != 1)
						{
							play_sound_frontend(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
						}
						*uParam0.f_416 = 1;
						if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 9))
						{
							GAMEPLAY::CLEAR_BIT(uParam0.f_449, 9);
							func_7(uParam0);
						}
						*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_457 = *uParam0.f_456;
					}
				}
				if (!func_19() || GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 13))
				{
					if (is_control_just_pressed(2, iLocal_37) || (_is_input_disabled(2) && is_control_just_pressed(2, iLocal_38)))
					{
						switch (*uParam0.f_464)
						{
							case 3:
								if (!func_19())
								{
									if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 9))
									{
										*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											_push_scaleform_movie_function(*uParam0.f_413, "GET_CURRENT_SELECTION");
											*uParam0.f_680 = _pop_scaleform_movie_function();
											func_11(uParam0, 1);
											func_13(uParam0.f_1.f_20[0 /*4*/], 1);
											func_13(uParam0.f_1.f_20[1 /*4*/], 1);
											Global_101154.f_1[*uParam0] = 1;
											clear_help(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (*uParam0.f_450 < Global_87640[iVar1 /*19*/])
									{
										_push_scaleform_movie_function(*uParam0.f_413, "GET_CURRENT_SELECTION");
										*uParam0.f_681 = _pop_scaleform_movie_function();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!func_110(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_87640[iVar1 /*19*/])
								{
									if (Global_101154.f_1.f_12[iVar1 /*6*/][iVar2] == 0 || func_40(Global_101154.f_1.f_12[iVar1 /*6*/][iVar2]) != Global_87640[iVar1 /*19*/].f_1[iVar2])
									{
										iVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!iVar4)
											{
												iVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_87486[iVar3 /*5*/] != Global_87640[iVar1 /*19*/].f_1[iVar2])
													{
														iVar4 = false;
													}
													if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_116, iVar3))
													{
														iVar4 = false;
													}
													if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_118, iVar3))
													{
														iVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														iVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														iVar4 = false;
													}
												}
												else
												{
													iVar4 = false;
												}
											}
											iVar5++;
										}
										Global_101154.f_1.f_12[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						*uParam0.f_427 = 0;
					}
					if (is_control_just_pressed(2, iLocal_39) || (_is_input_disabled(2) && is_control_just_pressed(2, iLocal_40)))
					{
						switch (*uParam0.f_464)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (*uParam0.f_450 > 0)
								{
									func_11(uParam0, 1);
									*uParam0.f_450--;
									*uParam0.f_417 = *uParam0.f_450;
									iVar6 = Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450];
									Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450] = 0;
									*uParam0.f_465 = Global_87640[iVar1 /*19*/].f_1[*uParam0.f_450];
									func_35(uParam0, *uParam0.f_450, iVar6);
									play_sound_frontend(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
									*uParam0.f_427 = 0;
									*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
								}
								else if (!func_219(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = false;
										while (iVar7 < *uParam0.f_1.f_96)
										{
											_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT_EMPTY");
											_push_scaleform_movie_function_parameter_int(iVar7);
											_pop_scaleform_movie_function_void();
											_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT_EMPTY");
											_push_scaleform_movie_function_parameter_int(iVar7);
											_push_scaleform_movie_function_parameter_bool(true);
											_pop_scaleform_movie_function_void();
											iVar7++;
										}
										play_sound_frontend(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
										iVar7 = false;
										while (iVar7 < 2)
										{
											if (*uParam0.f_1.f_30[iVar7] != 13)
											{
												func_107(*uParam0, *uParam0.f_1.f_30[iVar7], 0);
											}
											iVar7++;
										}
										*uParam0.f_427 = 0;
										func_11(uParam0, 1);
										*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
										*uParam0.f_465 = 0;
										func_106(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									*uParam0.f_450--;
									*uParam0.f_417 = *uParam0.f_450;
									iVar8 = Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450];
									Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450] = 0;
									*uParam0.f_465 = Global_87640[iVar1 /*19*/].f_1[*uParam0.f_450];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (*uParam0.f_1.f_30[iVar9] != 13)
										{
											func_107(*uParam0, *uParam0.f_1.f_30[iVar9], 0);
										}
										iVar9++;
									}
									func_105(8, 0);
									func_83(5, 1, 0);
									*uParam0.f_427 = 0;
									func_11(uParam0, 1);
									*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
									func_5(uParam0, 3, 0);
								}
								play_sound_frontend(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
								break;
							}
						}
					}
				}
		}
	}
	else if (*uParam0.f_455 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (*uParam0.f_450 >= Global_87640[iVar1 /*19*/] || (*uParam0 == 1 && *uParam0.f_450 > *uParam0.f_415))
		{
			_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
			_push_scaleform_movie_function_parameter_int(99);
			_push_scaleform_movie_function_parameter_int(-1);
			_pop_scaleform_movie_function_void();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 17))
			{
				iVar10 = Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450];
				Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450] = 0;
				*uParam0.f_465 = Global_87640[iVar1 /*19*/].f_1[*uParam0.f_450];
				func_35(uParam0, *uParam0.f_450, iVar10);
			}
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 17);
		}
		*uParam0.f_457 = GAMEPLAY::GET_GAME_TIMER();
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, 10);
	}
	else if (is_help_message_being_displayed())
	{
		if (((!func_12(uParam0.f_1.f_108[0 /*4*/]) && !func_12(uParam0.f_1.f_108[1 /*4*/])) && !func_12(uParam0.f_1.f_20[0 /*4*/])) && !func_12(uParam0.f_1.f_20[1 /*4*/]))
		{
			clear_help(1);
		}
	}
	if (*uParam0.f_680 != 0)
	{
		if (_0x768FF8961BA904D6(*uParam0.f_680))
		{
			iVar11 = _0x2DE7EFA66B906036(*uParam0.f_680);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_62(uParam0, iVar1, 0);
			if (*uParam0.f_1.f_30[iVar11] != 13)
			{
				func_107(*uParam0, *uParam0.f_1.f_30[iVar11], 1);
			}
			iVar12 = false;
			while (iVar12 < *uParam0.f_1.f_96)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_87640[iVar1 /*19*/])
				{
					_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
					_push_scaleform_movie_function_parameter_int(iVar12);
					_push_scaleform_movie_function_parameter_bool(true);
					_pop_scaleform_movie_function_void();
				}
				else
				{
					_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
					_push_scaleform_movie_function_parameter_int(iVar12);
					_push_scaleform_movie_function_parameter_bool(false);
					_pop_scaleform_movie_function_void();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				GAMEPLAY::SET_BIT(uParam0.f_449, 10);
				*uParam0.f_450++;
			}
			clear_help(0);
			*uParam0.f_680 = 0;
		}
	}
	if (*uParam0.f_681 != 0)
	{
		if (_0x768FF8961BA904D6(*uParam0.f_681))
		{
			iVar13 = _0x2DE7EFA66B906036(*uParam0.f_681);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450] = *uParam0.f_418[iVar13];
			iVar14 = Global_101154.f_1.f_12[iVar1 /*6*/][*uParam0.f_450];
			_push_scaleform_movie_function(*uParam0.f_413, "UPDATE_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_450);
			_push_scaleform_movie_function_parameter_int(iVar13);
			_push_scaleform_movie_function_parameter_int(iVar14);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(*uParam0.f_413, "FOCUS_VIEW");
			_push_scaleform_movie_function_parameter_int(99);
			_pop_scaleform_movie_function_void();
			play_sound_frontend(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
			GAMEPLAY::CLEAR_BIT(uParam0.f_449, 17);
			func_103(uParam0, iVar14);
			*uParam0.f_450++;
			*uParam0.f_417 = *uParam0.f_450;
			*uParam0.f_456 = GAMEPLAY::GET_GAME_TIMER();
			*uParam0.f_457 = *uParam0.f_456;
			GAMEPLAY::SET_BIT(uParam0.f_449, 10);
			if (!func_12(uParam0.f_1.f_108[0 /*4*/]) && !func_12(uParam0.f_1.f_108[1 /*4*/]))
			{
				clear_help(0);
			}
			*uParam0.f_681 = 0;
		}
	}
	if (*uParam0.f_682 != 0)
	{
		if (_0x768FF8961BA904D6(*uParam0.f_682))
		{
			iVar15 = _0x2DE7EFA66B906036(*uParam0.f_682);
			if (iVar15 != -1)
			{
				iVar16 = *uParam0.f_418[iVar15];
				if (iVar16 != *uParam0.f_427)
				{
					play_sound_frontend(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 1);
				}
				*uParam0.f_427 = iVar16;
			}
			*uParam0.f_682 = 0;
		}
	}
	if (*uParam0.f_427 != 0)
	{
		func_102(uParam0, *uParam0.f_427);
	}
}

void func_102(auto uParam0, int iParam1)
{
	if (!func_19())
	{
		if (*uParam0.f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_119, 14))
					{
						if (!are_strings_equal(uParam0.f_1.f_304[14 /*2*/], ""))
						{
							GAMEPLAY::SET_BIT(uParam0.f_449, 10);
							GAMEPLAY::SET_BIT(uParam0.f_449, 17);
							func_24(uParam0, *uParam0.f_1.f_278, *(uParam0.f_1.f_304[14 /*2*/]), 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 14);
							GAMEPLAY::SET_BIT(uParam0.f_449, 12);
							return;
						}
					}
					break;
				
				case 13:
					if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_119, 16))
					{
						if (!are_strings_equal(uParam0.f_1.f_304[16 /*2*/], ""))
						{
							GAMEPLAY::SET_BIT(uParam0.f_449, 10);
							GAMEPLAY::SET_BIT(uParam0.f_449, 17);
							func_24(uParam0, *uParam0.f_1.f_278, *(uParam0.f_1.f_304[16 /*2*/]), 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 16);
							GAMEPLAY::SET_BIT(uParam0.f_449, 12);
							return;
						}
					}
					break;
				
				case 12:
					if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_119, 15))
					{
						if (!are_strings_equal(uParam0.f_1.f_304[15 /*2*/], ""))
						{
							GAMEPLAY::SET_BIT(uParam0.f_449, 10);
							GAMEPLAY::SET_BIT(uParam0.f_449, 17);
							func_24(uParam0, *uParam0.f_1.f_278, *(uParam0.f_1.f_304[15 /*2*/]), 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 15);
							GAMEPLAY::SET_BIT(uParam0.f_449, 12);
							return;
						}
					}
					break;
				
				case 11:
					if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_119, 17))
					{
						if (!are_strings_equal(uParam0.f_1.f_304[17 /*2*/], ""))
						{
							GAMEPLAY::SET_BIT(uParam0.f_449, 10);
							GAMEPLAY::SET_BIT(uParam0.f_449, 17);
							func_24(uParam0, *uParam0.f_1.f_278, *(uParam0.f_1.f_304[17 /*2*/]), 1);
							GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 17);
							GAMEPLAY::SET_BIT(uParam0.f_449, 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_103(auto uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_463, iParam1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_119, iParam1))
		{
			if (!are_strings_equal(uParam0.f_1.f_304[iParam1 /*2*/], ""))
			{
				func_24(uParam0, *uParam0.f_1.f_278, *(uParam0.f_1.f_304[iParam1 /*2*/]), 1);
				GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, false))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
							}
							break;
						
						case 10:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, true))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 3))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[24 /*2*/]), 1);
							}
							break;
						
						case 9:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 6))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[26 /*2*/]), 1);
							}
							break;
						
						case 1:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, false))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 7))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[21 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 7))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[19 /*2*/]), 1);
							}
							break;
						
						case 10:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, true))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 8))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[21 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 8))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[19 /*2*/]), 1);
							}
							break;
						
						case 6:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 4))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
							}
							break;
						
						case 7:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 2))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
							}
							break;
						
						case 8:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 5))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[18 /*2*/]), 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 15))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 3))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[25 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[24 /*2*/]), 1);
								}
							}
							break;
						
						case 7:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 2))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 14))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[30 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[28 /*2*/]), 1);
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 14))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[29 /*2*/]), 1);
							}
							break;
						
						case 9:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 18))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 6))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[27 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[26 /*2*/]), 1);
								}
							}
							break;
						
						case 4:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 17))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[31 /*2*/]), 1);
							}
							break;
						
						case 5:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 12))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[31 /*2*/]), 1);
							}
							break;
						
						case 1:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 10))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, false))
								{
									if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 7))
									{
										func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[23 /*2*/]), 1);
									}
									else
									{
										func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[22 /*2*/]), 1);
									}
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
								}
							}
							break;
						
						case 10:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 11))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, true))
								{
									if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 8))
									{
										func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[23 /*2*/]), 1);
									}
									else
									{
										func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[22 /*2*/]), 1);
									}
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
								}
							}
							break;
						
						case 3:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 13))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
							}
							break;
						
						case 6:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 19))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 4))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[22 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
								}
							}
							break;
						
						case 8:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 16))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 5))
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[22 /*2*/]), 1);
								}
								else
								{
									func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
								}
							}
							break;
						
						case 13:
							if (GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_117, 20))
							{
								func_24(uParam0, *uParam0.f_1.f_276, *(uParam0.f_1.f_304[20 /*2*/]), 1);
							}
							break;
					}
					break;
				}
		}
		GAMEPLAY::SET_BIT(uParam0.f_463, iParam1);
	}
}

void func_104(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_101154.f_7775.f_99.f_205[7];
			if (iVar0 == 1)
			{
				stat_set_bool(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				stat_set_bool(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_101154.f_7775.f_99.f_205[8];
			if (iVar0 == 3)
			{
				stat_set_bool(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				stat_set_bool(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_101154.f_7775.f_99.f_205[10];
			if (iVar0 == 6)
			{
				stat_set_bool(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				stat_set_bool(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_101154.f_7775.f_99.f_205[11];
			if (iVar0 == 8)
			{
				stat_set_bool(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				stat_set_bool(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_205[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_205[iParam0] = iParam1;
}

void func_106(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_120[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_120[iParam0]), iParam1);
	}
	GAMEPLAY::SET_BIT(&Global_87619, iParam0);
}

void func_108(int iParam0)
{
	int iVar0;
	auto uVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			uVar1 = Global_101154.f_7775.f_99.f_205[7];
			iVar0 = 0;
			while (iVar0 < Global_87640[uVar1 /*19*/])
			{
				switch (Global_101154.f_1.f_12[uVar1 /*6*/][iVar0])
				{
					case 1:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), false);
						break;
					
					case 10:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), true);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 14);
						break;
					
					case 7:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 2);
						break;
					
					case 12:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 3);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 15);
						break;
					
					case 6:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 4);
						break;
					
					case 8:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 5);
						break;
					
					case 9:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 6);
						break;
				}
				GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), Global_101154.f_1.f_12[uVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			uVar1 = Global_101154.f_7775.f_99.f_205[9];
			iVar0 = 0;
			while (iVar0 < Global_87640[uVar1 /*19*/])
			{
				switch (Global_101154.f_1.f_12[uVar1 /*6*/][iVar0])
				{
					case 1:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 7);
						break;
					
					case 10:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 8);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 14);
						break;
					
					case 11:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 9);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 17);
						break;
				}
				GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), Global_101154.f_1.f_12[uVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			uVar1 = Global_101154.f_7775.f_99.f_205[10];
			iVar0 = 0;
			while (iVar0 < Global_87640[uVar1 /*19*/])
			{
				switch (Global_101154.f_1.f_12[uVar1 /*6*/][iVar0])
				{
					case 1:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 10);
						break;
					
					case 10:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 11);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 14);
						break;
					
					case 5:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 12);
						break;
					
					case 3:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 13);
						break;
					
					case 4:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 17);
						break;
					
					case 7:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 14);
						break;
					
					case 12:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 15);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 15);
						break;
					
					case 6:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 19);
						break;
					
					case 8:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 16);
						break;
					
					case 9:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 18);
						break;
					
					case 13:
						GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_117), 20);
						GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_119), 16);
						break;
				}
				GAMEPLAY::SET_BIT(&(Global_101154.f_1.f_119), Global_101154.f_1.f_12[uVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), false);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), true);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 2);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 3);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 4);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 5);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 6);
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 7);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 8);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 9);
			break;
		
		case 3:
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 10);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 11);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 12);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 13);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 14);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 15);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 16);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 17);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 18);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 19);
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1.f_117), 20);
			break;
	}
}

int func_110(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_111()
{
	Global_14578 = 0;
	func_112();
}

void func_112()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_113()
{
	_0xEB2D525B57F42B40();
	func_114();
}

void func_114()
{
	Global_17118.f_134 = 1;
}

void func_115(auto uParam0)
{
	Vector3 vVar0;
	int iVar3;
	
	*uParam0.f_453 = 0;
	*uParam0.f_463 = 0;
	GAMEPLAY::SET_BIT(uParam0.f_449, 9);
	func_11(uParam0, 0);
	if (!is_cutscene_playing())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_36839 == 1)
			{
				func_120(PLAYER::PLAYER_PED_ID());
			}
			vVar0 = {*uParam0.f_401};
			vVar0 = {vVar0 + Vector(0.5f, 2.9f * cos(180f - *uParam0.f_404), 2.9f * sin(180f - *uParam0.f_404))};
			get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), 0);
			set_player_control(player_id(), false, 134);
			set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar0, 1, false, 0, 1);
			set_entity_heading(PLAYER::PLAYER_PED_ID(), *uParam0.f_404);
			AI::CLEAR_PED_TASKS_immediately(PLAYER::PLAYER_PED_ID());
			freeze_entity_position(PLAYER::PLAYER_PED_ID(), true);
		}
		GAMEPLAY::SET_BIT(uParam0.f_449, 7);
	}
	display_radar(false);
	func_72(1);
	func_119();
	_0xFDB423997FA30340();
	clear_area(*uParam0.f_401, 5f, 1, 1, 0, false);
	remove_particle_fx_in_range(*uParam0.f_401, 5f);
	_0xD39D13C9FEBF0511(true);
	_set_screen_draw_position(82, 66);
	set_hud_component_position(17, 0.612f, 0.818f);
	_0xE3A3DB414A373DAB();
	func_118(uParam0.f_649, *uParam0.f_405, *uParam0.f_408, 45f, 18, 13, 3, *uParam0.f_1.f_9, 0, 0, -1082130432, 0);
	iVar3 = get_interior_at_coords(*uParam0.f_401);
	if (iVar3 != 0)
	{
		_0x2CA429C029CCF247(iVar3);
	}
	_0xAF348AFCB575A441(&(Global_87557[*uParam0.f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		_0x405DC2AEF6AF95B9(get_key_for_entity_in_room(PLAYER::PLAYER_PED_ID()));
	}
	func_117(0);
	func_116();
	register_script_with_audio(0);
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_push_scaleform_movie_function(*uParam0.f_414, "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
	*uParam0.f_466 = _0x80C2FD58D720C801(2, 10, true);
	GAMEPLAY::SET_BIT(uParam0.f_449, 2);
	Global_87618 = 1;
	func_6(uParam0, *uParam0.f_464, 0);
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_101154.f_24935.f_145 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	if (is_help_message_being_displayed())
	{
		clear_help(1);
	}
}

void func_117(int iParam0)
{
	if (!iParam0)
	{
		Global_99798 = GAMEPLAY::GET_GAME_TIMER() + 250;
	}
	Global_99795 = iParam0;
}

void func_118(auto uParam0, Vector3 vParam1, Vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, auto uParam7, int iParam8, int iParam9, float fParam10, int iParam11)
{
	*uParam0.f_1 = {vParam1};
	*uParam0.f_4 = {vParam4};
	*uParam0.f_7 = fParam7;
	*uParam0.f_20 = iParam8;
	*uParam0.f_21 = iParam9;
	*uParam0.f_22 = iParam10;
	*uParam0.f_8 = {0f, 0f, 0f};
	*uParam0.f_11 = {0f, 0f, 0f};
	*uParam0.f_14 = {0f, 0f, 0f};
	*uParam0.f_17 = fParam7;
	*uParam0.f_18 = fParam7;
	*uParam0.f_23 = iParam12;
	*uParam0.f_19 = uParam11;
	*uParam0 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
	set_cam_active(*uParam0, true);
	set_cam_params(*uParam0, *uParam0.f_1, *uParam0.f_4, *uParam0.f_7, false, 1, 1, 2);
	if (!iParam15)
	{
		shake_cam(*uParam0, "HAND_SHAKE", 0.19f);
	}
	render_script_cams(true, false, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		set_cam_near_clip(*uParam0, fParam14);
	}
	if (*uParam0.f_23)
	{
		lock_minimap_angle(iParam13);
	}
	*uParam0.f_24 = 0;
	*uParam0.f_25 = 0;
	*uParam0.f_29 = 0f;
	*uParam0.f_30 = 0f;
	*uParam0.f_26 = 0;
	*uParam0.f_28 = 0;
	*uParam0.f_27 = 0;
}

void func_119()
{
	Global_17118.f_5 = 1;
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)
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

int func_122(int iParam0)
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

void func_123(int iParam0, int iParam1, int iParam2)
{
	func_124(iParam0, iParam1, iParam2, 0, 0);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_125()
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

bool func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return false;
	}
	return true;
}

int func_127(int iParam0, int iParam1, int iParam2)
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

int func_128(int iParam0)
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

void func_129(auto uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_130(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!is_player_playing(get_player_index()))
	{
		return false;
	}
	if (func_142(0))
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (iParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return false;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return false;
}

void func_132(auto uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_get_number_of_instances_of_streamed_script(joaat("context_controller")) < 1)
	{
	}
	if (is_player_switch_in_progress())
	{
		if (!*uParam0 == -1)
		{
			func_129(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = get_id_of_this_thread();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!is_string_null_or_empty(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_133(int iParam0)
{
	int iVar0;
	
	if (is_player_playing(player_id()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_92();
				if (!func_94(iVar0))
				{
					return false;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_141()) || Global_100201) || Global_25122) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 1:
						if (((((((((is_player_being_arrested(player_id(), 1) || func_141()) || Global_25122) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!is_player_ready_for_cutscene(player_id()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_getting_into_a_vehicle(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_141()) || Global_100201) || Global_25122) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return false;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false)) || func_141()) || Global_100201) || Global_25122) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 4:
						if (((((func_141() || get_player_wanted_level(player_id()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
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
							if ((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || get_player_wanted_level(player_id()) > 0) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_141()) || Global_25122) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return false;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || func_141()) || func_138()) || Global_100201) || Global_25122) || func_140()) || Global_36839) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return false;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((is_ped_in_combat(PLAYER::PLAYER_PED_ID(), false) || !is_player_control_on(player_id())) || !is_player_ready_for_cutscene(player_id())) || !is_screen_faded_in()) || is_player_wanted_level_greater(player_id(), 0)) || is_entity_in_air(PLAYER::PLAYER_PED_ID())) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_swimming(PLAYER::PLAYER_PED_ID())) || is_player_being_arrested(player_id(), 1)) || is_player_climbing(player_id())) || func_141()) || Global_100201) || Global_25122) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
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

auto func_134()
{
	return Global_91317.f_1;
}

int func_135()
{
	if (Global_88533 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return false;
}

bool func_136()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

bool func_137()
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

int func_138()
{
	return Global_91330.f_297 > 0;
}

int func_139()
{
	return Global_91330.f_296 > 0;
}

auto func_140()
{
	return Global_1315913;
}

int func_141()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

bool func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
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

int func_143(int iParam0)
{
	return func_144(iParam0, Global_35711);
}

bool func_144(int iParam0, int iParam1)
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

void func_145()
{
	int iVar0;
	Vector3 vVar1;
	
	if (func_219(17))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 11))
		{
			request_cutscene("JH_1_MCS_4P2", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			request_additional_text("JHS1AUD", 6);
			GAMEPLAY::SET_BIT(&iLocal_41, 11);
		}
		else if (_0xB56BBBCC2955D9CB())
		{
			set_cutscene_ped_prop_variation("LESTER", true, 0, 0, false);
		}
	}
	if (func_219(18))
	{
		if (func_219(17))
		{
			if ((has_this_cutscene_loaded("JH_1_MCS_4P2") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && has_additional_text_loaded(6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
				{
					register_entity_for_cutscene(iLocal_729, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					register_entity_for_cutscene(iLocal_729, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
				{
					if (is_entity_attached_to_any_ped(iLocal_732))
					{
						detach_entity(iLocal_732, 1, true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					register_entity_for_cutscene(PLAYER::PLAYER_PED_ID(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
				{
					register_entity_for_cutscene(iLocal_732, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					register_entity_for_cutscene(iLocal_732, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));
				func_72(1);
				func_117(1);
				func_183(1, 1, 1, 0);
				iLocal_43 = -1;
				start_cutscene(0);
				if (func_110(0))
				{
					set_cutscene_fade_values(0, 0, 0, 0);
				}
				func_106(17, 0);
			}
		}
		else if (is_cutscene_playing())
		{
			func_113();
			if (GAMEPLAY::IS_BIT_SET(iLocal_41, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
				{
					set_entity_visible(iLocal_732, true, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_730))
				{
					set_entity_visible(iLocal_730, true, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_729))
				{
					set_entity_visible(iLocal_729, true, 0);
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_41, 7);
			}
			if (can_set_exit_state_for_registered_entity("Lester", false))
			{
				if (!PED::IS_PED_INJURED(iLocal_729))
				{
					iVar0 = iLocal_729;
					SYSTEM::START_NEW_SCRIPT_with_args("lesterHandler", &iVar0, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
					iLocal_739 = GAMEPLAY::GET_GAME_TIMER();
					GAMEPLAY::SET_BIT(&iLocal_41, 18);
				}
			}
			if (can_set_exit_state_for_registered_entity("Michael", false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					vVar1 = {709.3766f, -964.2602f, 29.3954f};
					get_ground_z_for_3d_coord(vVar1, &(vVar1.f_2), 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar1, 1, false, 0, 1);
						set_entity_heading(PLAYER::PLAYER_PED_ID(), 261.7831f);
						if (is_player_playing(player_id()))
						{
							simulate_player_input_gait(player_id(), 1f, 2000, 0, 1, 0);
						}
						force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -668482597, false, 0, 0);
					}
					_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (can_set_exit_state_for_camera(0))
			{
				set_gameplay_cam_relative_heading(0f);
				set_gameplay_cam_relative_pitch(0f, 1f);
			}
		}
		else if (iLocal_43 == -1 && !func_110(0))
		{
			iLocal_43 = GAMEPLAY::GET_GAME_TIMER() + 1500;
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_43 || func_110(0))
		{
			if (func_110(0))
			{
				do_screen_fade_out(0);
			}
			else
			{
				Global_55749 = 0;
				Global_91317 = 0;
				func_182();
			}
			set_model_as_no_longer_needed(joaat("prop_cs_walking_stick"));
			set_model_as_no_longer_needed(joaat("prop_laptop_lester2"));
			func_72(0);
			func_183(0, 1, 1, 0);
			func_180(&(Global_101154.f_1826.f_539), 86);
			func_154(&(Global_101154.f_1826.f_539), 86);
			func_153(&iLocal_45);
			GAMEPLAY::CLEAR_BIT(&iLocal_41, true);
			remove_scenario_blocking_area(iLocal_733, 0);
			if (iLocal_738 != -1)
			{
				if (_0x0EAEB0DB4B132399(iLocal_738))
				{
					remove_navmesh_blocking_object(iLocal_738);
				}
			}
			clear_ped_non_creation_area();
			set_ped_paths_in_area(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
			set_max_wanted_level(5);
			func_106(18, 0);
			func_146(0, 0);
		}
	}
	else if (!func_219(17))
	{
		if (has_this_cutscene_loaded("JH_1_MCS_4P2"))
		{
			remove_cutscene();
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_41, 18))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_739 + 1000)
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_41, 18);
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_150(4, 1);
						break;
					
					case 4:
						func_150(8, 1);
						break;
					
					case 6:
						func_150(10, 1);
						break;
					
					case 7:
						func_150(1, 1);
						break;
					
					case 8:
						func_150(3, 1);
						break;
					
					case 9:
						func_150(6, 1);
						break;
					
					case 10:
						func_150(9, 1);
						break;
					
					case 12:
						func_150(11, 1);
						break;
					
					case 13:
						func_150(12, 1);
						break;
					
					case 11:
						if (func_149(91))
						{
							func_150(0, 1);
						}
						break;
					
					case 5:
						if (func_149(91))
						{
							func_150(2, 1);
						}
						break;
					
					case 3:
						if (func_149(67))
						{
							func_150(5, 1);
						}
						break;
					
					case 2:
						if (func_149(77))
						{
							func_150(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[4], false))
	{
		func_150(9, 1);
	}
	if (!func_39(13) && GAMEPLAY::IS_BIT_SET(Global_101154.f_29520.f_8[16], false))
	{
		func_150(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_150(11, 1);
		}
	}
	if (!iParam1)
	{
		if (!func_148(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_147("DI_FEED_HST");
	}
}

void func_147(char* sParam0)
{
	_set_notification_text_entry("");
	UI::_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_148(int iParam0)
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
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

int func_149(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_152(iParam0))
		{
			GAMEPLAY::SET_BIT(&(Global_101154.f_30959.f_1), iVar0);
			if (!iParam1)
			{
				func_147(func_151(iParam0));
			}
		}
	}
}

char* func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_152(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_30959.f_1, iParam0);
	}
	return false;
}

void func_153(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35673)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_154(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_155(uParam0, 0, 12);
			break;
		
		case 19:
			func_155(uParam0, 1, 13);
			break;
		
		case 29:
			func_155(uParam0, 1, 14);
			break;
		
		case 30:
			func_155(uParam0, 2, 15);
			func_155(uParam0, 1, 29);
			break;
		
		case 32:
			func_155(uParam0, 1, 16);
			func_155(uParam0, 0, 17);
			break;
		
		case 39:
			func_155(uParam0, 0, 21);
			func_155(uParam0, 1, 20);
			break;
		
		case 31:
			func_155(uParam0, 0, 18);
			break;
		
		case 20:
			func_155(uParam0, 2, 22);
			break;
		
		case 66:
			func_155(uParam0, 1, 23);
			break;
		
		case 68:
			func_155(uParam0, 1, 24);
			break;
		
		case 70:
			func_155(uParam0, 1, 67);
			break;
		
		case 8:
			func_155(uParam0, 1, 25);
			func_155(uParam0, 2, 26);
			break;
		
		case 67:
			func_155(uParam0, 1, 27);
			break;
		
		case 9:
			func_155(uParam0, 2, 28);
			break;
		
		case 38:
			func_155(uParam0, 2, 30);
			func_155(uParam0, 1, 19);
			break;
		
		case 83:
			func_155(uParam0, 2, 33);
			break;
		
		case 45:
			func_155(uParam0, 1, 35);
			break;
		
		case 64:
			func_155(uParam0, 0, 36);
			func_155(uParam0, 1, 37);
			break;
		
		case 91:
			func_155(uParam0, 0, 41);
			break;
		
		case 42:
			func_155(uParam0, 0, 58);
			Global_90747[0 /*98*/] = 0;
			func_155(uParam0, 2, 59);
			Global_90747[2 /*98*/] = 0;
			break;
		
		case 41:
			func_155(uParam0, 1, 42);
			func_155(uParam0, 2, 42);
			break;
		
		case 15:
			func_155(uParam0, 0, 46);
			func_155(uParam0, 1, 47);
			break;
		
		case 16:
			func_155(uParam0, 0, 48);
			break;
		
		case 48:
			func_155(uParam0, 1, 50);
			func_155(uParam0, 2, 51);
			break;
		
		case 74:
			func_155(uParam0, 0, 52);
			func_155(uParam0, 1, 66);
			break;
		
		case 76:
			func_155(uParam0, 1, 53);
			func_155(uParam0, 2, 54);
			func_155(uParam0, 0, 62);
			break;
		
		case 75:
			func_155(uParam0, 0, 61);
			func_155(uParam0, 1, 31);
			break;
		
		case 69:
			func_155(uParam0, 1, 63);
			break;
		
		case 84:
			func_155(uParam0, 0, 68);
			func_155(uParam0, 2, 69);
			break;
		
		case 85:
			func_155(uParam0, 0, 64);
			func_155(uParam0, 2, 65);
			break;
		
		case 93:
			func_155(uParam0, 1, 38);
			func_155(uParam0, 2, 39);
			break;
		
		case 11:
			func_155(uParam0, 2, 55);
			break;
		
		case 77:
			func_155(uParam0, 1, 56);
			func_155(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

bool func_155(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	auto uVar99;
	auto uVar102;
	auto uVar103;
	auto uVar106;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], 9))
	{
		iVar0 = Global_101154.f_17223[iParam1];
		if (iVar0 == 11)
		{
			return false;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return false;
		}
	}
	Global_101154.f_17223[iParam1] = iParam2;
	*uParam0.f_1524[iParam1] = func_169();
	if (!func_168(iParam2, uParam0.f_1528[iParam1 /*3*/], uParam0.f_1538[iParam1]))
	{
		return false;
	}
	if (!func_167(*(uParam0.f_1528[iParam1 /*3*/]), 0f, 0f, 0f, 0))
	{
		if (!func_167(Global_89782[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_156(iParam1, iParam2, &Var1, &uVar99, &uVar102, &uVar103, &uVar106))
			{
				Global_90747[iParam1 /*98*/] = {Var1};
			}
		}
	}
	*uParam0.f_1542[iParam1] = 0;
	*(uParam0.f_1546[iParam1 /*3*/]) = {0f, 0f, 0f};
	*uParam0.f_1556[iParam1] = 0;
	return true;
}

int func_156(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	*uParam2.f_3 = 1000;
	*uParam2.f_1 = 0;
	*uParam2.f_84 = 255;
	*uParam2.f_85 = 255;
	*uParam2.f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				if (is_point_in_angled_area(Global_91050[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_91042[iParam0] == 1)
					{
						*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
						*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
						if (vmag2(*uParam3) > 5f * 5f)
						{
							*uParam3 = {0f, 0f, 0f};
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = {Global_90747[iParam0 /*98*/]};
			if (Global_91042[iParam0] != 2)
			{
				*uParam3 = {Global_91050[iParam0 /*3*/] - Global_101154.f_1826.f_539.f_1528[iParam0 /*3*/]};
				*uParam4 = Global_91060[iParam0] - Global_101154.f_1826.f_539.f_1538[iParam0];
				if (vmag2(*uParam3) < 0.5f * 0.5f)
				{
					*uParam3 = {*uParam3 * Vector(1.5f, 1.5f, 1.5f)};
				}
			}
			else
			{
				*uParam3 = {0f, 0f, 0f};
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {37.43f, -23.81f, 0f};
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f)};
			*uParam4 = 1.27f - 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_158(iParam0, uParam2, 2);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger");
			*uParam2.f_5 = 34;
			*uParam2.f_6 = 34;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 56:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = {Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f)};
			*uParam4 = 141.28f - 90.0339f;
			return 1;
			break;
		
		case 12:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam5 = {0f, 5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 15f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_158(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {21.6401f, 38.5601f, 1.9708f};
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = {0f, 50f, 0f};
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_158(iParam0, uParam2, 1);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_158(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-2.72f, 0.45f, 1f};
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = {Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f)};
			*uParam4 = 0.72f - 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = {Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f)};
			*uParam4 = 2.23f - 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = {Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f)};
			*uParam4 = -1f - 97.2736f;
			return 1;
			break;
		
		case 40:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("polmav");
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {16.5182f, -8.5576f, -2.3291f};
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {2.5f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
			*uParam4 = 246.1684f - 90f;
			return 1;
			break;
		
		case 43:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = {Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f)};
			*uParam4 = 247.4806f - 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = {Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f)};
			*uParam4 = 253.776f - 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = {Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f)};
			*uParam4 = 2.62f - 299.0519f;
			return 1;
			break;
		
		case 47:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cavalcade");
			*uParam2.f_5 = 0;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			StringCopy(uParam2.f_27, "22LJK483", 16);
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {-1.5f, 35f, 3f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {3.8721f, -5.9568f, 0f};
			*uParam4 = 164.2466f - 180f;
			return 1;
			break;
		
		case 50:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 10f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = {Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f)};
			*uParam4 = 310.4708f - 220.9554f;
			return 1;
			break;
		
		case 52:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-2.9117f, -15.0499f, -0.3468f};
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = {Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f)};
			*uParam4 = 64.1848f - 180f;
			return 1;
			break;
		
		case 65:
		case 54:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("frogger2");
			*uParam2.f_5 = 40;
			*uParam2.f_6 = 0;
			*uParam2.f_7 = 0;
			*uParam2.f_8 = 0;
			*uParam2.f_9 = 0;
			*uParam2.f_11[0] = 1;
			*uParam2.f_11[1] = 1;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 1;
			*uParam2.f_11[4] = 1;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam2.f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = {5.5414f, -6.6035f, 1.0473f};
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = {5.7209f, -12.3958f, 1.0746f};
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_156(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("scorcher");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {1f, 12.5f, 0f};
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {5f, 20f, 0f};
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 30f, 0f};
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.9002f, 1.205f, -0.3537f};
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_158(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {3.2267f, 1.0966f, -0.354f};
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-13.7322f, 1.8783f, 1.0593f};
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("tropic");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0f;
			*uParam2.f_11[0] = 0;
			*uParam2.f_11[1] = 0;
			*uParam2.f_11[2] = 1;
			*uParam2.f_11[3] = 0;
			*uParam2.f_11[4] = 0;
			*uParam2.f_11[5] = 1;
			*uParam2.f_11[6] = 1;
			*uParam2.f_11[7] = 1;
			*uParam2.f_11[8] = 1;
			*uParam5 = {0f, 20f, 0f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 0f, 0f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {15.4538f, -8.711f, 5.79f};
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_156(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-8.1f, -9.01f, 0.4439f};
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {18.8468f, 40.7721f, 0f};
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f)};
			*uParam4 = 177.259f - 180f - 69f;
			return 1;
			break;
		
		case 116:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {1.7826f, 12.2098f, -0.6964f};
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {11.8705f, -1.4684f, -1.6487f};
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-13.1578f, 16.3962f, 0.6396f};
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-21.0518f, 0.5037f, 0.4091f};
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {10.8971f, 2.0809f, -0.7983f};
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {79.9901f, -52.83f, -0.3533f};
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {get_random_float_in_range(-5f, 5f), get_random_float_in_range(-5f, 5f), 0f};
				*uParam4 = get_random_float_in_range(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {2.4845f, 2.3286f, -0.383f};
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 40f, 0f};
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_158(iParam0, uParam2, 0);
			*uParam5 = {0f, 25f, 0f};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 15f, 0f};
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = {0f, 25f, 0f};
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_156(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-13.2213f, 16.331f, 0f};
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_156(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {10.3876f, -10.3585f, -1.2183f};
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {1.0793f, 15.631f, 1.1744f};
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {0f, 0f, 0f};
			*uParam4 = 0.1f;
			*uParam5 = {0.1f, 0.1f, 0.1f};
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_158(iParam0, uParam2, 1);
			*uParam5 = {0f, 0.1f, 0f};
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_157(iParam0, uParam2, 2);
			*uParam2.f_91 = 2;
			*uParam3 = {-2.19f, -1.23f, 0f};
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {-1.3547f, 2.1615f, -0.3723f};
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.2075f, 1.0943f, 0f};
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam2.f_2 = 0f;
			*uParam3 = {2.291f, 1.0879f, 0.0635f};
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {-0.9714f, 1.6112f, -0.2773f};
			*uParam4 = -7.0583f;
			*uParam5 = {Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("taxi");
			*uParam2.f_2 = 0f;
			*uParam2.f_4 = 0;
			*uParam2.f_9 = 1;
			*uParam3 = {Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam4 = 89.0026f - -1.5f;
			*uParam5 = {Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f)};
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f)};
			*uParam4 = 357.1407f - 84.96f;
			return 1;
			break;
		
		case 216:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-2.1752f, -2.3781f, 0f};
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-3.9761f, 0.2542f, 0f};
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f)};
			*uParam4 = 162.098f - 109.0206f;
			return 1;
			break;
		
		case 192:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f)};
			*uParam4 = 302.182f - 105.981f;
			return 1;
			break;
		
		case 193:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f)};
			*uParam4 = 302.182f - 172.9187f;
			return 1;
			break;
		
		case 194:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {12.74f, 3.26f, 0f};
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-1.34f, 7.684f, 0f};
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.4055f, -1607.568f, 44.4802f) - Vector(28.2858f - 0.5f + 1.5f, -1607.286f, 2.8895f)};
			*uParam4 = 318.2674f - 310.879f - 180f;
			return 1;
			break;
		
		case 201:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f)};
			*uParam4 = 322.6286f - 130.879f;
			return 1;
			break;
		
		case 202:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {91.3579f, 18.1788f, -0.1911f};
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {12.5073f, -3.4625f, -0.3702f};
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {21.87f, -10.5f, 0f};
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f)};
			*uParam4 = 270.1767f - 160f - 180f;
			return 1;
			break;
		
		case 227:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-19.8544f, -10.4863f, -0.0334f};
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {21.5897f, -6.8544f, 0.6015f};
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-7.6041f, 0.1369f, 0.5812f};
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-1.6f, 7.6802f, 0.6947f};
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {22.322f, -6.2034f, 0f};
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam3 = {-1.2901f, -5.5798f, -0.0357f};
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-4.0739f, 7.7692f, -0.2984f};
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {-5.778f, -4.2397f, 0.9091f};
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = {0.6968f, 1.1033f, 0.912f};
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("faggio2");
				*uParam2.f_91 = 0;
				return 1;
			}
			break;
		
		case 275:
			func_157(iParam0, uParam2, 1);
			*uParam2.f_91 = 1;
			*uParam5 = {0f, 8f, 0.6f};
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("tropic");
				*uParam2.f_11[0] = 0;
				*uParam2.f_11[1] = 0;
				*uParam2.f_11[2] = 1;
				*uParam2.f_11[3] = 0;
				*uParam2.f_11[4] = 0;
				*uParam2.f_11[5] = 1;
				*uParam2.f_11[6] = 1;
				*uParam2.f_11[7] = 1;
				*uParam2.f_11[8] = 1;
			}
			else
			{
				*uParam2.f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = {Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f)};
			*uParam3.f_2 += 0.5f;
			*uParam4 = 340.0835f - 4.44f;
			*uParam3 = {Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f)};
			*uParam4 = 23.6441f + 90f;
			*uParam3 = {-4.0164f, 19.9594f, 0f};
			*uParam4 = 113.6465f;
			*uParam3 = {*uParam3 * Vector(1.1f, 1.1f, 1.1f)};
			return 1;
			break;
		
		case 247:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = {9.8707f, 13.0084f, 0f};
			*uParam4 = -114f - 43f + 133f;
			return 1;
			break;
		
		case 288:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = {-7.7078f, 23.9099f, 1.7307f};
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-4.5662f, -3.2485f, 0.9455f - 1.7f};
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f)};
			*uParam4 = 315.9865f - 122.5269f;
			return 1;
			break;
		
		case 310:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {10.5999f, 3.3997f, 1.0212f};
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = {-13.2279f, -7.5348f, 0f};
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = {11.9596f, 0.345f, -1.0016f};
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = {3.424f, 7.6462f, 0.8227f};
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f)};
			*uParam4 = 14.0848f - 120f;
			return 1;
			break;
		
		case 257:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f)};
			*uParam4 = 144.9416f - 171.253f;
			return 1;
			break;
		
		case 258:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f)};
			*uParam4 = 130.9896f - 10.247f;
			return 1;
			break;
		
		case 314:
			*uParam2.f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = {0f, 150f, 20f};
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.5629f, -387.5143f, -147.166f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 341.4322f - 133f;
			return 1;
			break;
		
		case 111:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(24.4283f, -689.1462f, -1306.782f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 214.6826f - 33f;
			return 1;
			break;
		
		case 153:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -176.25f;
			return 1;
			break;
		
		case 154:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.2022f - -147.192f;
			return 1;
			break;
		
		case 165:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.0054f, -441.1681f, -1100.878f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 297.5568f - -144.622f;
			return 1;
			break;
		
		case 159:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.3852f, -199.5354f, -825.3141f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 29.4869f - -62.5f;
			return 1;
			break;
		
		case 160:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(36.2086f, -144.1027f, -730.8218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 28.532f - 119f;
			return 1;
			break;
		
		case 167:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(31.7307f, -523.2257f, -1144.174f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 299.2956f - -22.32f;
			return 1;
			break;
		
		case 152:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9436f, 314.6989f, -1421.8f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 335.4134f - 72f;
			return 1;
			break;
		
		case 157:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.469f, 255.3143f, -706.187f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 117.3069f - 37.27f;
			return 1;
			break;
		
		case 225:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.7165f, -1677.734f, 185.4888f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 54.2538f - -83.8f;
			return 1;
			break;
		
		case 218:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.3218f, -1405.159f, -17.556f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 91.3098f - -70.4124f;
			return 1;
			break;
		
		case 219:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.2611f, -1492.151f, -219.3172f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 139.2572f - -12f;
			return 1;
			break;
		
		case 220:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(25.3018f, -1811.693f, -22.6138f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 141.0423f - -117.356f;
			return 1;
			break;
		
		case 206:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(208.5337f, 773.6719f, 164.1308f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 136.3104f - -36f;
			return 1;
			break;
		
		case 207:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(108.9995f, 396.924f, -263.3745f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 284.4611f - -95.588f;
			return 1;
			break;
		
		case 274:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(139.5782f, 2030.446f, -1883.836f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.5746f - 9f;
			return 1;
			break;
		
		case 312:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.0296f, 6560.557f, -200.684f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 134.5505f - 110.5931f;
			return 1;
			break;
		
		case 271:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(6.4647f, -1083.751f, -1278.023f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 115.8919f - 26.3597f;
			return 1;
			break;
		
		case 248:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(102.4417f, 164.5124f, 325.8113f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.4108f - 10.77f;
			return 1;
			break;
		
		case 242:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(56.616f, -122.9896f, -1622.22f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 210.8653f - 13.7207f;
			return 1;
			break;
		
		case 254:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.0019f, -213.7796f, 172.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 250.3032f - -40f;
			return 1;
			break;
		
		case 287:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(17.3426f, -836.0328f, -887.9977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 270.8607f - -81f;
			return 1;
			break;
		
		case 286:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.8359f, -1182.704f, -1264.218f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4328f - -150f;
			return 1;
			break;
		
		case 239:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(104.8218f, 289.0073f, -80.4564f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 247.6446f - -122f;
			return 1;
			break;
		
		case 243:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - 18f;
			return 1;
			break;
		
		case 244:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 228.6353f - -51f;
			return 1;
			break;
		
		case 249:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(103.1881f, 177.7729f, 288.977f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 68.9831f - 138f - 180f;
			return 1;
			break;
		
		case 273:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(32.7794f, -432.4635f, -161.4589f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 340.0368f - -153f;
			return 1;
			break;
		
		case 92:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(202.1143f, 828.3607f, -806.8813f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 101.1612f - -54.347f;
			return 1;
			break;
		
		case 103:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.0174f, -1108.081f, -1724.72f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 319.8931f - 143.4931f;
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.2248f, -628.4899f, -1859.505f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 229.0784f - 99f;
			return 1;
			break;
		
		case 81:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(53.1469f, 90.4242f, -1393.442f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 123.1782f - -45f;
			return 1;
			break;
		
		case 95:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(101.921f, 186.1865f, 370.5876f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 159.7861f - 70f;
			return 1;
			break;
		
		case 97:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(45.9871f, -188.5636f, -1391.156f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 36.5172f - -45f;
			return 1;
			break;
		
		case 134:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(46.0567f, 3076.742f, 2001.918f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 328.101f - -33.128f;
			return 1;
			break;
		
		case 88:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(60.9442f, 314.7191f, -1421.821f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 336.5938f - -132f;
			return 1;
			break;
		
		case 306:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(37.4888f, 5643.726f, -569.3535f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 296.1685f - get_heading_from_vector_2d(7.4998f, -7.4995f);
			return 1;
			break;
		
		case 307:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(47.4526f, 4717.728f, -1555.593f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 236.223f - get_heading_from_vector_2d(-10.6345f, -0.7246f);
			return 1;
			break;
		
		case 308:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(22.7549f, 4629.148f, -1553.861f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 332.7842f - get_heading_from_vector_2d(3.4271f, 13.6787f);
			return 1;
			break;
		
		case 278:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(35.9161f, -1009.745f, 631.8275f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 98.8128f - -33.77f;
			return 1;
			break;
		
		case 279:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(234.6825f, 900.8749f, -111.9033f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 6.1087f - 155.68f;
			return 1;
			break;
		
		case 240:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(33.5351f, 3636.151f, 1546.323f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 298.4009f - -4.124f;
			return 1;
			break;
		
		case 241:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(30.512f, 6439.667f, -179.4242f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 225.5593f - 108f;
			return 1;
			break;
		
		case 264:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.2977f, -1390.545f, 486.7419f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 178.298f - -90f;
			return 1;
			break;
		
		case 266:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(10.5662f, 143.2342f, -3052.895f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 85.3429f - 68.8227f;
			return 1;
			break;
		
		case 267:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(39.9155f, 4934.08f, 2202.375f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 314.2654f - 56.2037f;
			return 1;
			break;
		
		case 269:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(28.149f, -782.0952f, 401.2502f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 179.9905f - -106.6605f;
			return 1;
			break;
		
		case 246:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(3.3919f, -1534.507f, -1195.256f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 305.8221f - -165f;
			return 1;
			break;
		
		case 263:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(12.8792f, -1241.213f, -573.3765f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 316.9941f - -171f;
			return 1;
			break;
		
		case 259:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(4.0002f, -1298.539f, -724.429f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 230.5715f - -32.488f;
			return 1;
			break;
		
		case 260:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(61.203f, 250.8387f, -1309.114f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 10.7756f - -29.093f;
			return 1;
			break;
		
		case 261:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(79.764f, 60.3233f, 917.6678f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = 148.021f - 229.6085f;
			return 1;
			break;
		
		case 270:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {Vector(350f, 8588f, 2919f) - Global_89782[iParam1 /*3*/]};
			*uParam4 = get_random_float_in_range(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_158(iParam0, uParam2, 0);
			*uParam3 = {-48.5171f, 28.4211f, 3.0057f};
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, auto uParam1, int iParam2)
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

bool func_158(int iParam0, auto uParam1, int iParam2)
{
	if (Global_90747[iParam0 /*98*/] == 0)
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("blimp"))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (func_166(iParam0))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_boat(Global_90747[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_plane(Global_90747[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_heli(Global_90747[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (is_this_model_a_train(Global_90747[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 == 1)
	{
		if (!is_this_model_a_car(Global_90747[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	else if (iParam2 == 2)
	{
		if (!is_this_model_a_bike(Global_90747[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			*uParam1.f_91 = iParam2;
			return true;
		}
	}
	if (!func_159(Global_90747[iParam0 /*98*/], 0))
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		return true;
	}
	if (iParam2 != 0)
	{
		func_157(iParam0, uParam1, iParam2);
		*uParam1.f_91 = iParam2;
		if (Global_90747[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = {Global_90747[iParam0 /*98*/]};
			*uParam1.f_91 = 0;
			return false;
		}
	}
	else
	{
		func_157(iParam0, uParam1, 1);
		*uParam1.f_91 = 1;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 1);
			*uParam1.f_91 = 1;
			return true;
		}
		func_157(iParam0, uParam1, 2);
		*uParam1.f_91 = 2;
		if (Global_90747[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 2);
			*uParam1.f_91 = 2;
			return true;
		}
		*uParam1 = {Global_90747[iParam0 /*98*/]};
		*uParam1.f_91 = 0;
		return false;
	}
	func_157(iParam0, uParam1, iParam2);
	*uParam1.f_91 = iParam2;
	return true;
}

bool func_159(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_165())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_164() && !func_163()) && !func_162()) && !func_161()) && !func_165())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_162())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_160(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_161()
{
	return false;
}

bool func_162()
{
	return true;
}

bool func_163()
{
	return true;
}

bool func_164()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_165()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::SET_BIT(&iVar0, false);
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
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_166(int iParam0)
{
	if (Global_90747[iParam0 /*98*/] == joaat("blimp") || Global_90747[iParam0 /*98*/] == joaat("blimp2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("submersible") || Global_90747[iParam0 /*98*/] == joaat("submersible2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("freight"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("packer"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("asea2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("burrito2") || Global_90747[iParam0 /*98*/] == joaat("fbi2"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("entityxf") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("cheetah") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("policeb") && !Global_101154.f_7775.f_330[8 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("ztype") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("polmav") && !Global_101154.f_7775.f_330[9 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("jb700") && !Global_101154.f_7775.f_330[10 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe") && !Global_101154.f_7775.f_330[11 /*6*/])
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == 1938952078)
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("handler"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("monroe"))
	{
		return true;
	}
	if (Global_90747[iParam0 /*98*/] == joaat("phantom"))
	{
		return true;
	}
	if (((Global_90747[iParam0 /*98*/] == joaat("gauntlet") && !Global_101154.f_7775.f_330[80 /*6*/]) && !Global_101154.f_7775.f_330[81 /*6*/]) && !Global_101154.f_7775.f_330[82 /*6*/])
	{
		return true;
	}
	return false;
}

int func_167(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_168(int iParam0, auto uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_168(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_168(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

auto func_169()
{
	auto uVar0;
	
	func_179(&uVar0, get_clock_seconds());
	func_178(&uVar0, get_clock_minutes());
	func_177(&uVar0, get_clock_hours());
	func_172(&uVar0, get_clock_day_of_month());
	func_171(&uVar0, get_clock_month());
	func_170(&uVar0, get_clock_year());
	return uVar0;
}

void func_170(auto uParam0, int iParam1)
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

void func_171(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_172(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_174(*uParam0);
	if (iParam1 < 1 || iParam1 > func_173(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_173(int iParam0, int iParam1)
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

auto func_174(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_175(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_176(auto uParam0)
{
	return uParam0 & 15;
}

void func_177(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_178(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_179(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_180(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_168(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_181(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_181(auto uParam0)
{
	*uParam0 = -15;
}

bool func_182()
{
	if (func_110(0))
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

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_191(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_74())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_190(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_191(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_190(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_188(player_id())) && !func_185(player_id(), 0)) && !func_184())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_188(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_184()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_186(-1, 0) == 8;
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

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_187();
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

auto func_187()
{
	return Global_1312747;
}

bool func_188(int iParam0)
{
	if (func_185(iParam0, 0))
	{
		return true;
	}
	if (func_189())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_189()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_191(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

void func_192()
{
	_hide_map_object_this_frame(-1747852954);
	if (func_219(16))
	{
		if (!func_110(0))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 10))
			{
				request_cutscene("JH_1_MCS_4_P1_ALT1", 8);
				func_200();
				func_107(0, 0, 1);
				iLocal_733 = add_scenario_blocking_area(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, 0, 1, 1, 1);
				iLocal_738 = add_navmesh_blocking_object(Local_46.f_1.f_394, Local_46.f_1.f_397 * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				set_ped_non_creation_area(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397);
				set_ped_paths_in_area(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, false, 0);
				GAMEPLAY::SET_BIT(&iLocal_41, 10);
			}
			else if (_0xB56BBBCC2955D9CB())
			{
				set_cutscene_ped_prop_variation("LESTER", true, 0, 0, false);
			}
			if (func_149(86))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_41, true))
				{
					if (func_143(0))
					{
						if (func_197(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_190(1, 0, 1, 0);
							if (is_player_playing(player_id()))
							{
								clear_player_wanted_level(player_id());
								set_max_wanted_level(false);
							}
							GAMEPLAY::SET_BIT(&iLocal_41, true);
							GAMEPLAY::SET_BIT(&iLocal_41, 2);
						}
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (does_cam_exist(iLocal_734))
						{
							destroy_cam(iLocal_734, 0);
						}
						if (does_cam_exist(iLocal_735))
						{
							destroy_cam(iLocal_735, 0);
						}
						iLocal_734 = create_camera_with_params(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_735 = create_camera_with_params(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_88108.f_9[0], 0))
							{
								iLocal_729 = Global_88108.f_9[0];
								set_entity_as_mission_entity(iLocal_729, false, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_88108[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_88108[0], 0))
							{
								iLocal_731 = Global_88108[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_183(1, 1, 0, 0);
						display_radar(false);
						display_hud(false);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
						{
							if (is_vehicle_driveable(iLocal_731, 0))
							{
								point_cam_at_entity(iLocal_734, iLocal_731, 0f, 0f, 0f, 1);
							}
						}
						set_cam_active_with_interp(iLocal_735, iLocal_734, 5000, 1, 1);
						render_script_cams(true, false, 3000, 1, 0, 0);
						iLocal_43 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_42++;
						break;
					
					case 2:
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 1200)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (is_vehicle_driveable(iLocal_731, 0))
									{
										if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iLocal_731, 0))
										{
											open_sequence_task(&iLocal_736);
											task_leave_vehicle(false, iLocal_731, 0);
											task_follow_nav_mesh_to_coord(false, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 1193033728);
											close_sequence_task(iLocal_736);
											AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											task_perform_sequence(PLAYER::PLAYER_PED_ID(), iLocal_736);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 2400)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_731))
								{
									if (is_vehicle_driveable(iLocal_731, 0))
									{
										if (is_ped_in_vehicle(iLocal_729, iLocal_731, 0))
										{
											open_sequence_task(&iLocal_737);
											task_leave_vehicle(false, iLocal_731, 0);
											task_follow_nav_mesh_to_coord(false, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 1193033728);
											close_sequence_task(iLocal_737);
											AI::CLEAR_PED_TASKS(iLocal_729);
											task_perform_sequence(iLocal_729, iLocal_737);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 5000)
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_41, 2);
						}
						break;
					}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_41, true) && !GAMEPLAY::IS_BIT_SET(iLocal_41, 2))
			{
				if (has_this_cutscene_loaded("JH_1_MCS_4_P1_ALT1"))
				{
					if (!is_cutscene_playing())
					{
						iLocal_730 = PLAYER::PLAYER_PED_ID();
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_730, 0))
						{
							register_entity_for_cutscene(iLocal_730, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
						{
							register_entity_for_cutscene(iLocal_729, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						GAMEPLAY::SET_BIT(&iLocal_41, 9);
						register_entity_for_cutscene(iLocal_732, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						GAMEPLAY::SET_BIT(&iLocal_41, 8);
						func_196(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
						func_196(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = GAMEPLAY::GET_GAME_TIMER();
						start_cutscene(2048);
					}
					else
					{
						func_113();
						if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 17))
						{
							if (!is_screen_faded_in() && !is_screen_fading_in())
							{
								do_screen_fade_in(800);
							}
							GAMEPLAY::SET_BIT(&iLocal_41, 17);
						}
						if (was_cutscene_skipped())
						{
							GAMEPLAY::SET_BIT(&iLocal_41, 16);
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_41, 16))
						{
							if (is_screen_faded_out())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 12))
								{
									func_107(0, 1, 1);
									GAMEPLAY::SET_BIT(&iLocal_41, 12);
								}
								if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 13))
								{
									func_107(0, 2, 1);
									GAMEPLAY::SET_BIT(&iLocal_41, 13);
								}
								if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 14))
								{
									func_107(0, 3, 1);
									GAMEPLAY::SET_BIT(&iLocal_41, 14);
								}
								if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 15))
								{
									func_107(0, 4, 1);
									GAMEPLAY::SET_BIT(&iLocal_41, 15);
								}
								func_194(&Local_46);
								if (!GAMEPLAY::IS_BIT_SET(iLocal_41, false))
								{
									func_193();
									GAMEPLAY::SET_BIT(&iLocal_41, false);
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 5))
						{
							if (does_cam_exist(iLocal_734))
							{
								set_cam_active(iLocal_734, false);
							}
							if (does_cam_exist(iLocal_735))
							{
								set_cam_active(iLocal_735, false);
							}
							render_script_cams(false, false, 3000, 1, 0, 0);
							if (does_cam_exist(iLocal_735))
							{
								destroy_cam(iLocal_735, 0);
							}
							if (does_cam_exist(iLocal_735))
							{
								destroy_cam(iLocal_735, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_729))
							{
								PED::DELETE_PED(&iLocal_729);
							}
							GAMEPLAY::SET_BIT(&iLocal_41, 5);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								GAMEPLAY::SET_BIT(&iLocal_41, 6);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 12))
						{
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 14058)
							{
								func_107(0, 1, 1);
								GAMEPLAY::SET_BIT(&iLocal_41, 12);
							}
						}
						else if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 13))
						{
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 22887)
							{
								func_107(0, 2, 1);
								GAMEPLAY::SET_BIT(&iLocal_41, 13);
							}
						}
						else if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 14))
						{
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 27988)
							{
								func_107(0, 3, 1);
								func_194(&Local_46);
								GAMEPLAY::SET_BIT(&iLocal_41, 14);
							}
						}
						else if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 15))
						{
							if (GAMEPLAY::GET_GAME_TIMER() - iLocal_43 > 42084)
							{
								func_107(0, 4, 1);
								GAMEPLAY::SET_BIT(&iLocal_41, 15);
							}
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_41, 8))
						{
							if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_732 = get_object_index_from_entity_index(get_entity_index_of_registered_entity("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								GAMEPLAY::CLEAR_BIT(&iLocal_41, 8);
							}
						}
						if (GAMEPLAY::IS_BIT_SET(iLocal_41, 9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_729 = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Lester", joaat("ig_lestercrest")));
								GAMEPLAY::CLEAR_BIT(&iLocal_41, 9);
							}
						}
						if (can_set_exit_state_for_registered_entity("Michael", false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_730, 0))
							{
								set_blocking_of_non_temporary_events(iLocal_730, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_730, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_730, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_730, 213, false);
								task_go_straight_to_coord(iLocal_730, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 0.5f);
							}
						}
						if (can_set_exit_state_for_registered_entity("Lester", false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
								{
									attach_entity_to_entity(iLocal_732, iLocal_729, get_ped_bone_index(iLocal_729, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
							{
								set_blocking_of_non_temporary_events(iLocal_729, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_729, 213, false);
								task_go_straight_to_coord(iLocal_729, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 0.5f);
							}
						}
						if (can_set_exit_state_for_camera(0))
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_41, false))
							{
								func_193();
								GAMEPLAY::SET_BIT(&iLocal_41, false);
							}
							if (!GAMEPLAY::IS_BIT_SET(iLocal_41, 7))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_730, 0))
								{
									set_entity_visible(iLocal_730, false, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_729, 0))
								{
									set_entity_visible(iLocal_729, false, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_732))
								{
									set_entity_visible(iLocal_732, false, 0);
								}
								GAMEPLAY::SET_BIT(&iLocal_41, 7);
							}
							func_106(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_196(&(Local_46.f_484), 0, 0, "MICHAEL", 1, 1);
			func_196(&(Local_46.f_484), 3, 0, "LESTER", 1, 1);
			if (func_143(0))
			{
				if (func_197(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					GAMEPLAY::SET_BIT(&iLocal_41, true);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_41, true))
			{
				func_193();
				func_106(16, 0);
			}
		}
	}
	else
	{
		if (has_this_cutscene_loaded("JH_1_MCS_4_P1_ALT1"))
		{
			remove_cutscene();
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_41, 10))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_41, 10);
		}
	}
}

void func_193()
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_201(&Local_46);
	func_67(&Local_46);
}

void func_194(auto uParam0)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
	{
		if (!is_cutscene_playing())
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_195(uParam0);
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, true);
		GAMEPLAY::CLEAR_BIT(&Global_87620, *uParam0);
	}
}

void func_195(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_1.f_33)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0.f_428[iVar0]))
		{
			delete_object(uParam0.f_428[iVar0]);
		}
		iVar0++;
	}
}

void func_196(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		if (func_199(0))
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		set_player_invincible(get_player_index(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			force_cleanup(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *iParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*iParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_198(iParam0, iParam4);
		}
	}
	return 2;
}

void func_198(auto uParam0, int iParam1)
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

bool func_199(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_143(iParam0))
	{
		return false;
	}
	return true;
}

void func_200()
{
	Global_91317 = 1;
}

void func_201(auto uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 2))
			{
				func_69(uParam0, func_202(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				func_115(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_219(18);
			break;
		
		case 1:
			return func_219(22);
			break;
		
		case 2:
			return func_219(40);
			break;
		
		case 3:
			return func_219(8);
			break;
		
		case 4:
			return func_219(26);
			break;
		
		default:
			break;
	}
	return 0;
}

auto func_203()
{
	return Global_69751;
}

bool func_204(auto uParam0)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
	{
		func_194(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, false))
	{
		func_205(uParam0);
	}
	return true;
}

void func_205(auto uParam0)
{
	release_named_script_audio_bank("HEIST_BULLETIN_BOARD");
	set_model_as_no_longer_needed(joaat("prop_ld_planning_pin_01"));
	set_model_as_no_longer_needed(joaat("prop_ld_planning_pin_02"));
	set_model_as_no_longer_needed(joaat("prop_ld_planning_pin_03"));
	if (*uParam0.f_413 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(uParam0.f_413);
	}
	if (*uParam0.f_414 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(uParam0.f_414);
	}
	clear_additional_text(5, false);
	GAMEPLAY::CLEAR_BIT(&Global_87621, *uParam0);
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, false);
}

void func_206(auto uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar0 = vdist2(*uParam0.f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
		{
			func_214(uParam0);
		}
		else if (fVar0 < fParam1 * fParam1 || GAMEPLAY::IS_BIT_SET(Global_87620, *uParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, false))
			{
				if (func_213(uParam0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_87620, *uParam0))
					{
						if (GAMEPLAY::IS_BIT_SET(Global_87622, *uParam0))
						{
							func_208(uParam0);
						}
					}
					else
					{
						func_208(uParam0);
					}
				}
			}
			else
			{
				func_207(uParam0);
			}
		}
		if (fVar0 > fParam2 * fParam2 && !GAMEPLAY::IS_BIT_SET(Global_87620, *uParam0))
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, false))
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
				{
					func_194(uParam0);
				}
				func_205(uParam0);
			}
		}
	}
}

void func_207(auto uParam0)
{
	if (!_0x5B50ABB1FE3746F4())
	{
		return;
	}
	request_additional_text(uParam0.f_1.f_272, 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	*uParam0.f_413 = request_scaleform_movie_instance(uParam0.f_1.f_268);
	*uParam0.f_414 = request_scaleform_movie_instance("INSTRUCTIONAL_BUTTONS");
	GAMEPLAY::SET_BIT(&Global_87619, *uParam0);
	GAMEPLAY::SET_BIT(uParam0.f_449, false);
}

void func_208(auto uParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(*uParam0.f_449, true))
	{
		iVar0 = false;
		while (iVar0 < *uParam0.f_1.f_96)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_212(uParam0);
		func_211(uParam0);
		func_209(uParam0);
		GAMEPLAY::SET_BIT(uParam0.f_449, true);
	}
}

void func_209(auto uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	Vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_1.f_33)
	{
		if (func_32(*uParam0, *uParam0.f_1.f_75[iVar0]))
		{
			switch (iVar0 % 3)
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = to_float(get_random_int_in_range(false, 65535) - 32767) / 4000f;
			fVar3 = to_float(get_random_int_in_range(false, 65535) - 32767) / 4000f;
			vVar4 = {func_210(uParam0, uParam0.f_1.f_34[iVar0 /*2*/])};
			*uParam0.f_428[iVar0] = create_object(iVar1, vVar4, 1, true, false);
			set_entity_rotation(*uParam0.f_428[iVar0], fVar2, 0f, *uParam0.f_404 + fVar3, 2, 1);
			set_entity_as_mission_entity(*uParam0.f_428[iVar0], true, 0);
			set_entity_invincible(*uParam0.f_428[iVar0], true);
			set_entity_collision(*uParam0.f_428[iVar0], false, 0);
			set_entity_has_gravity(*uParam0.f_428[iVar0], 0);
			freeze_entity_position(*uParam0.f_428[iVar0], true);
		}
		iVar0++;
	}
	GAMEPLAY::CLEAR_BIT(&Global_87622, *uParam0);
}

Vector3 func_210(auto uParam0, auto uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	Vector3 vVar7;
	
	fVar0 = *uParam0.f_1.f_4;
	fVar1 = *uParam0.f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = fVar0 * fVar2 - 0.5f;
	fVar5 = -fVar1 * fVar3 - 0.5f;
	fVar6 = *uParam0.f_404;
	vVar7 = {*uParam0.f_401};
	vVar7 = {vVar7 + Vector(fVar5, fVar4 * cos(90f - fVar6), fVar4 * sin(90f - fVar6))};
	return vVar7;
}

void func_211(auto uParam0)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	
	uVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_1.f_117)
	{
		iVar2 = *uParam0.f_1.f_186[iVar0];
		iVar3 = GAMEPLAY::IS_BIT_SET(Global_101154.f_1.f_120[uVar1], iVar2);
		if (*uParam0.f_1.f_141[iVar0 /*2*/] == 0 && *(uParam0.f_1.f_141[iVar0 /*2*/]).f_1 == 0)
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SHOW_HEIST_ASSET");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_1.f_118[iVar0]);
			_push_scaleform_movie_function_parameter_bool(iVar3);
			_pop_scaleform_movie_function_void();
		}
		else
		{
			_push_scaleform_movie_function(*uParam0.f_413, "SHOW_HEIST_ASSET");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_1.f_118[iVar0]);
			_push_scaleform_movie_function_parameter_bool(iVar3);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_141[iVar0 /*2*/]));
			_push_scaleform_movie_function_parameter_float(to_float(*(uParam0.f_1.f_141[iVar0 /*2*/]).f_1));
			_pop_scaleform_movie_function_void();
		}
		iVar0++;
	}
}

void func_212(auto uParam0)
{
	auto uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	_push_scaleform_movie_function(*uParam0.f_413, "CREATE_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
	_push_scaleform_movie_function_parameter_int(2);
	_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_14));
	_push_scaleform_movie_function_parameter_float(to_float(*uParam0.f_1.f_14.f_1));
	_pop_scaleform_movie_function_void();
	uVar0 = *uParam0;
	iVar1 = false;
	iVar2 = 0;
	while (iVar2 < *uParam0.f_1.f_209)
	{
		if (func_32(uVar0, *uParam0.f_1.f_248[iVar2]))
		{
			iVar3 = false;
			if (func_32(uVar0, *uParam0.f_1.f_258[iVar2]))
			{
				iVar3 = true;
			}
			_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
			_push_scaleform_movie_function_parameter_int(iVar1);
			_push_scaleform_movie_function_parameter_int(iVar3);
			func_8(uParam0.f_1.f_211[iVar2 /*4*/]);
			_pop_scaleform_movie_function_void();
			iVar1++;
		}
		iVar2++;
	}
	_push_scaleform_movie_function(*uParam0.f_413, "DISPLAY_VIEW");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
	_pop_scaleform_movie_function_void();
	if (func_32(*uParam0, *uParam0.f_1.f_210))
	{
		_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	else
	{
		_push_scaleform_movie_function(*uParam0.f_413, "SHOW_VIEW");
		_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
}

bool func_213(auto uParam0)
{
	if (!has_scaleform_movie_loaded(*uParam0.f_413))
	{
		return false;
	}
	if (!has_scaleform_movie_loaded(*uParam0.f_414))
	{
		return false;
	}
	if (!has_additional_text_loaded(5))
	{
		return false;
	}
	if (_0x5B50ABB1FE3746F4())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return false;
		}
	}
	GAMEPLAY::SET_BIT(&Global_87621, *uParam0);
	return true;
}

void func_214(auto uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_215(uParam0);
		fVar0 = -*uParam0.f_1.f_4 * 0.5f;
		fVar1 = *uParam0.f_1.f_5 * 0.5f;
		draw_scaleform_movie_3d(*uParam0.f_413, *uParam0.f_401 + Vector(fVar1, fVar0 * cos(90f - *uParam0.f_404), fVar0 * sin(90f - *uParam0.f_404)), 180f, 0f, *uParam0.f_404, 1f, 1f, 1f, *uParam0.f_1.f_6, *uParam0.f_1.f_7, 1f, 2);
	}
}

void func_215(auto uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	Vector3 vVar6;
	
	if (GAMEPLAY::IS_BIT_SET(Global_87619, *uParam0))
	{
		GAMEPLAY::SET_BIT(uParam0.f_449, 16);
		GAMEPLAY::SET_BIT(uParam0.f_449, 15);
		GAMEPLAY::SET_BIT(uParam0.f_449, 14);
		GAMEPLAY::CLEAR_BIT(&Global_87619, *uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 16))
	{
		iVar0 = 0;
		while (iVar0 < *uParam0.f_1.f_117)
		{
			iVar1 = *uParam0.f_1.f_186[iVar0];
			iVar2 = func_32(*uParam0, iVar1);
			_push_scaleform_movie_function(*uParam0.f_413, "SHOW_HEIST_ASSET");
			_push_scaleform_movie_function_parameter_int(*uParam0.f_1.f_118[iVar0]);
			_push_scaleform_movie_function_parameter_bool(iVar2);
			_push_scaleform_movie_function_parameter_int(false);
			_pop_scaleform_movie_function_void();
			iVar0++;
		}
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, 16);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 15))
	{
		iVar0 = 0;
		while (iVar0 < *uParam0.f_1.f_33)
		{
			if (func_32(*uParam0, *uParam0.f_1.f_75[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam0.f_428[iVar0]))
				{
					switch (iVar0 % 3)
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = to_float(get_random_int_in_range(false, 65535) - 32767) / 4000f;
					fVar5 = to_float(get_random_int_in_range(false, 65535) - 32767) / 4000f;
					vVar6 = {func_210(uParam0, uParam0.f_1.f_34[iVar0 /*2*/])};
					*uParam0.f_428[iVar0] = create_object(iVar3, vVar6, 1, true, false);
					set_entity_rotation(*uParam0.f_428[iVar0], fVar4, 0f, *uParam0.f_404 + fVar5, 2, 1);
					set_entity_as_mission_entity(*uParam0.f_428[iVar0], true, 0);
					set_entity_invincible(*uParam0.f_428[iVar0], true);
					set_entity_collision(*uParam0.f_428[iVar0], false, 0);
					set_entity_has_gravity(*uParam0.f_428[iVar0], 0);
					freeze_entity_position(*uParam0.f_428[iVar0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0.f_428[iVar0]))
			{
				delete_object(uParam0.f_428[iVar0]);
			}
			iVar0++;
		}
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, 15);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_449, 14))
	{
		func_216(uParam0);
		func_33(uParam0);
		func_212(uParam0);
		GAMEPLAY::CLEAR_BIT(uParam0.f_449, 14);
	}
}

void func_216(auto uParam0)
{
	_push_scaleform_movie_function(*uParam0.f_413, "SET_DATA_SLOT_EMPTY");
	_push_scaleform_movie_function_parameter_int(*uParam0.f_415 + 1);
	_pop_scaleform_movie_function_void();
}

int func_217(int iParam0)
{
	return Global_35711 == iParam0;
}

bool func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return false;
	}
	if (Global_85596[iParam0 /*2*/])
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82363)
	{
		if (Global_82363[iVar0 /*5*/] != -1)
		{
			if (Global_69758.f_109[Global_82363[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_219(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

void func_220(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar3;
	
	*uParam0 = iParam1;
	vVar0 = {Global_87557[*uParam0.f_1.f_1 /*15*/].f_3};
	fVar3 = Global_87557[*uParam0.f_1.f_1 /*15*/].f_6;
	*uParam0.f_401 = {vVar0};
	*uParam0.f_404 = fVar3;
	*uParam0.f_405 = {vVar0 + Vector(0f, -*uParam0.f_1.f_8 * cos(360f - fVar3), -*uParam0.f_1.f_8 * sin(360f - fVar3))};
	*uParam0.f_408 = {-0.85f, 0f, fVar3};
	GAMEPLAY::SET_BIT(uParam0.f_449, 4);
	*uParam0.f_415 = *uParam0.f_1.f_96;
	*uParam0.f_416 = -1;
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, false);
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, true);
	GAMEPLAY::CLEAR_BIT(uParam0.f_449, 2);
	*uParam0.f_464 = 0;
	*uParam0.f_451 = -1;
}

void func_221(auto uParam0, auto uParam1)
{
	func_230(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_229(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_228(uParam0, 20f, 22f, 28f);
	func_227(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_226(uParam0, 1, "CRW_GM", "");
	func_226(uParam0, 4, "CRW_NR", "");
	func_226(uParam0, 6, "CRW_PH", "");
	func_226(uParam0, 7, "CRW_CF", "");
	func_226(uParam0, 8, "CRW_ET", "");
	func_226(uParam0, 9, "CRW_KD", "");
	func_226(uParam0, 10, "CRW_PM", "CRM_PM");
	func_226(uParam0, 12, "CRW_RL", "CRM_RL");
	func_225(uParam0, 0, 0, 0, 0);
	func_225(uParam0, 6, 0, 0, 0);
	func_225(uParam0, 1, 0, 0, 0);
	func_225(uParam0, 3, 1, 0, 0);
	func_225(uParam0, 11, 2, 0, 0);
	func_225(uParam0, 5, 3, 0, 0);
	func_225(uParam0, 9, 3, 0, 0);
	func_225(uParam0, 2, 4, 0, 0);
	func_225(uParam0, 7, 9, 0, 0);
	func_225(uParam0, 10, 10, 0, 0);
	func_224(uParam0, 2, 2, "H_TD_SEC");
	func_224(uParam0, 2, 2, "H_TD_PHOTO");
	func_224(uParam0, 2, 5, "H_TD_PLAN");
	func_224(uParam0, 2, 6, "H_TD_CREW");
	func_224(uParam0, 7, 11, "H_TD_CARB");
	func_224(uParam0, 8, 9, "H_TD_BUGS");
	func_224(uParam0, 8, 10, "H_TD_GAS");
	func_223(uParam0, 0, 203, 74);
	func_223(uParam0, 1, 368, 181);
	func_223(uParam0, 1, 556, 189);
	func_223(uParam0, 2, 690, 63);
	func_223(uParam0, 2, 673, 308);
	func_223(uParam0, 2, 671, 406);
	func_223(uParam0, 3, 245, 244);
	func_223(uParam0, 4, 70, 68);
	func_222(uParam0, 0, "JHP12", 214, 165, 1);
	func_222(uParam0, 0, "JHP13", 254, 46, 1);
	func_222(uParam0, 0, "JHP14", 70, 97, 1);
	func_222(uParam0, 0, "JHP15", 254, 275, 1);
	func_222(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_222(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char[8] cVar0;
	
	if (*uParam0.f_369 < 7)
	{
		StringCopy(&cVar0, sParam2, 8);
		*uParam0.f_386[*uParam0.f_369] = iParam1;
		*uParam0.f_371[*uParam0.f_369 /*2*/] = iParam3;
		*(uParam0.f_371[*uParam0.f_369 /*2*/]).f_1 = iParam4;
		*(uParam0.f_280[*uParam0.f_369 + 4 /*2*/]) = {cVar0};
		if (iParam5)
		{
			GAMEPLAY::SET_BIT(uParam0.f_370, *uParam0.f_369);
		}
		*uParam0.f_369++;
	}
}

void func_223(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_33 < 20)
	{
		*uParam0.f_75[*uParam0.f_33] = iParam1;
		*uParam0.f_34[*uParam0.f_33 /*2*/] = iParam2;
		*(uParam0.f_34[*uParam0.f_33 /*2*/]).f_1 = iParam3;
		*uParam0.f_33++;
	}
}

void func_224(auto uParam0, int iParam1, int iParam2, char* sParam3)
{
	char[32] cVar0;
	
	if (*uParam0.f_209 < 9)
	{
		StringCopy(&cVar0, sParam3, 32);
		*uParam0.f_248[*uParam0.f_209] = iParam1;
		*uParam0.f_258[*uParam0.f_209] = iParam2;
		MemCopy(uParam0.f_211[*uParam0.f_209 /*4*/], {cVar0}, 4);
		*uParam0.f_209++;
	}
}

void func_225(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam0.f_117 < 22)
	{
		*uParam0.f_118[*uParam0.f_117] = iParam1;
		*uParam0.f_186[*uParam0.f_117] = iParam2;
		*uParam0.f_141[*uParam0.f_117 /*2*/] = iParam3;
		*(uParam0.f_141[*uParam0.f_117 /*2*/]).f_1 = iParam4;
		*uParam0.f_117++;
	}
}

void func_226(auto uParam0, int iParam1, char* sParam2, char* sParam3)
{
	char[8] cVar0;
	char[8] cVar2;
	
	StringCopy(&cVar0, sParam2, 8);
	StringCopy(&cVar2, sParam3, 8);
	*(uParam0.f_304[iParam1 /*2*/]) = {cVar0};
	if (!are_strings_equal(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				*(uParam0.f_304[14 /*2*/]) = {cVar2};
				break;
			
			case 13:
				*(uParam0.f_304[16 /*2*/]) = {cVar2};
				break;
			
			case 12:
				*(uParam0.f_304[15 /*2*/]) = {cVar2};
				break;
			
			case 11:
				*(uParam0.f_304[17 /*2*/]) = {cVar2};
				break;
			
			default:
				break;
			}
	}
}

void func_227(auto uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	char[16] cVar0;
	char[16] cVar4;
	char[16] cVar8;
	char[16] cVar12;
	char[8] cVar16;
	char[8] cVar18;
	char[8] cVar20;
	char[8] cVar22;
	
	StringCopy(&cVar0, sParam1, 16);
	StringCopy(&cVar4, sParam2, 16);
	StringCopy(&cVar8, sParam3, 16);
	StringCopy(&cVar12, sParam4, 16);
	StringCopy(&cVar16, sParam5, 8);
	StringCopy(&cVar18, sParam6, 8);
	StringCopy(&cVar20, sParam7, 8);
	StringCopy(&cVar22, sParam8, 8);
	*(uParam0.f_20[0 /*4*/]) = {cVar0};
	*(uParam0.f_20[1 /*4*/]) = {cVar4};
	*(uParam0.f_108[0 /*4*/]) = {cVar8};
	*(uParam0.f_108[1 /*4*/]) = {cVar12};
	*(uParam0.f_280[1 /*2*/]) = {cVar16};
	*(uParam0.f_280[2 /*2*/]) = {cVar18};
	*(uParam0.f_280[0 /*2*/]) = {cVar20};
	*(uParam0.f_280[3 /*2*/]) = {cVar22};
}

void func_228(auto uParam0, float fParam1, float fParam2, float fParam3)
{
	*uParam0.f_9 = fParam1;
	*uParam0.f_10 = fParam2;
	*uParam0.f_11 = fParam3;
}

void func_229(auto uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	*uParam0.f_2 = iParam1;
	*uParam0.f_3 = iParam2;
	*uParam0.f_4 = fParam3;
	*uParam0.f_5 = fParam4;
	*uParam0.f_6 = fParam5;
	*uParam0.f_7 = fParam6;
	*uParam0.f_8 = fParam7;
	*uParam0.f_12 = iParam8;
	*uParam0.f_12.f_1 = iParam9;
	*uParam0.f_97[0 /*2*/] = iParam10;
	*(uParam0.f_97[0 /*2*/]).f_1 = iParam11;
	*uParam0.f_97[1 /*2*/] = iParam12;
	*(uParam0.f_97[1 /*2*/]).f_1 = iParam13;
	*uParam0.f_97[2 /*2*/] = iParam14;
	*(uParam0.f_97[2 /*2*/]).f_1 = iParam15;
	*uParam0.f_97[3 /*2*/] = iParam16;
	*(uParam0.f_97[3 /*2*/]).f_1 = iParam17;
	*uParam0.f_97[4 /*2*/] = iParam18;
	*(uParam0.f_97[4 /*2*/]).f_1 = iParam19;
	*uParam0.f_16 = iParam20;
	*uParam0.f_16.f_1 = iParam21;
	*uParam0.f_18 = iParam22;
	*uParam0.f_18.f_1 = iParam23;
	*uParam0.f_14 = iParam24;
	*uParam0.f_14.f_1 = iParam25;
}

void func_230(auto uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, auto uParam10, Vector3 vParam11, Vector3 vParam12)
{
	*uParam0.f_1 = iParam1;
	StringCopy(uParam0.f_268, sParam2, 16);
	StringCopy(uParam0.f_272, sParam3, 16);
	StringCopy(uParam0.f_276, sParam4, 8);
	StringCopy(uParam0.f_278, sParam5, 8);
	*uParam0.f_29 = iParam6;
	*uParam0.f_30[0] = iParam8;
	*uParam0.f_30[1] = iParam9;
	*uParam0.f_210 = iParam7;
	*uParam0.f_96 = uParam10;
	*uParam0.f_394 = {vParam11};
	*uParam0.f_397 = {vParam14};
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_7775.f_99.f_219[iVar0], iVar1))
	{
		return false;
	}
	GAMEPLAY::SET_BIT(&(Global_101154.f_7775.f_99.f_219[iVar0]), iVar1);
	return true;
}

void func_233()
{
	if (has_this_cutscene_loaded("JH_1_MCS_4P2") || has_this_cutscene_loaded("JH_1_MCS_4_P1_ALT1"))
	{
		remove_cutscene();
	}
	func_106(16, 0);
	func_106(17, 0);
	func_106(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	remove_scenario_blocking_area(iLocal_733, 0);
	if (iLocal_738 != -1)
	{
		if (_0x0EAEB0DB4B132399(iLocal_738))
		{
			remove_navmesh_blocking_object(iLocal_738);
		}
	}
	clear_ped_non_creation_area();
	set_ped_paths_in_area(Local_46.f_1.f_394 - Local_46.f_1.f_397, Local_46.f_1.f_394 + Local_46.f_1.f_397, true, 0);
	set_max_wanted_level(5);
	if (iLocal_45 != -1)
	{
		func_153(&iLocal_45);
	}
	while (!func_204(&Local_46))
	{
		wait(0);
	}
	terminate_this_thread();
}

