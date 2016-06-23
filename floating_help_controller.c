void main()
{
	network_set_script_is_safe_for_network_game();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_99808)
	{
		if (Global_99808[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (GAMEPLAY::GET_GAME_TIMER() > Global_99808[iVar0 /*28*/].f_21 && Global_99808[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					clear_floating_help(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_99808[iVar0 /*28*/].f_21 != -1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_99808[iVar0 /*28*/].f_27, false))
					{
						Global_99808[iVar0 /*28*/].f_21 += round(get_frame_time() * 1000f);
						if (_0x2432784ACA090DA4(iVar1))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_99808[iVar0 /*28*/].f_27), false);
						}
					}
				}
				if (Global_99808[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_99808[iVar0 /*28*/].f_23 != 0)
					{
						if (!is_entity_dead(Global_99808[iVar0 /*28*/].f_23, 0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_99808[iVar0 /*28*/].f_27, 3))
							{
								_0x784BA7E0ECEB4178(iVar1, get_offset_from_entity_in_world_coords(Global_99808[iVar0 /*28*/].f_23, Global_99808[iVar0 /*28*/].f_24));
							}
							else
							{
								_0xB094BC1DB4018240(iVar1, Global_99808[iVar0 /*28*/].f_23, Global_99808[iVar0 /*28*/].f_24, Global_99808[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_99808[iVar0 /*28*/].f_24 != 0f || Global_99808[iVar0 /*28*/].f_24.f_1 != 0f) || Global_99808[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						_0x784BA7E0ECEB4178(iVar1, Global_99808[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					_0x7679CC1BCEBE3D4C(iVar1, Global_99808[iVar0 /*28*/].f_24, Global_99808[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - Global_99808[iVar0 /*28*/].f_22 > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_99808[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_99808[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_99808[iParam0 /*28*/].f_4), "", 64);
	Global_99808[iParam0 /*28*/].f_23 = 0;
	Global_99808[iParam0 /*28*/].f_24 = {0f, 0f, 0f};
	Global_99808[iParam0 /*28*/].f_27 = 0;
	Global_99808[iParam0 /*28*/].f_20 = 0;
	Global_99808[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!are_strings_equal(&(Global_99808[iParam0 /*28*/]), "") && !is_string_null(&(Global_99808[iParam0 /*28*/])))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_99808[iParam0 /*28*/].f_27, true))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_99808[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4), Global_99808[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_99808[iParam0 /*28*/]), &(Global_99808[iParam0 /*28*/].f_4));
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_99808[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_99808[iParam0 /*28*/]), Global_99808[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_99808[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)
{
	_0x0A24DA3A41B718F5(sParam1);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_5(int iParam0, char* sParam1, int iParam2)
{
	_0x0A24DA3A41B718F5(sParam1);
	add_text_component_integer(iParam2);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_6(int iParam0, char* sParam1, char* sParam2)
{
	_0x0A24DA3A41B718F5(sParam1);
	_add_text_component_item_string(sParam2);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

int func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_0x0A24DA3A41B718F5(sParam1);
	_add_text_component_item_string(sParam2);
	add_text_component_integer(iParam3);
	return _0x10BDDBFC529428DD(1 + iParam0);
}

