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
	Global_1226367 = -1;
	network_set_script_is_safe_for_network_game();
	iVar0 = 0;
	while (iVar0 < 91)
	{
		func_1(&(Global_1049163[iVar0 /*1924*/]), iVar0);
		iVar0++;
	}
}

bool func_1(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*uParam0.f_1742.f_96[iVar0] = 1f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		*uParam0.f_1876[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_32 = func_32(iParam1);
	*uParam0.f_16 = {func_31(iParam1)};
	*uParam0.f_20 = {func_30(iParam1)};
	switch (iParam1)
	{
		case 1:
			*uParam0.f_35 = 1;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 1;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 2:
			*uParam0.f_35 = 1;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 2;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 3:
			*uParam0.f_35 = 1;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 3;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 4:
			*uParam0.f_35 = 1;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 4;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 61:
			*uParam0.f_35 = 1;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 61;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 87:
			*uParam0.f_35 = 68;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 87;
			func_3(uParam0, 87);
			*uParam0.f_34 = 3;
			return true;
			break;
		
		case 88:
			*uParam0.f_35 = 69;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 88;
			func_3(uParam0, 88);
			*uParam0.f_34 = 3;
			return true;
			break;
		
		case 89:
			*uParam0.f_35 = 70;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 89;
			func_3(uParam0, 89);
			*uParam0.f_34 = 3;
			return true;
			break;
		
		case 90:
			*uParam0.f_35 = 71;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 90;
			func_3(uParam0, 90);
			*uParam0.f_34 = 3;
			return true;
			break;
		
		case 5:
			*uParam0.f_35 = 2;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 5;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 6:
			*uParam0.f_35 = 2;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 6;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 7:
			*uParam0.f_35 = 3;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 7;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 34:
			*uParam0.f_35 = 3;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 34;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 62:
			*uParam0.f_35 = 3;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 62;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 35:
			*uParam0.f_35 = 4;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 35;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 36:
			*uParam0.f_35 = 4;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 36;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 37:
			*uParam0.f_35 = 4;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 37;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 38:
			*uParam0.f_35 = 5;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 38;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 39:
			*uParam0.f_35 = 5;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 39;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 65:
			*uParam0.f_35 = 5;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 65;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 40:
			*uParam0.f_35 = 6;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 40;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 41:
			*uParam0.f_35 = 6;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 41;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 63:
			*uParam0.f_35 = 6;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 63;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 42:
			*uParam0.f_35 = 7;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 42;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 43:
			*uParam0.f_35 = 7;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 43;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 64:
			*uParam0.f_35 = 7;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 64;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 73:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 73;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 74:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 74;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 75:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 75;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 76:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 76;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 77:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 77;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 78:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 78;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 79:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 79;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 80:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 80;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 81:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 81;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 82:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 82;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 83:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 83;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 84:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 84;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 85:
			*uParam0.f_35 = func_2(iParam1);
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 10);
			*uParam0.f_31 = 85;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 8:
			*uParam0.f_35 = 8;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 8;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 9:
			*uParam0.f_35 = 9;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 9;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 10:
			*uParam0.f_35 = 10;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 10;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 11:
			*uParam0.f_35 = 11;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 11;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 12:
			*uParam0.f_35 = 12;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 12;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 13:
			*uParam0.f_35 = 13;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 13;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 14:
			*uParam0.f_35 = 14;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 14;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 15:
			*uParam0.f_35 = 15;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 15;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 16:
			*uParam0.f_35 = 16;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 16;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 17:
			*uParam0.f_35 = 17;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 17;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 18:
			*uParam0.f_35 = 18;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 18;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 19:
			*uParam0.f_35 = 19;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 19;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 20:
			*uParam0.f_35 = 20;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 20;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 21:
			*uParam0.f_35 = 21;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 21;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 22:
			*uParam0.f_35 = 22;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 22;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 23:
			*uParam0.f_35 = 23;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 23;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 24:
			*uParam0.f_35 = 24;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 24;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 25:
			*uParam0.f_35 = 25;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 25;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 26:
			*uParam0.f_35 = 26;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 26;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 27:
			*uParam0.f_35 = 27;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 27;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 28:
			*uParam0.f_35 = 28;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 28;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 29:
			*uParam0.f_35 = 29;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 29;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 30:
			*uParam0.f_35 = 30;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 30;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 31:
			*uParam0.f_35 = 31;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 31;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 32:
			*uParam0.f_35 = 32;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 32;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 33:
			*uParam0.f_35 = 33;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 33;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 44:
			*uParam0.f_35 = 34;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 44;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 45:
			*uParam0.f_35 = 35;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 45;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 46:
			*uParam0.f_35 = 36;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 46;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 47:
			*uParam0.f_35 = 37;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 47;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 48:
			*uParam0.f_35 = 38;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 48;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 49:
			*uParam0.f_35 = 39;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 49;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 50:
			*uParam0.f_35 = 40;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 50;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 51:
			*uParam0.f_35 = 41;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 51;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 52:
			*uParam0.f_35 = 42;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 52;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 53:
			*uParam0.f_35 = 43;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 53;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 54:
			*uParam0.f_35 = 44;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 54;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 55:
			*uParam0.f_35 = 45;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 55;
			func_21(uParam0, 6);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 56:
			*uParam0.f_35 = 46;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 56;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 57:
			*uParam0.f_35 = 47;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 57;
			func_21(uParam0, 10);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 58:
			*uParam0.f_35 = 48;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 58;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 59:
			*uParam0.f_35 = 49;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 59;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 60:
			*uParam0.f_35 = 50;
			func_23(uParam0, *uParam0.f_35);
			*uParam0.f_31 = 60;
			func_21(uParam0, 2);
			*uParam0.f_34 = 1;
			return true;
			break;
		
		case 66:
			*uParam0.f_35 = 51;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 66;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 67:
			*uParam0.f_35 = 52;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 67;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 68:
			*uParam0.f_35 = 53;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 68;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 69:
			*uParam0.f_35 = 54;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 6);
			*uParam0.f_31 = 69;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 70:
			*uParam0.f_35 = 55;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 70;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
		
		case 71:
			*uParam0.f_35 = 56;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 71;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
		
		case 72:
			*uParam0.f_35 = 57;
			func_23(uParam0, *uParam0.f_35);
			func_21(uParam0, 2);
			*uParam0.f_31 = 72;
			func_3(uParam0, *uParam0.f_31);
			*uParam0.f_34 = 0;
			return true;
			break;
	}
	return false;
}

int func_2(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case 79:
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
			return 68;
			break;
		
		case 88:
			return 69;
			break;
		
		case 89:
			return 70;
			break;
		
		case 90:
			return 71;
			break;
	}
	return 0;
}

void func_3(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar6;
	
	iVar6 = -1;
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
		case 83:
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
			iVar6 = func_20(iParam1);
			func_18(iParam1, 278, &vVar0, iVar6);
			*(uParam0.f_121[0 /*12*/]) = {vVar0};
			func_18(iParam1, 279, &vVar0, iVar6);
			*(uParam0.f_121[0 /*12*/].f_3) = {vVar0};
			func_18(iParam1, 282, &vVar0, iVar6);
			*(uParam0.f_121[0 /*12*/].f_7) = {vVar0};
			func_18(iParam1, 280, &vVar0, iVar6);
			*(uParam0.f_121[1 /*12*/]) = {vVar0};
			func_18(iParam1, 281, &vVar0, iVar6);
			*(uParam0.f_121[1 /*12*/].f_3) = {vVar0};
			func_18(iParam1, 282, &vVar0, iVar6);
			*(uParam0.f_121[0 /*12*/].f_7) = {vVar0};
			*(uParam0.f_121[0 /*12*/]).f_10 = vVar0.f_3;
			*(uParam0.f_121[0 /*12*/]).f_11 = vVar0.f_3.f_1;
			func_18(iParam1, 283, &vVar0, iVar6);
			*(uParam0.f_121[1 /*12*/].f_7) = {vVar0};
			*(uParam0.f_121[1 /*12*/]).f_10 = vVar0.f_3;
			*(uParam0.f_121[1 /*12*/]).f_11 = vVar0.f_3.f_1;
			func_18(iParam1, 6, &vVar0, iVar6);
			*(uParam0.f_38[0 /*27*/].f_8) = {vVar0};
			*(uParam0.f_38[0 /*27*/]).f_11 = vVar0.f_3.f_2;
			func_18(iParam1, 1, &vVar0, iVar6);
			*(uParam0.f_146[0 /*12*/]) = {vVar0};
			func_18(iParam1, 2, &vVar0, iVar6);
			*(uParam0.f_146[0 /*12*/].f_3) = {vVar0};
			if (func_17(iParam1) || func_16(iParam1, -1))
			{
				*(uParam0.f_146[0 /*12*/]).f_6 = 1f;
			}
			else
			{
				*(uParam0.f_146[0 /*12*/]).f_6 = 3.5f;
			}
			*(uParam0.f_146[0 /*12*/]).f_7 = vVar0.f_3.f_2;
			if (func_15(iParam1))
			{
				func_18(iParam1, 672, &vVar0, iVar6);
				*(uParam0.f_146[1 /*12*/]) = {vVar0};
				func_18(iParam1, 673, &vVar0, iVar6);
				*(uParam0.f_146[1 /*12*/].f_3) = {vVar0};
				*(uParam0.f_146[1 /*12*/]).f_6 = 3.5f;
				*(uParam0.f_146[1 /*12*/]).f_7 = vVar0.f_3.f_2;
			}
			func_18(iParam1, 7, &vVar0, iVar6);
			*uParam0.f_146.f_37 = {vVar0};
			func_18(iParam1, 8, &vVar0, iVar6);
			*uParam0.f_146.f_40 = {vVar0};
			*uParam0.f_146.f_43 = {vVar0.f_3};
			*uParam0.f_146.f_46 = 62.8385f;
			func_18(iParam1, 3, &vVar0, iVar6);
			*uParam0.f_146.f_47 = {vVar0};
			func_14(uParam0.f_146.f_57, iParam1);
			if (func_20(iParam1) == 86)
			{
				func_18(iParam1, 341, &vVar0, 86);
				*uParam0.f_146.f_1595 = vVar0.f_3.f_2;
				*uParam0.f_146.f_1592 = {vVar0};
			}
			func_18(iParam1, 15, &vVar0, iVar6);
			*uParam0.f_146.f_50 = {vVar0};
			func_4(iParam1, uParam0.f_146.f_53, uParam0.f_146.f_56, -1);
			func_18(iParam1, 46, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[1 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 48, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[1 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 49, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[1 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 47, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[1 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 50, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 51, &vVar0, iVar6);
			*(uParam0.f_146.f_82[1 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 41, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[0 /*102*/]).f_3 = vVar0.f_3.f_2;
			*(uParam0.f_146.f_82[0 /*102*/]).f_85 = 1;
			func_18(iParam1, 42, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[0 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 43, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[0 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 44, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_29) = {vVar0};
			*(uParam0.f_146.f_82[0 /*102*/].f_32) = {vVar0.f_3};
			func_18(iParam1, 45, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[0 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 126, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 127, &vVar0, iVar6);
			*(uParam0.f_146.f_82[0 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 56, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/]).f_3 = vVar0.f_3.f_2;
			*(uParam0.f_146.f_82[4 /*102*/].f_4) = {1f, 1f, 1f};
			func_18(iParam1, 57, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 58, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 59, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_35) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_38) = {vVar0.f_3};
			func_18(iParam1, 60, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_41) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_44) = {vVar0.f_3};
			func_18(iParam1, 61, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_47) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_50) = {vVar0.f_3};
			func_18(iParam1, 62, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_53) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_56) = {vVar0.f_3};
			func_18(iParam1, 63, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 64, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_65) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_68) = {vVar0.f_3};
			func_18(iParam1, 65, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_71) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_74) = {vVar0.f_3};
			func_18(iParam1, 66, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_16) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/]).f_86 = vVar0.f_3.f_2;
			func_18(iParam1, 67, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 110, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_77) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/]).f_80 = vVar0.f_3.f_2;
			func_18(iParam1, 68, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_93) = {vVar0};
			func_18(iParam1, 109, &vVar0, iVar6);
			*(uParam0.f_146.f_82[4 /*102*/].f_87) = {vVar0};
			*(uParam0.f_146.f_82[4 /*102*/].f_90) = {vVar0.f_3};
			*(uParam0.f_146.f_82[12 /*102*/].f_4) = {1f, 1f, 1f};
			func_18(iParam1, 364, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 365, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_35) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_38) = {vVar0.f_3};
			func_18(iParam1, 366, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_41) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_44) = {vVar0.f_3};
			func_18(iParam1, 367, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_47) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_50) = {vVar0.f_3};
			func_18(iParam1, 368, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 362, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_65) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_68) = {vVar0.f_3};
			func_18(iParam1, 363, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_71) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_74) = {vVar0.f_3};
			func_18(iParam1, 360, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_16) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/]).f_86 = vVar0.f_3.f_2;
			func_18(iParam1, 361, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 369, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_77) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/]).f_80 = vVar0.f_3.f_2;
			func_18(iParam1, 68, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_93) = {vVar0};
			func_18(iParam1, 109, &vVar0, iVar6);
			*(uParam0.f_146.f_82[12 /*102*/].f_87) = {vVar0};
			*(uParam0.f_146.f_82[12 /*102*/].f_90) = {vVar0.f_3};
			*(uParam0.f_146.f_82[13 /*102*/].f_4) = {1f, 1f, 1f};
			func_18(iParam1, 374, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 375, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_35) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_38) = {vVar0.f_3};
			func_18(iParam1, 376, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_41) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_44) = {vVar0.f_3};
			func_18(iParam1, 377, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_47) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_50) = {vVar0.f_3};
			func_18(iParam1, 378, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 372, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_65) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_68) = {vVar0.f_3};
			func_18(iParam1, 373, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_71) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_74) = {vVar0.f_3};
			func_18(iParam1, 370, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_16) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/]).f_86 = vVar0.f_3.f_2;
			func_18(iParam1, 371, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 379, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_77) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/]).f_80 = vVar0.f_3.f_2;
			func_18(iParam1, 68, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_93) = {vVar0};
			func_18(iParam1, 109, &vVar0, iVar6);
			*(uParam0.f_146.f_82[13 /*102*/].f_87) = {vVar0};
			*(uParam0.f_146.f_82[13 /*102*/].f_90) = {vVar0.f_3};
			func_18(iParam1, 69, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[5 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 70, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[5 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 71, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_65) = {vVar0};
			func_18(iParam1, 72, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_71) = {vVar0};
			func_18(iParam1, 73, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_87) = {vVar0};
			func_18(iParam1, 74, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_16) = {vVar0};
			*(uParam0.f_146.f_82[5 /*102*/].f_19) = {vVar0.f_3};
			func_18(iParam1, 75, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_35) = {vVar0};
			*(uParam0.f_146.f_82[5 /*102*/].f_38) = {vVar0.f_3};
			func_18(iParam1, 76, &vVar0, iVar6);
			*(uParam0.f_146.f_82[5 /*102*/].f_41) = {vVar0};
			*(uParam0.f_146.f_82[5 /*102*/].f_44) = {vVar0.f_3};
			func_18(iParam1, 77, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[6 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 79, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[6 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 80, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[6 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 78, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[6 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 81, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 82, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 128, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[9 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 298, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_81) = {vVar0};
			func_18(iParam1, 298, &vVar0, iVar6);
			*(uParam0.f_146.f_82[6 /*102*/].f_81) = {vVar0};
			func_18(iParam1, 299, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_81) = {vVar0};
			func_18(iParam1, 131, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[9 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 132, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[9 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 130, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[9 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 133, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 134, &vVar0, iVar6);
			*(uParam0.f_146.f_82[9 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 89, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[8 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 91, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[8 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 92, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[8 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 90, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[8 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 135, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 136, &vVar0, iVar6);
			*(uParam0.f_146.f_82[8 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 83, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/]) = {vVar0};
			*(uParam0.f_146.f_82[7 /*102*/]).f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 85, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_22) = {vVar0};
			*(uParam0.f_146.f_82[7 /*102*/].f_25) = {vVar0.f_3};
			func_18(iParam1, 88, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_59) = {vVar0};
			*(uParam0.f_146.f_82[7 /*102*/].f_62) = {vVar0.f_3};
			func_18(iParam1, 84, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_7) = {vVar0};
			*(uParam0.f_146.f_82[7 /*102*/].f_10) = {vVar0.f_3};
			func_18(iParam1, 86, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_16) = {vVar0};
			func_18(iParam1, 87, &vVar0, iVar6);
			*(uParam0.f_146.f_82[7 /*102*/].f_19) = {vVar0};
			func_18(iParam1, 94, &vVar0, iVar6);
			*uParam0.f_146.f_1517.f_8 = {vVar0};
			*uParam0.f_146.f_1517.f_11 = {vVar0.f_3};
			func_18(iParam1, 95, &vVar0, iVar6);
			*uParam0.f_146.f_1517 = {vVar0};
			*uParam0.f_146.f_1517.f_3 = vVar0.f_3.f_2;
			if (iParam1 == 65)
			{
			}
			func_18(iParam1, 96, &vVar0, iVar6);
			*uParam0.f_146.f_1517.f_4 = {vVar0};
			*uParam0.f_146.f_1517.f_7 = vVar0.f_3.f_2;
			func_18(iParam1, 97, &vVar0, iVar6);
			*uParam0.f_146.f_1517.f_14 = {vVar0};
			*uParam0.f_146.f_1517.f_17 = vVar0.f_3.f_2;
			func_18(iParam1, 98, &vVar0, iVar6);
			*uParam0.f_146.f_1517.f_18 = {vVar0};
			*uParam0.f_146.f_1517.f_21 = vVar0.f_3.f_2;
			func_18(iParam1, 99, &vVar0, iVar6);
			*uParam0.f_146.f_1543.f_4 = {vVar0};
			*uParam0.f_146.f_1543.f_7 = {vVar0.f_3};
			func_18(iParam1, 100, &vVar0, iVar6);
			*uParam0.f_146.f_1543 = {vVar0};
			*uParam0.f_146.f_1543.f_3 = vVar0.f_3.f_2;
			func_18(iParam1, 108, &vVar0, iVar6);
			*uParam0.f_146.f_1553 = {vVar0};
			*uParam0.f_146.f_1556 = {vVar0.f_3};
			func_18(iParam1, 119, &vVar0, iVar6);
			*uParam0.f_146.f_1517.f_22 = {vVar0};
			*uParam0.f_146.f_1517.f_25 = vVar0.f_3.f_2;
			func_18(iParam1, 137, &vVar0, iVar6);
			*uParam0.f_146.f_1559 = {vVar0};
			func_18(iParam1, 142, &vVar0, iVar6);
			*uParam0.f_146.f_1562 = {vVar0};
			func_18(iParam1, 143, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_6 = {vVar0};
			func_18(iParam1, 146, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_18 = {vVar0};
			func_18(iParam1, 147, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_21 = {vVar0};
			func_18(iParam1, 158, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_15 = {vVar0};
			func_18(iParam1, 145, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_15 = {vVar0};
			func_18(iParam1, 144, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_12 = {vVar0};
			func_18(iParam1, 148, &vVar0, iVar6);
			*uParam0.f_146.f_1562.f_24 = {vVar0};
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*(uParam0.f_38[0 /*27*/].f_8) = {347.3975f, -1001.446f, -100.1982f};
			*(uParam0.f_38[0 /*27*/]).f_11 = 4.881f;
			*(uParam0.f_146[0 /*12*/]) = {347.0897f, -1002.554f, -96.94618f};
			*(uParam0.f_146[0 /*12*/].f_3) = {347.0861f, -1003.8f, -100.886f};
			*(uParam0.f_146[0 /*12*/]).f_6 = 2.5f;
			*(uParam0.f_146[0 /*12*/]).f_7 = 176.3655f;
			*uParam0.f_146.f_37 = {338.7102f, -1002.236f, -100.2119f};
			*uParam0.f_146.f_40 = {342.9461f, -999.73f, -98.0236f};
			*uParam0.f_146.f_43 = {0f, 0f, 37.7289f};
			*uParam0.f_146.f_46 = 50f;
			*uParam0.f_146.f_47 = {348.132f, -997.2031f, -100.1741f};
			func_14(uParam0.f_146.f_57, iParam1);
			*uParam0.f_146.f_50 = {346.4337f, -1002.827f, -97.7941f};
			func_4(iParam1, uParam0.f_146.f_53, uParam0.f_146.f_56, -1);
			*(uParam0.f_146.f_82[1 /*102*/]) = {349.9853f, -997.8344f, -99.1952f};
			*(uParam0.f_146.f_82[1 /*102*/]).f_3 = 285.4278f;
			*(uParam0.f_146.f_82[2 /*102*/]) = {343.8862f, -1002.251f, -100.1962f};
			*(uParam0.f_146.f_82[2 /*102*/]).f_3 = 277.1949f;
			*(uParam0.f_146.f_82[2 /*102*/].f_22) = {344.6448f, -1003.755f, -98.7875f};
			*(uParam0.f_146.f_82[2 /*102*/].f_25) = {-2.7747f, -1.6005f, 17.2117f};
			*(uParam0.f_146.f_82[2 /*102*/].f_29) = {344.6427f, -1003.999f, -98.7826f};
			*(uParam0.f_146.f_82[2 /*102*/].f_32) = {-0.1925f, -1.5516f, 18.2611f};
			*(uParam0.f_146.f_82[2 /*102*/].f_59) = {342.347f, -1003.119f, -97.9876f};
			*(uParam0.f_146.f_82[2 /*102*/].f_62) = {-27.0125f, -1.6193f, -66.8063f};
			*(uParam0.f_146.f_82[2 /*102*/].f_7) = {Vector(-99.095f, -1002.38f, 344.482f) + Vector(0.0058f, 0.066f, 0.0651f)};
			*(uParam0.f_146.f_82[2 /*102*/].f_10) = {0f, 0f, -129.96f};
			*(uParam0.f_146.f_82[2 /*102*/].f_16) = {344.6f, -1002.3f, -100.1962f};
			*(uParam0.f_146.f_82[2 /*102*/].f_19) = {343.5f, -1002.3f, -98.1962f};
			*(uParam0.f_146.f_82[6 /*102*/].f_81) = {341.9066f, -1001.67f, -99.233f};
			*(uParam0.f_146.f_82[0 /*102*/]) = {339.6112f, -996.2951f, -99.1962f};
			*(uParam0.f_146.f_82[0 /*102*/]).f_3 = 10.8f;
			*(uParam0.f_146.f_82[0 /*102*/].f_7) = {339.435f, -995.849f, -100.196f};
			*(uParam0.f_146.f_82[0 /*102*/].f_10) = {0f, 0f, -169.2f};
			*(uParam0.f_146.f_82[0 /*102*/].f_22) = {348.8181f, -993.7432f, -99.2265f};
			*(uParam0.f_146.f_82[0 /*102*/].f_25) = {-9.5524f, 0f, -143.8996f};
			*(uParam0.f_146.f_82[0 /*102*/].f_16) = {339.3881f, -996.7233f, -100.1962f};
			*(uParam0.f_146.f_82[0 /*102*/].f_19) = {340.2585f, -996.2639f, -98.19622f};
			*(uParam0.f_146.f_82[0 /*102*/]).f_85 = 0;
			*(uParam0.f_146.f_82[4 /*102*/]) = {347.2369f, -995.4249f, -99.1069f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_3 = 91.0909f;
			*(uParam0.f_146.f_82[4 /*102*/].f_4) = {0.6f, 0.6f, 0.6f};
			*(uParam0.f_146.f_82[4 /*102*/].f_7) = {347.3f, -994.85f, -99.966f};
			*(uParam0.f_146.f_82[4 /*102*/].f_10) = {0f, 0f, -90f};
			*(uParam0.f_146.f_82[4 /*102*/].f_22) = {348.0795f, -995.1061f, -98.537f};
			*(uParam0.f_146.f_82[4 /*102*/].f_25) = {-3.7658f, 0.0129f, 117.3778f};
			*(uParam0.f_146.f_82[4 /*102*/].f_35) = {347.3852f, -995.6655f, -98.3721f};
			*(uParam0.f_146.f_82[4 /*102*/].f_38) = {28.8622f, 0.0506f, 37.7639f};
			*(uParam0.f_146.f_82[4 /*102*/].f_41) = {348.0655f, -995.4604f, -98.5769f};
			*(uParam0.f_146.f_82[4 /*102*/].f_44) = {-3.3764f, 0.0015f, 90.1577f};
			*(uParam0.f_146.f_82[4 /*102*/].f_47) = {347.4615f, -995.39f, -97.7124f};
			*(uParam0.f_146.f_82[4 /*102*/].f_50) = {-42.5076f, 0.0833f, 89.414f};
			*(uParam0.f_146.f_82[4 /*102*/].f_53) = {347.4615f, -995.39f, -97.7124f};
			*(uParam0.f_146.f_82[4 /*102*/].f_56) = {-42.5076f, 0.0833f, 89.414f};
			*(uParam0.f_146.f_82[4 /*102*/].f_59) = {346.4644f, -992.7673f, -98.5189f};
			*(uParam0.f_146.f_82[4 /*102*/].f_62) = {-19.2697f, -0.0001f, -146.3524f};
			*(uParam0.f_146.f_82[4 /*102*/].f_65) = {346.9f, -995.1795f, -97.85f};
			*(uParam0.f_146.f_82[4 /*102*/].f_68) = {-45f, 0f, 0f};
			*(uParam0.f_146.f_82[4 /*102*/].f_71) = {346.9f, -995.1795f, -97.85f};
			*(uParam0.f_146.f_82[4 /*102*/].f_74) = {-45f, 0f, 90f};
			*(uParam0.f_146.f_82[4 /*102*/].f_16) = {346.25f, -994.4f, -100.2f};
			*(uParam0.f_146.f_82[4 /*102*/].f_19) = {348.25f, -994.4f, -97.5f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_86 = 5.5f;
			*(uParam0.f_146.f_82[4 /*102*/].f_87) = {348.2157f, -993.1122f, -99.043f};
			*(uParam0.f_146.f_82[4 /*102*/].f_90) = {0f, 0f, 0f};
			*(uParam0.f_146.f_82[4 /*102*/].f_77) = {347.7391f, -994.5944f, -100.1962f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_80 = 9.7212f;
			*(uParam0.f_146.f_82[4 /*102*/].f_93) = {348.1615f, -993.4734f, -100.6962f};
			*(uParam0.f_146.f_82[6 /*102*/]) = {342.6041f, -1001.584f, -100.1962f};
			*(uParam0.f_146.f_82[6 /*102*/]).f_3 = 88.0775f;
			*(uParam0.f_146.f_82[6 /*102*/].f_7) = {Vector(-99.25f, -1001.646f, 341.9f) + Vector(-0.0027f, -0.0238f, 0.0066f)};
			*(uParam0.f_146.f_82[6 /*102*/].f_10) = {0f, 0f, 90f};
			*(uParam0.f_146.f_82[6 /*102*/].f_22) = {341.3749f, -1002.883f, -98.9319f};
			*(uParam0.f_146.f_82[6 /*102*/].f_25) = {-2.0018f, -0.0676f, -25.1089f};
			*(uParam0.f_146.f_82[6 /*102*/].f_59) = {341.3749f, -1002.883f, -98.9319f};
			*(uParam0.f_146.f_82[6 /*102*/].f_62) = {-2.0018f, -0.0676f, -25.1089f};
			*(uParam0.f_146.f_82[6 /*102*/].f_16) = {342f, -1001.549f, -100.1962f};
			*(uParam0.f_146.f_82[6 /*102*/].f_19) = {343f, -1001.549f, -98.1962f};
			*uParam0.f_146.f_1517.f_8 = {346.7972f, -1004.445f, -100.1919f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, 180f};
			*uParam0.f_146.f_1517 = {346.796f, -1002.232f, -99.19f};
			*uParam0.f_146.f_1517.f_3 = 178.66f;
			*uParam0.f_146.f_1517.f_4 = {346.55f, -1006.26f, -100.1962f};
			*uParam0.f_146.f_1517.f_7 = 359.8999f;
			*uParam0.f_146.f_1517.f_14 = {346.2292f, -1000.979f, -99.19f};
			*uParam0.f_146.f_1517.f_17 = -132.94f;
			*uParam0.f_146.f_1517.f_18 = {347.2401f, -1001.856f, -99.19f};
			*uParam0.f_146.f_1517.f_21 = 51.24f;
			*uParam0.f_146.f_1553 = {346.48f, -1004.03f, -98.81f};
			*uParam0.f_146.f_1556 = {90f, 0f, 0f};
			*uParam0.f_146.f_1559 = {340.6887f, -998.2258f, -100.1962f};
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*(uParam0.f_38[0 /*27*/].f_8) = {264.5677f, -1000.625f, -100.0086f};
			*(uParam0.f_38[0 /*27*/]).f_11 = 38.4697f;
			*(uParam0.f_146[0 /*12*/]) = {265.082f, -1000.701f, -100.0086f};
			*(uParam0.f_146[0 /*12*/].f_3) = {265.0666f, -1002.635f, -97.25862f};
			*(uParam0.f_146[0 /*12*/]).f_6 = 1.75f;
			*(uParam0.f_146[0 /*12*/]).f_7 = 182.9622f;
			*uParam0.f_146.f_37 = {264.4842f, -997.0889f, -100.0086f};
			*uParam0.f_146.f_40 = {262.9771f, -999.9382f, -97.7223f};
			*uParam0.f_146.f_43 = {0f, 0f, 46.9484f};
			*uParam0.f_146.f_46 = 50f;
			*uParam0.f_146.f_47 = {262.6717f, -1000.425f, -100.0087f};
			func_14(uParam0.f_146.f_57, iParam1);
			*uParam0.f_146.f_50 = {265.9362f, -1001.305f, -97.6834f};
			func_4(iParam1, uParam0.f_146.f_53, uParam0.f_146.f_56, -1);
			*(uParam0.f_146.f_82[1 /*102*/]) = {261.2055f, -1003.92f, -100.0086f};
			*(uParam0.f_146.f_82[1 /*102*/]).f_3 = 280.6086f;
			*(uParam0.f_146.f_82[2 /*102*/]) = {265.6066f, -996.4553f, -99.0039f};
			*(uParam0.f_146.f_82[2 /*102*/]).f_3 = 264.6031f;
			*(uParam0.f_146.f_82[2 /*102*/].f_7) = {Vector(-98.9f, -996.94f, 266.2f) - Vector(0.0016f, -0.2399f, -0.0237f)};
			*(uParam0.f_146.f_82[2 /*102*/].f_10) = {0f, 0f, -146.16f};
			*(uParam0.f_146.f_82[2 /*102*/].f_22) = {266.522f, -995.2286f, -98.7813f};
			*(uParam0.f_146.f_82[2 /*102*/].f_25) = {1.4963f, 0.0565f, 169.5309f};
			*(uParam0.f_146.f_82[2 /*102*/].f_29) = {266.522f, -995.2286f, -98.7813f};
			*(uParam0.f_146.f_82[2 /*102*/].f_32) = {1.4963f, 0.0565f, 169.5309f};
			*(uParam0.f_146.f_82[2 /*102*/].f_59) = {265.3f, -996.2f, -98.2f};
			*(uParam0.f_146.f_82[2 /*102*/].f_62) = {-26.5f, 0f, -126.9383f};
			*(uParam0.f_146.f_82[2 /*102*/].f_16) = {266.4885f, -996.7f, -98.5f};
			*(uParam0.f_146.f_82[2 /*102*/].f_19) = {265f, -996.7f, -100.0086f};
			*(uParam0.f_146.f_82[0 /*102*/]) = {259.4345f, -996.0923f, -100.0086f};
			*(uParam0.f_146.f_82[0 /*102*/]).f_3 = 74f;
			*(uParam0.f_146.f_82[0 /*102*/].f_7) = {259.221f, -994.878f, -99.536f};
			*(uParam0.f_146.f_82[0 /*102*/].f_10) = {0f, 0f, 0f};
			*(uParam0.f_146.f_82[0 /*102*/].f_22) = {259.5696f, -997.0326f, -99.3819f};
			*(uParam0.f_146.f_82[0 /*102*/].f_25) = {3.6829f, -0.0466f, 50.1658f};
			*(uParam0.f_146.f_82[0 /*102*/].f_29) = {259.1824f, -996.4972f, -99.2152f};
			*(uParam0.f_146.f_82[0 /*102*/].f_32) = {13.6201f, -0.0466f, 1.422f};
			*(uParam0.f_146.f_82[0 /*102*/].f_59) = {257.0249f, -995.7932f, -98.5627f};
			*(uParam0.f_146.f_82[0 /*102*/].f_62) = {-8.5766f, -0.0466f, -102.1123f};
			*(uParam0.f_146.f_82[0 /*102*/].f_16) = {258.6503f, -995.9299f, -100.0086f};
			*(uParam0.f_146.f_82[0 /*102*/].f_19) = {259.761f, -996.1004f, -98.00862f};
			*(uParam0.f_146.f_82[0 /*102*/]).f_85 = 1;
			*(uParam0.f_146.f_82[3 /*102*/]) = {262.4687f, -999.5469f, -100.0086f};
			*(uParam0.f_146.f_82[3 /*102*/]).f_3 = 187.4952f;
			*(uParam0.f_146.f_82[4 /*102*/]) = {254.3181f, -1000.806f, -98.9226f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_3 = 357.3586f;
			*(uParam0.f_146.f_82[4 /*102*/].f_4) = {0.6f, 0.6f, 0.6f};
			*(uParam0.f_146.f_82[4 /*102*/].f_7) = {254.847f, -1000.64f, -99.768f};
			*(uParam0.f_146.f_82[4 /*102*/].f_10) = {0f, 0f, -180f};
			*(uParam0.f_146.f_82[4 /*102*/].f_22) = {254.5649f, -1001.635f, -98.2143f};
			*(uParam0.f_146.f_82[4 /*102*/].f_25) = {-13.1864f, 0f, 14.3302f};
			*(uParam0.f_146.f_82[4 /*102*/].f_35) = {254.0852f, -1001.056f, -97.9779f};
			*(uParam0.f_146.f_82[4 /*102*/].f_38) = {8.8526f, -0.0221f, -37.4062f};
			*(uParam0.f_146.f_82[4 /*102*/].f_41) = {254.2074f, -1001.658f, -98.3661f};
			*(uParam0.f_146.f_82[4 /*102*/].f_44) = {-2.5954f, -0.0719f, -0.3961f};
			*(uParam0.f_146.f_82[4 /*102*/].f_47) = {254.2738f, -1001.01f, -97.76f};
			*(uParam0.f_146.f_82[4 /*102*/].f_50) = {-32.3906f, -0.0172f, 0.3708f};
			*(uParam0.f_146.f_82[4 /*102*/].f_53) = {254.2738f, -1001.01f, -97.76f};
			*(uParam0.f_146.f_82[4 /*102*/].f_56) = {-32.3906f, -0.0172f, 0.3708f};
			*(uParam0.f_146.f_82[4 /*102*/].f_59) = {256.8365f, -1001.02f, -98.767f};
			*(uParam0.f_146.f_82[4 /*102*/].f_62) = {-3.3968f, -0.0144f, 88.4273f};
			*(uParam0.f_146.f_82[4 /*102*/].f_65) = {254.5308f, -1000.291f, -97.67236f};
			*(uParam0.f_146.f_82[4 /*102*/].f_68) = {-45f, 0f, 0f};
			*(uParam0.f_146.f_82[4 /*102*/].f_71) = {254.5308f, -1000.291f, -97.67236f};
			*(uParam0.f_146.f_82[4 /*102*/].f_74) = {-45f, 0f, 0f};
			*(uParam0.f_146.f_82[4 /*102*/].f_16) = {253.8433f, -1000.755f, -100f};
			*(uParam0.f_146.f_82[4 /*102*/].f_19) = {257.2739f, -1000.765f, -97f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_86 = 2f;
			*(uParam0.f_146.f_82[4 /*102*/].f_87) = {257.2896f, -1001.255f, -98.8587f};
			*(uParam0.f_146.f_82[4 /*102*/].f_90) = {0f, 0f, 0f};
			*(uParam0.f_146.f_82[4 /*102*/].f_77) = {255.2676f, -1000.978f, -100.0099f};
			*(uParam0.f_146.f_82[4 /*102*/]).f_80 = 274.0441f;
			*(uParam0.f_146.f_82[4 /*102*/].f_93) = {257.2361f, -1000.592f, -99.50992f};
			*(uParam0.f_146.f_82[6 /*102*/]) = {263.6821f, -996.9714f, -100.0087f};
			*(uParam0.f_146.f_82[6 /*102*/]).f_3 = 90.1681f;
			*(uParam0.f_146.f_82[6 /*102*/].f_7) = {264.2415f, -994.803f, -99.071f};
			*(uParam0.f_146.f_82[6 /*102*/].f_10) = {0f, 0f, -2.52f};
			*(uParam0.f_146.f_82[6 /*102*/].f_22) = {265.4949f, -994.6922f, -98.7894f};
			*(uParam0.f_146.f_82[6 /*102*/].f_25) = {2.6773f, 0f, 115.8733f};
			*(uParam0.f_146.f_82[6 /*102*/].f_7) = {264.2415f, -994.803f, -99.071f};
			*(uParam0.f_146.f_82[6 /*102*/].f_10) = {0f, 0f, -2.52f};
			*uParam0.f_146.f_1517.f_8 = {265.4131f, -1002.989f, -99.9457f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, 180f};
			*uParam0.f_146.f_1517 = {265.425f, -1000.753f, -100.0086f};
			*uParam0.f_146.f_1517.f_3 = 178.66f;
			*uParam0.f_146.f_1517.f_4 = {265.1576f, -1002.991f, -100.0086f};
			*uParam0.f_146.f_1517.f_7 = 0.8739f;
			*uParam0.f_146.f_1517.f_14 = {264.8582f, -999.4998f, -100.0086f};
			*uParam0.f_146.f_1517.f_17 = -132.94f;
			*uParam0.f_146.f_1517.f_18 = {265.8691f, -1000.377f, -100.0086f};
			*uParam0.f_146.f_1517.f_21 = 51.24f;
			*uParam0.f_146.f_1553 = {265.13f, -1002.489f, -98.816f};
			*uParam0.f_146.f_1556 = {90f, 0f, 0f};
			*uParam0.f_146.f_1559 = {260.9818f, -999.0168f, -100.0086f};
			break;
	}
}

void func_4(int iParam0, auto uParam1, auto uParam2, int iParam3)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_18(iParam0, 40, &Var0, -1);
			*uParam1 = {Var0};
			if (iParam0 == 1)
			{
				*uParam1.f_2 = 200.4294f;
			}
			else if (iParam0 == 2)
			{
				*uParam1.f_2 = 169.6122f;
			}
			else if (iParam0 == 3)
			{
				*uParam1.f_2 = 216.0662f;
			}
			else if (iParam0 == 4)
			{
				*uParam1.f_2 = 152.8101f;
			}
			else if (iParam0 == 5)
			{
				*uParam1.f_2 = 70.0399f;
			}
			else if (iParam0 == 6)
			{
				*uParam1.f_2 = 85.3194f;
			}
			else if (iParam0 == 7)
			{
				*uParam1.f_2 = 62.3652f;
			}
			else if (iParam0 == 34)
			{
				*uParam1.f_2 = 49.7375f;
			}
			else if (iParam0 == 35)
			{
				*uParam1.f_2 = 119.343f;
			}
			else if (iParam0 == 36)
			{
				*uParam1.f_2 = 114.4156f;
			}
			else if (iParam0 == 37)
			{
				*uParam1.f_2 = 88.2696f;
			}
			else if (iParam0 == 38)
			{
				*uParam1.f_2 = 82.9234f;
			}
			else if (iParam0 == 39)
			{
				*uParam1.f_2 = 93.0414f;
			}
			else if (iParam0 == 40)
			{
				*uParam1.f_2 = 78.289f;
			}
			else if (iParam0 == 41)
			{
				*uParam1.f_2 = 102.2488f;
			}
			else if (iParam0 == 42)
			{
				*uParam1.f_2 = 100.8356f;
			}
			else if (iParam0 == 43)
			{
				*uParam1.f_2 = 86.4347f;
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*uParam1 = {350.7414f, -993.6222f, -100.202f};
			*uParam2 = 179.6123f;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*uParam1 = {259.8177f, -1003.794f, -100.0086f};
			*uParam2 = 307.1585f;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_18(iParam0, 40, &Var0, 61);
			*uParam1 = {Var0};
			if (iParam0 == 61)
			{
			}
			else if (iParam0 == 62)
			{
			}
			else if (iParam0 == 63)
			{
			}
			else if (iParam0 == 64)
			{
			}
			else if (iParam0 == 65)
			{
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_18(iParam0, 40, &Var0, 73);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_18(iParam0, 40, &Var0, 77);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 83:
		case 84:
		case 85:
			func_18(iParam0, 40, &Var0, 83);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 86:
			func_5(iParam3, 40, &Var0, 0);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_18(iParam0, 40, &Var0, 88);
			*uParam1 = {Var0};
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

void func_5(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	struct<6>[] Var0 = new struct<6>[2];
	Vector3 vVar13;
	
	if (!iParam3)
	{
		Var0[0 /*6*/] = {func_13(-1)};
	}
	else
	{
		Var0[0 /*6*/] = {Global_4005550[iParam0 /*45*/].f_4};
		Var0[0 /*6*/].f_3 = {0f, 0f, Global_4005550[iParam0 /*45*/].f_7};
	}
	if (!iParam3)
	{
		Var0[1 /*6*/] = {func_13(iParam0)};
	}
	else
	{
		Var0[1 /*6*/] = {Global_4005550[iParam0 /*45*/].f_4};
		Var0[1 /*6*/].f_3 = {0f, 0f, Global_4005550[iParam0 /*45*/].f_7};
	}
	*uParam2 = {func_7(iParam1, 86)};
	vVar13 = {*uParam2 - Var0[0 /*6*/]};
	vVar13 = {func_6(vVar13, -Var0[0 /*6*/].f_3.f_2)};
	vVar13 = {func_6(vVar13, Var0[1 /*6*/].f_3.f_2)};
	*uParam2 = {_get_object_offset_from_coords(Var0[1 /*6*/], 0f, vVar13)};
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
}

Vector3 func_6(Vector3 vParam0, Vector3 fParam1)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = vParam0.x * fVar4 - vParam0.y * fVar3;
	vVar0.y = vParam0.x * fVar3 + vParam0.y * fVar4;
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_7(int iParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	struct<6> Var7;
	
	switch (iParam1)
	{
		case -1:
		case 1:
		case 61:
			return func_12(iParam0, iParam1);
			break;
		
		case 73:
		case 77:
			return func_11(iParam0, iParam1);
			break;
		
		case 83:
			return func_10(iParam0, iParam1);
			break;
		
		case 86:
			return func_9(iParam0, iParam1);
			break;
		
		case 88:
			return func_8(iParam0, iParam1);
			break;
	}
	iVar6 = iParam1 == 61;
	_0xB335F761606DB47C(&vVar0, &vVar3, iParam0, iVar6);
	Var7 = {vVar0};
	Var7.f_3 = {vVar3};
	return Var7;
}

struct<6> func_8(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 88:
			switch (iParam0)
			{
				case 278:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 279:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 280:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 281:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 282:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 283:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 0:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-1391.014f, -476.7234f, 70.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-1398.001f, -477.7338f, 74.10992f};
					Var0.f_3 = {0f, 0f, 6.4421f};
					break;
				
				case 3:
					Var0 = {-1383.954f, -476.7112f, 73.57f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-1386.187f, -477.2281f, 70.79214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-1367.155f, -474.5449f, 74.6421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-1401.071f, -480.6923f, 70.79214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-1385.056f, -478.5239f, 74.6421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-1386.264f, -478.5925f, 71.0421f};
					Var0.f_3 = {0f, 0f, 278.0621f};
					break;
				
				case 169:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 201:
					Var0 = {-1389.674f, -477.9422f, 72.6524f};
					Var0.f_3 = {-2.3097f, 0f, 128.6406f};
					break;
				
				case 14:
					Var0 = {-1373.873f, -476.794f, 72.457f};
					Var0.f_3 = {0f, 0f, 98f};
					break;
				
				case 557:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 558:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 559:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-1380.402f, -478.5354f, 71.9893f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-1374.076f, -467.7501f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 227.614f;
					break;
				
				case 10:
					Var0 = {-1371.95f, -480.9255f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 289.1039f;
					break;
				
				case 11:
					Var0 = {-1369.476f, -487.2183f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 285.5383f;
					break;
				
				case 12:
					Var0 = {-1382.257f, -480.487f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 308.8578f;
					break;
				
				case 13:
					Var0 = {-1380.136f, -470.4213f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 9.8797f;
					break;
				
				case 16:
					Var0 = {-1369.507f, -476.9786f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-1369.393f, -477.3502f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-1369.491f, -476.5785f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-1369.618f, -476.2482f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-1369.637f, -475.7314f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-1369.491f, -476.5785f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-1369.702f, -475.2167f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-1369.637f, -475.7314f, 71.05289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-1369.757f, -474.8527f, 72.55289f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-1368.181f, -476.5546f, 72.5085f};
					Var0.f_3 = {-0.3097f, 0f, 92.7977f};
					break;
				
				case 35:
					Var0 = {-1372.001f, -476.5192f, 72.7309f};
					Var0.f_3 = {3.9233f, 0f, 98.3755f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 560:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-1386.944f, -478.496f, 71.7512f};
					Var0.f_3 = {5.1825f, 0.5013f, -84.0825f};
					break;
				
				case 39:
					Var0 = {-1385.975f, -478.4063f, 71.9382f};
					Var0.f_3 = {5.1825f, 0.5013f, -84.1376f};
					break;
				
				case 767:
					Var0 = {-1381.953f, -478.9279f, 72.2409f};
					Var0.f_3 = {-1.9217f, 0.535f, -54.7591f};
					break;
				
				case 768:
					Var0 = {-1381.828f, -478.5973f, 72.2329f};
					Var0.f_3 = {-1.9217f, 0.535f, -61.4327f};
					break;
				
				case 872:
					Var0 = {-1381.967f, -478.0454f, 72.1758f};
					Var0.f_3 = {4.3412f, 0.0669f, -78.3888f};
					break;
				
				case 873:
					Var0 = {-1382.475f, -478.1498f, 72.1364f};
					Var0.f_3 = {4.3412f, 0.0669f, -78.3888f};
					break;
				
				case 765:
					Var0 = {-1375.141f, -465.8974f, 72.3304f};
					Var0.f_3 = {-2.5795f, 0.7965f, 161.0134f};
					break;
				
				case 766:
					Var0 = {-1374.248f, -467.3159f, 72.3885f};
					Var0.f_3 = {-3.1244f, 0.7965f, -167.5461f};
					break;
				
				case 120:
					Var0 = {-1371.305f, -486.9218f, 72.5809f};
					Var0.f_3 = {-13.7347f, 0.4385f, -35.5008f};
					break;
				
				case 121:
					Var0 = {-1371.435f, -486.9694f, 72.6092f};
					Var0.f_3 = {-13.7347f, 0.4385f, -35.8794f};
					break;
				
				case 759:
					Var0 = {-1371.715f, -467.7556f, 72.5438f};
					Var0.f_3 = {-10.7018f, 0.0514f, 11.934f};
					break;
				
				case 760:
					Var0 = {-1371.848f, -467.295f, 72.8527f};
					Var0.f_3 = {-8.4597f, 0.0514f, 11.275f};
					break;
				
				case 874:
					Var0 = {-1371.98f, -467.0934f, 72.6878f};
					Var0.f_3 = {-10.9607f, 0.0409f, 28.715f};
					break;
				
				case 875:
					Var0 = {-1372.057f, -466.9533f, 72.7673f};
					Var0.f_3 = {-10.1999f, 0.0409f, 28.715f};
					break;
				
				case 876:
					Var0 = {-1371.523f, -466.3904f, 72.533f};
					Var0.f_3 = {-8.4142f, 0.0409f, -3.37f};
					break;
				
				case 877:
					Var0 = {-1371.411f, -466.139f, 72.4949f};
					Var0.f_3 = {-6.5039f, 0.0409f, -2.6958f};
					break;
				
				case 761:
					Var0 = {-1378.041f, -470.9332f, 72.5258f};
					Var0.f_3 = {-1.2251f, 0.3877f, 5.3465f};
					break;
				
				case 762:
					Var0 = {-1377.583f, -469.6385f, 72.4225f};
					Var0.f_3 = {-1.065f, 0.3877f, 8.569f};
					break;
				
				case 870:
					Var0 = {-1378.027f, -467.2617f, 72.5326f};
					Var0.f_3 = {-4.8769f, 0.3877f, 48.9157f};
					break;
				
				case 871:
					Var0 = {-1378.312f, -466.5706f, 72.3701f};
					Var0.f_3 = {-7.0403f, 0.3877f, 51.3359f};
					break;
				
				case 763:
					Var0 = {-1372.144f, -462.4252f, 72.5529f};
					Var0.f_3 = {-6.9621f, 0f, -173.3613f};
					break;
				
				case 764:
					Var0 = {-1374.89f, -462.9107f, 72.4553f};
					Var0.f_3 = {-5.9688f, 0f, -143.2814f};
					break;
				
				case 881:
					Var0 = {-1392.938f, -479.831f, 71.042f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 882:
					Var0 = {-1391.958f, -479.9294f, 71.0422f};
					Var0.f_3 = {0f, 0f, 22.34f};
					break;
				
				case 883:
					Var0 = {-1391.285f, -479.2309f, 71.0422f};
					Var0.f_3 = {0f, 0f, 52.14f};
					break;
				
				case 884:
					Var0 = {-1394.986f, -479.2755f, 72.251f};
					Var0.f_3 = {0.6344f, 0.0182f, -49.3494f};
					break;
				
				case 885:
					Var0 = {-1392.95f, -478.1647f, 71.1922f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 886:
					Var0 = {-1393.623f, -475.4102f, 71.1949f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 888:
					Var0 = {-1392.058f, -478.5261f, 71.0422f};
					Var0.f_3 = {0f, 0f, 167.25f};
					break;
				
				case 889:
					Var0 = {-1393.005f, -478.564f, 71.0422f};
					Var0.f_3 = {0f, 0f, -171.18f};
					break;
				
				case 890:
					Var0 = {-1393.877f, -478.9391f, 71.0422f};
					Var0.f_3 = {0f, 0f, -131.95f};
					break;
				
				case 891:
					Var0 = {-1390.469f, -479.7867f, 72.1899f};
					Var0.f_3 = {3.3931f, 0.0137f, 121.5152f};
					break;
				
				case 892:
					Var0 = {-1392.549f, -481.0493f, 71.2005f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 893:
					Var0 = {-1391.323f, -483.4211f, 71.162f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 125:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 40:
					Var0 = {-1379.844f, -470.5661f, 71.0421f};
					Var0.f_3 = {0f, 0f, 15.031f};
					break;
				
				case 41:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 126:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 127:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 42:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 46:
					Var0 = {-1381.782f, -466.131f, 72.081f};
					Var0.f_3 = {0f, 0f, -43.56f};
					break;
				
				case 47:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, -172.8f};
					break;
				
				case 48:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 49:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-1381.782f, -466.131f, 72.081f};
					Var0.f_3 = {0f, 0f, -43.56f};
					break;
				
				case 615:
					Var0 = {-1382.044f, -465.412f, 71.04213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-1379.822f, -465.0819f, 72.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-1386.124f, -471.4142f, 72.2421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 57:
					Var0 = {-1385.42f, -470.797f, 71.203f};
					Var0.f_3 = {0f, 0f, -82.16f};
					break;
				
				case 64:
					Var0 = {-1385.72f, -471.56f, 73.37f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-1385.42f, -470.797f, 72.3f};
					Var0.f_3 = {0f, 0f, -82.16f};
					break;
				
				case 58:
					Var0 = {-1384.641f, -471.3463f, 72.9289f};
					Var0.f_3 = {-0.7841f, 0f, 77.4962f};
					break;
				
				case 59:
					Var0 = {-1384.366f, -471.2928f, 72.845f};
					Var0.f_3 = {-7.3248f, 0f, 118.1501f};
					break;
				
				case 60:
					Var0 = {-1384.316f, -471.2809f, 73.1692f};
					Var0.f_3 = {-20.2395f, -0.0003f, 102.8101f};
					break;
				
				case 61:
					Var0 = {-1384.568f, -471.3008f, 73.2522f};
					Var0.f_3 = {-15.012f, 0.0423f, 105.2809f};
					break;
				
				case 62:
					Var0 = {-1385.197f, -470.0034f, 73.7174f};
					Var0.f_3 = {-52.8011f, -0.0058f, 91.9435f};
					break;
				
				case 63:
					Var0 = {-1384.927f, -470.5415f, 72.8936f};
					Var0.f_3 = {-20.0458f, 0f, 53.9154f};
					break;
				
				case 66:
					Var0 = {-1386.093f, -471.48f, 71.1422f};
					break;
				
				case 67:
					Var0 = {-1384.294f, -471.2281f, 73.54627f};
					break;
				
				case 110:
					Var0 = {-1385.937f, -470.1181f, 70.9901f};
					Var0.f_3 = {0f, 0f, 258.2184f};
					break;
				
				case 68:
					Var0 = {-1384.366f, -469.3365f, 72.2902f};
					break;
				
				case 109:
					Var0 = {-1384.366f, -469.3365f, 72.2902f};
					break;
				
				case 69:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 70:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 71:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 75:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 76:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 89:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 91:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 90:
					Var0 = {-1379.25f, -488.464f, 71.049f};
					Var0.f_3 = {0f, 0f, 13.32f};
					break;
				
				case 92:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 135:
					Var0 = {-1378.361f, -488.3603f, 71.0421f};
					break;
				
				case 136:
					Var0 = {-1379.683f, -488.5495f, 72.7921f};
					break;
				
				case 77:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 79:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 80:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 81:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 82:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 78:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 83:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 85:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 88:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 84:
					Var0 = {-1368.3f, -480.492f, 71.042f};
					Var0.f_3 = {0f, 0f, -177.84f};
					break;
				
				case 86:
					Var0 = {-1367.615f, -480.0959f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-1368.761f, -480.2637f, 72.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-1398.157f, -479.3889f, 72.1924f};
					Var0.f_3 = {0f, 0f, 97f};
					break;
				
				case 94:
					Var0 = {-1397.917f, -479.589f, 72.192f};
					Var0.f_3 = {0f, 0f, 98f};
					break;
				
				case 95:
					Var0 = {-1383.879f, -477.9557f, 71.0422f};
					Var0.f_3 = {0f, 0f, 95.66f};
					break;
				
				case 96:
					Var0 = {-1398.447f, -480.4256f, 72.105f};
					Var0.f_3 = {0f, 0f, -80.26f};
					break;
				
				case 97:
					Var0 = {-1392.006f, -479.5026f, 72.105f};
					Var0.f_3 = {0f, 0f, 144.06f};
					break;
				
				case 98:
					Var0 = {-1396.753f, -480.6128f, 72.105f};
					Var0.f_3 = {0f, 0f, -31.76f};
					break;
				
				case 99:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 100:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 101:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 107:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 108:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 122:
					Var0 = {-1390.29f, -479.0549f, 71.0421f};
					Var0.f_3 = {0f, 0f, 277.8842f};
					break;
				
				case 123:
					Var0 = {-1383.99f, -477.7994f, 71.0421f};
					Var0.f_3 = {0f, 0f, 285.7773f};
					break;
				
				case 124:
					Var0 = {-1371.485f, -472.5331f, 71.0421f};
					Var0.f_3 = {0f, 0f, 247.7497f};
					break;
				
				case 137:
					Var0 = {-1371.795f, -470.0197f, 71.0421f};
					break;
				
				case 202:
					Var0 = {-1389.332f, -479.0194f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 203:
					Var0 = {-1389.008f, -480.0021f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 303.181f;
					break;
				
				case 204:
					Var0 = {-1389.814f, -479.6433f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 205:
					Var0 = {-1390.755f, -478.6367f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 273.1809f;
					break;
				
				case 206:
					Var0 = {-1390.449f, -479.4955f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 207:
					Var0 = {-1390.09f, -478.5259f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 208:
					Var0 = {-1390.938f, -479.7606f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 209:
					Var0 = {-1389.573f, -477.7128f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 249.181f;
					break;
				
				case 210:
					Var0 = {-1386.425f, -477.8782f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 211:
					Var0 = {-1386.284f, -479.1848f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.1809f;
					break;
				
				case 212:
					Var0 = {-1389.597f, -480.8671f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 305.1809f;
					break;
				
				case 213:
					Var0 = {-1391.379f, -478.654f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 214:
					Var0 = {-1388.966f, -478.3716f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 215:
					Var0 = {-1388.649f, -479.3325f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.181f;
					break;
				
				case 216:
					Var0 = {-1391.445f, -479.7018f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 278.1809f;
					break;
				
				case 217:
					Var0 = {-1390.214f, -477.4063f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 253.181f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 436:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 437:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 470:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 477:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 445:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 446:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 447:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 448:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 449:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 450:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 471:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 472:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 478:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 479:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 504:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 505:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 506:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 507:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 508:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 509:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 510:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 511:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 512:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 513:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 514:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 515:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 528:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 529:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 530:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 531:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 532:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 533:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 534:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 535:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 536:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 537:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 538:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 539:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 540:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 541:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 542:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 547:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 548:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 549:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 237:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 238:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 239:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 240:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 241:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 242:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 243:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 244:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 245:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 246:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 247:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 248:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 249:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 250:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 251:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 252:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 253:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 254:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 255:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 256:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 257:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 258:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 259:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 260:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 307:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 331:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 332:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 333:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 334:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 298:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 299:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 311:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 431:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 133:
					Var0 = {-1375.394f, -467.9827f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-1375.542f, -467.0287f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-1375.271f, -467.526f, 71.042f};
					Var0.f_3 = {0f, 0f, -92.16f};
					break;
				
				case 433:
					Var0 = {-1375.906f, -469.4503f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 434:
					Var0 = {-1374.99f, -468.8127f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 432:
					Var0 = {-1375.309f, -469.039f, 71.042f};
					Var0.f_3 = {0f, 0f, -149.4f};
					break;
				
				case 102:
					Var0 = {-1375.297f, -466.8609f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-1375.448f, -465.9375f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-1375.943f, -467.129f, 72.067f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 501:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 502:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 500:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {-1372.745f, -476.2592f, 73.9259f};
					Var0.f_3 = {-17.5489f, 0f, -82.352f};
					break;
				
				case 169:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 629:
					Var0 = {-1379.512f, -477.629f, 71.649f};
					Var0.f_3 = {0f, 0f, -82f};
					break;
				
				case 630:
					Var0 = {-1375.371f, -462.5318f, 71.04215f};
					Var0.f_3 = {1f, 0f, 1f};
					break;
				
				case 631:
					Var0 = {-1370.158f, -462.2543f, 71.04214f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 714:
					Var0 = {-1371.393f, -461.2212f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 633:
					Var0 = {-1391.066f, -480.86f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 634:
					Var0 = {-1391.796f, -480.9668f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 635:
					Var0 = {-1394.002f, -481.286f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 636:
					Var0 = {-1393.282f, -481.1756f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 637:
					Var0 = {-1394.44f, -478.038f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 638:
					Var0 = {-1393.74f, -477.938f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 639:
					Var0 = {-1391.554f, -477.6193f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 640:
					Var0 = {-1392.254f, -477.7293f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 643:
					Var0 = {-1393.645f, -479.5984f, 72.2997f};
					Var0.f_3 = {23.1365f, 0.0223f, -16.3365f};
					break;
				
				case 644:
					Var0 = {-1393.645f, -479.5984f, 72.2997f};
					Var0.f_3 = {3.6162f, 0.0223f, -16.3365f};
					break;
				
				case 641:
					Var0 = {-1391.824f, -479.9584f, 72.3454f};
					Var0.f_3 = {34.4208f, 0f, 154.6562f};
					break;
				
				case 642:
					Var0 = {-1391.824f, -479.9584f, 72.3454f};
					Var0.f_3 = {-2.2683f, 0f, 154.6562f};
					break;
				
				case 646:
					Var0 = {-1393.123f, -477.881f, 71.04f};
					Var0.f_3 = {0f, 0f, -140.4f};
					break;
				
				case 645:
					Var0 = {-1392.415f, -481.031f, 71.04f};
					Var0.f_3 = {0f, 0f, 40f};
					break;
				
				case 648:
					Var0 = {-1392.685f, -480.3315f, 71.0422f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 649:
					Var0 = {-1392.392f, -482.4386f, 71.0421f};
					Var0.f_3 = {0f, 0f, 5.3172f};
					break;
				
				case 650:
					Var0 = {-1392.644f, -479.376f, 71.0421f};
					Var0.f_3 = {0f, 0f, 7.1773f};
					break;
				
				case 651:
					Var0 = {-1382.967f, -480.9828f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 652:
					Var0 = {-1382.788f, -482.5349f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 653:
					Var0 = {-1383.662f, -485.6873f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 654:
					Var0 = {1384.186f, -486.728f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 655:
					Var0 = {-1383.403f, -487.5066f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 656:
					Var0 = {-1382.708f, -488.3592f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 657:
					Var0 = {-1381.329f, -488.1656f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 658:
					Var0 = {-1371.906f, -478.3103f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 659:
					Var0 = {-1372.407f, -474.9426f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 660:
					break;
				
				case 661:
					break;
				
				case 662:
					break;
				
				case 663:
					Var0 = {-1371.851f, -466.166f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 664:
					Var0 = {-1372.581f, -466.2719f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 665:
					Var0 = {-1377.777f, -464.8911f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 672:
					Var0 = {-1390.344f, -481.4404f, 70.79213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 673:
					Var0 = {-1397.326f, -482.5123f, 74.08271f};
					Var0.f_3 = {0f, 0f, 194.5057f};
					break;
				
				case 666:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 667:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 8.11f};
					break;
				
				case 668:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 669:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 670:
					Var0 = {-1372.022f, -463.9919f, 74.1304f};
					Var0.f_3 = {-40.8924f, 0.0193f, -23.9982f};
					break;
				
				case 671:
					Var0 = {-1370.7f, -463.5f, 72f};
					Var0.f_3 = {-35.87f, 0f, 8.02f};
					break;
				
				case 674:
					Var0 = {-1375.277f, -462.3159f, 72.0926f};
					Var0.f_3 = {0f, 0.0102f, 87.88f};
					break;
				
				case 675:
					Var0 = {-1372.02f, -463.9937f, 74.1322f};
					Var0.f_3 = {-35.4306f, 0f, 57.5758f};
					break;
				
				case 676:
					Var0 = {-1374.308f, -462.7904f, 71.0514f};
					Var0.f_3 = {0f, 0f, 26.5462f};
					break;
				
				case 677:
					Var0 = {-1370.489f, -461.6438f, 72.0926f};
					Var0.f_3 = {0f, 0f, 98.86f};
					break;
				
				case 678:
					Var0 = {-1368.419f, -485.913f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 679:
					Var0 = {-1368.686f, -483.781f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 680:
					Var0 = {-1369.891f, -483.951f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 681:
					Var0 = {-1371.052f, -484.114f, 71.638f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 682:
					Var0 = {-1370.785f, -486.245f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 683:
					Var0 = {-1369.597f, -486.079f, 71.638f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 684:
					Var0 = {-1372.187f, -463.935f, 71.662f};
					Var0.f_3 = {0f, 0f, -37f};
					break;
				
				case 685:
					Var0 = {-1367.419f, -484.652f, 71.638f};
					Var0.f_3 = {0f, 0f, -82f};
					break;
				
				case 689:
					Var0 = {-1373.629f, -478.7528f, 71.06213f};
					Var0.f_3 = {0.75f, 0f, 0f};
					break;
				
				case 690:
					Var0 = {-1374.166f, -474.9032f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 691:
					Var0 = {-1372.819f, -476.6167f, 71.0529f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 692:
					Var0 = {-1375.222f, -466.2753f, 71.0621f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 693:
					Var0 = {-1375.789f, -462.2126f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 694:
					Var0 = {-1374.244f, -465.2611f, 71.049f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 695:
					Var0 = {-1380.604f, -476.8068f, 71.14214f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 696:
					Var0 = {-1380.937f, -475.1835f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 697:
					Var0 = {-1384.38f, -478.0885f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 698:
					Var0 = {-1384.355f, -476.2908f, 71.05213f};
					Var0.f_3 = {0.75f, 0f, 0f};
					break;
				
				case 699:
					Var0 = {-1384.825f, -473.0208f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 700:
					Var0 = {-1383.51f, -474.9492f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 701:
					Var0 = {-1368.4f, -472.6109f, 71.04213f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 702:
					Var0 = {-1368.804f, -469.5392f, 73.29213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 703:
					Var0 = {-1369.993f, -471.4322f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 704:
					Var0 = {-1378.779f, -474.3721f, 71.05211f};
					Var0.f_3 = {0.5f, 0f, 0f};
					break;
				
				case 705:
					Var0 = {-1377.923f, -480.5733f, 73.54211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 706:
					Var0 = {-1379.317f, -475.9338f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 707:
					Var0 = {-1386.979f, -476.6814f, 71.04211f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 708:
					Var0 = {-1386.429f, -480.5289f, 73.79211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 709:
					Var0 = {-1385.6f, -478.2664f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 710:
					Var0 = {-1369.435f, -461.8229f, 71.04211f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 711:
					Var0 = {-1376.22f, -462.8445f, 73.29211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 712:
					Var0 = {-1373.835f, -463.8867f, 71.0621f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 713:
					Var0 = {-1371.157f, -479.4782f, 71.04215f};
					Var0.f_3 = {3.25f, 0f, 0f};
					break;
				
				case 632:
					Var0 = {-1372.074f, -473.3848f, 73.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 715:
					Var0 = {-1370.833f, -461.1512f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 716:
					Var0 = {-1371.393f, -461.2212f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 717:
					Var0 = {-1370.833f, -461.1512f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 718:
					Var0 = {-1371.383f, -461.4812f, 71.3765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 719:
					Var0 = {-1370.803f, -461.4112f, 71.3865f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 720:
					Var0 = {-1371.383f, -461.4812f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 721:
					Var0 = {-1370.803f, -461.4112f, 71.6065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 722:
					Var0 = {-1371.393f, -461.2112f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 723:
					Var0 = {-1370.853f, -461.1512f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 724:
					Var0 = {-1371.393f, -461.2112f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 725:
					Var0 = {-1370.853f, -461.1512f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 726:
					Var0 = {-1371.373f, -461.4712f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 727:
					Var0 = {-1370.813f, -461.3912f, 71.9765f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 728:
					Var0 = {-1371.373f, -461.4712f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 729:
					Var0 = {-1370.813f, -461.3912f, 72.2065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 730:
					Var0 = {-1371.393f, -461.2212f, 72.5065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 731:
					Var0 = {-1370.853f, -461.1512f, 72.5065f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 732:
					Var0 = {-1371.393f, -461.2212f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 733:
					Var0 = {-1370.853f, -461.1512f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 734:
					Var0 = {-1371.373f, -461.4612f, 72.4965f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 735:
					Var0 = {-1370.813f, -461.3912f, 72.4965f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 736:
					Var0 = {-1371.373f, -461.4612f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 737:
					Var0 = {-1370.813f, -461.3912f, 72.7365f};
					Var0.f_3 = {0f, 0f, 7f};
					break;
				
				case 738:
					Var0 = {-1373.116f, -488.2086f, 71.04217f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 739:
					Var0 = {-1365.72f, -487.1443f, 73.79217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 740:
					Var0 = {-1372.851f, -485.1789f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 741:
					Var0 = {-1367.549f, -482.0912f, 71.05217f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 742:
					Var0 = {-1366.609f, -481.9662f, 73.79217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 743:
					Var0 = {-1368.201f, -482.1139f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 744:
					Var0 = {-1380.242f, -486.2507f, 71.04211f};
					Var0.f_3 = {5.5f, 0f, 0f};
					break;
				
				case 745:
					Var0 = {-1384.697f, -486.9442f, 73.29217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 746:
					Var0 = {-1379.289f, -486.2473f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 747:
					Var0 = {-1374.37f, -461.766f, 72.241f};
					Var0.f_3 = {-90f, 0f, 35.5f};
					break;
				
				case 748:
					Var0 = {-1374.638f, -461.769f, 72.246f};
					Var0.f_3 = {-90f, 0f, 35.5f};
					break;
				
				case 749:
					Var0 = {-1374.81f, -461.8721f, 71.645f};
					Var0.f_3 = {-2.5f, -66.5f, 91.3f};
					break;
				
				case 750:
					Var0 = {-1374.922f, -461.908f, 71.645f};
					Var0.f_3 = {-2.75f, -66.5f, 91.3f};
					break;
				
				case 751:
					Var0 = {-1383.28f, -472.7275f, 73.44767f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 752:
					Var0 = {-1376.303f, -470.6783f, 73.4041f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 753:
					Var0 = {-1381.757f, -472.5135f, 70.95429f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 754:
					Var0 = {-1376.52f, -469.1397f, 70.98588f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 755:
					Var0 = {-1376.395f, -470.5647f, 72.1921f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 756:
					Var0 = {-1383.19f, -472.639f, 72.1921f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 757:
					Var0 = {-1375.052f, -461.8455f, 72.261f};
					Var0.f_3 = {0f, 0f, 10.1f};
					break;
				
				case 758:
					Var0 = {-1375.242f, -461.8469f, 72.29f};
					Var0.f_3 = {0f, 0f, 41.4f};
					break;
				
				case 769:
					Var0 = {-1392.573f, -480.1384f, 71.0421f};
					Var0.f_3 = {0f, 0f, 276.5135f};
					break;
				
				case 770:
					Var0 = {-1393.545f, -478.9945f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.3589f};
					break;
				
				case 771:
					Var0 = {-1396.718f, -479.3686f, 71.0421f};
					Var0.f_3 = {0f, 0f, 276.951f};
					break;
				
				case 772:
					Var0 = {-1395.378f, -480.6437f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.0696f};
					break;
				
				case 773:
					Var0 = {-1392.69f, -479.6239f, 72.5297f};
					Var0.f_3 = {14.0402f, 0f, 7.4741f};
					break;
				
				case 774:
					Var0 = {-1378.496f, -481.8039f, 72.0891f};
					Var0.f_3 = {0.8273f, 0f, -82.807f};
					break;
				
				case 775:
					Var0 = {-1380.646f, -481.2209f, 71.0421f};
					Var0.f_3 = {0f, 0f, 273.8102f};
					break;
				
				case 776:
					Var0 = {-1380.025f, -482.464f, 71.0421f};
					Var0.f_3 = {0f, 0f, 274.1362f};
					break;
				
				case 777:
					Var0 = {-1379.174f, -481.1526f, 71.0421f};
					Var0.f_3 = {0f, 0f, 273.546f};
					break;
				
				case 778:
					Var0 = {-1378.641f, -482.5946f, 71.0421f};
					Var0.f_3 = {0f, 0f, 272.5229f};
					break;
			}
			switch (iParam0)
			{
				case 779:
					Var0 = {-1370.4f, -479.8142f, 71.0421f};
					Var0.f_3 = {0f, 0f, 283.0016f};
					break;
				
				case 780:
					Var0 = {-1370.507f, -480.7826f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.4162f};
					break;
				
				case 781:
					Var0 = {-1370.4f, -479.8142f, 71.0421f};
					Var0.f_3 = {0f, 0f, 283.0016f};
					break;
				
				case 782:
					Var0 = {-1370.507f, -480.7826f, 71.0421f};
					Var0.f_3 = {0f, 0f, 281.4162f};
					break;
				
				case 783:
					Var0 = {-1372.42f, -477.419f, 72.043f};
					Var0.f_3 = {0f, 0f, -129.25f};
					break;
				
				case 784:
					Var0 = {-1371.118f, -478.731f, 72.043f};
					Var0.f_3 = {0f, 0f, -27.25f};
					break;
				
				case 785:
					Var0 = {-1373.091f, -476.2664f, 72.0529f};
					Var0.f_3 = {0f, 0f, 311.3689f};
					break;
				
				case 786:
					Var0 = {-1371.497f, -473.9364f, 72.0529f};
					Var0.f_3 = {0f, 0f, 151.6133f};
					break;
				
				case 787:
					Var0 = {-1372.355f, -478.725f, 71.561f};
					Var0.f_3 = {0f, 0f, -37.5f};
					break;
				
				case 788:
					Var0 = {-1372.859f, -474.543f, 71.561f};
					Var0.f_3 = {0f, 0f, -133.5f};
					break;
				
				case 789:
					Var0 = {-1372.758f, -477.7887f, 72.0529f};
					Var0.f_3 = {0f, 0f, 302.8123f};
					break;
				
				case 790:
					Var0 = {-1371.446f, -478.7147f, 72.0529f};
					Var0.f_3 = {0f, 0f, 332.7965f};
					break;
				
				case 791:
					Var0 = {-1371.96f, -474.174f, 72.0529f};
					Var0.f_3 = {0f, 0f, 205.0822f};
					break;
				
				case 792:
					Var0 = {-1373.104f, -475.6295f, 72.0529f};
					Var0.f_3 = {0f, 0f, 246.6334f};
					break;
				
				case 793:
					Var0 = {-1372.537f, -477.7263f, 71.0529f};
					Var0.f_3 = {0f, 0f, 233.9974f};
					break;
				
				case 794:
					Var0 = {-1371.131f, -478.5096f, 71.0529f};
					Var0.f_3 = {0f, 0f, 60.3401f};
					break;
				
				case 795:
					Var0 = {-1371.84f, -474.4755f, 71.0529f};
					Var0.f_3 = {0f, 0f, 150.8988f};
					break;
				
				case 796:
					Var0 = {-1372.604f, -475.7714f, 71.0529f};
					Var0.f_3 = {0f, 0f, 320.6061f};
					break;
				
				case 797:
					Var0 = {-1371.508f, -477.4651f, 72.0529f};
					Var0.f_3 = {0f, 0f, 146.0641f};
					break;
				
				case 798:
					Var0 = {-1371.854f, -475.3757f, 72.0529f};
					Var0.f_3 = {0f, 0f, 47.8768f};
					break;
				
				case 799:
					Var0 = {-1371.889f, -478.1164f, 72.0529f};
					Var0.f_3 = {0f, 0f, 144.5707f};
					break;
				
				case 800:
					Var0 = {-1372.4f, -474.8434f, 72.0529f};
					Var0.f_3 = {0f, 0f, 51.6376f};
					break;
				
				case 802:
					Var0 = {-1372.38f, -478.752f, 71.573f};
					Var0.f_3 = {0f, 0f, -35.75f};
					break;
				
				case 801:
					Var0 = {-1388.033f, -478.7589f, 71.0421f};
					Var0.f_3 = {0f, 0f, 286.3443f};
					break;
				
				case 805:
					Var0 = {-1382.268f, -481.5285f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 803:
					Var0 = {-1383.237f, -483.2296f, 71.04217f};
					Var0.f_3 = {1.1f, 0f, 0f};
					break;
				
				case 804:
					Var0 = {-1383.649f, -480.2233f, 73.29217f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 808:
					Var0 = {-1368.617f, -479.5128f, 71.0621f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 806:
					Var0 = {-1370.561f, -474.6018f, 71.04213f};
					Var0.f_3 = {3.75f, 0f, 0f};
					break;
				
				case 807:
					Var0 = {-1370.13f, -477.8921f, 73.54213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 809:
					Var0 = {-1375.031f, -461.896f, 71.6313f};
					Var0.f_3 = {-1.8f, -66.5f, 93.9f};
					break;
				
				case 810:
					Var0 = {-1371.426f, -465.332f, 71.835f};
					Var0.f_3 = {0f, 0f, -141.25f};
					break;
				
				case 811:
					Var0 = {-1376.985f, -482.3501f, 71.0421f};
					Var0.f_3 = {0f, 0f, 80.6965f};
					break;
				
				case 812:
					Var0 = {-1376.912f, -480.9891f, 71.0421f};
					Var0.f_3 = {0f, 0f, 74.6858f};
					break;
				
				case 813:
					Var0 = {-1375.364f, -481.7466f, 71.0421f};
					Var0.f_3 = {0f, 0f, 92.578f};
					break;
				
				case 814:
					Var0 = {-1374.097f, -481.0571f, 71.0421f};
					Var0.f_3 = {0f, 0f, 98.0056f};
					break;
				
				case 815:
					Var0 = {-1386.889f, -477.0505f, 71.0421f};
					Var0.f_3 = {0f, 0f, 80f};
					break;
				
				case 816:
					Var0 = {-1374.043f, -462.3639f, 73.29215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 818:
					Var0 = {-1372.768f, -464.8512f, 71.04905f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 819:
					Var0 = {-1374.161f, -463.5122f, 72.79215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 820:
					Var0 = {-0.1372f, -463.9352f, 71.6622f};
					Var0.f_3 = {0f, 0f, 37f};
					break;
				
				case 821:
					Var0 = {-1372.619f, -464.239f, 71.432f};
					Var0.f_3 = {0f, 0f, -32.76f};
					break;
				
				case 817:
					Var0 = {-1371.571f, -462.438f, 73.54214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 647:
					Var0 = {-1393.194f, -477.075f, 71.042f};
					Var0.f_3 = {0f, 0f, -170f};
					break;
				
				case 822:
					Var0 = {-1392.657f, -476.4261f, 71.0421f};
					Var0.f_3 = {0f, 0f, 163.87f};
					break;
				
				case 823:
					Var0 = {-1392.09f, -476.787f, 71.042f};
					Var0.f_3 = {0f, 0f, 111.15f};
					break;
				
				case 824:
					Var0 = {-1393.702f, -476.1204f, 71.0421f};
					Var0.f_3 = {0f, 0f, -167.88f};
					break;
				
				case 825:
					Var0 = {-1393.058f, -477.8514f, 71.2513f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 826:
					Var0 = {-1380.28f, -474.1296f, 71.0421f};
					Var0.f_3 = {0f, 0f, 191.9762f};
					break;
				
				case 827:
					Var0 = {-1370.688f, -479.6639f, 72.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 828:
					Var0 = {-1371.642f, -472.7743f, 72.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 829:
					Var0 = {-1368.66f, -478.0478f, 72.0529f};
					Var0.f_3 = {0f, 0f, 101.807f};
					break;
				
				case 830:
					Var0 = {-1369.159f, -479.3572f, 72.0422f};
					Var0.f_3 = {0f, 0f, 19.6959f};
					break;
				
				case 831:
					Var0 = {-1369.618f, -476.4316f, 72.0529f};
					Var0.f_3 = {0f, 0f, 168.1197f};
					break;
				
				case 832:
					Var0 = {-1374.543f, -481.3387f, 72.0422f};
					Var0.f_3 = {0f, 0f, 277.0777f};
					break;
				
				case 833:
					Var0 = {-1369.872f, -475.1957f, 72.0529f};
					Var0.f_3 = {0f, 0f, 61.6439f};
					break;
				
				case 834:
					Var0 = {-1369.106f, -473.6916f, 72.0529f};
					Var0.f_3 = {0f, 0f, 70.5975f};
					break;
				
				case 835:
					Var0 = {-1368.954f, -471.6623f, 72.0422f};
					Var0.f_3 = {0f, 0f, 76.359f};
					break;
				
				case 836:
					Var0 = {-1370.482f, -470.7346f, 72.0422f};
					Var0.f_3 = {0f, 0f, 155.9964f};
					break;
				
				case 838:
					Var0 = {-1378.063f, -467.0028f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 839:
					Var0 = {-1377.933f, -467.785f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 837:
					Var0 = {-1377.825f, -467.389f, 71.05f};
					Var0.f_3 = {0f, 0f, 87.84f};
					break;
				
				case 842:
					Var0 = {-1372.015f, -468.9812f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 840:
					Var0 = {-1373.58f, -466.8963f, 71.04905f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 841:
					Var0 = {-1370.55f, -466.4406f, 73.54905f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 843:
					Var0 = {-1375.149f, -461.8709f, 71.63f};
					Var0.f_3 = {-1.8f, -66.5f, 93.9f};
					break;
				
				case 844:
					Var0 = {-1369.763f, -485.0164f, 72.1498f};
					Var0.f_3 = {-23.7676f, 0f, -80.7839f};
					break;
				
				case 845:
					Var0 = {-1380.299f, -481.8173f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 846:
					Var0 = {-1384.702f, -478.7025f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 847:
					Var0 = {-1380.176f, -480.645f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 848:
					Var0 = {-1384.398f, -478.1262f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 849:
					Var0 = {-1377.932f, -481.5936f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 850:
					Var0 = {-1384.41f, -479.2907f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 851:
					Var0 = {-1380.405f, -481.5397f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 852:
					Var0 = {-1383.782f, -478.5861f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 853:
					Var0 = {-1392.677f, -479.7237f, 72.4105f};
					Var0.f_3 = {0.7434f, 0f, 7.4741f};
					break;
				
				case 854:
					Var0 = {-1377.628f, -481.6943f, 72.1015f};
					Var0.f_3 = {0.8273f, 0f, -82.807f};
					break;
				
				case 855:
					Var0 = {-1382.699f, -479.8376f, 72.2729f};
					Var0.f_3 = {0.8044f, 0f, -111.6133f};
					break;
				
				case 856:
					Var0 = {-1383.487f, -479.5229f, 72.2603f};
					Var0.f_3 = {0.8044f, 0f, -111.6133f};
					break;
				
				case 686:
					Var0 = {-1378.393f, -484.121f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 687:
					Var0 = {-1376.883f, -483.909f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 688:
					Var0 = {-1375.373f, -483.697f, 71.643f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
			}
			switch (iParam0)
			{
				case 857:
					Var0 = {-1371.476f, -480.6698f, 31.04214f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 858:
					Var0 = {-1377.564f, -481.4189f, 73.72964f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 859:
					Var0 = {-1378.863f, -479.5141f, 71.0421f};
					Var0.f_3 = {0f, 0f, 156f};
					break;
				
				case 860:
					Var0 = {-1381.632f, -478.6535f, 71.0421f};
					Var0.f_3 = {0f, 0f, 190f};
					break;
				
				case 861:
					Var0 = {-1382.021f, -482.9339f, 71.0421f};
					Var0.f_3 = {0f, 0f, 324f};
					break;
				
				case 862:
					Var0 = {-1369.401f, -482.3335f, 71.0421f};
					Var0.f_3 = {0f, 0f, 44f};
					break;
				
				case 863:
					Var0 = {-1379.681f, -477.5754f, 71.6343f};
					Var0.f_3 = {0f, 0f, -78.12f};
					break;
				
				case 864:
					Var0 = {-1367.611f, -473.8776f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 865:
					Var0 = {-1369.875f, -474.216f, 72.55293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 866:
					Var0 = {-1366.966f, -477.8354f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 867:
					Var0 = {-1369.294f, -478.1736f, 72.55293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 899:
					Var0 = {-1367.721f, -477.4963f, 71.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 900:
					Var0 = {-1368.16f, -474.3671f, 72.54215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 868:
					Var0 = {-1392.101f, -478.448f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 869:
					Var0 = {-1388.971f, -478.1062f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 880:
					Var0 = {-1376.621f, -485.3536f, 71.0422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 878:
					Var0 = {-1374.779f, -483.3618f, 71.04215f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 879:
					Var0 = {-1379.531f, -484.1284f, 73.04215f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 887:
					Var0 = {-1369.734f, -484.9951f, 71.8463f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 894:
					Var0 = {-1385.207f, -478.4178f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 895:
					Var0 = {-1384.483f, -479.1004f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 896:
					Var0 = {-1385.59f, -479.3416f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 897:
					Var0 = {-1385.831f, -477.7351f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.7484f;
					break;
				
				case 898:
					Var0 = {-1384.825f, -477.4939f, 71.0421f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 279.748f;
					break;
				
				case 901:
					Var0 = {-1392.254f, -477.7293f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 902:
					Var0 = {-1393.74f, -477.938f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 903:
					Var0 = {-1395.517f, -478.1879f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 904:
					Var0 = {-1397.004f, -478.3966f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 905:
					Var0 = {-1391.796f, -480.9668f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 906:
					Var0 = {-1393.282f, -481.1756f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 907:
					Var0 = {-1395.059f, -481.4254f, 71.0421f};
					Var0.f_3 = {0f, 0f, -172f};
					break;
				
				case 908:
					Var0 = {-1396.545f, -481.6342f, 71.0421f};
					Var0.f_3 = {0f, 0f, 8f};
					break;
				
				case 909:
					Var0 = {-1372.66f, -476.5803f, 70.80293f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 910:
					Var0 = {-1373.991f, -476.762f, 73.93909f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_9(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 86:
			switch (iParam0)
			{
				case 1:
					Var0 = {-1446.808f, -3762.878f, 4.8851f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-1447.32f, -3764.615f, 7.1351f};
					Var0.f_3 = {0f, 0f, -105.421f};
					break;
				
				case 3:
					Var0 = {-1472.317f, -3754.113f, 4.9666f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-1442.132f, -3765.401f, 4.6422f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-1491.069f, -3749.399f, 7.8848f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-1447.664f, -3763.538f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 9:
					Var0 = {-1477.099f, -3753.808f, 7.9712f};
					Var0.f_3 = {0f, 0f, 72.0645f};
					break;
				
				case 10:
					Var0 = {-1469.098f, -3756.622f, 7.9712f};
					Var0.f_3 = {0f, 0f, -108.8264f};
					break;
				
				case 11:
					Var0 = {-1462.95f, -3755.3f, 4.8842f};
					Var0.f_3 = {0f, 0f, -17.3354f};
					break;
				
				case 12:
					Var0 = {-1484.953f, -3757.543f, 4.8811f};
					Var0.f_3 = {0f, 0f, -100.4841f};
					break;
				
				case 14:
					Var0 = {-1464.4f, -3758.122f, 9.4872f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 15:
					Var0 = {-1447.537f, -3764.701f, 7.2679f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 562:
					Var0 = {-1468.309f, -3761.743f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 563:
					Var0 = {-1470.705f, -3760.114f, 8.466f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 564:
					Var0 = {-1468.763f, -3754.111f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 565:
					Var0 = {-1468.523f, -3752.656f, 8.431f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 566:
					Var0 = {-1466.566f, -3752.179f, 8.434f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 567:
					Var0 = {-1469.603f, -3761.323f, 8.464f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 568:
					Var0 = {-1465.59f, -3752.742f, 8.469f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 569:
					Var0 = {-1467.868f, -3761.448f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 570:
					Var0 = {-1470.374f, -3760.535f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 571:
					Var0 = {-1468.372f, -3754.463f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 572:
					Var0 = {-1467.756f, -3752.503f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 573:
					Var0 = {-1466.979f, -3752.699f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 574:
					Var0 = {-1468.851f, -3760.945f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 575:
					Var0 = {-1465.823f, -3753.801f, 7.97122f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 576:
					Var0 = {-1468.691f, -3761.233f, 9.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 577:
					Var0 = {-1470.116f, -3759.786f, 9.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 578:
					Var0 = {-1468.126f, -3753.701f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 579:
					Var0 = {-1467.965f, -3753.221f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 580:
					Var0 = {-1466.372f, -3752.868f, 9.4712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 581:
					Var0 = {-1469.704f, -3760.67f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 582:
					Var0 = {-1465.417f, -3752.599f, 9.721219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-1466.258f, -3757.699f, 9.501f};
					Var0.f_3 = {-1.2041f, 0.3327f, -104.2489f};
					break;
				
				case 35:
					Var0 = {-1469.413f, -3754.47f, 9.8603f};
					Var0.f_3 = {-9.4021f, 0f, -124.0641f};
					break;
				
				case 40:
					Var0 = {-1480.999f, -3750.434f, 4.8844f};
					Var0.f_3 = {0f, 0f, 74.7582f};
					break;
				
				case 41:
					Var0 = {-1469.779f, -3759.773f, 8.99f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 42:
					Var0 = {-1469.304f, -3759.843f, 7.99f};
					Var0.f_3 = {0f, 0f, 70.92f};
					break;
				
				case 46:
					Var0 = {-1484.913f, -3751.229f, 4.88439f};
					Var0.f_3 = {0f, 0f, -16.57f};
					break;
				
				case 47:
					Var0 = {-1485.11f, -3749.337f, 5.349f};
					Var0.f_3 = {0f, 0f, -20.16f};
					break;
				
				case 50:
					Var0 = {-1486.254f, -3750.081f, 4.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-1484.091f, -3750.708f, 6.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-1483.299f, -3747.215f, 5.915f};
					Var0.f_3 = {0f, 0f, 110.52f};
					break;
				
				case 615:
					Var0 = {-1485.33f, -3747.146f, 4.911378f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-1483.3f, -3747.885f, 6.911377f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-1487.777f, -3745.036f, 4.8842f};
					Var0.f_3 = {0f, 0f, 116.7347f};
					break;
				
				case 58:
					Var0 = {-1489.353f, -3745.367f, 7.0828f};
					Var0.f_3 = {-3.8443f, -0.028f, -81.512f};
					break;
				
				case 59:
					Var0 = {-1489.111f, -3744.742f, 7.0897f};
					Var0.f_3 = {-13.452f, -0.0144f, -128.8492f};
					break;
				
				case 60:
					Var0 = {-1489.171f, -3744.723f, 6.9663f};
					Var0.f_3 = {-11.7216f, -0.0144f, -158.9758f};
					break;
				
				case 61:
					Var0 = {-1489.528f, -3745.62f, 6.8107f};
					Var0.f_3 = {-15.2796f, -0.0144f, -107.6647f};
					break;
				
				case 62:
					Var0 = {-1486.3f, -3744.352f, 6.443f};
					Var0.f_3 = {4.3878f, -0.3949f, 127.0602f};
					break;
				
				case 63:
					Var0 = {-1488.215f, -3746.252f, 7.0088f};
					Var0.f_3 = {-16.9377f, -0.0626f, 23.247f};
					break;
				
				case 64:
					Var0 = {-1488.644f, -3745.901f, 7.1418f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-1488.548f, -3745.67f, 5.4501f};
					Var0.f_3 = {-51.3342f, 0f, -18.5131f};
					break;
				
				case 66:
					Var0 = {-1488.019f, -3746.062f, 4.811914f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 67:
					Var0 = {-1488.63f, -3744.632f, 7.136929f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 68:
					Var0 = {-1485.86f, -3744.431f, 4.8846f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 69:
					Var0 = {-1477.398f, -3750.441f, 7.9712f};
					Var0.f_3 = {0f, 0f, 135.1895f};
					break;
				
				case 70:
					Var0 = {-1478.481f, -3750.172f, 8.471f};
					Var0.f_3 = {0f, 0f, -134.36f};
					break;
				
				case 71:
					Var0 = {-1480.469f, -3757.628f, 7.969229f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 72:
					Var0 = {-1477.972f, -3749.26f, 10.34622f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 73:
					Var0 = {-1478.017f, -3750.726f, 7.9712f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 74:
					Var0 = {-1478.209f, -3751.382f, 8.9712f};
					Var0.f_3 = {0f, 0f, 306.4598f};
					break;
				
				case 75:
					Var0 = {-1477.742f, -3750.582f, 8.9712f};
					Var0.f_3 = {0f, 0f, 169.4526f};
					break;
				
				case 76:
					Var0 = {-1478.209f, -3751.382f, 8.9712f};
					Var0.f_3 = {0f, 0f, 306.4598f};
					break;
				
				case 78:
					Var0 = {-1483.029f, -3754.988f, 7.978f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 81:
					Var0 = {-1483.636f, -3754.824f, 7.9805f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 82:
					Var0 = {-1482.618f, -3754.687f, 9.7305f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 84:
					Var0 = {-1481.445f, -3749.58f, 7.98f};
					Var0.f_3 = {0f, 0f, 139.2f};
					break;
				
				case 86:
					Var0 = {-1481.279f, -3750.068f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-1481.873f, -3749.484f, 9.7305f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 89:
					Var0 = {-1461.222f, -3760.608f, 8.97f};
					Var0.f_3 = {0f, 0f, 69.91f};
					break;
				
				case 90:
					Var0 = {-1461.222f, -3760.608f, 7.97f};
					Var0.f_3 = {0f, 0f, -110.88f};
					break;
				
				case 93:
					Var0 = {-1446.683f, -3764.576f, 6.0341f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 94:
					Var0 = {-1445.094f, -3764.118f, 4.947f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 95:
					Var0 = {-1447.214f, -3763.414f, 5.947f};
					Var0.f_3 = {0f, 0f, -109.34f};
					break;
				
				case 96:
					Var0 = {-1445.979f, -3763.761f, 5.947f};
					Var0.f_3 = {0f, 0f, 74.74f};
					break;
				
				case 97:
					Var0 = {-1448.581f, -3763.566f, 5.947f};
					Var0.f_3 = {0f, 0f, -60.94f};
					break;
				
				case 98:
					Var0 = {-1447.435f, -3762.875f, 5.947f};
					Var0.f_3 = {0f, 0f, 123.24f};
					break;
				
				case 99:
					Var0 = {-1445.094f, -3764.118f, 4.947f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 100:
					Var0 = {-1447.406f, -3763.303f, 5.96f};
					Var0.f_3 = {0f, 0f, -105.26f};
					break;
				
				case 101:
					Var0 = {-1444.846f, -3763.649f, 6.3325f};
					Var0.f_3 = {1.1681f, 0.0076f, -77.9873f};
					break;
				
				case 102:
					Var0 = {-1471.817f, -3756.322f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-1472.123f, -3757.26f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {-1464.724f, -3758.992f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-1464.471f, -3758.163f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 110:
					Var0 = {-1487.114f, -3744.942f, 4.8842f};
					Var0.f_3 = {0f, 0f, 307.2348f};
					break;
				
				case 119:
					Var0 = {-1444.848f, -3765.358f, 4.8847f};
					Var0.f_3 = {0f, 0f, 42.619f};
					break;
				
				case 126:
					Var0 = {-1469.953f, -3760.144f, 7.9712f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 127:
					Var0 = {-1469.652f, -3759.159f, 9.7212f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-1483.029f, -3754.988f, 7.978f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 133:
					Var0 = {-1483.636f, -3754.824f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-1482.618f, -3754.687f, 9.7305f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 135:
					Var0 = {-1461.493f, -3760.982f, 7.9715f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 136:
					Var0 = {-1461.05f, -3759.931f, 9.9715f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 169:
					Var0 = {-1463.954f, -3755.54f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-1464.205f, -3756.409f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {-1463.829f, -3755.636f, 8.851f};
					Var0.f_3 = {0f, 0f, -110.727f};
					break;
				
				case 182:
					Var0 = {-1471.324f, -3756.496f, 5.76f};
					Var0.f_3 = {0f, 0f, -123.12f};
					break;
				
				case 183:
					Var0 = {-1465.113f, -3758.882f, 5.75f};
					Var0.f_3 = {0f, 0f, 74.88f};
					break;
				
				case 588:
					Var0 = {-1463.023f, -3758.697f, 7.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 587:
					Var0 = {-1462.763f, -3757.992f, 9.971219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 589:
					Var0 = {-1463.29f, -3758.862f, 8.851f};
					Var0.f_3 = {0f, 0f, 85.32f};
					break;
				
				case 591:
					Var0 = {-1483.584f, -3745.06f, 6.884395f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 590:
					Var0 = {-1484.416f, -3744.834f, 4.884395f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 592:
					Var0 = {-1484.373f, -3744.65f, 5.75f};
					Var0.f_3 = {0f, 0f, -16f};
					break;
				
				case 201:
					Var0 = {-1447.458f, -3762.726f, 6.486f};
					Var0.f_3 = {-2.7455f, 0.0091f, -130.6178f};
					break;
				
				case 202:
					Var0 = {-1447.664f, -3763.538f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 203:
					Var0 = {-1448.587f, -3763.156f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 204:
					Var0 = {-1447.481f, -3762.614f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 205:
					Var0 = {-1449.94f, -3765.321f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 206:
					Var0 = {-1448.046f, -3764.462f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 207:
					Var0 = {-1448.205f, -3762.231f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 208:
					Var0 = {-1448.657f, -3759.897f, 4.885f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 209:
					Var0 = {-1450.222f, -3766.645f, 4.8819f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 210:
					Var0 = {-1448.97f, -3764.079f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 211:
					Var0 = {-1449.211f, -3765.073f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 212:
					Var0 = {-1447.198f, -3761.39f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 213:
					Var0 = {-1449.216f, -3766.903f, 4.8846f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 214:
					Var0 = {-1448.629f, -3765.786f, 4.8851f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 215:
					Var0 = {-1447.946f, -3760.925f, 4.8851f};
					Var0.f_3 = {0f, 0f, 255.7055f};
					break;
				
				case 216:
					Var0 = {-1447.55f, -3759.656f, 4.8821f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 217:
					Var0 = {-1446.781f, -3760.051f, 4.882f};
					Var0.f_3 = {0f, 0f, 75.7055f};
					break;
				
				case 276:
					Var0 = {-1468.683f, -3756.704f, 4.6207f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-1491.069f, -3749.399f, 7.8848f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 298:
					Var0 = {-1483.188f, -3754.52f, 8.9789f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 299:
					Var0 = {-1481.603f, -3750.063f, 8.93f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 311:
					Var0 = {-1462.11f, -3758.155f, 8.0775f};
					Var0.f_3 = {0f, 0f, 106.1f};
					break;
				
				case 341:
					Var0 = {-1479.579f, -3753.227f, 7.7212f};
					Var0.f_3 = {0f, 0f, 5.8f};
					break;
				
				case 343:
					Var0 = {-1477.056f, -3749.575f, 5.315f};
					Var0.f_3 = {0f, 0f, -20.88f};
					break;
				
				case 346:
					Var0 = {-1478.391f, -3750.33f, 4.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 347:
					Var0 = {-1476.525f, -3750.974f, 6.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 618:
					Var0 = {-1475.45f, -3747.539f, 5.915f};
					Var0.f_3 = {0f, 0f, 110.52f};
					break;
				
				case 621:
					Var0 = {-1477.482f, -3747.602f, 4.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 622:
					Var0 = {-1475.804f, -3748.159f, 6.884243f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 349:
					Var0 = {-1459.512f, -3758.9f, 5.349f};
					Var0.f_3 = {0f, 0f, 161.64f};
					break;
				
				case 352:
					Var0 = {-1458.289f, -3758.243f, 4.8898f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 353:
					Var0 = {-1460.635f, -3757.476f, 6.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 624:
					Var0 = {-1461.202f, -3761.051f, 5.915f};
					Var0.f_3 = {0f, 0f, -65.52f};
					break;
				
				case 627:
					Var0 = {-1459.431f, -3761.208f, 4.884149f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 628:
					Var0 = {-1461.364f, -3760.571f, 6.884149f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 354:
					Var0 = {-1486.442f, -3749.991f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 355:
					Var0 = {-1478.653f, -3750.469f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 356:
					Var0 = {-1458.24f, -3758.581f, 5.78f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 357:
					Var0 = {-1488.263f, -3744.759f, 6.1615f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 358:
					Var0 = {-1479.48f, -3754.686f, 6.1355f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 359:
					Var0 = {-1467.563f, -3757.183f, 6.1355f};
					Var0.f_3 = {0f, 0f, 117f};
					break;
				
				case 360:
					Var0 = {-1478.651f, -3755.416f, 4.8889f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 361:
					Var0 = {-1479.187f, -3754.366f, 6.8889f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 362:
					Var0 = {-1479.755f, -3755.78f, 7.1482f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 363:
					Var0 = {-1479.755f, -3755.775f, 5.3251f};
					Var0.f_3 = {-62.0222f, 0f, -17.696f};
					break;
				
				case 364:
					Var0 = {-1479.497f, -3756.253f, 6.9088f};
					Var0.f_3 = {1.2958f, 0.1689f, 20.4999f};
					break;
				
				case 365:
					Var0 = {-1479.497f, -3756.253f, 6.9088f};
					Var0.f_3 = {-7.427f, 0.1171f, 20.4063f};
					break;
				
				case 366:
					Var0 = {-1480.318f, -3754.569f, 7.1457f};
					Var0.f_3 = {-21.5455f, 0.2229f, -158.8809f};
					break;
				
				case 367:
					Var0 = {-1480.159f, -3754.812f, 7.0318f};
					Var0.f_3 = {-14.0111f, 0.1714f, -175.8724f};
					break;
				
				case 368:
					Var0 = {-1480.266f, -3754.571f, 6.6033f};
					Var0.f_3 = {3.3357f, 0.2198f, -149.3704f};
					break;
				
				case 369:
					Var0 = {-1478.26f, -3754.211f, 4.8889f};
					Var0.f_3 = {0f, 0f, 312.4691f};
					break;
				
				case 370:
					Var0 = {-1466.68f, -3757.925f, 4.8817f};
					Var0.f_3 = {0f, 0f, -179f};
					break;
				
				case 371:
					Var0 = {-1467.205f, -3756.834f, 6.8817f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 372:
					Var0 = {-1467.907f, -3758.286f, 7.0358f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 373:
					Var0 = {-1467.909f, -3758.083f, 5.1862f};
					Var0.f_3 = {-62.0222f, 0f, -17.696f};
					break;
				
				case 374:
					Var0 = {-1468.696f, -3758.387f, 6.7899f};
					Var0.f_3 = {3.1594f, -0.1537f, -52.4148f};
					break;
				
				case 375:
					Var0 = {-1468.696f, -3758.387f, 6.7899f};
					Var0.f_3 = {3.1594f, -0.1537f, -52.4148f};
					break;
				
				case 376:
					Var0 = {-1468.448f, -3757.17f, 7.21f};
					Var0.f_3 = {-21.8662f, -0.1252f, -161.5497f};
					break;
				
				case 377:
					Var0 = {-1468.4f, -3757.185f, 6.3925f};
					Var0.f_3 = {0.8043f, -0.1812f, -165.0518f};
					break;
				
				case 378:
					Var0 = {-1468.44f, -3756.969f, 6.7422f};
					Var0.f_3 = {-0.3434f, -0.307f, -153.0706f};
					break;
				
				case 379:
					Var0 = {-1466.88f, -3757.383f, 4.8731f};
					Var0.f_3 = {0f, 0f, 311.9359f};
					break;
				
				case 380:
					Var0 = {-1485.36f, -3744.655f, 5.8877f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 381:
					Var0 = {-1477.239f, -3753.594f, 5.8927f};
					Var0.f_3 = {0f, 0f, -63.2f};
					break;
				
				case 382:
					Var0 = {-1465.516f, -3756.622f, 5.8927f};
					Var0.f_3 = {0f, 0f, -63.2f};
					break;
				
				case 383:
					Var0 = {-1478.103f, -3752.667f, 4.8889f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 384:
					Var0 = {-1466.408f, -3755.691f, 4.8818f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 385:
					Var0 = {-1486.232f, -3745.631f, 7.1342f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 386:
					Var0 = {-1477.522f, -3753.809f, 7.1389f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 387:
					Var0 = {-1465.799f, -3756.852f, 7.1318f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 388:
					Var0 = {-1424.162f, -3771.192f, 4.6323f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 389:
					Var0 = {-1425.755f, -3770.688f, 7.6323f};
					Var0.f_3 = {0f, 0f, 78.4651f};
					break;
				
				case 390:
					Var0 = {-1425.334f, -3770.985f, 4.8876f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 391:
					Var0 = {-1423.754f, -3769.757f, 6.6128f};
					Var0.f_3 = {-16.1178f, 0f, 116.8816f};
					break;
				
				case 392:
					Var0 = {-1424.657f, -3770.128f, 4.885f};
					Var0.f_3 = {-0.067f, 0f, 52.003f};
					break;
				
				case 393:
					Var0 = {-1424.824f, -3771.119f, 4.874f};
					Var0.f_3 = {0f, 0f, 74.52f};
					break;
				
				case 394:
					Var0 = {-1424.182f, -3769.503f, 6.2866f};
					Var0.f_3 = {2.1025f, 0.0535f, 159.5091f};
					break;
				
				case 395:
					Var0 = {-1411.107f, -3768.087f, 8.1648f};
					Var0.f_3 = {-10.4774f, 0f, 96.1273f};
					break;
				
				case 396:
					Var0 = {-1408.346f, -3748.977f, 14.3548f};
					Var0.f_3 = {-8.6722f, 0f, 110.6113f};
					break;
				
				case 397:
					Var0 = {-1422.037f, -3771.962f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 398:
					Var0 = {-1422.961f, -3771.58f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 399:
					Var0 = {-1421.655f, -3771.038f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 400:
					Var0 = {-1421.114f, -3772.345f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 401:
					Var0 = {-1422.42f, -3772.886f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 402:
					Var0 = {-1422.578f, -3770.656f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 403:
					Var0 = {-1420.731f, -3771.421f, 4.8824f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 404:
					Var0 = {-1421.496f, -3773.269f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 405:
					Var0 = {-1423.344f, -3772.503f, 4.8827f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 406:
					Var0 = {-1423.885f, -3771.197f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 407:
					Var0 = {-1421.272f, -3770.115f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 408:
					Var0 = {-1420.19f, -3772.728f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 409:
					Var0 = {-1422.803f, -3773.81f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 410:
					Var0 = {-1423.12f, -3769.349f, 4.8829f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 411:
					Var0 = {-1419.424f, -3770.88f, 4.8828f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 412:
					Var0 = {-1420.955f, -3774.575f, 4.8831f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 413:
					Var0 = {-1422.037f, -3771.962f, 4.8822f};
					Var0.f_3 = {0f, 0f, -111.9612f};
					break;
				
				case 414:
					Var0 = {-1424.983f, -3771.068f, 4.865f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 415:
					Var0 = {-1424.182f, -3769.503f, 6.2866f};
					Var0.f_3 = {2.1025f, 0.0535f, 159.5091f};
					break;
				
				case 416:
					Var0 = {-1424.629f, -3770.126f, 6.318f};
					Var0.f_3 = {0f, 0f, 77.2f};
					break;
				
				case 417:
					Var0 = {-1504.034f, -3721.481f, 18.6389f};
					Var0.f_3 = {-20.8595f, 0f, -153.4179f};
					break;
				
				case 418:
					Var0 = {-1425.131f, -3771.658f, 6.08f};
					Var0.f_3 = {0f, 0f, 72f};
					break;
				
				case 419:
					Var0 = {-1425.331f, -3772.208f, 4.63f};
					Var0.f_3 = {0f, 0f, -108f};
					break;
				
				case 420:
					Var0 = {-1472.25f, -3753.718f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 586:
					Var0 = {-1462.875f, -3757.102f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 585:
					Var0 = {-1482.616f, -3749.898f, 6.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 421:
					Var0 = {-1477.534f, -3753.708f, 9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 550:
					Var0 = {-1416.474f, -3771.997f, 5.5693f};
					Var0.f_3 = {0f, 0f, 163.44f};
					break;
				
				case 551:
					Var0 = {-1423.845f, -3771.194f, 7.2235f};
					Var0.f_3 = {6.157f, -0.5868f, -114.8645f};
					break;
				
				case 552:
					Var0 = {-1448.08f, -3765.959f, 12.2481f};
					Var0.f_3 = {0f, 0f, 161.525f};
					break;
				
				case 553:
					Var0 = {-1504.292f, -3747.308f, 7.03f};
					Var0.f_3 = {0f, 0f, -91.08f};
					break;
				
				case 554:
					Var0 = {-1448.323f, -3765.571f, 11.938f};
					Var0.f_3 = {0f, 0f, 161.54f};
					break;
				
				case 555:
					Var0 = {-1447.279f, -3765.672f, 10.90751f};
					break;
				
				case 556:
					Var0 = {-1448.415f, -3765.298f, 12.65751f};
					break;
				
				case 593:
					Var0 = {-1415.715f, -3771.379f, 4.882401f};
					break;
				
				case 594:
					Var0 = {-1416.696f, -3771.028f, 6.632306f};
					break;
				
				case 595:
					Var0 = {-1504.859f, -3746.824f, 6.820841f};
					break;
				
				case 596:
					Var0 = {-1504.818f, -3747.812f, 8.310176f};
					break;
				
				case 118:
					Var0 = {-1416.474f, -3771.997f, 5.5693f};
					break;
				
				case 117:
					Var0 = {-1448.08f, -3765.959f, 12.281f};
					break;
				
				case 597:
					Var0 = {-1504.292f, 3747.308f, 7.03f};
					break;
				
				case 438:
					Var0 = {-1482.661f, -3753.946f, 9.1149f};
					Var0.f_3 = {0f, 0f, 90.67f};
					break;
				
				case 439:
					Var0 = {-1482.428f, -3753.661f, -9.0072f};
					Var0.f_3 = {0f, 0f, 136.08f};
					break;
				
				case 440:
					Var0 = {-1482.195f, -3752.423f, 8.9881f};
					Var0.f_3 = {0f, 0f, -109.08f};
					break;
				
				case 441:
					Var0 = {-1480.779f, -3753.358f, 7.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 442:
					Var0 = {-1480.385f, -3752.208f, 9.9805f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 443:
					Var0 = {-1482.369f, -3750.713f, 9.797f};
					Var0.f_3 = {0f, 0f, 160.92f};
					break;
				
				case 451:
					Var0 = {-1412.098f, -3776.824f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 452:
					Var0 = {-1410.334f, -3776.322f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 453:
					Var0 = {-1410.334f, -3776.322f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 454:
					Var0 = {-1409.817f, -3774.685f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 455:
					Var0 = {-1409.817f, -3774.685f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 456:
					Var0 = {-1411.213f, -3773.381f, 4.6095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 457:
					Var0 = {-1412.801f, -3777.227f, 4.6097f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 458:
					Var0 = {-1412.741f, -3773.397f, 4.6097f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 459:
					Var0 = {-1411.074f, -3776.781f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 460:
					Var0 = {-1411.074f, -3776.781f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 461:
					Var0 = {-1409.814f, -3775.525f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 462:
					Var0 = {-1409.814f, -3775.525f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 463:
					Var0 = {-1410.314f, -3773.913f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 464:
					Var0 = {-1410.314f, -3773.913f, 6.1095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 465:
					Var0 = {-1413.634f, -3776.301f, 6.3597f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 466:
					Var0 = {-1411.531f, -3773.027f, 6.3597f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 467:
					Var0 = {-1473.431f, -3755.282f, 11.7769f};
					Var0.f_3 = {0f, 0f, 73.6618f};
					break;
				
				case 468:
					Var0 = {-1462.827f, -3757.944f, 7.9712f};
					Var0.f_3 = {0f, 0f, -116.3799f};
					break;
				
				case 469:
					Var0 = {-1475.21f, -3761.727f, 4.8823f};
					Var0.f_3 = {0f, 0f, -68.2425f};
					break;
				
				case 476:
					Var0 = {-1464.017f, -3755.137f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {-1452.078f, -3762.095f, 5.5102f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {-1477.694f, -3753.838f, 10.7213f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 485:
					Var0 = {-1411.949f, -3777.132f, 4.595f};
					Var0.f_3 = {0f, 0f, -12.96f};
					break;
				
				case 599:
					Var0 = {-1411.802f, -3777.198f, 4.593f};
					Var0.f_3 = {0f, 0f, -10.8f};
					break;
				
				case 605:
					Var0 = {-1411.802f, -3777.198f, 4.593f};
					Var0.f_3 = {0f, 0f, -10.8f};
					break;
				
				case 486:
					Var0 = {-1410.77f, -3776.988f, 4.595f};
					Var0.f_3 = {0f, 0f, 5.4f};
					break;
				
				case 600:
					Var0 = {-1410.848f, -3777.035f, 4.593f};
					Var0.f_3 = {0f, 0f, 23.4f};
					break;
				
				case 606:
					Var0 = {-1410.848f, -3777.035f, 4.593f};
					Var0.f_3 = {0f, 0f, 23.4f};
					break;
				
				case 487:
					Var0 = {-1410.151f, -3776.356f, 4.595f};
					Var0.f_3 = {0f, 0f, 57.6f};
					break;
				
				case 601:
				case 607:
					Var0 = {-1410.062f, -3776.337f, 4.593f};
					Var0.f_3 = {0f, 0f, 49.68f};
					break;
				
				case 488:
					Var0 = {-1409.828f, -3775.41f, 4.595f};
					Var0.f_3 = {0f, 0f, 82.8f};
					break;
				
				case 602:
				case 608:
					Var0 = {-1409.749f, -3775.25f, 4.593f};
					Var0.f_3 = {0f, 0f, 77.76f};
					break;
				
				case 489:
					Var0 = {-1410.04f, -3774.39f, 4.595f};
					Var0.f_3 = {0f, 0f, 114.12f};
					break;
				
				case 603:
				case 609:
					Var0 = {-1409.985f, -3774.344f, 4.593f};
					Var0.f_3 = {0f, 0f, 110.16f};
					break;
				
				case 490:
					Var0 = {-1410.756f, -3773.671f, 4.595f};
					Var0.f_3 = {0f, 0f, 147.24f};
					break;
				
				case 604:
				case 610:
					Var0 = {-1410.734f, -3773.636f, 4.593f};
					Var0.f_3 = {0f, 0f, 147.24f};
					break;
				
				case 491:
					Var0 = {-1413.856f, -3774.906f, 4.565f};
					Var0.f_3 = {0f, 0f, -3.6f};
					break;
				
				case 492:
					Var0 = {-1413.922f, -3775.091f, 4.568f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 545:
					Var0 = {-1422.092f, -3771.913f, 8.99f};
					Var0.f_3 = {0f, 0f, -105.48f};
					break;
				
				case 543:
					Var0 = {-1421.924f, -3771.311f, 7.980618f};
					break;
				
				case 544:
					Var0 = {-1422.29f, -3772.494f, 9.730741f};
					break;
				
				case 493:
					Var0 = {-1487.771f, -3755.084f, 4.8841f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 494:
					Var0 = {-1473.982f, -3748.51f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 495:
					Var0 = {-1471.58f, -3751.941f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 496:
					Var0 = {-1458.156f, -3756.48f, 4.8842f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 497:
					Var0 = {-1457.04f, -3760.4f, 4.7f};
					Var0.f_3 = {2f, -0.7f, 165.7f};
					break;
				
				case 498:
					Var0 = {-1457.855f, -3762.939f, 5.3f};
					Var0.f_3 = {0f, 0f, 160.625f};
					break;
				
				case 499:
					Var0 = {-1460.637f, -3761.931f, 5.3f};
					Var0.f_3 = {0f, 0f, 162.494f};
					break;
				
				case 503:
					Var0 = {-1470.853f, -3756.249f, 14.9899f};
					break;
				
				case 516:
					Var0 = {-1458.544f, -3759.33f, 10.84487f};
					break;
				
				case 517:
					Var0 = {-1458.574f, -3757.84f, 13.21987f};
					break;
				
				case 583:
					Var0 = {-1460.078f, -3761.072f, 10.84484f};
					break;
				
				case 584:
					Var0 = {-1459.093f, -3758.036f, 13.15734f};
					break;
				
				case 518:
					Var0 = {-1464.525f, -3756.986f, 10.72609f};
					break;
				
				case 519:
					Var0 = {-1465.161f, -3759.006f, 13.16036f};
					break;
				
				case 520:
					Var0 = {-1467.205f, -3756.822f, 11.7822f};
					Var0.f_3 = {0f, 0f, 72.5473f};
					break;
				
				case 521:
					Var0 = {-1458.401f, -3760.269f, 10.9074f};
					Var0.f_3 = {0f, 0f, 250f};
					break;
				
				case 522:
					Var0 = {-1458.855f, -3757.521f, 12.21145f};
					Var0.f_3 = {0.68509f, -0.496208f, 163.4133f};
					break;
				
				case 523:
					Var0 = {-1459.906f, -3760.123f, 10.925f};
					Var0.f_3 = {0f, 0f, 71.73f};
					break;
				
				case 524:
					Var0 = {-1458.855f, -3757.521f, 12.21145f};
					Var0.f_3 = {0.68509f, -0.496208f, 163.4133f};
					break;
				
				case 525:
					Var0 = {-1460.229f, -3760.121f, 10.925f};
					Var0.f_3 = {0f, 0f, 71.73f};
					break;
				
				case 526:
					Var0 = {-1460.354f, -3760.894f, 12.09f};
					Var0.f_3 = {0f, 0f, 72.25f};
					break;
				
				case 527:
					Var0 = {-1411.424f, -3775.375f, 4.7548f};
					Var0.f_3 = {-89.5007f, 0.3909f, -105.0659f};
					break;
				
				case 561:
					Var0 = {-1424.229f, -3768.595f, 7.3809f};
					Var0.f_3 = {-28.298f, -0.2891f, -177.0236f};
					break;
				
				case 598:
					Var0 = {-1462.959f, -3758.295f, 25.7771f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_10(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 83:
			switch (iParam0)
			{
				case 278:
					Var0 = {-780.3696f, 342.9996f, 186.1041f};
					break;
				
				case 279:
					Var0 = {-790.949f, 343.2666f, 190.1135f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-780.4277f, 318.1914f, 186.9136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-783.2335f, 318.1667f, 189.6636f};
					Var0.f_3 = {0f, 0f, 180.0391f};
					break;
				
				case 3:
					Var0 = {-773.2f, 322.8f, 195.9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-793.4061f, 317.2896f, 185.7757f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-793.4227f, 343.811f, 190.2164f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-798.6541f, 325.8727f, 189.2506f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-798.7937f, 340.662f, 194.0852f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-782.0123f, 319.0174f, 186.9539f};
					Var0.f_3 = {0f, 0f, 4.405f};
					break;
				
				case 7:
					Var0 = {-797.852f, 325.335f, 186.321f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 8:
					Var0 = {-794.578f, 321.323f, 188.731f};
					Var0.f_3 = {-7.632f, 0f, -211.063f};
					break;
				
				case 141:
					Var0 = {-800.012f, 325.846f, 187.895f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 142:
					Var0 = {-799.987f, 325.496f, 189.045f};
					Var0.f_3 = {180f, -180f, -90f};
					break;
				
				case 143:
					Var0 = {-799.987f, 323.601f, 189.04f};
					Var0.f_3 = {180f, -180f, -90f};
					break;
				
				case 144:
					Var0 = {-797.079f, 325.817f, 187.844f};
					Var0.f_3 = {0.1322f, 0.0536f, -269.934f};
					break;
				
				case 158:
					Var0 = {-797.944f, 325.029f, 187.849f};
					Var0.f_3 = {-2.3423f, 0.0392f, -267.756f};
					break;
				
				case 145:
					Var0 = {-797.073f, 324.826f, 187.845f};
					Var0.f_3 = {-0.2118f, 0.062f, -268.343f};
					break;
				
				case 146:
					Var0 = {-797.079f, 325.817f, 187.844f};
					Var0.f_3 = {0.994f, 0.0536f, 83.2112f};
					break;
				
				case 147:
					Var0 = {-798.294f, 327.416f, 188.283f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 148:
					Var0 = {-798.786f, 327.386f, 187.26f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 153:
					Var0 = {-799.622f, 325.8f, 186.317f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 154:
					Var0 = {-798.042f, 325.939f, 188.428f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 155:
					Var0 = {-798.042f, 325.938f, 187.483f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 157:
					Var0 = {-797.421f, 325.817f, 187.845f};
					Var0.f_3 = {-7.145f, 0.0536f, -41.7083f};
					break;
				
				case 234:
					Var0 = {-798.4081f, 327.0646f, 188.498f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 149:
					Var0 = {-798.0435f, 322.5277f, 186.3132f};
					Var0.f_3 = {0f, 0f, 1.7263f};
					break;
				
				case 150:
					Var0 = {-795.0529f, 323.3902f, 186.3132f};
					Var0.f_3 = {0f, 0f, 53.5498f};
					break;
				
				case 151:
					Var0 = {-795.3783f, 326.7546f, 186.3132f};
					Var0.f_3 = {0f, 0f, 89.7247f};
					break;
				
				case 152:
					Var0 = {-797.6187f, 327.2416f, 186.3132f};
					Var0.f_3 = {0f, 0f, 107.3385f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-794.218f, 323.43f, 186.316f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 174:
					Var0 = {-797.392f, 327.146f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 175:
					Var0 = {-797.282f, 327.806f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 176:
					Var0 = {-797.172f, 328.466f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 177:
					Var0 = {-797.062f, 329.126f, 186.325f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 178:
					Var0 = {-785.307f, 324.03f, 186.316f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 179:
					Var0 = {-788.996f, 326.935f, 187.055f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 180:
					Var0 = {-788.295f, 326.2f, 187.055f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 201:
					Var0 = {-781.1226f, 318.9703f, 188.2957f};
					Var0.f_3 = {-3.5408f, 0.0466f, 166.3594f};
					break;
				
				case 235:
					Var0 = {-787.896f, 347.644f, 186.115f};
					Var0.f_3 = {-0.3015f, 0f, -197.848f};
					break;
				
				case 261:
					Var0 = {-798.174f, 324.572f, 187.308f};
					Var0.f_3 = {0f, 0f, 57f};
					break;
				
				case 262:
					Var0 = {-798.174f, 324.572f, 187.308f};
					Var0.f_3 = {0f, 0f, 57f};
					break;
				
				case 263:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 264:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 265:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, -40.68f};
					break;
				
				case 266:
					Var0 = {-786.274f, 343.352f, 187.139f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 267:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 268:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 269:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 270:
					Var0 = {-785.961f, 338.227f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 312:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 313:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 314:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 315:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 316:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 317:
					Var0 = {-785.874f, 337.952f, 187.164f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 318:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 319:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 320:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 321:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 322:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 323:
					Var0 = {-786.099f, 340.452f, 187.17f};
					Var0.f_3 = {0f, 0f, -91.8f};
					break;
				
				case 324:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 325:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 326:
					Var0 = {-785.522f, 327.189f, 187.361f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 327:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 328:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 329:
					Var0 = {-785.449f, 327.827f, 187.326f};
					Var0.f_3 = {0f, 0f, 83.88f};
					break;
				
				case 271:
					Var0 = {-786.042f, 337.4311f, 186.1135f};
					Var0.f_3 = {0f, 0f, -97.3161f};
					break;
				
				case 272:
					Var0 = {-786.0505f, 338.8861f, 186.1135f};
					Var0.f_3 = {0f, 0f, -89.4383f};
					break;
				
				case 273:
					Var0 = {-785.3838f, 339.5632f, 186.1135f};
					Var0.f_3 = {0f, 0f, 7.7813f};
					break;
				
				case 274:
					Var0 = {-783.6962f, 339.5856f, 186.1135f};
					Var0.f_3 = {0f, 0f, 27.9575f};
					break;
				
				case 275:
					Var0 = {-787.7805f, 334.9232f, 186.1134f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 304:
					Var0 = {-789.041f, 335.29f, 180.108f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 305:
					Var0 = {-782.449f, 317.53f, 188.062f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 308:
					Var0 = {-787.783f, 322.956f, 186.316f};
					Var0.f_3 = {0f, 0f, -156.402f};
					break;
				
				case 309:
					Var0 = {-786.884f, 318.407f, 186.316f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 14:
					Var0 = {-780.405f, 338.4678f, 186.1134f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 557:
					Var0 = {-780.4701f, 338.4247f, 187.5084f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 558:
					Var0 = {-780.3515f, 338.4704f, 186.1632f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 559:
					Var0 = {-780.3515f, 338.4704f, 186.1134f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 15:
					Var0 = {-780.5159f, 317.8105f, 189.9103f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-787.512f, 321.1864f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 343.1089f;
					break;
				
				case 10:
					Var0 = {-789.3117f, 341.6458f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 239.3656f;
					break;
				
				case 11:
					Var0 = {-784.5588f, 325.9694f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 52.8327f;
					break;
				
				case 12:
					Var0 = {-787.5304f, 335.4393f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 290.6938f;
					break;
				
				case 13:
					Var0 = {-805.6618f, 332.3758f, 189.7133f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 175.5243f;
					break;
				
				case 16:
					Var0 = {-786.672f, 337.58f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-786.3284f, 337.1518f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-786.335f, 338.0908f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-785.343f, 340.278f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-785.9196f, 339.7838f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-784.7827f, 339.8064f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-784.286f, 340.278f, 186.613f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-783.6854f, 339.7922f, 186.15f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-784.7827f, 339.8064f, 187.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-788.0222f, 340.1685f, 187.9267f};
					Var0.f_3 = {-7.239f, 0f, -102.9762f};
					break;
				
				case 35:
					Var0 = {-782.9066f, 338.4675f, 187.2776f};
					Var0.f_3 = {1.9639f, 0f, -89.4888f};
					break;
				
				case 36:
					Var0 = {-782.9214f, 338.467f, 187.6588f};
					Var0.f_3 = {2.0141f, -0.008f, -89.539f};
					break;
				
				case 560:
					Var0 = {-782.9009f, 337.7527f, 187.2779f};
					Var0.f_3 = {2.0696f, -0.0281f, -89.4518f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-781.9872f, 343.5015f, 188.2368f};
					Var0.f_3 = {-12.4175f, 0f, 153.0748f};
					break;
				
				case 39:
					Var0 = {-788.0585f, 343.5015f, 188.2368f};
					Var0.f_3 = {-12.4175f, 0f, -174.9393f};
					break;
				
				case 120:
					Var0 = {-795.7497f, 339.9315f, 191.1167f};
					Var0.f_3 = {-3.984f, 0f, 149.8896f};
					break;
				
				case 121:
					Var0 = {-799.9801f, 340.0232f, 191.1167f};
					Var0.f_3 = {-3.984f, 0f, -148.3764f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-797.7752f, 327.1325f, 189.7135f};
					Var0.f_3 = {0f, 0f, 357.0931f};
					break;
				
				case 41:
					Var0 = {-792.9531f, 341.6f, 206.2202f};
					Var0.f_3 = {0f, 0f, 119.72f};
					break;
				
				case 126:
					Var0 = {-786.1208f, 337.9957f, 186.1135f};
					break;
				
				case 127:
					Var0 = {-786.1259f, 339.1616f, 187.8635f};
					break;
				
				case 42:
					Var0 = {-785.625f, 338.649f, 186.103f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 46:
					Var0 = {-795.8572f, 336.1213f, 190.7138f};
					Var0.f_3 = {0f, 0f, 125.23f};
					break;
				
				case 47:
					Var0 = {-797.682f, 335.683f, 190.155f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-796.5303f, 334.3555f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-796.5093f, 336.8433f, 191.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {-799.787f, 336.563f, 190.75f};
					Var0.f_3 = {0f, 0f, -133.2f};
					break;
				
				case 615:
					Var0 = {-799.1369f, 334.6384f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-799.1272f, 336.8023f, 191.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-804.0815f, 335.5993f, 190.8021f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 57:
					Var0 = {-804.216f, 335.065f, 189.952f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 64:
					Var0 = {-803.8332f, 335.6036f, 192.1505f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-803.7757f, 335.7051f, 192.0836f};
					Var0.f_3 = {-64.3203f, 0f, 90.0509f};
					break;
				
				case 58:
					Var0 = {-787.2075f, 330.4225f, 201.8932f};
					Var0.f_3 = {0.0309f, 0.0078f, 94.294f};
					break;
				
				case 59:
					Var0 = {-804.6812f, 335.9174f, 191.8717f};
					Var0.f_3 = {3.6086f, 0f, -100.4403f};
					break;
				
				case 60:
					Var0 = {-805.2352f, 335.686f, 191.5975f};
					Var0.f_3 = {-7.8804f, 0f, -90f};
					break;
				
				case 61:
					Var0 = {-805.226f, 335.5853f, 192.2601f};
					Var0.f_3 = {-18.726f, 0.0564f, -65.9443f};
					break;
				
				case 62:
					Var0 = {-806.9933f, 331.4514f, 192.5549f};
					Var0.f_3 = {-24.3193f, 0f, -37.258f};
					break;
				
				case 63:
					Var0 = {-806.9933f, 331.4514f, 192.5549f};
					Var0.f_3 = {-24.3193f, 0f, -37.258f};
					break;
				
				case 66:
					Var0 = {-805.214f, 335.7104f, 189.7554f};
					Var0.f_3 = {0f, 0f, 1f};
					break;
				
				case 67:
					Var0 = {-803.511f, 335.6873f, 192.2554f};
					break;
				
				case 110:
					Var0 = {-804.4796f, 334.4111f, 189.7136f};
					Var0.f_3 = {0f, 0f, 164.7228f};
					break;
				
				case 68:
					Var0 = {-803.2f, 333.1f, 189.8f};
					break;
				
				case 109:
					Var0 = {-803.209f, 332.229f, 190.863f};
					break;
				
				case 69:
					Var0 = {-783.0114f, 336.0096f, 186.1135f};
					Var0.f_3 = {0f, 0f, 318.1693f};
					break;
				
				case 70:
					Var0 = {-781.938f, 335.66f, 186.65f};
					Var0.f_3 = {0f, 0f, 42.25f};
					break;
				
				case 71:
					Var0 = {-787.1086f, 335.7561f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-781.3259f, 337.3147f, 188.6136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-782.9689f, 336.8207f, 187.1f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-782.2608f, 336.8359f, 187.1499f};
					Var0.f_3 = {0f, 0f, 131.8715f};
					break;
				
				case 75:
					Var0 = {-782.9863f, 336.1273f, 187.1136f};
					Var0.f_3 = {0f, 0f, 309.98f};
					break;
				
				case 76:
					Var0 = {-782.2608f, 336.8359f, 187.1499f};
					Var0.f_3 = {0f, 0f, 318.1693f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-784.825f, 327.887f, 186.314f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-784.7092f, 327.2737f, 186.3132f};
					break;
				
				case 136:
					Var0 = {-784.7196f, 328.3914f, 188.1346f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {-784.798f, 330.004f, 186.315f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 86:
					Var0 = {-784.6601f, 330.8065f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-784.6879f, 329.7155f, 188.1622f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-782.4497f, 317.5156f, 188.0627f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 94:
					Var0 = {-781.52f, 316.153f, 186.9748f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 95:
					Var0 = {-781.506f, 318.387f, 187.9748f};
					Var0.f_3 = {0f, 0f, 178.664f};
					break;
				
				case 96:
					Var0 = {-781.4541f, 317.1049f, 187.9748f};
					Var0.f_3 = {0f, 0f, 2.74f};
					break;
				
				case 97:
					Var0 = {-792.0729f, 319.6482f, 187.9748f};
					Var0.f_3 = {0f, 0f, -132.94f};
					break;
				
				case 98:
					Var0 = {-781.0619f, 318.7636f, 187.9748f};
					Var0.f_3 = {0f, 0f, 141.24f};
					break;
				
				case 99:
					Var0 = {-782.45f, 317.52f, 188.03f};
					Var0.f_3 = {0.18f, 0f, 180f};
					break;
				
				case 100:
					Var0 = {-781.4619f, 318.6847f, 187.9561f};
					Var0.f_3 = {0f, 0f, -177.26f};
					break;
				
				case 101:
					Var0 = {-781.0864f, 316.1974f, 188.3137f};
					Var0.f_3 = {3.2417f, 0f, 13.251f};
					break;
				
				case 181:
					Var0 = {-777.695f, 332.054f, 207.34f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-781.9736f, 316.5539f, 187.9136f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-784.6674f, 316.7436f, 186.9136f};
					Var0.f_3 = {0f, 0f, 280.1147f};
					break;
				
				case 122:
					Var0 = {-782.0186f, 321.1352f, 186.9539f};
					Var0.f_3 = {0f, 0f, 82.882f};
					break;
				
				case 123:
					Var0 = {-788.7533f, 325.9305f, 186.3132f};
					Var0.f_3 = {0f, 0f, 353.52f};
					break;
				
				case 124:
					Var0 = {-785.7533f, 325.9305f, 186.3132f};
					Var0.f_3 = {0f, 0f, 353.52f};
					break;
				
				case 137:
					Var0 = {-787.9853f, 324.4699f, 186.3132f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-794.003f, 324.638f, 187.485f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 187:
					Var0 = {-793.942f, 324.588f, 186.315f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 188:
					Var0 = {-786.312f, 325.696f, 187.795f};
					Var0.f_3 = {-0.7f, 0f, -205.1f};
					break;
				
				case 189:
					Var0 = {-786.412f, 325.796f, 187.795f};
					Var0.f_3 = {0.1f, 0f, -232.3f};
					break;
				
				case 190:
					Var0 = {-796.684f, 322.784f, 187.754f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 191:
					Var0 = {-796.733f, 322.872f, 187.754f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 192:
					Var0 = {-795.412f, 327.796f, 187.795f};
					Var0.f_3 = {1.3f, 0f, -250.8f};
					break;
				
				case 193:
					Var0 = {-795.242f, 326.996f, 187.795f};
					Var0.f_3 = {1.3f, 0f, -264.596f};
					break;
				
				case 194:
					Var0 = {-781.8395f, 317.5467f, 186.9137f};
					Var0.f_3 = {0f, 0f, 178.1117f};
					break;
				
				case 195:
					Var0 = {-793.9963f, 323.9361f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 196:
					Var0 = {-796.0561f, 324.0782f, 186.3132f};
					Var0.f_3 = {0f, 0f, 54.5574f};
					break;
				
				case 197:
					Var0 = {-796.0561f, 324.0782f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 198:
					Var0 = {-798.4224f, 325.4083f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 199:
					Var0 = {-792.4963f, 323.9361f, 186.3132f};
					Var0.f_3 = {0f, 0f, 87.3152f};
					break;
				
				case 200:
					Var0 = {-800.0872f, 325.8634f, 186.3132f};
					Var0.f_3 = {0f, 0f, 89.2238f};
					break;
				
				case 284:
					Var0 = {-797.997f, 323.205f, 187.717f};
					Var0.f_3 = {-3.027f, 0f, -34.1061f};
					break;
				
				case 285:
					Var0 = {-798.481f, 323.885f, 187.702f};
					Var0.f_3 = {-2.4917f, 0f, -43.7623f};
					break;
				
				case 286:
					Var0 = {-794.985f, 328.244f, 188.135f};
					Var0.f_3 = {-2.6168f, 0f, -242.364f};
					break;
				
				case 287:
					Var0 = {-795.018f, 327.653f, 188.121f};
					Var0.f_3 = {-2.7465f, 0f, -254.215f};
					break;
				
				case 202:
					Var0 = {-781.9592f, 319.4946f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 203:
					Var0 = {-781.2353f, 319.1119f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 204:
					Var0 = {-782.3419f, 318.7707f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 205:
					Var0 = {-782.6831f, 319.4773f, 186.9185f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 45.9243f;
					break;
				
				case 206:
					Var0 = {-781.5765f, 320.4185f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 60.9243f;
					break;
				
				case 207:
					Var0 = {-782.518f, 321.788f, 186.914f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 208:
					Var0 = {-782.2658f, 320.3534f, 186.9172f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 66.9243f;
					break;
				
				case 209:
					Var0 = {-782.7004f, 320.9011f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 71.9243f;
					break;
				
				case 210:
					Var0 = {-781.1526f, 320.0358f, 186.915f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 75.9243f;
					break;
				
				case 211:
					Var0 = {-781.8115f, 321.6292f, 186.915f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 77.9243f;
					break;
				
				case 212:
					Var0 = {-787.7246f, 319.8468f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 213:
					Var0 = {-786.407f, 319.6599f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 214:
					Var0 = {-781.1938f, 321.3423f, 186.9539f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 84.9243f;
					break;
				
				case 215:
					Var0 = {-787.1768f, 321.6815f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 216:
					Var0 = {-788.0723f, 320.8122f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
				
				case 217:
					Var0 = {-786.4416f, 320.9077f, 186.314f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 0f;
					break;
			}
			switch (iParam0)
			{
				case 435:
					Var0 = {-789.0784f, 333.4356f, 186.3136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 436:
					Var0 = {-789.0784f, 333.4356f, 186.3136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 437:
					Var0 = {-782.36f, 333.2263f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 470:
					Var0 = {-798.2663f, 330.7226f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 477:
					Var0 = {-799.2601f, 338.592f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 445:
					Var0 = {-789.5599f, 325.2023f, 186.3182f};
					Var0.f_3 = {7.65f, 0f, 0f};
					break;
				
				case 446:
					Var0 = {-789.5522f, 332.7971f, 189.0635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 447:
					Var0 = {-791.6868f, 337.492f, 186.1185f};
					Var0.f_3 = {3.65f, 0f, 0f};
					break;
				
				case 448:
					Var0 = {-791.7123f, 332.791f, 187.8135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 449:
					Var0 = {-786.5101f, 334.9225f, 186.1358f};
					Var0.f_3 = {2.75f, 0f, 0f};
					break;
				
				case 450:
					Var0 = {-780.6341f, 334.9514f, 189.0138f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 471:
					Var0 = {-799.9768f, 331.2536f, 189.7135f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 472:
					Var0 = {-799.8502f, 326.0806f, 192.4562f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 478:
					Var0 = {-800.4473f, 336.3873f, 189.7135f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 479:
					Var0 = {-800.4662f, 340.076f, 192.2135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 504:
					Var0 = {-782.8615f, 341.9581f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 505:
					Var0 = {-780.2718f, 342.0182f, 186.1208f};
					Var0.f_3 = {4.25f, 0f, 0f};
					break;
				
				case 506:
					Var0 = {-782.438f, 342.0197f, 188.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 507:
					Var0 = {-804.3848f, 333.8651f, 189.7135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 508:
					Var0 = {-805.4896f, 335.0002f, 189.7155f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 509:
					Var0 = {-805.471f, 333.3125f, 191.9633f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 510:
					Var0 = {-788.6317f, 320.9997f, 186.3132f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 511:
					Var0 = {-789.5604f, 319.666f, 186.3132f};
					Var0.f_3 = {1.57f, 0f, 0f};
					break;
				
				case 512:
					Var0 = {-788.0121f, 319.6924f, 188.5632f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 513:
					Var0 = {-792.0585f, 341.4463f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 514:
					Var0 = {-792.0259f, 340.3044f, 186.1136f};
					Var0.f_3 = {2.65f, 0f, 0f};
					break;
				
				case 515:
					Var0 = {-792.1705f, 338.4408f, 189.8998f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 528:
					Var0 = {-788.878f, 338.0769f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 529:
					Var0 = {-789.9435f, 337.4386f, 186.1135f};
					Var0.f_3 = {1.25f, 0f, 0f};
					break;
				
				case 530:
					Var0 = {-789.9385f, 338.612f, 188.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 531:
					Var0 = {-782.5031f, 338.2492f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 532:
					Var0 = {-785.4359f, 336.6565f, 186.1135f};
					Var0.f_3 = {4.75f, 0f, 0f};
					break;
				
				case 533:
					Var0 = {-785.3582f, 341.1275f, 188.3635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 534:
					Var0 = {-781.649f, 320.3884f, 186.9175f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 535:
					Var0 = {-780.7493f, 320.9498f, 186.9157f};
					Var0.f_3 = {1.5f, 0f, 0f};
					break;
				
				case 536:
					Var0 = {-780.7726f, 318.901f, 189.1642f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 537:
					Var0 = {-791.6885f, 341.563f, 186.1535f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 538:
					Var0 = {-793.2805f, 340.489f, 186.1136f};
					Var0.f_3 = {1.95f, 0f, 0f};
					break;
				
				case 539:
					Var0 = {-793.2911f, 343.794f, 188.3636f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 540:
					Var0 = {-797.9947f, 327.1148f, 189.7136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 541:
					Var0 = {-796.0374f, 326.6479f, 189.7234f};
					Var0.f_3 = {1f, 0f, 0f};
					break;
				
				case 542:
					Var0 = {-797.2122f, 326.6525f, 192.4635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 547:
					Var0 = {-797.5703f, 338.8147f, 189.7159f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 548:
					Var0 = {-795.5723f, 336.2789f, 189.7159f};
					Var0.f_3 = {1.75f, 0f, 0f};
					break;
				
				case 549:
					Var0 = {-795.6097f, 340.2508f, 191.9636f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-796.735f, 326.499f, 186.32f};
					Var0.f_3 = {0f, 0f, -224.456f};
					break;
				
				case 237:
					Var0 = {-795.664f, 327.014f, 186.32f};
					Var0.f_3 = {0f, 0f, -211.657f};
					break;
				
				case 238:
					Var0 = {-795.584f, 326.146f, 186.32f};
					Var0.f_3 = {0f, 0f, -251.877f};
					break;
				
				case 239:
					Var0 = {-797.471f, 327.577f, 186.32f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 240:
					Var0 = {-798.102f, 324.236f, 187.882f};
					Var0.f_3 = {-2.8579f, 0f, -33.7881f};
					break;
				
				case 241:
					Var0 = {-795.653f, 326.818f, 186.325f};
					Var0.f_3 = {0f, 0f, 61.4979f};
					break;
				
				case 242:
					Var0 = {-795.318f, 327.555f, 186.325f};
					Var0.f_3 = {0f, 0f, -249.34f};
					break;
				
				case 243:
					Var0 = {-794.852f, 327.075f, 186.325f};
					Var0.f_3 = {0f, 0f, 83.8199f};
					break;
				
				case 244:
					Var0 = {-795.173f, 326.222f, 186.325f};
					Var0.f_3 = {0f, 0f, 67.3949f};
					break;
				
				case 245:
					Var0 = {-797.773f, 327.28f, 187.989f};
					Var0.f_3 = {-5.44662f, 0f, -87.9654f};
					break;
				
				case 246:
					Var0 = {-796.601f, 327.56f, 186.324f};
					Var0.f_3 = {0f, 0f, -186.657f};
					break;
				
				case 247:
					Var0 = {-795.899f, 327.478f, 186.32f};
					Var0.f_3 = {0f, 0f, -225.607f};
					break;
				
				case 248:
					Var0 = {-795.989f, 328.255f, 186.325f};
					Var0.f_3 = {0f, 0f, -217.412f};
					break;
				
				case 249:
					Var0 = {-796.868f, 328.027f, 186.324f};
					Var0.f_3 = {0f, 0f, -177.017f};
					break;
				
				case 250:
					Var0 = {-796.967f, 325.235f, 187.889f};
					Var0.f_3 = {-2.98413f, 0f, -6.62068f};
					break;
				
				case 251:
					Var0 = {-796.691f, 323.0321f, 186.316f};
					Var0.f_3 = {0f, 0f, -11.3392f};
					break;
				
				case 252:
					Var0 = {-796.287f, 322.2451f, 186.316f};
					Var0.f_3 = {0f, 0f, 3.3108f};
					break;
				
				case 253:
					Var0 = {-797.229f, 322.4801f, 186.316f};
					Var0.f_3 = {0f, 0f, -22.7142f};
					break;
				
				case 254:
					Var0 = {-797.604f, 322.9381f, 186.316f};
					Var0.f_3 = {0f, 0f, -34.6142f};
					break;
				
				case 255:
					Var0 = {-796.324f, 325.5321f, 187.742f};
					Var0.f_3 = {-0.2929f, 0f, -184.117f};
					break;
				
				case 256:
					Var0 = {-798.536f, 326.943f, 186.32f};
					Var0.f_3 = {0f, 0f, -199.908f};
					break;
				
				case 257:
					Var0 = {-797.799f, 327.812f, 186.32f};
					Var0.f_3 = {0f, 0f, -198.783f};
					break;
				
				case 258:
					Var0 = {-798.8f, 327.666f, 186.32f};
					Var0.f_3 = {0f, 0f, -184.134f};
					break;
				
				case 259:
					Var0 = {-797.741f, 327.17f, 186.32f};
					Var0.f_3 = {0f, 0f, -214.008f};
					break;
				
				case 260:
					Var0 = {-799.168f, 324.758f, 187.849f};
					Var0.f_3 = {-1.83503f, 0f, -11.7304f};
					break;
				
				case 307:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 331:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 332:
					Var0 = {-795.744f, 327.166f, 187.866f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 333:
					Var0 = {-797.114f, 318.666f, 187.183f};
					Var0.f_3 = {0f, 0f, -216f};
					break;
				
				case 334:
					Var0 = {-795.084f, 326.453f, 187.984f};
					Var0.f_3 = {0f, 0f, -107.85f};
					break;
				
				case 298:
					Var0 = {-793.858f, 341.4139f, 187.1133f};
					break;
				
				case 299:
					Var0 = {-784.331f, 330.2035f, 187.2646f};
					break;
				
				case 300:
					Var0 = {-790.502f, 323.522f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 301:
					Var0 = {-789.585f, 324.198f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 302:
					Var0 = {-791.426f, 323.905f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 303:
					Var0 = {-789.62f, 322.646f, 186.316f};
					Var0.f_3 = {0f, 0f, 0.836098f};
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {-787.8991f, 339.9203f, 187.1403f};
					Var0.f_3 = {1.0275f, 0f, -103.1806f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {-787.0869f, 339.7301f, 187.1553f};
					Var0.f_3 = {1.0275f, 0f, -103.1806f};
					break;
				
				case 311:
					Var0 = {-788.0102f, 319.6611f, 186.5651f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 431:
					Var0 = {-790.1639f, 335.2293f, 187.1133f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 133:
					Var0 = {-793.5669f, 340.5959f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 134:
					Var0 = {-793.5555f, 341.7935f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 130:
					Var0 = {-793.39f, 341.565f, 186.114f};
					Var0.f_3 = {0f, 0f, -91f};
					break;
				
				case 433:
					Var0 = {-789.6328f, 334.3963f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 434:
					Var0 = {-789.6397f, 335.5693f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 432:
					Var0 = {-789.696f, 335.38f, 186.114f};
					Var0.f_3 = {0f, 0f, -91f};
					break;
				
				case 102:
					Var0 = {-793.5547f, 342.9295f, 186.1135f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-793.5555f, 341.7935f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-793.808f, 341.84f, 187.01f};
					Var0.f_3 = {0f, 0f, 88.51f};
					break;
				
				case 501:
					Var0 = {-789.6354f, 336.738f, 186.1136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 502:
					Var0 = {-789.6397f, 335.5693f, 187.8635f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 500:
					Var0 = {-790.125f, 335.69f, 187.01f};
					Var0.f_3 = {0f, 0f, 88.51f};
					break;
				
				case 104:
					Var0 = {-800.4421f, 325.256f, 207.2709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-800.4426f, 326.6761f, 205.1558f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-795.07f, 321.699f, 187.035f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 473:
					Var0 = {-796.497f, 331.5252f, 192.2901f};
					Var0.f_3 = {-34.9118f, 0f, 21.4059f};
					break;
				
				case 474:
					Var0 = {-789.592f, 334.359f, 188.7709f};
					Var0.f_3 = {-26.6941f, 0f, -139.8585f};
					break;
				
				case 475:
					Var0 = {-796.4861f, 322.8627f, 188.785f};
					Var0.f_3 = {-27.0831f, 0f, 3.9303f};
					break;
				
				case 169:
					Var0 = {-794.368f, 322.0654f, 186.3132f};
					break;
				
				case 170:
					Var0 = {-795.291f, 322.0415f, 187.8132f};
					break;
				
				case 181:
					Var0 = {-795.102f, 321.527f, 187.025f};
					Var0.f_3 = {0f, 0f, -152.431f};
					break;
				
				case 546:
					Var0 = {-787.7805f, 334.9232f, 186.1134f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_11(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 73:
			switch (iParam0)
			{
				case 278:
					Var0 = {-798.7061f, 341.8386f, 204.7183f};
					break;
				
				case 279:
					Var0 = {-785.138f, 341.7283f, 208.6144f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-175.0825f, 497.5359f, 136.6536f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-172.8586f, 497.9793f, 139.1536f};
					Var0.f_3 = {0f, 0f, 6.0703f};
					break;
				
				case 3:
					Var0 = {-170.4f, 487f, 133.8f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-165.6559f, 478.3115f, 139.4199f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-170.4f, 501.9f, 132.8f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-179.25f, 494.9512f, 128.857f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-167.6152f, 497.1908f, 139.6569f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {-168.8141f, 493.1552f, 128.8654f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {-176.7701f, 491.5644f, 132.2936f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-775.0327f, 340.3672f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90.0569f};
					break;
				
				case 7:
					Var0 = {-172.988f, 491.272f, 129.053f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 8:
					Var0 = {-169.675f, 495.252f, 131.463f};
					Var0.f_3 = {-7.632f, 0f, -110.063f};
					break;
				
				case 141:
					Var0 = {-173.078f, 489.054f, 130.627f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 142:
					Var0 = {-172.739f, 489.146f, 131.777f};
					Var0.f_3 = {180f, -180f, 11f};
					break;
				
				case 143:
					Var0 = {-170.879f, 489.507f, 131.772f};
					Var0.f_3 = {180f, -180f, 11f};
					break;
				
				case 144:
					Var0 = {-173.609f, 491.939f, 130.576f};
					Var0.f_3 = {0.1322f, 0.0536f, -168.934f};
					break;
				
				case 145:
					Var0 = {-172.638f, 492.134f, 130.577f};
					Var0.f_3 = {-0.2118f, 0.062f, -167.343f};
					break;
				
				case 146:
					Var0 = {-173.609f, 491.939f, 130.576f};
					Var0.f_3 = {0.994f, 0.0536f, 184.211f};
					break;
				
				case 147:
					Var0 = {-174.947f, 490.441f, 131.015f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 148:
					Var0 = {-174.823f, 489.964f, 129.992f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 149:
					Var0 = {-170.7103f, 491.0771f, 129.0436f};
					Var0.f_3 = {0f, 0f, 114.6864f};
					break;
				
				case 150:
					Var0 = {-171.5056f, 493.8445f, 129.0436f};
					Var0.f_3 = {0f, 0f, 156.2637f};
					break;
				
				case 151:
					Var0 = {-174.0269f, 493.4414f, 129.0436f};
					Var0.f_3 = {0f, 0f, 183.8747f};
					break;
				
				case 152:
					Var0 = {-175.5986f, 491.8787f, 129.0436f};
					Var0.f_3 = {0f, 0f, 205.0738f};
					break;
				
				case 153:
					Var0 = {-173.107f, 489.446f, 129.049f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 154:
					Var0 = {-173.545f, 490.971f, 131.16f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 155:
					Var0 = {-173.544f, 490.971f, 130.215f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 157:
					Var0 = {-173.543f, 491.603f, 130.577f};
					Var0.f_3 = {-7.145f, 0.0536f, 59.2917f};
					break;
				
				case 158:
					Var0 = {-172.671f, 491.241f, 130.581f};
					Var0.f_3 = {-2.3423f, 0.0392f, -166.756f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-173.277f, 494.095f, 129.048f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 174:
					Var0 = {-176.451f, 497.811f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 175:
					Var0 = {-176.341f, 498.471f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 176:
					Var0 = {-176.231f, 499.131f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 177:
					Var0 = {-176.121f, 499.791f, 129.057f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 178:
					Var0 = {-164.366f, 494.695f, 129.048f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 179:
					Var0 = {-168.055f, 497.6f, 129.787f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 180:
					Var0 = {-167.354f, 496.865f, 129.787f};
					Var0.f_3 = {9.1439f, 0f, -226.355f};
					break;
				
				case 201:
					Var0 = {-175.0776f, 496.811f, 138.0631f};
					Var0.f_3 = {-2.6572f, 0.071f, -18.613f};
					break;
				
				case 235:
					Var0 = {-196.787f, 496.789f, 128.847f};
					Var0.f_3 = {-0.3015f, 0f, -96.8483f};
					break;
				
				case 271:
					Var0 = {-164.2207f, 481.8606f, 136.2704f};
					Var0.f_3 = {0f, 0f, 352.6839f};
					break;
				
				case 272:
					Var0 = {-166.0936f, 481.5848f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0.5617f};
					break;
				
				case 273:
					Var0 = {-166.7556f, 482.014f, 136.2704f};
					Var0.f_3 = {0f, 0f, 97.7813f};
					break;
				
				case 274:
					Var0 = {-164.7762f, 485.2427f, 136.2442f};
					Var0.f_3 = {0f, 0f, 117.9575f};
					break;
				
				case 275:
					Var0 = {-166.4324f, 481.537f, 136.2436f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 304:
					Var0 = {-184.442f, 498.022f, 122.84f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 305:
					Var0 = {-173.763f, 498.355f, 137.806f};
					Var0.f_3 = {0f, 0f, 13f};
					break;
				
				case 308:
					Var0 = {-172.574f, 501.611f, 129.048f};
					Var0.f_3 = {0f, 0f, -55.4023f};
					break;
				
				case 309:
					Var0 = {-168.281f, 503.361f, 129.048f};
					Var0.f_3 = {0f, 0f, 101f};
					break;
				
				case 14:
					Var0 = {-161.6548f, 482.8907f, 136.2438f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-172.3831f, 497.8868f, 138.1285f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-169.4518f, 480.9929f, 136.2442f};
					Var0.f_3 = {0f, 0f, 344.7783f};
					break;
				
				case 10:
					Var0 = {-164.8997f, 491.9128f, 136.4436f};
					Var0.f_3 = {0f, 0f, 107.1011f};
					break;
				
				case 11:
					Var0 = {-173.0706f, 495.1959f, 136.6721f};
					Var0.f_3 = {0f, 0f, 188.6403f};
					break;
				
				case 12:
					Var0 = {-168.3477f, 483.4451f, 132.879f};
					Var0.f_3 = {0f, 0f, 190.8347f};
					break;
				
				case 16:
					Var0 = {-165.513f, 480.552f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-165.2708f, 480.9601f, 136.3812f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-166.0695f, 480.8013f, 138.1186f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-166.55f, 480.35f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-166.9543f, 480.5982f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-166.0695f, 480.8013f, 138.1186f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-167.581f, 481.445f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-167.0705f, 481.1044f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-167.2282f, 481.9047f, 138.0204f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-167.912f, 482.804f, 136.774f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-167.4854f, 483.3647f, 136.2704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-167.2751f, 482.3819f, 138.0204f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-799.761f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-799.757f, 337.57f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-799.757f, 335.847f, 207.043f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-800.721f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-800.72f, 337.588f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-800.733f, 335.888f, 207.224f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-168.5386f, 482.6213f, 137.9076f};
					Var0.f_3 = {0.3833f, 0f, -87.7897f};
					break;
				
				case 35:
					Var0 = {-164.0561f, 482.3845f, 137.3793f};
					Var0.f_3 = {1.0126f, 0f, -79.1184f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-172.0057f, 491.9648f, 138.085f};
					Var0.f_3 = {-5.7141f, 0f, -128.7489f};
					break;
				
				case 39:
					Var0 = {-172.0057f, 487.7235f, 138.085f};
					Var0.f_3 = {-5.7141f, 0f, -135.9926f};
					break;
				
				case 120:
					Var0 = {-168.9293f, 480.117f, 134.1824f};
					Var0.f_3 = {-4.9261f, 0f, -22.4311f};
					break;
				
				case 121:
					Var0 = {-166.2631f, 480.117f, 134.1824f};
					Var0.f_3 = {-4.9261f, 0f, -33.5511f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-167.3926f, 487.7373f, 132.8437f};
					Var0.f_3 = {0f, 0f, 185.7943f};
					break;
				
				case 41:
					Var0 = {-166.37f, 482.274f, 136.267f};
					Var0.f_3 = {0f, 0f, 101.16f};
					break;
				
				case 126:
					Var0 = {-166.6772f, 482.5891f, 136.2704f};
					break;
				
				case 127:
					Var0 = {-166.4967f, 481.5552f, 138.0204f};
					break;
				
				case 42:
					Var0 = {-166.37f, 482.274f, 136.267f};
					Var0.f_3 = {0f, 0f, 101.16f};
					break;
				
				case 46:
					Var0 = {-164.2584f, 484.9542f, 133.8511f};
					Var0.f_3 = {0f, 0f, -131.45f};
					break;
				
				case 47:
					Var0 = {-163.457f, 483.474f, 133.282f};
					Var0.f_3 = {0f, 0f, -166.68f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-162.6263f, 484.8703f, 132.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-164.7478f, 484.4771f, 134.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 340:
					Var0 = {-161.9514f, 483.8063f, 134.6804f};
					Var0.f_3 = {0f, 0f, -79f};
					break;
				
				case 612:
					Var0 = {-163.988f, 481.337f, 133.863f};
					Var0.f_3 = {0f, 0f, -31.68f};
					break;
				
				case 615:
					Var0 = {-162.3055f, 482.5231f, 132.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-164.4513f, 482.0749f, 134.8697f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-168.338f, 490.5f, 133.028f};
					Var0.f_3 = {0f, 0f, 81.0207f};
					break;
				
				case 57:
					Var0 = {-168.421f, 490.779f, 133.025f};
					Var0.f_3 = {0f, 0f, -78.75f};
					break;
				
				case 64:
					Var0 = {-167.851f, 490.0606f, 135.7694f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-167.5152f, 490.5291f, 134.8193f};
					Var0.f_3 = {-8.5698f, 0f, 118.8549f};
					break;
				
				case 58:
					Var0 = {-166.1256f, 490.0562f, 135.3182f};
					Var0.f_3 = {1.1132f, 0.1017f, 78.9651f};
					break;
				
				case 59:
					Var0 = {-166.589f, 489.7625f, 135.3233f};
					Var0.f_3 = {-7.0985f, 0.0535f, 82.2329f};
					break;
				
				case 60:
					Var0 = {-166.9374f, 490.8625f, 134.5452f};
					Var0.f_3 = {-6.8571f, 0f, 131.6332f};
					break;
				
				case 61:
					Var0 = {-166.9697f, 489.8927f, 135.6625f};
					Var0.f_3 = {-11.4914f, 0.1004f, 75.5478f};
					break;
				
				case 62:
					Var0 = {-167.7089f, 489.8488f, 135.6187f};
					Var0.f_3 = {-22.5721f, -0.0838f, 81.6919f};
					break;
				
				case 63:
					Var0 = {-168.5833f, 494.9f, 134.5053f};
					Var0.f_3 = {-1.0545f, 0f, -167.6487f};
					break;
				
				case 66:
					Var0 = {-166.4547f, 491.385f, 132.8437f};
					Var0.f_3 = {0f, 0f, 2f};
					break;
				
				case 67:
					Var0 = {-169.3389f, 490.9203f, 135.2034f};
					break;
				
				case 110:
					Var0 = {-168.2406f, 491.6804f, 132.8611f};
					Var0.f_3 = {0f, 0f, 18.306f};
					break;
				
				case 68:
					Var0 = {-164.5028f, 487.4701f, 134.0591f};
					break;
				
				case 109:
					Var0 = {-163.5246f, 487.6743f, 133.9934f};
					break;
				
				case 69:
					Var0 = {-164.5202f, 483.4868f, 137.2654f};
					Var0.f_3 = {0f, 0f, 60.1065f};
					break;
				
				case 70:
					Var0 = {-164.163f, 484.498f, 136.784f};
					Var0.f_3 = {0f, 0f, 142.25f};
					break;
				
				case 71:
					Var0 = {-163.0436f, 483.429f, 136.2442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-168.8236f, 482.4795f, 138.9579f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-164.9669f, 483.3863f, 137.4704f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-165.6417f, 484.3788f, 137.2653f};
					Var0.f_3 = {0f, 0f, 237.9561f};
					break;
				
				case 75:
					Var0 = {-164.8447f, 483.716f, 137.2999f};
					Var0.f_3 = {0f, 0f, -35.91f};
					break;
				
				case 76:
					Var0 = {-164.9954f, 484.6449f, 137.3065f};
					Var0.f_3 = {0f, 0f, 237.9561f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-166.444f, 496.71f, 136.653f};
					Var0.f_3 = {0f, 0f, -163.44f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-166.6697f, 496.8538f, 136.6536f};
					break;
				
				case 136:
					Var0 = {-165.9252f, 497.0006f, 138.4036f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-170.5805f, 481.6559f, 136.2442f};
					break;
				
				case 82:
					Var0 = {-170.6783f, 482.6563f, 137.9942f};
					break;
				
				case 78:
					Var0 = {-170.645f, 482.24f, 136.242f};
					Var0.f_3 = {0f, 0f, -77.04f};
					break;
				
				case 133:
					Var0 = {-170.5805f, 481.6559f, 136.2442f};
					break;
				
				case 134:
					Var0 = {-170.6783f, 482.6563f, 137.9942f};
					break;
				
				case 130:
					Var0 = {-170.645f, 482.24f, 136.242f};
					Var0.f_3 = {0f, 0f, -77.04f};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {-169.932f, 494.616f, 136.654f};
					Var0.f_3 = {0f, 0f, -172.8f};
					break;
				
				case 86:
					Var0 = {-169.3039f, 494.8466f, 136.6536f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-170.5257f, 494.6144f, 138.4035f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-173.755f, 498.325f, 137.805f};
					Var0.f_3 = {0f, 0f, 11.1f};
					break;
				
				case 94:
					Var0 = {-174.927f, 499.487f, 136.717f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 95:
					Var0 = {-174.7326f, 497.7486f, 136.6536f};
					Var0.f_3 = {0f, 0f, 9.66f};
					break;
				
				case 96:
					Var0 = {-174.81f, 498.54f, 137.7175f};
					Var0.f_3 = {0f, 0f, -166.26f};
					break;
				
				case 97:
					Var0 = {-173.719f, 496.1693f, 137.7175f};
					Var0.f_3 = {0f, 0f, 58.06f};
					break;
				
				case 98:
					Var0 = {-174.8786f, 496.8369f, 137.7175f};
					Var0.f_3 = {0f, 0f, -117.76f};
					break;
				
				case 99:
					Var0 = {-775.316f, 340.308f, 206.654f};
					Var0.f_3 = {0.18f, 0f, -90f};
					break;
				
				case 100:
					Var0 = {-174.5523f, 497.1214f, 136.6721f};
					Var0.f_3 = {0f, 0f, 18.2729f};
					break;
				
				case 101:
					Var0 = {-775.1893f, 340.8357f, 208.0344f};
					Var0.f_3 = {-0.162607f, 0.264814f, 116.59f};
					break;
				
				case 102:
					Var0 = {-170.9538f, 482.8296f, 136.2442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-171.1906f, 483.9088f, 137.7442f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-171.265f, 482.663f, 137.125f};
					Var0.f_3 = {0f, 0f, 76.32f};
					break;
				
				case 104:
					Var0 = {-170.67f, 482.1911f, 132.8437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-170.8454f, 483.0067f, 134.3437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-170.865f, 482.245f, 133.705f};
					Var0.f_3 = {0f, 0f, 110.16f};
					break;
				
				case 181:
					Var0 = {-169.938f, 494.725f, 129.775f};
					Var0.f_3 = {0f, 0f, -78.84f};
					break;
				
				case 169:
					Var0 = {-170.4434f, 495.2874f, 129.0436f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-170.2916f, 494.5287f, 130.5436f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-174.4623f, 499.1877f, 137.9236f};
					Var0.f_3 = {90f, 0f, 10.9f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-173.1384f, 499.1628f, 136.6536f};
					Var0.f_3 = {0f, 0f, 185.2395f};
					break;
				
				case 122:
					Var0 = {-172.4295f, 495.6633f, 136.7f};
					Var0.f_3 = {0f, 0f, 192.7531f};
					break;
				
				case 123:
					Var0 = {-174.2972f, 494.7493f, 136.6536f};
					Var0.f_3 = {0f, 0f, 203.5112f};
					break;
				
				case 124:
					Var0 = {-172.8577f, 494.0585f, 136.6535f};
					Var0.f_3 = {0f, 0f, 207.16f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-173.038f, 495.184f, 130.217f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 187:
					Var0 = {-173.001f, 495.253f, 129.047f};
					Var0.f_3 = {0f, 0f, 190.713f};
					break;
				
				case 188:
					Var0 = {-165.371f, 496.361f, 130.527f};
					Var0.f_3 = {-0.7f, 0f, -205.1f};
					break;
				
				case 189:
					Var0 = {-165.471f, 496.461f, 130.527f};
					Var0.f_3 = {0.1f, 0f, -232.3f};
					break;
				
				case 190:
					Var0 = {-175.743f, 493.448f, 130.486f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 191:
					Var0 = {-175.792f, 493.537f, 130.486f};
					Var0.f_3 = {-3.1551f, 0f, -61.2858f};
					break;
				
				case 192:
					Var0 = {-174.471f, 498.461f, 130.527f};
					Var0.f_3 = {1.3f, 0f, -250.8f};
					break;
				
				case 193:
					Var0 = {-174.301f, 497.661f, 130.527f};
					Var0.f_3 = {1.3f, 0f, -264.596f};
					break;
				
				case 194:
					Var0 = {-166.793f, 491.363f, 130.162f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 195:
					Var0 = {-173.171f, 495.661f, 130.427f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 196:
					Var0 = {-171.6152f, 492.7902f, 129.0436f};
					Var0.f_3 = {0f, 0f, 151.6694f};
					break;
				
				case 197:
					Var0 = {-175.521f, 494.234f, 129.048f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 198:
					Var0 = {-178.105f, 496.171f, 129.051f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 199:
					Var0 = {-172.2417f, 496.4529f, 129.0436f};
					Var0.f_3 = {0f, 0f, 188.6054f};
					break;
				
				case 200:
					Var0 = {-176.22f, 494.651f, 129.048f};
					Var0.f_3 = {0f, 0f, -269.352f};
					break;
				
				case 284:
					Var0 = {-177.056f, 493.87f, 130.449f};
					Var0.f_3 = {-3.027f, 0f, -34.1061f};
					break;
				
				case 285:
					Var0 = {-177.54f, 494.55f, 130.434f};
					Var0.f_3 = {-2.4917f, 0f, -43.7623f};
					break;
				
				case 286:
					Var0 = {-174.044f, 498.909f, 130.867f};
					Var0.f_3 = {-2.6168f, 0f, -242.364f};
					break;
				
				case 287:
					Var0 = {-174.077f, 498.318f, 130.853f};
					Var0.f_3 = {-2.7465f, 0f, -254.215f};
					break;
				
				case 202:
					Var0 = {-172.7426f, 494.3526f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 203:
					Var0 = {-171.8187f, 493.9699f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 204:
					Var0 = {-173.1253f, 493.4287f, 136.6535f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 205:
					Var0 = {-173.6664f, 494.7353f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 206:
					Var0 = {-172.3599f, 495.2765f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 207:
					Var0 = {-172.2014f, 493.0461f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 208:
					Var0 = {-174.0491f, 493.8114f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 209:
					Var0 = {-173.2838f, 495.6591f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 210:
					Var0 = {-171.436f, 494.8938f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 211:
					Var0 = {-170.8948f, 493.5872f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 212:
					Var0 = {-173.5079f, 492.5049f, 136.6535f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 213:
					Var0 = {-174.5903f, 495.118f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 214:
					Var0 = {-171.9772f, 496.2003f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 215:
					Var0 = {-171.6602f, 491.7395f, 136.6534f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 216:
					Var0 = {-175.3557f, 493.2702f, 136.6536f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
				
				case 217:
					Var0 = {-173.825f, 496.0657f, 136.6721f};
					Var0.f_3 = {0f, 0f, 204.2824f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-174.344f, 492.146f, 129.052f};
					Var0.f_3 = {0f, 0f, -123.456f};
					break;
				
				case 237:
					Var0 = {-175.054f, 493.099f, 129.052f};
					Var0.f_3 = {0f, 0f, -110.657f};
					break;
				
				case 238:
					Var0 = {-174.218f, 493.344f, 129.052f};
					Var0.f_3 = {0f, 0f, -150.877f};
					break;
				
				case 239:
					Var0 = {-175.262f, 491.218f, 129.052f};
					Var0.f_3 = {0f, 0f, -79f};
					break;
				
				case 240:
					Var0 = {-171.862f, 491.237f, 130.614f};
					Var0.f_3 = {-2.8579f, 0f, 67.2119f};
					break;
				
				case 241:
					Var0 = {-174.864f, 493.148f, 129.057f};
					Var0.f_3 = {0f, 0f, 162.498f};
					break;
				
				case 242:
					Var0 = {-175.651f, 493.336f, 129.057f};
					Var0.f_3 = {0f, 0f, -148.34f};
					break;
				
				case 243:
					Var0 = {-175.269f, 493.885f, 129.057f};
					Var0.f_3 = {0f, 0f, 184.82f};
					break;
				
				case 244:
					Var0 = {-174.37f, 493.733f, 129.057f};
					Var0.f_3 = {0f, 0f, 168.395f};
					break;
				
				case 245:
					Var0 = {-174.913f, 490.978f, 130.721f};
					Var0.f_3 = {-5.44662f, 0f, 13.0346f};
					break;
				
				case 246:
					Var0 = {-175.411f, 492.076f, 129.056f};
					Var0.f_3 = {0f, 0f, -85.6566f};
					break;
				
				case 247:
					Var0 = {-175.465f, 492.78f, 129.052f};
					Var0.f_3 = {0f, 0f, -124.607f};
					break;
				
				case 248:
					Var0 = {-176.21f, 492.544f, 129.057f};
					Var0.f_3 = {0f, 0f, -116.412f};
					break;
				
				case 249:
					Var0 = {-175.819f, 491.724f, 129.056f};
					Var0.f_3 = {0f, 0f, -76.0166f};
					break;
				
				case 250:
					Var0 = {-173.059f, 492.16f, 130.621f};
					Var0.f_3 = {-2.98413f, 0f, 94.3793f};
					break;
				
				case 251:
					Var0 = {-170.994f, 492.854f, 129.048f};
					Var0.f_3 = {0f, 0f, 89.6608f};
					break;
				
				case 252:
					Var0 = {-170.299f, 493.401f, 129.048f};
					Var0.f_3 = {0f, 0f, 104.311f};
					break;
				
				case 253:
					Var0 = {-170.349f, 492.432f, 129.048f};
					Var0.f_3 = {0f, 0f, 78.2858f};
					break;
				
				case 254:
					Var0 = {-170.727f, 491.976f, 129.048f};
					Var0.f_3 = {0f, 0f, 66.3858f};
					break;
				
				case 255:
					Var0 = {-173.163f, 492.738f, 130.474f};
					Var0.f_3 = {-0.2929f, 0f, -83.1173f};
					break;
				
				case 256:
					Var0 = {-173.518f, 490.294f, 129.052f};
					Var0.f_3 = {0f, 0f, -98.9085f};
					break;
				
				case 257:
					Var0 = {-175.43f, 490.851f, 129.052f};
					Var0.f_3 = {0f, 0f, -97.7835f};
					break;
				
				case 258:
					Var0 = {-175.096f, 489.897f, 129.052f};
					Var0.f_3 = {0f, 0f, -83.1335f};
					break;
				
				case 259:
					Var0 = {-174.811f, 491.031f, 129.052f};
					Var0.f_3 = {0f, 0f, -113.008f};
					break;
				
				case 260:
					Var0 = {-172.17f, 490.09f, 130.581f};
					Var0.f_3 = {-1.83503f, 0f, 89.2696f};
					break;
				
				case 307:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 331:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 332:
					Var0 = {-175.188f, 492.992f, 130.598f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
				
				case 333:
					Var0 = {-166.583f, 493.269f, 129.915f};
					Var0.f_3 = {0f, 0f, -115f};
					break;
				
				case 334:
					Var0 = {-174.614f, 493.776f, 130.716f};
					Var0.f_3 = {0f, 0f, -6.85f};
					break;
				
				case 298:
					Var0 = {-171.0628f, 481.9798f, 137.2427f};
					break;
				
				case 299:
					Var0 = {-169.6761f, 494.188f, 137.6043f};
					break;
				
				case 300:
					Var0 = {-173.8131f, 496.8874f, 129.0412f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 26.882f;
					break;
				
				case 301:
					Var0 = {-172.2603f, 496.7129f, 129.0436f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 8.9738f;
					break;
				
				case 302:
					Var0 = {-172.5036f, 498.7915f, 129.0418f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 55.0647f;
					break;
				
				case 303:
					Var0 = {-174.2426f, 498.6731f, 129.0391f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 49.5334f;
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {-163.1103f, 484.7386f, 137.2687f};
					Var0.f_3 = {-0.0155f, -0.5599f, 126.1069f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {-163.6812f, 484.3223f, 137.2687f};
					Var0.f_3 = {-0.0155f, -0.5599f, 126.1069f};
					break;
				
				case 311:
					Var0 = {-172.215f, 490.042f, 136.69f};
					Var0.f_3 = {0f, 0f, -15.3f};
					break;
				
				case 234:
					Var0 = {-174.569f, 490.772f, 131.048f};
					Var0.f_3 = {0f, 0f, 191f};
					break;
				
				case 261:
					Var0 = {-172.178f, 491.102f, 130.04f};
					Var0.f_3 = {0f, 0f, 158f};
					break;
				
				case 262:
					Var0 = {-172.178f, 491.102f, 130.04f};
					Var0.f_3 = {0f, 0f, 158f};
					break;
				
				case 263:
					Var0 = {-163.159f, 479.715f, 137.242f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 264:
					Var0 = {-163.159f, 479.715f, 137.242f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 265:
					Var0 = {-163.159f, 479.715f, 137.205f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 266:
					Var0 = {-163.159f, 479.715f, 137.205f};
					Var0.f_3 = {0f, 0f, 172.08f};
					break;
				
				case 267:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 268:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 269:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 270:
					Var0 = {-167.134f, 483.09f, 137.305f};
					Var0.f_3 = {0f, 0f, -77.4f};
					break;
				
				case 312:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 313:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 314:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 315:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 316:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 317:
					Var0 = {-166.878f, 481.908f, 137.291f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 318:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 319:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 320:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 321:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 322:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 323:
					Var0 = {-165.389f, 482.113f, 137.309f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 324:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 325:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 326:
					Var0 = {-164.528f, 493.608f, 137.691f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 327:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 328:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 329:
					Var0 = {-164.528f, 493.696f, 137.666f};
					Var0.f_3 = {0f, 0f, -174.96f};
					break;
				
				case 475:
					Var0 = {-172.5f, 493.1f, 130f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {-168.7f, 483.9f, 133.9f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {-169.1f, 485.3f, 137.4f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 546:
					Var0 = {-166.432f, 481.537f, 136.243f};
					Var0.f_3 = {0f, 0f, 11f};
					break;
			}
			break;
		
		case 77:
			switch (iParam0)
			{
				case 278:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 279:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 280:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 281:
					Var0 = {0f, 0f, 0f};
					break;
				
				case 282:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {116.4776f, 559.8413f, 183.2967f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {117.9619f, 560.0188f, 185.8099f};
					Var0.f_3 = {0f, 0f, 1.1032f};
					break;
				
				case 3:
					Var0 = {119.2f, 550.6f, 180.5f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {122.8527f, 539.0169f, 179.3677f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {120.3379f, 563.1256f, 186.385f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {123.4507f, 561.6588f, 179.8728f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {113.1089f, 560.6088f, 175.4467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 483:
					Var0 = {121.3152f, 567.02f, 178.8824f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 484:
					Var0 = {112.4321f, 566.0848f, 175.5437f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {117.2947f, 559.1152f, 183.3195f};
					Var0.f_3 = {0f, 0f, 184.2975f};
					break;
				
				case 7:
					Var0 = {117.247f, 568.7f, 175.703f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 8:
					Var0 = {113.599f, 565.024f, 178.113f};
					Var0.f_3 = {-7.632f, 0f, 64.937f};
					break;
				
				case 141:
					Var0 = {117.53f, 570.901f, 177.277f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 142:
					Var0 = {117.184f, 570.84f, 178.427f};
					Var0.f_3 = {180f, -180f, 186f};
					break;
				
				case 143:
					Var0 = {115.3f, 570.642f, 178.422f};
					Var0.f_3 = {180f, -180f, 186f};
					break;
				
				case 144:
					Var0 = {117.807f, 567.981f, 177.226f};
					Var0.f_3 = {0.1322f, 0.0536f, 6.0657f};
					break;
				
				case 158:
					Var0 = {116.934f, 568.759f, 177.231f};
					Var0.f_3 = {-2.3423f, 0.0392f, 8.2442f};
					break;
				
				case 145:
					Var0 = {116.823f, 567.871f, 177.227f};
					Var0.f_3 = {-0.2118f, 0.062f, 7.6568f};
					break;
				
				case 146:
					Var0 = {117.807f, 567.981f, 177.226f};
					Var0.f_3 = {0.994f, 0.0536f, 359.211f};
					break;
				
				case 147:
					Var0 = {119.271f, 569.357f, 177.665f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 148:
					Var0 = {119.189f, 569.843f, 176.642f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 153:
					Var0 = {117.525f, 570.508f, 175.699f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 154:
					Var0 = {117.828f, 568.952f, 177.81f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 155:
					Var0 = {117.827f, 568.951f, 176.865f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 157:
					Var0 = {117.771f, 568.321f, 177.227f};
					Var0.f_3 = {-7.145f, 0.0536f, 234.292f};
					break;
				
				case 234:
					Var0 = {118.866f, 569.061f, 177.698f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 149:
					Var0 = {114.8325f, 569.0005f, 175.6971f};
					Var0.f_3 = {0f, 0f, 287.6271f};
					break;
				
				case 150:
					Var0 = {115.0929f, 565.8835f, 175.6971f};
					Var0.f_3 = {0f, 0f, 337.041f};
					break;
				
				case 151:
					Var0 = {117.4577f, 566.4731f, 175.6971f};
					Var0.f_3 = {0f, 0f, 340.7748f};
					break;
				
				case 152:
					Var0 = {119.8496f, 567.2011f, 175.6971f};
					Var0.f_3 = {0f, 0f, 19.3824f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {115.733f, 564.887f, 175.698f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 174:
					Var0 = {119.096f, 568.431f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 175:
					Var0 = {119.764f, 568.391f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 176:
					Var0 = {120.432f, 568.351f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 177:
					Var0 = {121.1f, 568.31f, 175.707f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 178:
					Var0 = {117.261f, 556.087f, 175.698f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 179:
					Var0 = {119.764f, 560.06f, 176.437f};
					Var0.f_3 = {9.1439f, 0f, 49.6453f};
					break;
				
				case 180:
					Var0 = {119.106f, 559.285f, 176.437f};
					Var0.f_3 = {9.1439f, 0f, 49.6453f};
					break;
				
				case 201:
					Var0 = {116.2337f, 558.9236f, 184.8102f};
					Var0.f_3 = {-1.2605f, -0.117f, -20.7566f};
					break;
				
				case 235:
					Var0 = {140.474f, 561.13f, 175.497f};
					Var0.f_3 = {-0.3015f, 0f, 78.1517f};
					break;
				
				case 261:
					Var0 = {116.455f, 568.94f, 176.69f};
					Var0.f_3 = {0f, 0f, 333f};
					break;
				
				case 262:
					Var0 = {116.455f, 568.94f, 176.69f};
					Var0.f_3 = {0f, 0f, 333f};
					break;
				
				case 263:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 264:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 265:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 266:
					Var0 = {125.669f, 540.35f, 183.878f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 267:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 268:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 269:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 270:
					Var0 = {122.019f, 542.775f, 183.928f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 312:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 313:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 314:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 315:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 316:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 317:
					Var0 = {121.98f, 543.279f, 183.939f};
					Var0.f_3 = {0f, 0f, -95.04f};
					break;
				
				case 318:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 319:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 320:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 321:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 322:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 323:
					Var0 = {123.311f, 542.738f, 183.922f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 324:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 325:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 326:
					Var0 = {125.169f, 554.163f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 327:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 328:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 329:
					Var0 = {125.169f, 554.25f, 184.353f};
					Var0.f_3 = {0f, 0f, 177.48f};
					break;
				
				case 271:
					Var0 = {124.8518f, 542.6487f, 182.9297f};
					Var0.f_3 = {0f, 0f, 178.684f};
					break;
				
				case 272:
					Var0 = {123.4077f, 542.3077f, 182.9297f};
					Var0.f_3 = {0f, 0f, 186.562f};
					break;
				
				case 273:
					Var0 = {122.5815f, 542.4899f, 182.9297f};
					Var0.f_3 = {0f, 0f, 283.781f};
					break;
				
				case 274:
					Var0 = {122.1604f, 543.7183f, 182.9297f};
					Var0.f_3 = {0f, 0f, 303.957f};
					break;
				
				case 275:
					Var0 = {122.5349f, 542.5076f, 182.8967f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 304:
					Var0 = {128.069f, 560.977f, 169.49f};
					Var0.f_3 = {0f, 0f, 366f};
					break;
				
				case 305:
					Var0 = {117.8f, 560.5f, 184.448f};
					Var0.f_3 = {0f, 0f, 5.04f};
					break;
				
				case 308:
					Var0 = {115.934f, 558.437f, 175.698f};
					Var0.f_3 = {0f, 0f, 119.598f};
					break;
				
				case 309:
					Var0 = {111.504f, 557.067f, 175.698f};
					Var0.f_3 = {0f, 0f, 276f};
					break;
				
				case 14:
					Var0 = {127.2918f, 543.401f, 182.9871f};
					Var0.f_3 = {0f, 0f, -84f};
					break;
				
				case 15:
					Var0 = {115.9149f, 562.2825f, 185.9155f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {119.1077f, 541.812f, 182.8972f};
					Var0.f_3 = {0f, 0f, 346.5059f};
					break;
				
				case 10:
					Var0 = {124.206f, 552.4236f, 183.0967f};
					Var0.f_3 = {0f, 0f, 99.2318f};
					break;
				
				case 11:
					Var0 = {117.5891f, 557.4708f, 183.3f};
					Var0.f_3 = {0f, 0f, 203.9372f};
					break;
				
				case 12:
					Var0 = {120.6515f, 543.9923f, 179.532f};
					Var0.f_3 = {0f, 0f, 196.4342f};
					break;
				
				case 16:
					Var0 = {124.036f, 541.498f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {124.4782f, 542.0929f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {123.4112f, 541.9592f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {122.985f, 541.388f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {122.3936f, 541.8428f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {123.4112f, 541.9592f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {121.233f, 544.03f, 183.425f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {121.8474f, 543.66f, 182.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {121.7479f, 544.5643f, 183.9297f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-798.831f, 336.392f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					break;
				
				case 31:
					break;
				
				case 20:
					break;
				
				case 26:
					break;
				
				case 32:
					break;
				
				case 21:
					break;
				
				case 27:
					break;
				
				case 33:
					break;
				
				case 34:
					Var0 = {120.0193f, 543.7301f, 184.7616f};
					Var0.f_3 = {-6.4435f, 0f, -93.4584f};
					break;
				
				case 35:
					Var0 = {124.7541f, 543.1176f, 184.1151f};
					Var0.f_3 = {0.3841f, 0f, -84.0241f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {117.5934f, 553.3547f, 184.6455f};
					Var0.f_3 = {-4.9687f, 0f, -128.8533f};
					break;
				
				case 39:
					Var0 = {117.5968f, 549.5334f, 184.6455f};
					Var0.f_3 = {-4.9687f, 0f, -135.5197f};
					break;
				
				case 120:
					Var0 = {120.1006f, 540.8033f, 181.1527f};
					Var0.f_3 = {-7.7205f, 0f, -31.997f};
					break;
				
				case 121:
					Var0 = {123.0448f, 540.8033f, 181.1527f};
					Var0.f_3 = {-7.7205f, 0f, -31.997f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {122.2105f, 548.7648f, 179.4972f};
					Var0.f_3 = {0f, 0f, 174.6041f};
					break;
				
				case 41:
					Var0 = {122.63f, 543.209f, 182.917f};
					Var0.f_3 = {0f, 0f, 88.2f};
					break;
				
				case 126:
					Var0 = {122.2454f, 543.8647f, 182.9297f};
					break;
				
				case 127:
					Var0 = {122.3742f, 542.7989f, 184.6797f};
					break;
				
				case 42:
					Var0 = {122.63f, 543.209f, 182.917f};
					Var0.f_3 = {0f, 0f, 88.2f};
					break;
				
				case 46:
					Var0 = {125.1505f, 546.0822f, 180.5208f};
					Var0.f_3 = {0f, 0f, -142.61f};
					break;
				
				case 47:
					Var0 = {125.65f, 544.475f, 179.97f};
					Var0.f_3 = {0f, 0f, -177.84f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {126.4232f, 545.7162f, 179.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {124.3618f, 545.5223f, 181.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 612:
					Var0 = {124.887f, 541.925f, 180.512f};
					Var0.f_3 = {0f, 0f, -41.76f};
					break;
				
				case 615:
					Var0 = {126.7189f, 542.8882f, 179.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {124.6794f, 542.6829f, 181.5227f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {121.75f, 551.25f, 179.7f};
					Var0.f_3 = {0f, 0f, -132.84f};
					break;
				
				case 57:
					Var0 = {121.371f, 551.86f, 179.677f};
					Var0.f_3 = {0f, 0f, -84.24f};
					break;
				
				case 64:
					Var0 = {121.9528f, 551.1089f, 182.449f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {121.6896f, 551.3428f, 181.282f};
					Var0.f_3 = {-12.7072f, 0f, 106.2162f};
					break;
				
				case 58:
					Var0 = {123.4637f, 550.5748f, 182.0598f};
					Var0.f_3 = {1.3316f, 0.0211f, 63.1983f};
					break;
				
				case 59:
					Var0 = {123.2292f, 550.7562f, 182.0586f};
					Var0.f_3 = {-2.6725f, 0.0252f, 75.3702f};
					break;
				
				case 60:
					Var0 = {122.8969f, 551.7355f, 181.568f};
					Var0.f_3 = {-12.6595f, -0.0559f, 111.6776f};
					break;
				
				case 61:
					Var0 = {121.9945f, 550.6105f, 182.3346f};
					Var0.f_3 = {-24.0093f, 0.0018f, 52.9632f};
					break;
				
				case 62:
					Var0 = {121.5827f, 551.2434f, 181.6459f};
					Var0.f_3 = {-23.0919f, 0.0869f, 74.3553f};
					break;
				
				case 63:
					Var0 = {121.3262f, 555.3304f, 180.9944f};
					Var0.f_3 = {-4.7479f, 0f, -174.122f};
					break;
				
				case 66:
					Var0 = {120.2884f, 552.1728f, 179.5101f};
					Var0.f_3 = {0f, 0f, 2.5f};
					break;
				
				case 67:
					Var0 = {123.3423f, 552.4438f, 181.7469f};
					break;
				
				case 110:
					Var0 = {121.8218f, 552.3264f, 179.5141f};
					Var0.f_3 = {0f, 0f, 346.8389f};
					break;
				
				case 68:
					Var0 = {125.3961f, 548.2598f, 180.7278f};
					break;
				
				case 109:
					Var0 = {125.9697f, 548.3368f, 180.6464f};
					break;
				
				case 69:
					Var0 = {124.7203f, 544.2501f, 182.9296f};
					Var0.f_3 = {0f, 0f, 52.8871f};
					break;
				
				case 70:
					Var0 = {124.988f, 545.185f, 183.445f};
					Var0.f_3 = {0f, 0f, 137f};
					break;
				
				case 71:
					Var0 = {126.3463f, 543.9017f, 182.8975f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {120.2029f, 543.7465f, 185.6171f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {124.3153f, 544.3066f, 182.9296f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {123.87f, 544.7672f, 183.9245f};
					Var0.f_3 = {0f, 0f, 229.824f};
					break;
				
				case 75:
					Var0 = {124.2379f, 544.4689f, 183.961f};
					Var0.f_3 = {0f, 0f, -41.02f};
					break;
				
				case 76:
					Var0 = {124.1725f, 545.4073f, 183.9675f};
					Var0.f_3 = {0f, 0f, 137.2f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {123.681f, 557.632f, 183.304f};
					Var0.f_3 = {0f, 0f, -180f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {123.5052f, 557.7494f, 183.2967f};
					break;
				
				case 136:
					Var0 = {124.3367f, 557.8538f, 185.2967f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 133:
					Var0 = {118.3172f, 543.0574f, 182.8972f};
					break;
				
				case 134:
					Var0 = {118.2704f, 543.7819f, 184.6472f};
					break;
				
				case 130:
					Var0 = {118.373f, 543.555f, 182.89f};
					Var0.f_3 = {0f, 0f, -82.44f};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {120.136f, 555.817f, 183.309f};
					Var0.f_3 = {0f, 0f, -174.4f};
					break;
				
				case 86:
					Var0 = {120.666f, 555.8313f, 183.2967f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {119.6679f, 555.7427f, 185.0471f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {117.7951f, 560.5258f, 184.4464f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 94:
					Var0 = {116.708f, 561.789f, 183.359f};
					Var0.f_3 = {0f, 0f, 6.9f};
					break;
				
				case 95:
					Var0 = {116.8164f, 559.4781f, 183.31f};
					Var0.f_3 = {0f, 0f, 5.56f};
					break;
				
				case 96:
					Var0 = {116.757f, 560.8361f, 184.359f};
					Var0.f_3 = {0f, 0f, -170.36f};
					break;
				
				case 97:
					Var0 = {117.6757f, 558.3934f, 184.359f};
					Var0.f_3 = {0f, 0f, 53.96f};
					break;
				
				case 98:
					Var0 = {116.5668f, 559.1422f, 184.359f};
					Var0.f_3 = {0f, 0f, -121.86f};
					break;
				
				case 99:
					Var0 = {117.555f, 562.81f, 184.445f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 100:
					Var0 = {116.7616f, 559.5724f, 183.31f};
					Var0.f_3 = {0f, 0f, 8.74f};
					break;
				
				case 101:
					Var0 = {115.7786f, 564.577f, 184.6896f};
					Var0.f_3 = {-2.5476f, 0.7873f, -144.1641f};
					break;
				
				case 102:
					Var0 = {118.1845f, 544.1455f, 182.8975f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {118.0736f, 545.0422f, 184.6475f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {117.901f, 544.088f, 183.798f};
					Var0.f_3 = {0f, 0f, 85.32f};
					break;
				
				case 104:
					Var0 = {118.5495f, 543.521f, 179.4969f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {118.442f, 544.4215f, 181.2469f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {118.075f, 543.55f, 180.363f};
					Var0.f_3 = {0f, 0f, 91.8f};
					break;
				
				case 181:
					Var0 = {113.863f, 565.563f, 176.399f};
					Var0.f_3 = {0f, 0f, 106.56f};
					break;
				
				case 169:
					Var0 = {114.3477f, 564.9015f, 175.7084f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {114.2297f, 565.869f, 177.4467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 475:
					Var0 = {115.9057f, 567.5313f, 177f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 473:
					Var0 = {121.8264f, 544.0052f, 181f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 474:
					Var0 = {120.1062f, 546.6083f, 185f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {117.13f, 561.44f, 184.56f};
					Var0.f_3 = {90f, 0f, 6f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {118.8059f, 561.6073f, 183.2968f};
					Var0.f_3 = {0f, 0f, 144.7546f};
					break;
				
				case 122:
					Var0 = {117.7512f, 556.8251f, 183.3013f};
					Var0.f_3 = {0f, 0f, 192.1243f};
					break;
				
				case 123:
					Var0 = {118.9029f, 555.9317f, 183.2983f};
					Var0.f_3 = {0f, 0f, 198.3833f};
					break;
				
				case 124:
					Var0 = {117.4407f, 554.3014f, 183.3021f};
					Var0.f_3 = {0f, 0f, 185.1604f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 156:
					Var0 = {117.5551f, 562.8094f, 184.4464f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
				
				case 172:
					Var0 = {116.956f, 564.799f, 176.867f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 187:
					Var0 = {-173.001f, 495.253f, 129.047f};
					Var0.f_3 = {0f, 0f, 190.713f};
					break;
				
				case 188:
					Var0 = {118.813f, 557.261f, 177.177f};
					Var0.f_3 = {-0.7f, 0f, 70.9f};
					break;
				
				case 189:
					Var0 = {118.901f, 557.37f, 177.177f};
					Var0.f_3 = {0.1f, 0f, 43.7f};
					break;
				
				case 190:
					Var0 = {114.832f, 567.272f, 177.136f};
					Var0.f_3 = {-3.1551f, 0f, 214.714f};
					break;
				
				case 191:
					Var0 = {114.915f, 567.329f, 177.136f};
					Var0.f_3 = {-3.1551f, 0f, 214.714f};
					break;
				
				case 192:
					Var0 = {119.95f, 566.53f, 177.177f};
					Var0.f_3 = {1.3f, 0f, 25.2f};
					break;
				
				case 193:
					Var0 = {119.172f, 566.277f, 177.177f};
					Var0.f_3 = {1.3f, 0f, 11.4037f};
					break;
				
				case 194:
					Var0 = {113.693f, 558.153f, 176.812f};
					Var0.f_3 = {0f, 0f, 96f};
					break;
				
				case 195:
					Var0 = {117.301f, 564.945f, 177.077f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 196:
					Var0 = {115.8271f, 568.0894f, 175.6971f};
					Var0.f_3 = {0f, 0f, 320.5218f};
					break;
				
				case 197:
					Var0 = {115.636f, 567.133f, 175.698f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 198:
					Var0 = {117.293f, 569.905f, 175.701f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 199:
					Var0 = {116.208f, 563.5542f, 175.6971f};
					Var0.f_3 = {0f, 0f, 12.1319f};
					break;
				
				case 200:
					Var0 = {115.978f, 567.871f, 175.698f};
					Var0.f_3 = {0f, 0f, 6.6476f};
					break;
				
				case 284:
					Var0 = {-779.2086f, 329.115f, 208.0224f};
					Var0.f_3 = {-3.027f, 0f, 55.8939f};
					break;
				
				case 285:
					Var0 = {-779.8893f, 328.631f, 208.0071f};
					Var0.f_3 = {-2.4917f, 0f, 46.2377f};
					break;
				
				case 286:
					Var0 = {-784.2476f, 332.1267f, 208.4403f};
					Var0.f_3 = {-2.6168f, 0f, -152.3636f};
					break;
				
				case 287:
					Var0 = {-783.6574f, 332.094f, 208.4264f};
					Var0.f_3 = {-2.7465f, 0f, -164.2146f};
					break;
				
				case 202:
					Var0 = {117.4257f, 559.3446f, 183.3099f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 203:
					Var0 = {118.9018f, 554.9273f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 204:
					Var0 = {117.5083f, 554.8685f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 205:
					Var0 = {117.9669f, 558.038f, 183.3099f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 206:
					Var0 = {117.0191f, 556.1034f, 183.2784f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 207:
					Var0 = {117.1845f, 556.7512f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 208:
					Var0 = {118.1322f, 555.6858f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 209:
					Var0 = {117.173f, 558.5792f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 210:
					Var0 = {116.6603f, 557.4968f, 183.2987f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 211:
					Var0 = {118.5779f, 554.11f, 183.3495f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 212:
					Var0 = {118.291f, 557.3924f, 183.2967f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 213:
					Var0 = {118.508f, 556.7315f, 183.2984f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 214:
					Var0 = {117.5126f, 554.0622f, 183.297f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 215:
					Var0 = {117.8724f, 557.2373f, 183.32f};
					Var0.f_3 = {0f, 0f, 184.5629f};
					break;
				
				case 216:
					Var0 = {119.221f, 559.7747f, 183.2968f};
					Var0.f_3 = {0f, 0f, 135.2553f};
					break;
				
				case 217:
					Var0 = {120.1753f, 556.7762f, 183.2971f};
					Var0.f_3 = {0f, 0f, 121.9463f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {118.521f, 567.71f, 175.702f};
					Var0.f_3 = {0f, 0f, 51.5437f};
					break;
				
				case 237:
					Var0 = {119.145f, 566.699f, 175.702f};
					Var0.f_3 = {0f, 0f, 64.3427f};
					break;
				
				case 238:
					Var0 = {118.291f, 566.529f, 175.702f};
					Var0.f_3 = {0f, 0f, 24.123f};
					break;
				
				case 239:
					Var0 = {119.517f, 568.555f, 175.702f};
					Var0.f_3 = {0f, 0f, 96f};
					break;
				
				case 240:
					Var0 = {116.128f, 568.833f, 177.264f};
					Var0.f_3 = {-2.8579f, 0f, 242.212f};
					break;
				
				case 241:
					Var0 = {118.952f, 566.668f, 175.707f};
					Var0.f_3 = {0f, 0f, 337.498f};
					break;
				
				case 242:
					Var0 = {119.72f, 566.411f, 175.707f};
					Var0.f_3 = {0f, 0f, 26.6596f};
					break;
				
				case 243:
					Var0 = {119.291f, 565.897f, 175.707f};
					Var0.f_3 = {0f, 0f, 359.82f};
					break;
				
				case 244:
					Var0 = {118.409f, 566.128f, 175.707f};
					Var0.f_3 = {0f, 0f, 343.395f};
					break;
				
				case 245:
					Var0 = {119.19f, 568.824f, 177.371f};
					Var0.f_3 = {-5.44662f, 0f, 188.035f};
					break;
				
				case 246:
					Var0 = {119.59f, 567.688f, 175.706f};
					Var0.f_3 = {0f, 0f, 89.3434f};
					break;
				
				case 247:
					Var0 = {119.583f, 566.981f, 175.702f};
					Var0.f_3 = {0f, 0f, 50.3927f};
					break;
				
				case 248:
					Var0 = {120.345f, 567.151f, 175.707f};
					Var0.f_3 = {0f, 0f, 58.5877f};
					break;
				
				case 249:
					Var0 = {120.027f, 568.003f, 175.706f};
					Var0.f_3 = {0f, 0f, 98.9834f};
					break;
				
				case 250:
					Var0 = {117.24f, 567.809f, 177.271f};
					Var0.f_3 = {-2.98413f, 0f, 269.379f};
					break;
				
				case 251:
					Var0 = {114.765f, 567.285f, 175.698f};
					Var0.f_3 = {0f, 0f, 264.661f};
					break;
				
				case 252:
					Var0 = {114.025f, 566.801f, 175.698f};
					Var0.f_3 = {0f, 0f, 279.311f};
					break;
				
				case 253:
					Var0 = {114.159f, 567.762f, 175.698f};
					Var0.f_3 = {0f, 0f, 253.286f};
					break;
				
				case 254:
					Var0 = {114.576f, 568.183f, 175.698f};
					Var0.f_3 = {0f, 0f, 241.386f};
					break;
				
				case 255:
					Var0 = {117.289f, 567.181f, 177.124f};
					Var0.f_3 = {-0.2929f, 0f, 91.8827f};
					break;
				
				case 256:
					Var0 = {118.775f, 569.547f, 175.702f};
					Var0.f_3 = {0f, 0f, 76.0915f};
					break;
				
				case 257:
					Var0 = {119.716f, 568.906f, 175.702f};
					Var0.f_3 = {0f, 0f, 77.2165f};
					break;
				
				case 258:
					Var0 = {119.466f, 569.886f, 175.702f};
					Var0.f_3 = {0f, 0f, 91.8665f};
					break;
				
				case 259:
					Var0 = {119.083f, 568.781f, 175.702f};
					Var0.f_3 = {0f, 0f, 61.9915f};
					break;
				
				case 260:
					Var0 = {116.535f, 569.948f, 177.231f};
					Var0.f_3 = {-1.83503f, 0f, 264.27f};
					break;
				
				case 307:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 174f};
					break;
				
				case 331:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 332:
					Var0 = {119.288f, 566.794f, 177.248f};
					Var0.f_3 = {0f, 0f, 186f};
					break;
				
				case 333:
					Var0 = {110.692f, 567.268f, 176.565f};
					Var0.f_3 = {0f, 0f, 60f};
					break;
				
				case 334:
					Var0 = {118.648f, 566.064f, 177.366f};
					Var0.f_3 = {0f, 0f, 168.15f};
					break;
				
				case 298:
					Var0 = {117.9327f, 543.3307f, 183.8931f};
					break;
				
				case 299:
					Var0 = {120.3781f, 555.3716f, 184.2547f};
					break;
				
				case 300:
					Var0 = {116.212f, 561.201f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 301:
					Var0 = {116.98f, 560.359f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 302:
					Var0 = {116.496f, 562.159f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 303:
					Var0 = {115.433f, 560.231f, 175.698f};
					Var0.f_3 = {0f, 0f, 276.836f};
					break;
				
				case 310:
				case 335:
				case 336:
					Var0 = {126.3562f, 545.3469f, 183.9628f};
					Var0.f_3 = {0.2302f, -0.2706f, 120.8358f};
					break;
				
				case 337:
				case 338:
				case 339:
					Var0 = {125.944f, 545.1008f, 183.9648f};
					Var0.f_3 = {0.2302f, -0.2706f, 120.8358f};
					break;
				
				case 311:
					Var0 = {117.523f, 551.659f, 183.343f};
					Var0.f_3 = {0f, 0f, -51.7f};
					break;
				
				case 546:
					Var0 = {122.534f, 542.507f, 182.896f};
					Var0.f_3 = {0f, 0f, 6f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_12(int iParam0, int iParam1)
{
	struct<6> Var0;
	
	switch (iParam1)
	{
		case 61:
			switch (iParam0)
			{
				case 0:
					break;
				
				case 1:
					Var0 = {-776.5227f, 323.7823f, 210.7473f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-778.5126f, 323.7496f, 214.2471f};
					Var0.f_3 = {0f, 0f, 108.6861f};
					break;
				
				case 3:
					Var0 = {-776.3f, 334.6f, 212.5f};
					break;
				
				case 4:
					Var0 = {-777.8493f, 320.4183f, 209.5652f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-777.3683f, 344.2699f, 214.7482f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-761.3398f, 329.3192f, 209.6467f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-800.4241f, 329.2564f, 214.8797f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-782.5724f, 324.1019f, 211.4972f};
					Var0.f_3 = {0f, 0f, 250.3059f};
					break;
				
				case 7:
					Var0 = {-764.6471f, 328.812f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 8:
					Var0 = {-764.9313f, 331.6124f, 212.429f};
					Var0.f_3 = {-7.632f, 0f, -121.063f};
					break;
				
				case 141:
					Var0 = {-761.73f, 328.945f, 211.979f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 142:
					Var0 = {-761.755f, 329.29f, 213.133f};
					Var0.f_3 = {180f, -180f, 90f};
					break;
				
				case 143:
					Var0 = {-761.745f, 331.19f, 213.135f};
					Var0.f_3 = {180f, -180f, 90f};
					break;
				
				case 144:
					Var0 = {-764.599f, 328.964f, 211.952f};
					Var0.f_3 = {0.1322f, 0.0536f, -449.934f};
					break;
				
				case 158:
					Var0 = {-763.714f, 330.001f, 212.01f};
					Var0.f_3 = {-2.3423f, 0.0392f, -447.756f};
					break;
				
				case 145:
					Var0 = {-764.6001f, 329.8803f, 211.9535f};
					Var0.f_3 = {0.1045f, 0.0948f, -86.912f};
					break;
				
				case 146:
					Var0 = {-764.599f, 328.964f, 211.952f};
					Var0.f_3 = {0.994f, 0.0536f, -96.7888f};
					break;
				
				case 147:
					Var0 = {-763.408f, 327.378f, 212.375f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 148:
					Var0 = {-762.916f, 327.408f, 211.352f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 153:
					Var0 = {-762.5432f, 329.3139f, 210.3965f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 154:
					Var0 = {-763.66f, 328.855f, 212.52f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 155:
					Var0 = {-763.66f, 328.856f, 211.575f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 157:
					Var0 = {-764.237f, 329.214f, 212.005f};
					Var0.f_3 = {-7.145f, 0.0536f, -221.708f};
					break;
				
				case 234:
					Var0 = {-763.4594f, 327.7491f, 212.2718f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 149:
					Var0 = {-765.3744f, 327.4776f, 210.3965f};
					Var0.f_3 = {0f, 0f, 284.6798f};
					break;
				
				case 150:
					Var0 = {-766.7778f, 330.676f, 210.3965f};
					Var0.f_3 = {0f, 0f, 263.0767f};
					break;
				
				case 151:
					Var0 = {-766.3467f, 332.6851f, 210.3965f};
					Var0.f_3 = {0f, 0f, 209.9717f};
					break;
				
				case 152:
					Var0 = {-763.444f, 332.6569f, 210.3965f};
					Var0.f_3 = {0f, 0f, 159.6486f};
					break;
				
				case 174:
					Var0 = {-763.4923f, 327.3426f, 210.3965f};
					Var0.f_3 = {0f, 0f, 47.9457f};
					break;
				
				case 175:
					Var0 = {-763.5795f, 327.9056f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 176:
					Var0 = {-763.6245f, 328.2909f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 177:
					Var0 = {-763.6774f, 328.756f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 178:
					Var0 = {-774.7498f, 331.1707f, 210.4373f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 179:
					Var0 = {-782.939f, 338.1156f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 180:
					Var0 = {-782.2037f, 338.8171f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 235:
					Var0 = {-784.2213f, 341.3405f, 211.3644f};
					Var0.f_3 = {-2.2923f, 0f, -135.1282f};
					break;
				
				case 261:
					Var0 = {-763.713f, 329.725f, 211.387f};
					Var0.f_3 = {0f, 0f, -131.25f};
					break;
				
				case 263:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 264:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 265:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 266:
					Var0 = {-773.075f, 341.675f, 211.4f};
					Var0.f_3 = {0f, 0f, -45.25f};
					break;
				
				case 267:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 268:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 269:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 270:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 271:
					Var0 = {-783.2791f, 338.3737f, 210.2371f};
					Var0.f_3 = {0f, 0f, 220.2962f};
					break;
				
				case 272:
					Var0 = {-783.4805f, 337.3643f, 210.197f};
					Var0.f_3 = {0f, 0f, 257.2607f};
					break;
				
				case 273:
					Var0 = {-780.0349f, 337.0173f, 210.197f};
					Var0.f_3 = {0f, 0f, 40.2944f};
					break;
				
				case 274:
					Var0 = {-780.9129f, 336.5271f, 210.197f};
					Var0.f_3 = {0f, 0f, 17.7598f};
					break;
				
				case 275:
					Var0 = {-779.1f, 333.8f, 211.7f};
					Var0.f_3 = {-4.9f, 0f, 40.3f};
					break;
				
				case 304:
					Var0 = {-772.701f, 319.501f, 204.192f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 305:
					Var0 = {-777.968f, 324.294f, 212.126f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 306:
					Var0 = {-778.506f, 331.316f, 210.397f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 308:
					Var0 = {-775.9152f, 323.6722f, 211.0376f};
					Var0.f_3 = {0f, 0f, 93.6366f};
					break;
				
				case 309:
					Var0 = {-780.331f, 323.8253f, 210.9971f};
					Var0.f_3 = {0f, 0f, 265.1681f};
					break;
				
				case 14:
					Var0 = {-781.8525f, 342.028f, 211.188f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-777.7648f, 322.8674f, 214.2165f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-779.1797f, 333.9276f, 210.197f};
					Var0.f_3 = {0f, 0f, 15.0747f};
					break;
				
				case 10:
					Var0 = {-764.1613f, 330.934f, 210.3965f};
					Var0.f_3 = {0f, 0f, 130.9707f};
					break;
				
				case 11:
					Var0 = {-791.767f, 332.9774f, 210.7966f};
					Var0.f_3 = {0f, 0f, 18.201f};
					break;
				
				case 12:
					Var0 = {-772.1329f, 323.2887f, 210.997f};
					Var0.f_3 = {0f, 0f, 69.4807f};
					break;
				
				case 16:
					Var0 = {-781.31f, 335.92f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-781.1396f, 337.2012f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-781.1335f, 335.2529f, 212.3327f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-782.17f, 335.91f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-782.0966f, 337.2361f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-782.0477f, 335.1334f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-783.07f, 335.91f, 210.65f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-782.9213f, 336.8988f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-782.8946f, 335.5682f, 213.2568f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-783.82f, 336.97f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-783.1451f, 336.9444f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-784.7938f, 336.9716f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-783.82f, 337.83f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-783.1597f, 337.8318f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-784.7744f, 337.8362f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-783.81f, 338.68f, 210.66f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-783.133f, 338.7082f, 210.2371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-784.8043f, 338.6786f, 212.286f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-781.8131f, 339.4708f, 211.6216f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 35:
					Var0 = {-780.9454f, 332.7312f, 211.7032f};
					Var0.f_3 = {-4.539f, 0f, 16.647f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					break;
				
				case 38:
					Var0 = {-786.1395f, 341.9217f, 211.3448f};
					Var0.f_3 = {0.0124f, 0.0003f, -121.9123f};
					break;
				
				case 39:
					Var0 = {-786.8088f, 340.5944f, 211.3448f};
					Var0.f_3 = {0.8049f, 0.0003f, -115.7942f};
					break;
				
				case 120:
					Var0 = {-789.6643f, 335.5028f, 211.0014f};
					Var0.f_3 = {-3.5475f, 0.0003f, 132.4699f};
					break;
				
				case 121:
					Var0 = {-790.9958f, 335.9232f, 211.0014f};
					Var0.f_3 = {-0.8993f, 0.0003f, 148.8257f};
					break;
				
				case 125:
					break;
				
				case 40:
					Var0 = {-793.3626f, 326.2888f, 209.7966f};
					Var0.f_3 = {0f, 0f, 352.2422f};
					break;
				
				case 41:
					Var0 = {-780.5624f, 338.0597f, 211.227f};
					Var0.f_3.f_2 = 90f;
					break;
				
				case 42:
					Var0 = {-781.034f, 337.971f, 210.227f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 126:
					Var0 = {-780.2787f, 337.1397f, 210.197f};
					break;
				
				case 127:
					Var0 = {-780.4131f, 338.3048f, 212.2371f};
					break;
				
				case 43:
					break;
				
				case 44:
					break;
				
				case 45:
					break;
				
				case 46:
					Var0 = {-793.2892f, 332.1312f, 209.7966f};
					Var0.f_3 = {0f, 0f, 72.63f};
					break;
				
				case 47:
					Var0 = {-793.594f, 333.759f, 210.225f};
					Var0.f_3 = {0f, 0f, -1f};
					break;
				
				case 48:
					break;
				
				case 49:
					break;
				
				case 50:
					Var0 = {-792.4382f, 332.6826f, 209.7966f};
					break;
				
				case 51:
					Var0 = {-794.6772f, 332.6597f, 211.7966f};
					break;
				
				case 612:
					Var0 = {-792.625f, 335.862f, 210.813f};
					Var0.f_3 = {0f, 0f, 133.2f};
					break;
				
				case 615:
					Var0 = {-794.6525f, 335.1653f, 209.7966f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-792.5333f, 335.1687f, 211.7966f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-797.3611f, 333.4506f, 210.7966f};
					Var0.f_3 = {0f, 0f, 264.6319f};
					break;
				
				case 57:
					Var0 = {-796.8f, 332.849f, 209.951f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 64:
					Var0 = {-796.4452f, 333.5307f, 212.1467f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-796.3611f, 333.2506f, 210.7966f};
					Var0.f_3 = {315f, 0f, 264.6319f};
					break;
				
				case 58:
					Var0 = {-797.3146f, 333.8285f, 211.7727f};
					Var0.f_3 = {15.7322f, -0.0116f, -109.2361f};
					break;
				
				case 59:
					Var0 = {-797.4847f, 333.8927f, 211.7222f};
					Var0.f_3 = {13.1712f, 0.0002f, -108.5568f};
					break;
				
				case 60:
					Var0 = {-797.849f, 333.55f, 211.2733f};
					Var0.f_3 = {4.9339f, -0.0651f, -89.7198f};
					break;
				
				case 61:
					Var0 = {-797.665f, 333.5193f, 212.3671f};
					Var0.f_3 = {-28.4554f, -0.0194f, -91.8209f};
					break;
				
				case 62:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 63:
					Var0 = {-797.2556f, 330.9376f, 211.385f};
					Var0.f_3 = {-5.2724f, 0f, -0.1483f};
					break;
				
				case 66:
					Var0 = {-795.6288f, 331.7296f, 209.5466f};
					Var0.f_3 = {0f, 0f, 5.25f};
					break;
				
				case 67:
					Var0 = {-800.379f, 331.6541f, 213.85f};
					break;
				
				case 110:
					Var0 = {-797.2831f, 332.5585f, 209.8139f};
					Var0.f_3 = {0f, 0f, 175.3101f};
					break;
				
				case 68:
					Var0 = {-795.6696f, 330.9879f, 209.7966f};
					break;
				
				case 109:
					Var0 = {-795.574f, 330.2081f, 210.9462f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 69:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, 142.9192f};
					break;
				
				case 70:
					Var0 = {-786.89f, 340.565f, 210.73f};
					Var0.f_3 = {0f, 0f, -92f};
					break;
				
				case 71:
					Var0 = {-786.0963f, 338.6112f, 209.947f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-785.8922f, 342.4188f, 212.5402f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, -28.07f};
					break;
				
				case 74:
					Var0 = {-786.083f, 339.5002f, 211.197f};
					Var0.f_3 = {0f, 0f, -75.82f};
					break;
				
				case 75:
					Var0 = {-785.853f, 340.4683f, 211.2459f};
					Var0.f_3 = {0f, 0f, 88f};
					break;
				
				case 76:
					Var0 = {-786.5244f, 339.8033f, 211.2525f};
					Var0.f_3 = {0f, 0f, -92f};
					break;
				
				case 89:
					Var0 = {-772.427f, 337.641f, 210.397f};
					Var0.f_3 = {0f, 0f, 270.7889f};
					break;
				
				case 91:
					break;
				
				case 90:
					Var0 = {-772.427f, 337.641f, 210.398f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 92:
					break;
				
				case 135:
					Var0 = {-772.3922f, 338.159f, 210.397f};
					break;
				
				case 136:
					Var0 = {-772.3887f, 336.9825f, 212.397f};
					break;
				
				case 77:
					break;
				
				case 79:
					break;
				
				case 80:
					break;
				
				case 81:
					break;
				
				case 82:
					break;
				
				case 78:
					break;
				
				case 128:
					Var0 = {-786.243f, 336.793f, 211.196f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 131:
					break;
				
				case 132:
					break;
				
				case 133:
					Var0 = {-786.0952f, 335.7543f, 210.197f};
					break;
				
				case 134:
					Var0 = {-786.105f, 337.229f, 212.197f};
					break;
				
				case 130:
					Var0 = {-786.243f, 336.793f, 210.196f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 83:
					Var0 = {-772.401f, 339.7611f, 211.3992f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 85:
					break;
				
				case 88:
					break;
				
				case 84:
					Var0 = {-772.401f, 339.761f, 210.399f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 86:
					Var0 = {-772.3981f, 339.0866f, 210.397f};
					break;
				
				case 87:
					Var0 = {-772.4125f, 340.542f, 212.397f};
					break;
				
				case 93:
					Var0 = {-777.9681f, 324.2937f, 212.1467f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 94:
					Var0 = {-779.334f, 323.366f, 211.039f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 95:
					Var0 = {-777.1005f, 323.352f, 212.039f};
					Var0.f_3 = {0f, 0f, 88.66f};
					break;
				
				case 96:
					Var0 = {-782.5724f, 324.1019f, 210.9972f};
					Var0.f_3 = {0f, 0f, 250.3059f};
					break;
				
				case 97:
					Var0 = {-775.8468f, 323.9188f, 212.039f};
					Var0.f_3 = {0f, 0f, 137.06f};
					break;
				
				case 98:
					Var0 = {-776.7234f, 322.9079f, 212.039f};
					Var0.f_3 = {0f, 0f, -38.76f};
					break;
				
				case 99:
					Var0 = {-777.968f, 324.294f, 212.126f};
					Var0.f_3 = {0.18f, 0f, 90f};
					break;
				
				case 100:
					Var0 = {-776.8833f, 323.3055f, 212.0525f};
					Var0.f_3 = {0f, 0f, 92.74f};
					break;
				
				case 101:
					Var0 = {-779.9111f, 322.7118f, 212.371f};
					Var0.f_3 = {-2.5476f, 0.7873f, -60.1641f};
					break;
				
				case 102:
					Var0 = {-785.9226f, 338.5676f, 210.197f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-787.3499f, 338.5698f, 212.397f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 104:
					Var0 = {-790.3068f, 333.9099f, 209.8369f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-788.9803f, 333.9269f, 212.0424f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-786.995f, 337.645f, 211.15f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 183:
					Var0 = {-789.262f, 333.715f, 210.79f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 169:
					Var0 = {-767.2747f, 332.7098f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-766.3311f, 332.7101f, 212.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 181:
					Var0 = {-766.61f, 333.15f, 211.113f};
					Var0.f_3 = {0f, 0f, 11.52f};
					break;
				
				case 187:
					Var0 = {-767.79f, 330.2081f, 210.394f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 173:
					Var0 = {-767.7999f, 330.2081f, 211.5462f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 172:
					Var0 = {-767.799f, 330.2f, 211.54f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 201:
					Var0 = {-776.4926f, 322.5599f, 212.4393f};
					Var0.f_3 = {1.846f, -0.0314f, 55.0867f};
					break;
				
				case 106:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 107:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 108:
					Var0 = {-778.979f, 323.526f, 211.997f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-786.97f, 337.87f, 211.23f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-789.28f, 333.94f, 210.87f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-781.3228f, 324.9367f, 210.9971f};
					Var0.f_3 = {0f, 0f, 155.399f};
					break;
				
				case 122:
					Var0 = {-774.2581f, 324.3845f, 211.0376f};
					Var0.f_3 = {0f, 0f, 359.6826f};
					break;
				
				case 123:
					Var0 = {-770.5826f, 322.8713f, 210.997f};
					Var0.f_3 = {0f, 0f, 44.1694f};
					break;
				
				case 124:
					Var0 = {-774.3812f, 330.5458f, 210.4373f};
					Var0.f_3 = {0f, 0f, 12.1428f};
					break;
				
				case 137:
					Var0 = {-776.7812f, 335.7841f, 210.397f};
					break;
				
				case 138:
					Var0 = {-787.4073f, 341.3253f, 211.4155f};
					Var0.f_3 = {-11.2423f, 0f, -122.0545f};
					break;
				
				case 139:
					Var0 = {-770.7645f, 323.2468f, 210.997f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-775.7316f, 334.9848f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 156:
					Var0 = {-777.9761f, 322.9964f, 212.1467f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 480:
					Var0 = {-774.0504f, 323.412f, 211.0376f};
					Var0.f_3 = {359.9196f, 0f, 0f};
					break;
				
				case 481:
					Var0 = {-778.4175f, 323.7099f, 210.9971f};
					Var0.f_3 = {3.5f, 0f, 0f};
					break;
				
				case 482:
					Var0 = {-785.2412f, 323.6552f, 213.7473f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 188:
					Var0 = {-775.4138f, 332.4451f, 211.7283f};
					Var0.f_3 = {3.0037f, 0f, -170.7307f};
					break;
				
				case 189:
					Var0 = {-775.4138f, 332.4451f, 211.7283f};
					Var0.f_3 = {-2.7705f, 0f, -108.8474f};
					break;
				
				case 190:
					Var0 = {-765.5242f, 331.7669f, 211.8768f};
					Var0.f_3 = {-3.3052f, 0f, 109.5992f};
					break;
				
				case 191:
					Var0 = {-765.4753f, 331.6203f, 211.8768f};
					Var0.f_3 = {-3.3052f, 0f, 107.0265f};
					break;
				
				case 192:
					Var0 = {-766.5858f, 327.0256f, 211.8885f};
					Var0.f_3 = {-0.4145f, 0f, -70.3221f};
					break;
				
				case 193:
					Var0 = {-766.6987f, 327.4344f, 211.8885f};
					Var0.f_3 = {-0.4145f, 0f, -77.6678f};
					break;
				
				case 194:
					Var0 = {-777.9681f, 324.2937f, 212.1264f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 195:
					Var0 = {-768f, 330f, 211f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 196:
					Var0 = {-764.7206f, 331.1032f, 210.3965f};
					Var0.f_3 = {0f, 0f, 225.1773f};
					break;
				
				case 197:
					Var0 = {-765.2438f, 331.0884f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 198:
					Var0 = {-762.7346f, 329.6304f, 210.3965f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 199:
					Var0 = {-770.2153f, 331.3272f, 210.397f};
					Var0.f_3 = {0f, 0f, 259.9557f};
					break;
				
				case 200:
					Var0 = {-764.171f, 331.3927f, 210.3965f};
					Var0.f_3 = {0f, 0f, 211.3965f};
					break;
				
				case 284:
					Var0 = {-763.511f, 332.1678f, 212.1505f};
					Var0.f_3 = {-4.7773f, 0f, 149.1447f};
					break;
				
				case 285:
					Var0 = {-763.1504f, 331.66f, 212.1303f};
					Var0.f_3 = {-4.7773f, 0f, 141.9896f};
					break;
				
				case 286:
					Var0 = {-766.4193f, 326.5125f, 212.5311f};
					Var0.f_3 = {-11.4509f, 0f, -44.0223f};
					break;
				
				case 287:
					Var0 = {-766.4193f, 326.5125f, 212.5311f};
					Var0.f_3 = {-11.4509f, 0f, -60.4506f};
					break;
				
				case 202:
					Var0 = {-775.9611f, 323.5558f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 203:
					Var0 = {-775.0372f, 323.1731f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 204:
					Var0 = {-772.7438f, 322.6319f, 210.9973f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 205:
					Var0 = {-773.885f, 323.9385f, 210.9974f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 206:
					Var0 = {-775.5784f, 324.4797f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 207:
					Var0 = {-774.5199f, 325.2492f, 210.9972f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 208:
					Var0 = {-773.3677f, 323.0146f, 210.9975f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 209:
					Var0 = {-773.8023f, 324.8623f, 210.9973f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 210:
					Var0 = {-774.6545f, 324.097f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 211:
					Var0 = {-774.1133f, 322.7904f, 211.0376f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 212:
					Var0 = {-774.9265f, 326.208f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 213:
					Var0 = {-773.3089f, 325.8212f, 210.9972f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 214:
					Var0 = {-775.1957f, 325.4035f, 210.9971f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 215:
					Var0 = {-773.0787f, 323.9427f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 216:
					Var0 = {-774.0742f, 326.0734f, 210.997f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 217:
					Var0 = {-775.5435f, 326.1689f, 211.038f};
					Var0.f_3 = {0f, 0f, 268.8991f};
					break;
				
				case 278:
					Var0 = {-787.4547f, 341.7032f, 209.918f};
					break;
				
				case 279:
					Var0 = {-768.1786f, 343.2638f, 214.6127f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-764.992f, 328.58f, 210.422f};
					Var0.f_3 = {0f, 0f, -44.4563f};
					break;
				
				case 237:
					Var0 = {-766.013f, 327.767f, 210.428f};
					Var0.f_3 = {0f, 0f, -391.657f};
					break;
				
				case 238:
					Var0 = {-766.094f, 328.635f, 210.428f};
					Var0.f_3 = {0f, 0f, -431.877f};
					break;
				
				case 239:
					Var0 = {-764.291f, 327.454f, 210.422f};
					Var0.f_3 = {0f, 0f, 19.2554f};
					break;
				
				case 240:
					Var0 = {-763.809f, 330.573f, 211.974f};
					Var0.f_3 = {-3.55867f, 0f, -212.394f};
					break;
				
				case 241:
					Var0 = {-766.074f, 328.26f, 210.427f};
					Var0.f_3 = {0f, 0f, -118.502f};
					break;
				
				case 242:
					Var0 = {-766.41f, 327.523f, 210.426f};
					Var0.f_3 = {0f, 0f, -69.3404f};
					break;
				
				case 243:
					Var0 = {-766.876f, 328.004f, 210.427f};
					Var0.f_3 = {0f, 0f, -96.1801f};
					break;
				
				case 244:
					Var0 = {-766.555f, 328.857f, 210.426f};
					Var0.f_3 = {0f, 0f, -112.605f};
					break;
				
				case 245:
					Var0 = {-763.954f, 327.798f, 212.09f};
					Var0.f_3 = {-5.44662f, 0f, -267.965f};
					break;
				
				case 246:
					Var0 = {-765.127f, 327.519f, 210.426f};
					Var0.f_3 = {0f, 0f, -6.65659f};
					break;
				
				case 247:
					Var0 = {-765.828f, 327.652f, 210.422f};
					Var0.f_3 = {0f, 0f, -45.6073f};
					break;
				
				case 248:
					Var0 = {-765.739f, 326.824f, 210.426f};
					Var0.f_3 = {0f, 0f, -37.4123f};
					break;
				
				case 249:
					Var0 = {-764.859f, 327.051f, 210.426f};
					Var0.f_3 = {0f, 0f, 2.9834f};
					break;
				
				case 250:
					Var0 = {-764.761f, 329.844f, 211.99f};
					Var0.f_3 = {-2.98413f, 0f, -186.621f};
					break;
				
				case 251:
					Var0 = {-764.973f, 332.062f, 210.424f};
					Var0.f_3 = {0f, 0f, -191.339f};
					break;
				
				case 252:
					Var0 = {-765.377f, 332.849f, 210.424f};
					Var0.f_3 = {0f, 0f, -176.689f};
					break;
				
				case 253:
					Var0 = {-764.435f, 332.614f, 210.424f};
					Var0.f_3 = {0f, 0f, -202.714f};
					break;
				
				case 254:
					Var0 = {-764.06f, 332.156f, 210.424f};
					Var0.f_3 = {0f, 0f, -214.614f};
					break;
				
				case 255:
					Var0 = {-765.34f, 329.562f, 211.85f};
					Var0.f_3 = {-0.2929f, 0f, -364.117f};
					break;
				
				case 256:
					Var0 = {-763.142f, 327.838f, 210.428f};
					Var0.f_3 = {0f, 0f, -379.909f};
					break;
				
				case 257:
					Var0 = {-763.879f, 326.969f, 210.428f};
					Var0.f_3 = {0f, 0f, -378.784f};
					break;
				
				case 258:
					Var0 = {-762.878f, 327.115f, 210.428f};
					Var0.f_3 = {0f, 0f, -364.134f};
					break;
				
				case 259:
					Var0 = {-763.937f, 327.611f, 210.428f};
					Var0.f_3 = {0f, 0f, -394.008f};
					break;
				
				case 260:
					Var0 = {-762.51f, 330.023f, 211.957f};
					Var0.f_3 = {-1.83503f, 0f, -191.73f};
					break;
				
				case 307:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 331:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 332:
					Var0 = {-765.9982f, 327.6255f, 211.9497f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 333:
					Var0 = {-764.564f, 336.115f, 211.291f};
					Var0.f_3 = {0f, 0f, -396f};
					break;
				
				case 334:
					Var0 = {-766.594f, 328.328f, 212.092f};
					Var0.f_3 = {0f, 0f, -287.85f};
					break;
				
				case 298:
					Var0 = {-786.7094f, 336.6323f, 211.1975f};
					break;
				
				case 299:
					Var0 = {-771.9327f, 339.9579f, 211.3496f};
					break;
				
				case 300:
					Var0 = {-771.7077f, 330.874f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 301:
					Var0 = {-770.7838f, 331.6742f, 210.3968f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 302:
					Var0 = {-770.0904f, 330.633f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 88.5541f;
					break;
				
				case 303:
					Var0 = {-769.0316f, 330.9395f, 210.397f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 87.5541f;
					break;
				
				case 310:
					Var0 = {-777.1f, 342.2f, 211.6f};
					Var0.f_3 = {-3.4f, 0f, 132.4f};
					break;
				
				case 337:
					Var0 = {-777.8727f, 341.4907f, 211.5446f};
					Var0.f_3 = {-1.8116f, 0.05f, 133.352f};
					break;
				
				case 335:
					Var0 = {-772.6966f, 331.9936f, 211.381f};
					Var0.f_3 = {0.3868f, 0f, 56.8358f};
					break;
				
				case 338:
					Var0 = {-773.5449f, 332.5226f, 211.3917f};
					Var0.f_3 = {0.6157f, -0.0123f, 58.2345f};
					break;
				
				case 336:
					Var0 = {-786.1434f, 329.2248f, 211.4969f};
					Var0.f_3 = {0.8433f, 0.0824f, -17.4418f};
					break;
				
				case 339:
					Var0 = {-786.217f, 329.6877f, 211.5049f};
					Var0.f_3 = {1.056f, 0.1046f, -16.8046f};
					break;
				
				case 311:
					Var0 = {-769.6929f, 323.9527f, 211.2633f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 312:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 313:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 314:
					Var0 = {-782.338f, 336.612f, 211.238f};
					Var0.f_3 = {0f, 0f, -9f};
					break;
				
				case 315:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 316:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 317:
					Var0 = {-781.888f, 336.562f, 211.242f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 318:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 319:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 320:
					Var0 = {-772.555f, 340.33f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 321:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 322:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 323:
					Var0 = {-772.425f, 339.575f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 324:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 325:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 326:
					Var0 = {-773.775f, 335.855f, 211.43f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 327:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 328:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 329:
					Var0 = {-773.775f, 335.2f, 211.516f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
			}
			break;
		
		case -1:
		case 1:
			switch (iParam0)
			{
				case 278:
					Var0 = {-798.7061f, 341.8386f, 204.7183f};
					break;
				
				case 279:
					Var0 = {-785.138f, 341.7283f, 208.6144f};
					break;
				
				case 280:
					Var0 = {-801.4162f, 325.805f, 205.0629f};
					break;
				
				case 281:
					Var0 = {-801.5137f, 342.8037f, 209.2183f};
					break;
				
				case 282:
					Var0 = {-796.1956f, 440.2408f, 79.64348f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 283:
					Var0 = {-862.6429f, 353.2339f, 74.35394f};
					Var0.f_3 = {100f, 200f, 0f};
					break;
				
				case 0:
					Var0 = {-795.23f, 326.754f, 207.017f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 1:
					Var0 = {-777.986f, 340.524f, 206.371f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 2:
					Var0 = {-775.679f, 340.355f, 209.621f};
					Var0.f_3 = {0f, 0f, -81.2011f};
					break;
				
				case 3:
					Var0 = {-790.411f, 337.121f, 200.414f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 4:
					Var0 = {-804.4529f, 334.1814f, 205.146f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 5:
					Var0 = {-772.4561f, 334.1661f, 210.103f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 276:
					Var0 = {-797.6042f, 336.3656f, 200.2337f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 277:
					Var0 = {-777.6318f, 336.4067f, 205.821f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 6:
					Var0 = {-775.0327f, 340.3672f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90.0569f};
					break;
				
				case 7:
					Var0 = {-781.339f, 329.26f, 206.626f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 8:
					Var0 = {-777.327f, 332.534f, 209.036f};
					Var0.f_3 = {-7.632f, 0f, -121.063f};
					break;
				
				case 141:
					Var0 = {-781.85f, 327.1f, 208.2f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 142:
					Var0 = {-781.5f, 327.125f, 209.35f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 143:
					Var0 = {-779.605f, 327.125f, 209.345f};
					Var0.f_3 = {180f, -180f, 0f};
					break;
				
				case 144:
					Var0 = {-781.8206f, 330.0332f, 208.1489f};
					Var0.f_3 = {0.1322f, 0.0536f, -179.9343f};
					break;
				
				case 158:
					Var0 = {-781.0333f, 329.1684f, 208.1541f};
					Var0.f_3 = {-2.3423f, 0.0392f, -177.7558f};
					break;
				
				case 145:
					Var0 = {-780.8303f, 330.0394f, 208.1503f};
					Var0.f_3 = {-0.2118f, 0.062f, -178.3432f};
					break;
				
				case 146:
					Var0 = {-781.8206f, 330.0332f, 208.1489f};
					Var0.f_3 = {0.994f, 0.0536f, 173.2112f};
					break;
				
				case 147:
					Var0 = {-783.42f, 328.818f, 208.588f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 148:
					Var0 = {-783.39f, 328.3264f, 207.5647f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 153:
					Var0 = {-781.804f, 327.4904f, 206.6219f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 154:
					Var0 = {-781.9431f, 329.0702f, 208.7333f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 155:
					Var0 = {-781.9422f, 329.0702f, 207.7881f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 157:
					Var0 = {-781.8206f, 329.6909f, 208.1497f};
					Var0.f_3 = {-7.145f, 0.0536f, 48.2917f};
					break;
				
				case 234:
					Var0 = {-782.9864f, 329.0702f, 208.6212f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 149:
					Var0 = {-783.0602f, 330.8799f, 206.6294f};
					Var0.f_3 = {0f, 0f, 249.5208f};
					break;
				
				case 150:
					Var0 = {-779.8566f, 331.8636f, 206.6209f};
					Var0.f_3 = {0f, 0f, 144.9461f};
					break;
				
				case 151:
					Var0 = {-778.3817f, 330.2339f, 206.6209f};
					Var0.f_3 = {0f, 0f, 108.2755f};
					break;
				
				case 152:
					Var0 = {-779.6613f, 328.0661f, 206.6224f};
					Var0.f_3 = {0f, 0f, 2.1244f};
					break;
				
				case 169:
					Var0 = {-778.2188f, 332.2201f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 170:
					Var0 = {-776.9868f, 332.502f, 208.3432f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 173:
					Var0 = {-779.4343f, 332.8936f, 206.6209f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 174:
					Var0 = {-783.15f, 329.72f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 175:
					Var0 = {-783.81f, 329.83f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 176:
					Var0 = {-784.47f, 329.94f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 177:
					Var0 = {-785.13f, 330.05f, 206.63f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 178:
					Var0 = {-780.0342f, 341.8051f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 179:
					Var0 = {-782.939f, 338.1156f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 180:
					Var0 = {-782.2037f, 338.8171f, 207.3599f};
					Var0.f_3 = {9.1439f, 0f, -136.3547f};
					break;
				
				case 201:
					Var0 = {-778.9756f, 341.8501f, 208.1999f};
					Var0.f_3 = {-3.0273f, -0.0245f, -131.691f};
					break;
				
				case 235:
					Var0 = {-803.6476f, 339.2161f, 206.4198f};
					Var0.f_3 = {-0.3015f, 0f, -107.8483f};
					break;
				
				case 261:
					Var0 = {-780.576f, 328.938f, 207.613f};
					Var0.f_3 = {0f, 0f, 147f};
					break;
				
				case 262:
					Var0 = {-780.576f, 328.938f, 207.613f};
					Var0.f_3 = {0f, 0f, 147f};
					break;
				
				case 263:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 264:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 265:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 266:
					Var0 = {-803.75f, 338.61f, 206.23f};
					Var0.f_3 = {0f, 0f, 88.75f};
					break;
				
				case 267:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 268:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 269:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 270:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 271:
					Var0 = {-800.5109f, 337.0358f, 205.2443f};
					Var0.f_3 = {0f, 0f, 352.6839f};
					break;
				
				case 272:
					Var0 = {-799.0406f, 337.0152f, 205.2443f};
					Var0.f_3 = {0f, 0f, 0.5617f};
					break;
				
				case 273:
					Var0 = {-798.2809f, 338.6735f, 205.2183f};
					Var0.f_3 = {0f, 0f, 97.7813f};
					break;
				
				case 274:
					Var0 = {-798.5187f, 340.1423f, 205.2443f};
					Var0.f_3 = {0f, 0f, 117.9575f};
					break;
				
				case 275:
					Var0 = {-794.7f, 341.5f, 206.6f};
					Var0.f_3 = {-2.6f, 0f, 126.4f};
					break;
				
				case 304:
					Var0 = {-791.294f, 338.071f, 200.413f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 305:
					Var0 = {-776.752f, 339.378f, 207.73f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 308:
					Var0 = {-778.9598f, 339.3295f, 206.6209f};
					Var0.f_3 = {0f, 0f, 293.5977f};
					break;
				
				case 309:
					Var0 = {-774.4114f, 340.2285f, 206.6209f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 14:
					Var0 = {-800.302f, 342.911f, 207.254f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 15:
					Var0 = {-777.35f, 341.299f, 209.269f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 9:
					Var0 = {-795.653f, 336.958f, 200.441f};
					Var0.f_3 = {0f, 0f, -94.1775f};
					break;
				
				case 10:
					Var0 = {-796.9207f, 329.1438f, 205.2183f};
					Var0.f_3 = {0f, 0f, 314.7556f};
					break;
				
				case 11:
					Var0 = {-800.836f, 337.378f, 205.244f};
					Var0.f_3 = {0f, 0f, -0.979401f};
					break;
				
				case 12:
					Var0 = {-793.525f, 341.505f, 205.244f};
					Var0.f_3 = {0f, 0f, 150.429f};
					break;
				
				case 16:
					Var0 = {-797.691f, 339.522f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 22:
					Var0 = {-798.984f, 339.539f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 28:
					Var0 = {-797.24f, 339.524f, 207.169f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 17:
					Var0 = {-797.671f, 338.612f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 23:
					Var0 = {-798.992f, 338.65f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 29:
					Var0 = {-797.13f, 338.628f, 207.037f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 18:
					Var0 = {-797.671f, 337.652f, 205.693f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 24:
					Var0 = {-798.984f, 337.647f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 30:
					Var0 = {-797.104f, 337.627f, 207.072f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 19:
					Var0 = {-798.831f, 336.392f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 25:
					Var0 = {-798.826f, 337.569f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 31:
					Var0 = {-798.822f, 335.815f, 207.095f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 20:
					Var0 = {-799.761f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 26:
					Var0 = {-799.757f, 337.57f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 32:
					Var0 = {-799.757f, 335.847f, 207.043f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 21:
					Var0 = {-800.721f, 336.402f, 205.684f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 27:
					Var0 = {-800.72f, 337.588f, 205.244f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 33:
					Var0 = {-800.733f, 335.888f, 207.224f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 34:
					Var0 = {-801.7045f, 339.0622f, 206.8001f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 35:
					Var0 = {-796.8376f, 333.3725f, 207.3909f};
					Var0.f_3 = {-9.4648f, 0f, 32.451f};
					break;
				
				case 36:
					Var0 = {0f, 0f, 0f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 37:
					Var0 = {-795.085f, 333.845f, 205.221f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 38:
					Var0 = {-803.8287f, 342.3719f, 206.3142f};
					Var0.f_3 = {0.0594f, 0f, -121.121f};
					break;
				
				case 39:
					Var0 = {-804.1694f, 341.7474f, 206.3142f};
					Var0.f_3 = {0.0111f, 0f, -126.9666f};
					break;
				
				case 120:
					Var0 = {-790.2173f, 342.8064f, 201.4386f};
					Var0.f_3 = {1.2116f, 0f, 126.699f};
					break;
				
				case 121:
					Var0 = {-790.019f, 342.5399f, 201.4386f};
					Var0.f_3 = {1.2116f, 0f, 132.3405f};
					break;
				
				case 125:
					Var0 = {-777.5101f, 328.2689f, 208.0708f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 40:
					Var0 = {-796.22f, 331.85f, 200.414f};
					Var0.f_3 = {0f, 0f, -85.518f};
					break;
				
				case 41:
					Var0 = {-792.9531f, 341.6f, 206.2202f};
					Var0.f_3 = {0f, 0f, 119.72f};
					break;
				
				case 126:
					Var0 = {-792.7816f, 341.9671f, 205.2202f};
					break;
				
				case 127:
					Var0 = {-793.8069f, 340.9885f, 207.2202f};
					break;
				
				case 42:
					Var0 = {Vector(205.673f, 341.996f, -794.072f) + Vector(0.002f, 0.2081f, 0.0758f)};
					Var0.f_3 = {0f, 0f, 45.72f};
					break;
				
				case 340:
					Var0 = {-796.2623f, 338.737f, 201.2637f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 46:
					Var0 = {-795.6178f, 337.0022f, 201.3958f};
					Var0.f_3 = {0f, 0f, 30.2104f};
					break;
				
				case 47:
					Var0 = {-795.891f, 338.663f, 200.827f};
					Var0.f_3 = {0f, 0f, -5.76f};
					break;
				
				case 48:
					Var0 = {-616.5919f, 65.3481f, 101.8033f};
					Var0.f_3 = {0.9407f, 0.0521f, 147.8146f};
					break;
				
				case 49:
					Var0 = {-619.5043f, 62.4537f, 102.0873f};
					Var0.f_3 = {-1.4768f, -0.0422f, -101.6693f};
					break;
				
				case 612:
					Var0 = {-794.937f, 340.63f, 201.428f};
					Var0.f_3 = {0f, 0f, 129.24f};
					break;
				
				case 615:
					Var0 = {-794.1949f, 339.969f, 200.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 616:
					Var0 = {-796.447f, 339.9556f, 202.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			switch (iParam0)
			{
				case 50:
					Var0 = {-796.3056f, 337.3367f, 202.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 51:
					Var0 = {-793.9697f, 337.3367f, 200.4136f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 56:
					Var0 = {-787.837f, 329.8524f, 201.5026f};
					Var0.f_3 = {0f, 0f, 81.0207f};
					break;
				
				case 57:
					Var0 = {-788.33f, 330.65f, 200.612f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 64:
					Var0 = {-788.731f, 330f, 202.775f};
					Var0.f_3 = {-45f, 0f, 0f};
					break;
				
				case 65:
					Var0 = {-787.9f, 329.6f, 202.5f};
					Var0.f_3 = {315f, 0f, 270f};
					break;
				
				case 58:
					Var0 = {-787.2075f, 330.4225f, 201.8932f};
					Var0.f_3 = {0.0309f, 0.0078f, 94.294f};
					break;
				
				case 59:
					Var0 = {-787.7042f, 329.7779f, 202.4025f};
					Var0.f_3 = {13.0276f, -0.0448f, 76.7381f};
					break;
				
				case 60:
					Var0 = {-787.3719f, 329.972f, 202.0055f};
					Var0.f_3 = {-1.5606f, 0.051f, 89.4345f};
					break;
				
				case 61:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 62:
					Var0 = {-787.6302f, 329.9987f, 203.0104f};
					Var0.f_3 = {-31.5824f, 0.0118f, 90.1879f};
					break;
				
				case 63:
					Var0 = {-787.8431f, 333.6357f, 201.671f};
					Var0.f_3 = {-7.1813f, 0.0176f, 176.9822f};
					break;
				
				case 66:
					Var0 = {-789.2f, 331.9405f, 200.2136f};
					Var0.f_3 = {0f, 0f, 6.8f};
					break;
				
				case 67:
					Var0 = {-784.3f, 331.9405f, 203.4136f};
					break;
				
				case 110:
					Var0 = {-787.9185f, 330.928f, 200.4275f};
					Var0.f_3 = {0f, 0f, 356.6557f};
					break;
				
				case 68:
					Var0 = {-789.3445f, 332.7155f, 201f};
					break;
				
				case 109:
					Var0 = {-789.3017f, 332.0119f, 201.5596f};
					break;
				
				case 69:
					Var0 = {-793.4663f, 339.1717f, 205.2183f};
					Var0.f_3 = {0f, 0f, 241.5163f};
					break;
				
				case 70:
					Var0 = {-793.609f, 338.332f, 205.696f};
					Var0.f_3 = {0f, 0f, -28.08f};
					break;
				
				case 71:
					Var0 = {-793.9657f, 334.1319f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 72:
					Var0 = {-793.9049f, 343.3448f, 206.2567f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 73:
					Var0 = {-793.8227f, 336.3578f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 74:
					Var0 = {-792.57f, 338.76f, 206.2183f};
					Var0.f_3 = {0f, 0f, 320f};
					break;
				
				case 75:
					Var0 = {-793.07f, 339.22f, 206.31f};
					Var0.f_3 = {0f, 0f, 151.92f};
					break;
				
				case 76:
					Var0 = {-792.76f, 338.33f, 206.32f};
					Var0.f_3 = {0f, 0f, -28.08f};
					break;
				
				case 89:
					Var0 = {-792.8026f, 330.2704f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0.11f};
					break;
				
				case 91:
					Var0 = {-791.3608f, 331.6151f, 206.7155f};
					Var0.f_3 = {-6.1061f, 0f, 124.716f};
					break;
				
				case 90:
					Var0 = {-791.55f, 331.098f, 206.346f};
					Var0.f_3 = {0f, 0f, -89.64f};
					break;
				
				case 92:
					Var0 = {-791.1231f, 329.0256f, 207.0468f};
					Var0.f_3 = {-10.5496f, 0f, 38.2733f};
					break;
				
				case 135:
					Var0 = {-792.3248f, 330.4116f, 205.2183f};
					break;
				
				case 136:
					Var0 = {-793.3149f, 330.4896f, 207.2183f};
					break;
				
				case 77:
					Var0 = {-795.4578f, 337.2369f, 205.2183f};
					Var0.f_3 = {0f, 0f, 82.6775f};
					break;
				
				case 79:
					Var0 = {-796.8416f, 336.5425f, 206.3782f};
					Var0.f_3 = {4.1239f, 0.032f, -35.7362f};
					break;
				
				case 80:
					Var0 = {-794.1184f, 339.0253f, 207.2513f};
					Var0.f_3 = {-14.3736f, 0f, 132.7127f};
					break;
				
				case 81:
					Var0 = {-796.8088f, 337.2715f, 207.0081f};
					break;
				
				case 82:
					Var0 = {-794.73f, 337.4924f, 205.2183f};
					break;
				
				case 78:
					Var0 = {Vector(206.15f, 337.263f, -796.115f) + Vector(0.0084f, -0.1213f, -0.0385f) + Vector(-0.0001f, 0.0008f, 0.0245f)};
					Var0.f_3 = {Vector(84.6f, 0f, 0f) + Vector(5.64f, 0f, 0f)};
					break;
				
				case 83:
					Var0 = {-793.3814f, 333.4903f, 205.2183f};
					Var0.f_3 = {0f, 0f, 182.6354f};
					break;
				
				case 85:
					Var0 = {-792.4017f, 332.1834f, 206.589f};
					Var0.f_3 = {-0.4759f, 0f, 56.2407f};
					break;
				
				case 88:
					Var0 = {-792.6917f, 334.5816f, 206.9306f};
					Var0.f_3 = {-15.2511f, -0.1442f, 161.552f};
					break;
				
				case 84:
					Var0 = {Vector(205.209f, 332.875f, -793.279f) - Vector(0.0001f, -0.0385f, -0.024f) + Vector(0.0002f, 0.0024f, -0.0121f)};
					Var0.f_3 = {Vector(-178.56f, 0f, 0f) + Vector(2.39f, 0f, 0f)};
					break;
				
				case 86:
					Var0 = {-793.25f, 332.5f, 207f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 87:
					Var0 = {-793.25f, 333.75f, 205f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 93:
					Var0 = {-776.7022f, 339.3779f, 207.7347f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 94:
					Var0 = {-775.303f, 340.308f, 206.661f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 95:
					Var0 = {-777.537f, 340.322f, 206.648f};
					Var0.f_3 = {0f, 0f, -89.39f};
					break;
				
				case 96:
					Var0 = {-774.1763f, 330.914f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0.1966f};
					break;
				
				case 97:
					Var0 = {-778.79f, 339.755f, 206.648f};
					Var0.f_3 = {0f, 0f, -42.94f};
					break;
				
				case 98:
					Var0 = {-777.914f, 340.766f, 206.648f};
					Var0.f_3 = {0f, 0f, 141.24f};
					break;
				
				case 99:
					Var0 = {-775.316f, 340.308f, 206.654f};
					Var0.f_3 = {0.18f, 0f, -90f};
					break;
				
				case 100:
					Var0 = {-777.77f, 340.369f, 206.659f};
					Var0.f_3 = {0f, 0f, -87.26f};
					break;
				
				case 101:
					Var0 = {-775.1893f, 340.8357f, 208.0344f};
					Var0.f_3 = {-0.162607f, 0.264814f, 116.59f};
					break;
				
				case 102:
					Var0 = {-794.8591f, 335.3709f, 202.3962f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 103:
					Var0 = {-794.8546f, 336.6222f, 200.3511f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 182:
					Var0 = {-794.419f, 335.328f, 201.441f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 104:
					Var0 = {-800.4421f, 325.256f, 207.2709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 105:
					Var0 = {-800.4426f, 326.6761f, 205.1558f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 183:
					Var0 = {-800.012f, 325.807f, 206.097f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 181:
					Var0 = {-777.695f, 332.054f, 207.34f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 106:
					Var0 = {-796.3882f, 336.8372f, 202.5976f};
					Var0.f_3 = {-22.7361f, 0f, -129.0221f};
					break;
				
				case 107:
					Var0 = {-801.9172f, 326.3802f, 207.4878f};
					Var0.f_3 = {-35.2381f, 0f, -111.7465f};
					break;
				
				case 108:
					Var0 = {-775.7377f, 340.0719f, 207.6209f};
					Var0.f_3 = {90f, 0f, 0f};
					break;
				
				case 117:
					Var0 = {-794.9332f, 335.1039f, 201.5308f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 118:
					Var0 = {-800.421f, 325.5437f, 206.1822f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 119:
					Var0 = {-774.0972f, 334.244f, 206.6209f};
					Var0.f_3 = {0f, 0f, 352.8303f};
					break;
				
				case 122:
					Var0 = {-779.7051f, 338.5465f, 206.6209f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 123:
					Var0 = {-786.6962f, 335.6548f, 205.2183f};
					Var0.f_3 = {0f, 0f, 90f};
					break;
				
				case 124:
					Var0 = {-787.4521f, 337.461f, 205.2183f};
					Var0.f_3 = {0f, 0f, 360f};
					break;
				
				case 137:
					Var0 = {-792.5942f, 335.772f, 205.2183f};
					break;
				
				case 139:
					Var0 = {-794.9999f, 334.6179f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 140:
					Var0 = {-797.3075f, 328.841f, 205.2183f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 480:
					Var0 = {-778.8162f, 337.2836f, 206.6209f};
					Var0.f_3 = {81.5959f, 0f, 0f};
					break;
				
				case 481:
					Var0 = {-774.3743f, 342.161f, 206.8709f};
					Var0.f_3 = {3.25f, 0f, 0f};
					break;
				
				case 482:
					Var0 = {-774.4149f, 333.1899f, 209.1209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 172:
					Var0 = {-780.6417f, 333.1093f, 207.79f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 187:
					Var0 = {-780.592f, 333.17f, 206.62f};
					Var0.f_3 = {0f, 0f, 180f};
					break;
				
				case 188:
					Var0 = {-781.7f, 340.8f, 208.1f};
					Var0.f_3 = {-0.7f, 0f, -115.1f};
					break;
				
				case 189:
					Var0 = {-781.8f, 340.7f, 208.1f};
					Var0.f_3 = {0.1f, 0f, -142.3f};
					break;
				
				case 190:
					Var0 = {-778.7875f, 330.4278f, 208.0589f};
					Var0.f_3 = {-3.1551f, 0f, 28.7142f};
					break;
				
				case 191:
					Var0 = {-778.8762f, 330.3792f, 208.0589f};
					Var0.f_3 = {-3.1551f, 0f, 28.7142f};
					break;
				
				case 192:
					Var0 = {-783.8f, 331.7f, 208.1f};
					Var0.f_3 = {1.3f, 0f, -160.8f};
					break;
				
				case 193:
					Var0 = {-782.9999f, 331.8702f, 208.1f};
					Var0.f_3 = {1.3f, 0f, -174.5963f};
					break;
				
				case 194:
					Var0 = {-776.7022f, 339.3779f, 207.7347f};
					Var0.f_3 = {0f, 0f, -90f};
					break;
				
				case 195:
					Var0 = {-781f, 333f, 208f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 196:
					Var0 = {-780.0269f, 330.2854f, 206.6209f};
					Var0.f_3 = {0f, 0f, 134.6611f};
					break;
				
				case 197:
					Var0 = {-779.5729f, 330.6496f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 198:
					Var0 = {-781.5103f, 328.0656f, 206.6237f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 199:
					Var0 = {-779.7507f, 334.918f, 206.6209f};
					Var0.f_3 = {0f, 0f, 178.965f};
					break;
				
				case 200:
					Var0 = {-779.9905f, 329.9511f, 206.6214f};
					Var0.f_3 = {0f, 0f, 180.6476f};
					break;
				
				case 284:
					Var0 = {-779.2086f, 329.115f, 208.0224f};
					Var0.f_3 = {-3.027f, 0f, 55.8939f};
					break;
				
				case 285:
					Var0 = {-779.8893f, 328.631f, 208.0071f};
					Var0.f_3 = {-2.4917f, 0f, 46.2377f};
					break;
				
				case 286:
					Var0 = {-784.2476f, 332.1267f, 208.4403f};
					Var0.f_3 = {-2.6168f, 0f, -152.3636f};
					break;
				
				case 287:
					Var0 = {-783.6574f, 332.094f, 208.4264f};
					Var0.f_3 = {-2.7465f, 0f, -164.2146f};
					break;
				
				case 202:
					Var0 = {-778.2794f, 340.0222f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 203:
					Var0 = {-778.2555f, 339.0395f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 204:
					Var0 = {-778.3621f, 340.8983f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 205:
					Var0 = {-779f, 340.4049f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 206:
					Var0 = {-779f, 339.4461f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 207:
					Var0 = {-779f, 341.4157f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 208:
					Var0 = {-779f, 338.581f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 209:
					Var0 = {-779.6f, 340.981f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 210:
					Var0 = {-779.6728f, 339.9634f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 211:
					Var0 = {-779.7316f, 338.9568f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 212:
					Var0 = {-779.6448f, 338.1745f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 213:
					Var0 = {-779.5272f, 341.9876f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 214:
					Var0 = {-778.414f, 337.97f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 215:
					Var0 = {-778.997f, 337.4091f, 206.621f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 216:
					Var0 = {-780.2925f, 338.9398f, 206.6209f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
				
				case 217:
					Var0 = {-780.2618f, 337.8353f, 206.621f};
					Var0.f_3 = {0f, 0f, 91.062f};
					break;
			}
			switch (iParam0)
			{
				case 236:
					Var0 = {-782.5022f, 330.3769f, 206.625f};
					Var0.f_3 = {0f, 0f, 225.5437f};
					break;
				
				case 237:
					Var0 = {-783.0176f, 331.4477f, 206.625f};
					Var0.f_3 = {0f, 0f, 238.3427f};
					break;
				
				case 238:
					Var0 = {-782.15f, 331.5283f, 206.625f};
					Var0.f_3 = {0f, 0f, 198.123f};
					break;
				
				case 239:
					Var0 = {-783.581f, 329.641f, 206.625f};
					Var0.f_3 = {0f, 0f, 270f};
					break;
				
				case 240:
					Var0 = {-780.2399f, 329.0106f, 208.1872f};
					Var0.f_3 = {-2.857897f, 0f, 56.2119f};
					break;
				
				case 241:
					Var0 = {-782.822f, 331.4591f, 206.63f};
					Var0.f_3 = {0f, 0f, 151.4979f};
					break;
				
				case 242:
					Var0 = {-783.5588f, 331.7943f, 206.6295f};
					Var0.f_3 = {0f, 0f, 200.6596f};
					break;
				
				case 243:
					Var0 = {-783.0787f, 332.2606f, 206.6301f};
					Var0.f_3 = {0f, 0f, 173.8199f};
					break;
				
				case 244:
					Var0 = {-782.2255f, 331.9394f, 206.6295f};
					Var0.f_3 = {0f, 0f, 157.3949f};
					break;
				
				case 245:
					Var0 = {-783.2838f, 329.3391f, 208.2937f};
					Var0.f_3 = {-5.446615f, 0f, 2.034569f};
					break;
				
				case 246:
					Var0 = {-783.5632f, 330.5113f, 206.6291f};
					Var0.f_3 = {0f, 0f, 263.3434f};
					break;
				
				case 247:
					Var0 = {-783.482f, 331.213f, 206.625f};
					Var0.f_3 = {0f, 0f, 224.3927f};
					break;
				
				case 248:
					Var0 = {-784.2584f, 331.1237f, 206.6295f};
					Var0.f_3 = {0f, 0f, 232.5877f};
					break;
				
				case 249:
					Var0 = {-784.0311f, 330.2437f, 206.629f};
					Var0.f_3 = {0f, 0f, 272.9834f};
					break;
				
				case 250:
					Var0 = {-781.2383f, 330.1453f, 208.1935f};
					Var0.f_3 = {-2.984129f, 0f, 83.37932f};
					break;
				
				case 251:
					Var0 = {-778.7227f, 330.4073f, 206.6209f};
					Var0.f_3 = {0f, 0f, 78.6608f};
					break;
				
				case 252:
					Var0 = {-777.936f, 330.8115f, 206.6209f};
					Var0.f_3 = {0f, 0f, 93.3108f};
					break;
				
				case 253:
					Var0 = {-778.1702f, 329.8693f, 206.6209f};
					Var0.f_3 = {0f, 0f, 67.2858f};
					break;
				
				case 254:
					Var0 = {-778.6282f, 329.4945f, 206.6209f};
					Var0.f_3 = {0f, 0f, 55.3858f};
					break;
				
				case 255:
					Var0 = {-781.2223f, 330.7747f, 208.0468f};
					Var0.f_3 = {-0.2929f, 0f, -94.1173f};
					break;
				
				case 256:
					Var0 = {-782.9468f, 328.5765f, 206.6246f};
					Var0.f_3 = {0f, 0f, 250.0915f};
					break;
				
				case 257:
					Var0 = {-783.8154f, 329.3127f, 206.6246f};
					Var0.f_3 = {0f, 0f, 251.2165f};
					break;
				
				case 258:
					Var0 = {-783.6699f, 328.3123f, 206.6246f};
					Var0.f_3 = {0f, 0f, 265.8665f};
					break;
				
				case 259:
					Var0 = {-783.1733f, 329.3715f, 206.6246f};
					Var0.f_3 = {0f, 0f, 235.9915f};
					break;
				
				case 260:
					Var0 = {-780.7612f, 327.9438f, 208.1539f};
					Var0.f_3 = {-1.835026f, 0f, 78.26962f};
					break;
				
				case 307:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 331:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 332:
					Var0 = {-783.1698f, 331.3681f, 208.1709f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 333:
					Var0 = {-774.6698f, 329.9981f, 207.4879f};
					Var0.f_3 = {0f, 0f, -126f};
					break;
				
				case 334:
					Var0 = {-782.4568f, 332.0281f, 208.2889f};
					Var0.f_3 = {0f, 0f, -17.85f};
					break;
				
				case 298:
					Var0 = {-796.1306f, 337.1404f, 206.1808f};
					break;
				
				case 299:
					Var0 = {-793.1521f, 332.7068f, 206.3769f};
					break;
				
				case 300:
					Var0 = {-779.5258f, 336.6098f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 301:
					Var0 = {-780.2019f, 337.5271f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 302:
					Var0 = {-779.9085f, 335.6859f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 303:
					Var0 = {-778.6497f, 337.4925f, 206.6209f};
					Var0.f_3 = {0f, 0f, 0f};
					Var0.f_3.f_2 = 90.8361f;
					break;
				
				case 310:
					Var0 = {-803.8f, 340.1f, 206.4f};
					Var0.f_3 = {-3.9f, -0.2f, -122.1f};
					break;
				
				case 337:
					Var0 = {-803.5448f, 340.019f, 206.3814f};
					Var0.f_3 = {-3.33f, -0.1433f, -122.0807f};
					break;
				
				case 335:
					Var0 = {-792.1119f, 328.9167f, 206.7493f};
					Var0.f_3 = {-0.9549f, 0f, 28.6771f};
					break;
				
				case 338:
					Var0 = {-792.2817f, 329.3245f, 206.7437f};
					Var0.f_3 = {-0.7326f, -0.0475f, 27.4558f};
					break;
				
				case 336:
					Var0 = {-789.8785f, 332.0506f, 206.8976f};
					Var0.f_3 = {-1.9523f, 0f, 61.3248f};
					break;
				
				case 339:
					Var0 = {-790.3087f, 332.2463f, 206.88f};
					Var0.f_3 = {-2.5427f, 0.0051f, 62.3184f};
					break;
				
				case 311:
					Var0 = {-788.0662f, 342.4757f, 205.5004f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 312:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 313:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 314:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 315:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 316:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 317:
					Var0 = {-800.088f, 337.221f, 206.265f};
					Var0.f_3 = {0f, 0f, -5.25f};
					break;
				
				case 318:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 319:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 320:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 321:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 322:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 323:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 324:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 325:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 326:
					Var0 = {-800.586f, 337.375f, 206.265f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 327:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 328:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
				
				case 329:
					Var0 = {-800.273f, 337.075f, 206.282f};
					Var0.f_3 = {0f, 0f, 0f};
					break;
			}
			break;
	}
	return Var0;
}

struct<6> func_13(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = {-1478.436f, -3753.538f, 9.7027f};
			Var0.f_3 = {0f, 0f, -18f};
			break;
		
		case 0:
			Var0 = {-3555.115f, 1473.013f, 9.7027f};
			Var0.f_3 = {0f, 0f, 57f};
			break;
		
		case 1:
			Var0 = {-3147.049f, 2827.088f, 9.7027f};
			Var0.f_3 = {0f, 0f, -88f};
			break;
		
		case 2:
			Var0 = {-3277.473f, 2159.85f, 9.7027f};
			Var0.f_3 = {0f, 0f, -93f};
			break;
		
		case 3:
			Var0 = {-2822.419f, 4054.84f, 9.7027f};
			Var0.f_3 = {0f, 0f, 72f};
			break;
		
		case 4:
			Var0 = {-3249.849f, 3704.681f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 5:
			Var0 = {-2383.193f, 4685.003f, 9.7027f};
			Var0.f_3 = {0f, 0f, 47f};
			break;
		
		case 6:
			Var0 = {-3224.686f, -215.9825f, 9.7027f};
			Var0.f_3 = {0f, 0f, -3f};
			break;
		
		case 7:
			Var0 = {-3447.876f, 291.9275f, 9.7027f};
			Var0.f_3 = {0f, 0f, 97f};
			break;
		
		case 8:
			Var0 = {-2713.098f, -528.3185f, 9.7027f};
			Var0.f_3 = {0f, 0f, -33f};
			break;
		
		case 9:
			Var0 = {-1981.618f, -1537.269f, 9.7027f};
			Var0.f_3 = {0f, 0f, 142f};
			break;
		
		case 10:
			Var0 = {-2100.817f, -2533.233f, 9.7027f};
			Var0.f_3 = {0f, 0f, -143f};
			break;
		
		case 11:
			Var0 = {-1599.642f, -1891.277f, 9.7027f};
			Var0.f_3 = {0f, 0f, 112f};
			break;
		
		case 12:
			Var0 = {-733.6151f, -3916.985f, 9.7027f};
			Var0.f_3 = {0f, 0f, -168f};
			break;
		
		case 13:
			Var0 = {-363.3534f, -3568.56f, 9.7027f};
			Var0.f_3 = {0f, 0f, 57f};
			break;
		
		case 14:
			Var0 = {-1478.436f, -3753.538f, 9.7027f};
			Var0.f_3 = {0f, 0f, -18f};
			break;
		
		case 15:
			Var0 = {1535.974f, -3061.877f, 9.7027f};
			Var0.f_3 = {0f, 0f, 62f};
			break;
		
		case 16:
			Var0 = {2471.418f, -2430.93f, 9.7027f};
			Var0.f_3 = {0f, 0f, 12f};
			break;
		
		case 17:
			Var0 = {2067.371f, -2813.01f, 9.7027f};
			Var0.f_3 = {0f, 0f, -148f};
			break;
		
		case 18:
			Var0 = {3021.088f, -1513.602f, 9.7027f};
			Var0.f_3 = {0f, 0f, 72f};
			break;
		
		case 19:
			Var0 = {3025.956f, -704.3854f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 20:
			Var0 = {2961.863f, -2007.631f, 9.7027f};
			Var0.f_3 = {0f, 0f, 47f};
			break;
		
		case 21:
			Var0 = {3398.169f, 1958.521f, 9.7027f};
			Var0.f_3 = {0f, 0f, 77f};
			break;
		
		case 22:
			Var0 = {3428.681f, 1202.06f, 9.7027f};
			Var0.f_3 = {0f, 0f, -148f};
			break;
		
		case 23:
			Var0 = {3787.83f, 2567.884f, 9.7027f};
			Var0.f_3 = {0f, 0f, -93f};
			break;
		
		case 24:
			Var0 = {4235.946f, 4004.252f, 9.7027f};
			Var0.f_3 = {0f, 0f, -118f};
			break;
		
		case 25:
			Var0 = {4245.151f, 4595.375f, 9.7027f};
			Var0.f_3 = {0f, 0f, -68f};
			break;
		
		case 26:
			Var0 = {4209.057f, 3392.705f, 9.7027f};
			Var0.f_3 = {0f, 0f, -98f};
			break;
		
		case 27:
			Var0 = {3738.81f, 5768.252f, 9.7027f};
			Var0.f_3 = {0f, 0f, -43f};
			break;
		
		case 28:
			Var0 = {3472.966f, 6315.245f, 9.7027f};
			Var0.f_3 = {0f, 0f, -23f};
			break;
		
		case 29:
			Var0 = {3693.468f, 5194.659f, 9.7027f};
			Var0.f_3 = {0f, 0f, 122f};
			break;
		
		case 30:
			Var0 = {572.9806f, 7142.138f, 9.7027f};
			Var0.f_3 = {0f, 0f, -58f};
			break;
		
		case 31:
			Var0 = {2024.036f, 6907.536f, 9.7027f};
			Var0.f_3 = {0f, 0f, -173f};
			break;
		
		case 32:
			Var0 = {1377.296f, 6863.23f, 9.7027f};
			Var0.f_3 = {0f, 0f, -3f};
			break;
		
		case 33:
			Var0 = {-1169.36f, 6000.214f, 9.7027f};
			Var0.f_3 = {0f, 0f, -88f};
			break;
		
		case 34:
			Var0 = {-759.2205f, 6573.955f, 9.7027f};
			Var0.f_3 = {0f, 0f, -153f};
			break;
		
		case 35:
			Var0 = {-373.8432f, 6964.86f, 9.7027f};
			Var0.f_3 = {0f, 0f, -108f};
			break;
	}
	return Var0;
}

void func_14(auto uParam0, int iParam1)
{
	Vector3 vVar0;
	
	switch (iParam1)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_18(iParam1, 4, &vVar0, -1);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, -1);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 19f;
			func_18(iParam1, 276, &vVar0, -1);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, -1);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 14.5f;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			*(uParam0[0 /*8*/]) = {355.0766f, -998.9677f, -96.51934f};
			*(uParam0[0 /*8*/].f_3) = {336.4037f, -998.4084f, -100.9239f};
			*(uParam0[0 /*8*/]).f_6 = 15.75f;
			*(uParam0[1 /*8*/]) = {347.1432f, -1013.496f, -100.4462f};
			*(uParam0[1 /*8*/].f_3) = {347.1626f, -1003.188f, -96.91225f};
			*(uParam0[1 /*8*/]).f_6 = 8.25f;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			*(uParam0[0 /*8*/]) = {270.2482f, -1000.776f, -95.95466f};
			*(uParam0[0 /*8*/].f_3) = {251.7831f, -1001.064f, -102.2478f};
			*(uParam0[0 /*8*/]).f_6 = 15f;
			*(uParam0[1 /*8*/]).f_6 = 0f;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			func_18(iParam1, 4, &vVar0, 61);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 61);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 21f;
			func_18(iParam1, 276, &vVar0, 61);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 61);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 14.5f;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			func_18(iParam1, 4, &vVar0, 73);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 73);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 9.75f;
			func_18(iParam1, 276, &vVar0, 73);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 73);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 10.25f;
			func_18(iParam1, 483, &vVar0, 73);
			*(uParam0[2 /*8*/]) = {vVar0};
			func_18(iParam1, 484, &vVar0, 73);
			*(uParam0[2 /*8*/].f_3) = {vVar0};
			*(uParam0[2 /*8*/]).f_6 = 6.75f;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			func_18(iParam1, 4, &vVar0, 77);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 77);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 9.75f;
			func_18(iParam1, 276, &vVar0, 77);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 77);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 5f;
			func_18(iParam1, 483, &vVar0, 77);
			*(uParam0[2 /*8*/]) = {vVar0};
			func_18(iParam1, 484, &vVar0, 77);
			*(uParam0[2 /*8*/].f_3) = {vVar0};
			*(uParam0[2 /*8*/]).f_6 = 9.5f;
			break;
		
		case 83:
		case 84:
		case 85:
			func_18(iParam1, 4, &vVar0, 83);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 83);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 26.75f;
			func_18(iParam1, 276, &vVar0, 83);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 83);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 18.25f;
			break;
		
		case 86:
			func_18(iParam1, 4, &vVar0, 86);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 86);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 14.75f;
			func_18(iParam1, 276, &vVar0, 86);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 86);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 11.75f;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			func_18(iParam1, 4, &vVar0, 88);
			*(uParam0[0 /*8*/]) = {vVar0};
			func_18(iParam1, 5, &vVar0, 88);
			*(uParam0[0 /*8*/].f_3) = {vVar0};
			*(uParam0[0 /*8*/]).f_6 = 27.25f;
			func_18(iParam1, 276, &vVar0, 88);
			*(uParam0[1 /*8*/]) = {vVar0};
			func_18(iParam1, 277, &vVar0, 88);
			*(uParam0[1 /*8*/].f_3) = {vVar0};
			*(uParam0[1 /*8*/]).f_6 = 7.5f;
			break;
	}
}

bool func_15(int iParam0)
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

bool func_16(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return true;
			
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return true;
			
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return true;
			}
		
		default:
	}
	return false;
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return true;
			break;
	}
	return false;
}

void func_18(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	struct<6>[] Var0 = new struct<6>[2];
	Vector3 vVar13;
	
	Var0[0 /*6*/] = {func_19(iParam3)};
	Var0[1 /*6*/] = {func_19(iParam0)};
	*uParam2 = {func_7(iParam1, iParam3)};
	vVar13 = {*uParam2 - Var0[0 /*6*/]};
	vVar13 = {func_6(vVar13, -Var0[0 /*6*/].f_3.f_2)};
	vVar13 = {func_6(vVar13, Var0[1 /*6*/].f_3.f_2)};
	*uParam2 = {_get_object_offset_from_coords(Var0[1 /*6*/], 0f, vVar13)};
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
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
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 += 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 -= 360f;
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 += 360f;
			}
			*uParam2.f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
			while (*uParam2.f_3.f_2 > 180f)
			{
				*uParam2.f_3.f_2 -= 360f;
			}
			while (*uParam2.f_3.f_2 < -180f)
			{
				*uParam2.f_3.f_2 += 360f;
			}
			break;
	}
}

struct<6> func_19(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 1:
			Var0 = {-794.9184f, 339.6266f, 200.4135f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 2:
			Var0 = {-761.0982f, 317.6259f, 169.5963f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 3:
			Var0 = {-761.1888f, 317.6295f, 216.0503f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 4:
			Var0 = {-795.3856f, 340.0188f, 152.7941f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 61:
			Var0 = {-778.5056f, 332.3779f, 212.1968f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 5:
			Var0 = {-258.1807f, -950.6853f, 70.0239f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 6:
			Var0 = {-285.0051f, -957.6552f, 85.3035f};
			Var0.f_3 = {0f, 0f, -110f};
			break;
		
		case 7:
			Var0 = {-1471.882f, -530.7484f, 62.34918f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 34:
			Var0 = {-1471.882f, -530.7484f, 49.72156f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 62:
			Var0 = {-1463.15f, -540.2369f, 74.2439f};
			Var0.f_3 = {0f, 0f, -145f};
			break;
		
		case 35:
			Var0 = {-885.3702f, -451.4775f, 119.327f};
			Var0.f_3 = {0f, 0f, 27.55617f};
			break;
		
		case 36:
			Var0 = {-913.0385f, -438.4284f, 114.3997f};
			Var0.f_3 = {0f, 0f, -153.3093f};
			break;
		
		case 37:
			Var0 = {-892.5499f, -430.4789f, 88.25368f};
			Var0.f_3 = {0f, 0f, 116.9193f};
			break;
		
		case 38:
			Var0 = {-35.0462f, -576.317f, 82.90739f};
			Var0.f_3 = {0f, 0f, 160f};
			break;
		
		case 39:
			Var0 = {-10.3788f, -590.7431f, 93.02542f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
		
		case 65:
			Var0 = {-22.2487f, -589.1461f, 80.2305f};
			Var0.f_3 = {0f, 0f, 69.88f};
			break;
		
		case 40:
			Var0 = {-900.6311f, -376.7462f, 78.27306f};
			Var0.f_3 = {0f, 0f, 26.92611f};
			break;
		
		case 41:
			Var0 = {-929.483f, -374.5104f, 102.2329f};
			Var0.f_3 = {0f, 0f, -152.5531f};
			break;
		
		case 63:
			Var0 = {-914.4202f, -375.8189f, 114.4743f};
			Var0.f_3 = {0f, 0f, -63f};
			break;
		
		case 42:
			Var0 = {-617.1647f, 64.6042f, 100.8196f};
			Var0.f_3 = {0f, 0f, 180f};
			break;
		
		case 43:
			Var0 = {-584.2015f, 42.7133f, 86.4187f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 64:
			Var0 = {-609.5665f, 50.2203f, 98.3998f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 73:
			Var0 = {-171.3969f, 494.2671f, 134.4935f};
			Var0.f_3 = {0f, 0f, 11f};
			break;
		
		case 74:
			Var0 = {339.4982f, 434.0887f, 146.2206f};
			Var0.f_3 = {0f, 0f, -63.5f};
			break;
		
		case 75:
			Var0 = {-761.3884f, 615.7333f, 140.9805f};
			Var0.f_3 = {0f, 0f, -71.5f};
			break;
		
		case 76:
			Var0 = {-678.1752f, 591.0076f, 142.2196f};
			Var0.f_3 = {0f, 0f, 40.5f};
			break;
		
		case 77:
			Var0 = {120.0541f, 553.793f, 181.0943f};
			Var0.f_3 = {0f, 0f, 6f};
			break;
		
		case 78:
			Var0 = {-571.4039f, 655.2008f, 142.6293f};
			Var0.f_3 = {0f, 0f, -14.5f};
			break;
		
		case 79:
			Var0 = {-742.2565f, 587.6547f, 143.0577f};
			Var0.f_3 = {0f, 0f, -29f};
			break;
		
		case 80:
			Var0 = {-857.2222f, 685.051f, 149.6502f};
			Var0.f_3 = {0f, 0f, 4.5f};
			break;
		
		case 81:
			Var0 = {-1287.65f, 443.2707f, 94.6919f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 82:
			Var0 = {374.2012f, 416.9688f, 142.6977f};
			Var0.f_3 = {0f, 0f, -14f};
			break;
		
		case 83:
			Var0 = {-787.7805f, 334.9232f, 186.1134f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 84:
			Var0 = {-787.7805f, 334.9232f, 215.8384f};
			Var0.f_3 = {0f, 0f, 90f};
			break;
		
		case 85:
			Var0 = {-773.2258f, 322.8252f, 194.8862f};
			Var0.f_3 = {0f, 0f, -90f};
			break;
		
		case 86:
			Var0 = {-1573.098f, -4085.806f, 9.7851f};
			Var0.f_3 = {0f, 0f, 162f};
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = {342.8157f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = {260.3297f, -997.4288f, -100f};
			Var0.f_3 = {0f, 0f, 0f};
			break;
		
		case 87:
			Var0 = {-1572.187f, -570.8315f, 109.9879f};
			Var0.f_3 = {0f, 0f, -54f};
			break;
		
		case 88:
			Var0 = {-1383.954f, -476.7112f, 73.507f};
			Var0.f_3 = {0f, 0f, 8f};
			break;
		
		case 89:
			Var0 = {-138.0029f, -629.739f, 170.2854f};
			Var0.f_3 = {0f, 0f, -84f};
			break;
		
		case 90:
			Var0 = {-74.8895f, -817.6883f, 244.8508f};
			Var0.f_3 = {0f, 0f, 70f};
			break;
	}
	return Var0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
	}
	return -1;
}

void func_21(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			*uParam0.f_33 = iParam1;
			*uParam0.f_1742.f_20 = {173.1406f, -1008.099f, -99.9999f};
			*uParam0.f_1742.f_23 = 343.276f;
			*uParam0.f_1742.f_16 = {178.4598f, -1006.157f, -99.9999f};
			*uParam0.f_1742.f_19 = 98.8495f;
			*(uParam0.f_1742.f_28[0 /*3*/]) = {171.4693f, -1003.677f, -99.9999f};
			*uParam0.f_1742.f_62[0] = 178.4085f;
			*(uParam0.f_1742.f_28[1 /*3*/]) = {175.2003f, -1003.816f, -99.9999f};
			*uParam0.f_1742.f_62[1] = 178.4085f;
			*(uParam0.f_1742.f_28[10 /*3*/]) = {170.7203f, -1007.513f, -99.9999f};
			*uParam0.f_1742.f_62[10] = 255.2687f;
			*uParam0.f_1742 = {172.86f, -1007.823f, -100.2499f};
			*uParam0.f_1742.f_3 = {172.8513f, -1008.995f, -96.24992f};
			*uParam0.f_1742.f_6 = 6.25f;
			*uParam0.f_1742.f_7 = 188.1891f;
			*uParam0.f_1742.f_105 = {177.9457f, -1008.697f, -97.2447f};
			*uParam0.f_1742.f_105.f_3 = {-25.359f, 2.3332f, 44.174f};
			*uParam0.f_1742.f_105.f_6 = 50f;
			*uParam0.f_1742.f_114 = {172.7787f, -1003.21f, -99.9999f};
			func_22(uParam0.f_1742.f_117, 2);
			*uParam0.f_1742.f_102 = {177.9406f, -1008.594f, -97.7757f};
			*uParam0.f_1742.f_8 = {179.0661f, -1003.424f, -100.0622f};
			*uParam0.f_1742.f_8.f_3 = {179.089f, -1006.223f, -97.24995f};
			*uParam0.f_1742.f_8.f_6 = 1.75f;
			*uParam0.f_1742.f_8.f_7 = 354.2478f;
			*uParam0.f_1742.f_113 = 1;
			*uParam0.f_1742.f_125 = {179.13f, -1003.859f, -98.766f};
			*uParam0.f_1742.f_128 = {90f, 0f, 0f};
			*uParam0.f_1742.f_131 = {173.259f, -1006.1f, -99.9999f};
			break;
		
		case 6:
			*uParam0.f_33 = iParam1;
			*uParam0.f_1742.f_20 = {206.1946f, -1006.424f, -99.999f};
			*uParam0.f_1742.f_23 = 11.222f;
			*uParam0.f_1742.f_16 = {206.7599f, -999.1566f, -100f};
			*uParam0.f_1742.f_19 = 84.8064f;
			*(uParam0.f_1742.f_28[0 /*3*/]) = {193.1573f, -1003.332f, -99.9999f};
			*uParam0.f_1742.f_62[0] = 0.0168f;
			*(uParam0.f_1742.f_28[1 /*3*/]) = {196.6948f, -1003.332f, -99.9999f};
			*uParam0.f_1742.f_62[1] = 0.0168f;
			*(uParam0.f_1742.f_28[2 /*3*/]) = {200.1865f, -1003.332f, -99.9999f};
			*uParam0.f_1742.f_62[2] = 0.0168f;
			*(uParam0.f_1742.f_28[3 /*3*/]) = {203.8078f, -1003.332f, -99.9999f};
			*uParam0.f_1742.f_62[3] = 0.0168f;
			*(uParam0.f_1742.f_28[4 /*3*/]) = {193.5414f, -997.6031f, -99.9999f};
			*uParam0.f_1742.f_62[4] = 211.0307f;
			*(uParam0.f_1742.f_28[5 /*3*/]) = {198.0267f, -997.2191f, -99.9999f};
			*uParam0.f_1742.f_62[5] = 206.5741f;
			*(uParam0.f_1742.f_28[10 /*3*/]) = {201.0628f, -995.7986f, -99.9999f};
			*uParam0.f_1742.f_62[10] = 191.848f;
			*uParam0.f_1742 = {198.3915f, -1007.091f, -100.25f};
			*uParam0.f_1742.f_3 = {198.4052f, -1008.852f, -96.25018f};
			*uParam0.f_1742.f_6 = 13.75f;
			*uParam0.f_1742.f_7 = 186.5288f;
			*uParam0.f_1742.f_105 = {190.7409f, -1007.672f, -97.4883f};
			*uParam0.f_1742.f_105.f_3 = {-21.4541f, -6.6235f, -45.6924f};
			*uParam0.f_1742.f_105.f_6 = 50f;
			*uParam0.f_1742.f_114 = {198.6071f, -1000.536f, -100f};
			func_22(uParam0.f_1742.f_117, 6);
			*uParam0.f_1742.f_102 = {207.1707f, -1007.917f, -97.6376f};
			*uParam0.f_1742.f_8 = {207.8867f, -999.075f, -100.25f};
			*uParam0.f_1742.f_8.f_3 = {207.0936f, -999.0939f, -97.49996f};
			*uParam0.f_1742.f_8.f_6 = 1.75f;
			*uParam0.f_1742.f_8.f_7 = 272.9543f;
			*uParam0.f_1742.f_113 = 2;
			*uParam0.f_1742.f_125 = {208.69f, -99.051f, -99f};
			*uParam0.f_1742.f_128 = {90f, 0f, 0f};
			*uParam0.f_1742.f_131 = {203.25f, -997.1685f, -99.999f};
			break;
		
		case 10:
			*uParam0.f_33 = iParam1;
			*uParam0.f_1742.f_20 = {229.2159f, -1005.104f, -99.9999f};
			*uParam0.f_1742.f_23 = 352.7715f;
			*uParam0.f_1742.f_16 = {237.6044f, -1004.748f, -99.9999f};
			*uParam0.f_1742.f_19 = 80.2776f;
			*(uParam0.f_1742.f_28[0 /*3*/]) = {224.3354f, -980.8477f, -99.9999f};
			*uParam0.f_1742.f_62[0] = 241.3985f;
			*(uParam0.f_1742.f_28[1 /*3*/]) = {224.3354f, -986.3477f, -99.9999f};
			*uParam0.f_1742.f_62[1] = 241.3985f;
			*(uParam0.f_1742.f_28[2 /*3*/]) = {224.3354f, -991.8477f, -99.9999f};
			*uParam0.f_1742.f_62[2] = 241.3985f;
			*(uParam0.f_1742.f_28[3 /*3*/]) = {224.3354f, -997.3477f, -99.9999f};
			*uParam0.f_1742.f_62[3] = 241.3985f;
			*(uParam0.f_1742.f_28[4 /*3*/]) = {224.3354f, -1002.848f, -99.9999f};
			*uParam0.f_1742.f_62[4] = 241.3985f;
			*(uParam0.f_1742.f_28[5 /*3*/]) = {232.6471f, -980.8477f, -99.9999f};
			*uParam0.f_1742.f_62[5] = 116.3088f;
			*(uParam0.f_1742.f_28[6 /*3*/]) = {232.6471f, -986.3477f, -99.9999f};
			*uParam0.f_1742.f_62[6] = 116.3088f;
			*(uParam0.f_1742.f_28[7 /*3*/]) = {232.6471f, -991.8477f, -99.9999f};
			*uParam0.f_1742.f_62[7] = 116.3088f;
			*(uParam0.f_1742.f_28[8 /*3*/]) = {232.6471f, -997.3477f, -99.9999f};
			*uParam0.f_1742.f_62[8] = 116.3088f;
			*(uParam0.f_1742.f_28[9 /*3*/]) = {232.6471f, -1002.848f, -99.9999f};
			*uParam0.f_1742.f_62[9] = 116.3088f;
			*(uParam0.f_1742.f_28[10 /*3*/]) = {223.414f, -977.0094f, -99.9999f};
			*uParam0.f_1742.f_62[10] = 259.4501f;
			*uParam0.f_1742 = {228.4083f, -1006.032f, -100.2499f};
			*uParam0.f_1742.f_3 = {228.3396f, -1011.415f, -95.77734f};
			*uParam0.f_1742.f_6 = 13.75f;
			*uParam0.f_1742.f_7 = 177.8521f;
			*uParam0.f_1742.f_105 = {228.277f, -1007.014f, -96.7812f};
			*uParam0.f_1742.f_105.f_3 = {-22.3788f, -1.5101f, -0.1088f};
			*uParam0.f_1742.f_105.f_6 = 50f;
			*uParam0.f_1742.f_114 = {227.8602f, -991.1093f, -99.9999f};
			func_22(uParam0.f_1742.f_117, 10);
			*uParam0.f_1742.f_102 = {237.4485f, -1006.803f, -98.3606f};
			*uParam0.f_1742.f_8 = {237.9517f, -1004.842f, -100.2499f};
			*uParam0.f_1742.f_8.f_3 = {239.1281f, -1004.828f, -97.26435f};
			*uParam0.f_1742.f_8.f_6 = 2f;
			*uParam0.f_1742.f_8.f_7 = 260.1318f;
			*uParam0.f_1742.f_113 = 3;
			*uParam0.f_1742.f_125 = {239.778f, -1004.827f, -98.56f};
			*uParam0.f_1742.f_128 = {90f, 0f, 0f};
			*uParam0.f_1742.f_131 = {228.8723f, -978.2864f, -99.9999f};
			break;
	}
}

struct<8> func_22(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = {175.0434f, -998.7965f, -100.2256f};
			*uParam0.f_3 = {175.0878f, -1009.004f, -95.99992f};
			*uParam0.f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = {212.9084f, -999.6776f, -99.99996f};
			*uParam0.f_3 = {189.6844f, -1000.068f, -95.2507f};
			*uParam0.f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = {230.0094f, -1009.124f, -100.6539f};
			*uParam0.f_3 = {230.5939f, -965.522f, -94.53618f};
			*uParam0.f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

void func_23(auto uParam0, int iParam1)
{
	struct<4> Var0;
	
	*(uParam0.f_38[0 /*27*/]).f_22 = 5;
	*(uParam0.f_38[1 /*27*/]).f_22 = 5;
	*(uParam0.f_38[2 /*27*/]).f_22 = 5;
	switch (iParam1)
	{
		case 1:
			*uParam0 = {-773.4775f, 310.6321f, 84.6981f};
			*(uParam0.f_3[0 /*3*/]) = {-773.6766f, 310.0611f, 84.6981f};
			*(uParam0.f_3[1 /*3*/]) = {-795.866f, 307.7965f, 84.7028f};
			*uParam0.f_24 = {-885.9518f, 223.3702f, 88.5406f};
			*uParam0.f_24.f_3 = {26.6167f, 0f, -45.2182f};
			*uParam0.f_24.f_6 = 49.3611f;
			*uParam0.f_13 = {-774.1072f, 303.6408f, 84.7069f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-778.3268f, 313.4883f, 84.23003f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-769.4003f, 313.4886f, 87.72968f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 6.2405f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-778.7825f, 312.6918f, 84.69943f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-778.8333f, 313.5024f, 86.1362f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 0f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-774.1633f, 301.68f, 84.7287f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 179.6133f;
			*(uParam0.f_1886[0 /*7*/]) = {-760.2628f, 308.732f, 88.87f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-15.524f, 0f, 96.4358f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-796.1804f, 307.5f, 84.20988f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-796.1525f, 314.7674f, 89.1925f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 9.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 359.8296f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-790.3141f, 308.086f, 84.70361f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-790.291f, 308.7186f, 86.1399f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -0.46f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-801.4907f, 309.0866f, 90.1835f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-22.1431f, 6.4677f, -147.0698f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 52.8642f;
			*uParam0.f_1742.f_24 = {-789.7264f, 306.3527f, 84.7041f};
			*uParam0.f_1742.f_27 = 138.517f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-797.892f, 309.0646f, 84.7099f};
			*uParam0.f_1742.f_90[0] = 178.3762f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-794.144f, 308.9016f, 84.7101f};
			*uParam0.f_1742.f_90[1] = 182.3833f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-795.4863f, 301.8851f, 84.7067f};
			*uParam0.f_1742.f_90[2] = 180.8176f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-791.718f, 302.1822f, 84.7114f};
			*uParam0.f_1742.f_90[3] = 179.7487f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-799.1396f, 301.9907f, 84.702f};
			*uParam0.f_1742.f_90[4] = 180.1214f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 2:
			*uParam0 = {-250.8403f, -946.8867f, 30.221f};
			*(uParam0.f_3[0 /*3*/]) = {-261.9f, -970.1f, 30.4f};
			*(uParam0.f_3[1 /*3*/]) = {-281.5628f, -995.2958f, 23.1968f};
			*uParam0.f_24 = {-213.5606f, -1073.008f, 32.9946f};
			*uParam0.f_24.f_3 = {22.7554f, 0f, 28.5746f};
			*uParam0.f_24.f_6 = 50.0029f;
			*uParam0.f_13 = {-258.657f, -979.0373f, 30.2196f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-263.6241f, -971.4352f, 30.21947f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-259.7462f, -969.7329f, 33.21964f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 45.6118f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-260.0395f, -969.3092f, 30.21964f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-260.5696f, -969.0703f, 31.7697f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 62.19f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-250.4661f, -948.8276f, 30.221f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 280.3501f;
			*(uParam0.f_1886[0 /*7*/]) = {-267.5294f, -972.4159f, 33.8078f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-29.1007f, 0f, -87.3852f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 63.7505f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-283.6628f, -994.5131f, 22.88622f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-278.3134f, -996.5045f, 26.92348f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 9.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 72.7851f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-280.0236f, -991.7193f, 23.23886f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-280.5642f, -991.5149f, 24.8514f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 70.39f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-272.2346f, -994.454f, 29.0453f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-27.4266f, 0f, 97.1765f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-246.8039f, -1002.965f, 28.0879f};
			*uParam0.f_1742.f_27 = 317.9801f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-275.3677f, -999.8269f, 24.4617f};
			*uParam0.f_1742.f_90[0] = 250.0199f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-267.1935f, -1002.824f, 25.8638f};
			*uParam0.f_1742.f_90[1] = 250.0199f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-259.9177f, -1005.336f, 27.0322f};
			*uParam0.f_1742.f_90[2] = 250.0199f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-253.0097f, -1007.822f, 28.0031f};
			*uParam0.f_1742.f_90[3] = 250.0199f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-250.705f, -998.8266f, 28.306f};
			*uParam0.f_1742.f_90[4] = 252.237f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 3:
			*uParam0 = {-1438.141f, -546.4819f, 33.7424f};
			*(uParam0.f_3[0 /*3*/]) = {-1443.094f, -544.7684f, 33.7424f};
			*(uParam0.f_3[1 /*3*/]) = {-1456.146f, -503.6975f, 31.125f};
			*uParam0.f_24 = {-1392.074f, -570.8373f, 31.4774f};
			*uParam0.f_24.f_3 = {30.5301f, 0f, 64.2307f};
			*uParam0.f_24.f_6 = 35.9982f;
			*uParam0.f_13 = {-1437.538f, -548.4748f, 33.7424f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1443.327f, -544.2654f, 33.24239f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1442.532f, -545.398f, 36.74239f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 33.6492f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1441.437f, -543.9649f, 33.74239f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1441.855f, -543.4296f, 35.2561f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 34.3f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1441.411f, -546.8956f, 33.7424f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 228.9348f;
			*(uParam0.f_1886[0 /*7*/]) = {-1440.397f, -543.9622f, 38.4101f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-50.8306f, 0f, 146.0578f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 66.686f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1454.587f, -504.5946f, 30.90982f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1456.92f, -501.0045f, 34.77502f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 7.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 215.8951f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1453.772f, -499.8347f, 31.65348f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1453.515f, -500.2265f, 33.0628f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -145.7f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1461.336f, -504.5396f, 34.18f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-33.3185f, 0f, -101.1299f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 79.7441f;
			*uParam0.f_1742.f_24 = {-1461.478f, -502.4903f, 31.9616f};
			*uParam0.f_1742.f_27 = 344.4053f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1457.942f, -500.4242f, 31.5223f};
			*uParam0.f_1742.f_90[0] = 34.5619f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1456.427f, -494.6811f, 32.0311f};
			*uParam0.f_1742.f_90[1] = 327.6367f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1451.832f, -489.7961f, 33.1993f};
			*uParam0.f_1742.f_90[2] = 303.4561f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1460.209f, -490.6057f, 32.3611f};
			*uParam0.f_1742.f_90[3] = 305.0743f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1454.507f, -486.7246f, 33.346f};
			*uParam0.f_1742.f_90[4] = 304.9227f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 4:
			*uParam0 = {-916.2685f, -457.9519f, 38.5999f};
			*(uParam0.f_3[0 /*3*/]) = {-913.85f, -455.1392f, 38.5999f};
			*(uParam0.f_3[1 /*3*/]) = {-820.8674f, -436.8401f, 35.6417f};
			*uParam0.f_24 = {-961.9043f, -550.012f, 32.5747f};
			*uParam0.f_24.f_3 = {28.8097f, 0f, -26.8876f};
			*uParam0.f_24.f_6 = 50f;
			*uParam0.f_13 = {-926.9868f, -458.9109f, 36.2744f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-916.7118f, -448.5001f, 38.83544f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-912.639f, -456.8022f, 41.34456f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 283.8998f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-913.5948f, -456.4432f, 38.59986f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-912.8546f, -456.0751f, 40.1971f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -63f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-916.9406f, -458.2739f, 38.5999f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 118.3416f;
			*(uParam0.f_1886[0 /*7*/]) = {-918.8735f, -446.8497f, 43.319f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-27.7029f, 0f, 171.7493f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-820.2496f, -436.8228f, 35.22919f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-824.7759f, -439.0703f, 39.39095f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 8.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 303.8392f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-819.691f, -440.6334f, 35.63988f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-819.3383f, -441.3292f, 37.222f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -153f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-819.843f, -441.3822f, 40.5771f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-45.4656f, 0f, 22.1899f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 62.5824f;
			*uParam0.f_1742.f_24 = {-831.2813f, -421.1668f, 35.7651f};
			*uParam0.f_1742.f_27 = 115.6516f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-825.1858f, -437.1445f, 35.6399f};
			*uParam0.f_1742.f_90[0] = 116.8246f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-823.4354f, -440.7882f, 35.6399f};
			*uParam0.f_1742.f_90[1] = 120.1966f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-828.4323f, -430.9531f, 35.6402f};
			*uParam0.f_1742.f_90[2] = 122.4224f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-830.1832f, -427.4356f, 35.6402f};
			*uParam0.f_1742.f_90[3] = 117.4938f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-831.9682f, -437.3509f, 35.6399f};
			*uParam0.f_1742.f_90[4] = 1f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 5:
			*uParam0 = {-49.541f, -581.6407f, 36.1681f};
			*(uParam0.f_3[0 /*3*/]) = {-47.3145f, -585.9766f, 36.9593f};
			*(uParam0.f_3[1 /*3*/]) = {-33.4055f, -621.6096f, 34.0626f};
			*uParam0.f_24 = {-67.3495f, -513.4921f, 42.6787f};
			*uParam0.f_24.f_3 = {23.7233f, 0f, -151.7019f};
			*uParam0.f_24.f_6 = 55.5648f;
			*uParam0.f_13 = {-54.8035f, -583.1857f, 35.8327f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-47.95183f, -585.8011f, 36.45932f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-46.80829f, -586.2078f, 40.02329f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 5.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 257.7099f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-48.9106f, -589.7946f, 36.95801f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-49.0912f, -590.4172f, 38.4656f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 160f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-50.2013f, -584.2267f, 35.8979f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 73.2695f;
			*(uParam0.f_1886[0 /*7*/]) = {-49.4323f, -589.8673f, 40.3768f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-33.574f, 0f, -12.6715f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 64.1407f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-29.23775f, -623.1992f, 33.63252f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-34.74736f, -621.2883f, 38.78943f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5.25f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 73.2531f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-32.09113f, -619.1457f, 34.22395f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-32.7921f, -618.8801f, 35.2212f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 70.13f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-34.8441f, -625.349f, 38.6518f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-31.8634f, 0f, -53.0187f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 58.2563f;
			*uParam0.f_1742.f_24 = {-32.8449f, -625.3205f, 34.2937f};
			*uParam0.f_1742.f_27 = 244.5756f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-28.0896f, -623.933f, 34.4009f};
			*uParam0.f_1742.f_90[0] = 253.536f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-20.8009f, -626.0856f, 34.7246f};
			*uParam0.f_1742.f_90[1] = 253.5255f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-13.5114f, -635.1727f, 34.7246f};
			*uParam0.f_1742.f_90[2] = 342.8254f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-10.9497f, -627.4315f, 34.7246f};
			*uParam0.f_1742.f_90[3] = 339.6547f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-8.0308f, -619.5068f, 35.0813f};
			*uParam0.f_1742.f_90[4] = 338.0451f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 6:
			*uParam0 = {-938.8708f, -378.8302f, 37.9613f};
			*(uParam0.f_3[0 /*3*/]) = {-932.8344f, -383.6555f, 37.9613f};
			*(uParam0.f_3[1 /*3*/]) = {-877.7446f, -359.9399f, 34.8356f};
			*uParam0.f_24 = {-960.2891f, -472.7867f, 39.0439f};
			*uParam0.f_24.f_3 = {24.7986f, 0.0409f, -21.4827f};
			*uParam0.f_24.f_6 = 52.0185f;
			*uParam0.f_13 = {-933.3674f, -395.4044f, 37.9613f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-932.0299f, -383.2085f, 37.46125f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-933.4816f, -383.9475f, 40.96125f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 294.3158f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-934.8823f, -380.3759f, 37.96125f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-934.3623f, -380.0636f, 39.6193f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -62.99f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-935.1856f, -384.7494f, 37.9613f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 124.6926f;
			*(uParam0.f_1886[0 /*7*/]) = {-937.7342f, -382.6371f, 41.9208f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-27.8942f, 0f, -96.6988f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 57.8662f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-878.4114f, -358.7202f, 34.31583f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-875.6465f, -363.7974f, 38.61643f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 25.4424f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-875.5203f, -359.5458f, 34.85448f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-875.1261f, -359.3368f, 36.5067f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -63f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-880.0004f, -360.9817f, 37.945f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-40.5587f, 0f, -86.9507f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 70.6367f;
			*uParam0.f_1742.f_24 = {-866.4783f, -374.252f, 38.5193f};
			*uParam0.f_1742.f_27 = 207.0932f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-876.1686f, -362.7803f, 35.2834f};
			*uParam0.f_1742.f_90[0] = 210.3103f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-872.5136f, -370.2674f, 37.3645f};
			*uParam0.f_1742.f_90[1] = 208.8528f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-868.9897f, -377.3745f, 38.3081f};
			*uParam0.f_1742.f_90[2] = 205.0445f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-858.408f, -377.153f, 38.376f};
			*uParam0.f_1742.f_90[3] = 117.6478f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-879.7519f, -385.9676f, 38.007f};
			*uParam0.f_1742.f_90[4] = 111.2521f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 7:
			*uParam0 = {-618.4424f, 32.5811f, 42.5305f};
			*(uParam0.f_3[0 /*3*/]) = {-619.1315f, 37.8841f, 42.5883f};
			*(uParam0.f_3[1 /*3*/]) = {-630.5854f, 56.6084f, 42.725f};
			*uParam0.f_24 = {-667.2404f, -25.1369f, 43.1678f};
			*uParam0.f_24.f_3 = {21.8261f, 0f, -39.9922f};
			*uParam0.f_24.f_6 = 48.3545f;
			*uParam0.f_13 = {-618.4301f, 31.9811f, 42.5303f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-622.614f, 38.36953f, 42.70671f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-613.7298f, 38.36672f, 45.55016f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 356.9405f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-614.0399f, 36.98944f, 42.56974f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-613.5477f, 36.9706f, 44.2302f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-614.7665f, 40.6905f, 42.5906f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 173.3715f;
			*(uParam0.f_1886[0 /*7*/]) = {-613.7437f, 34.6647f, 46.9721f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-35.5307f, 0f, 68.859f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-629.8716f, 56.23208f, 42.22496f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-634.5947f, 56.23968f, 47.22496f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 10.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 272.9018f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-631.3143f, 52.52833f, 42.72496f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-631.3015f, 51.9951f, 44.3777f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 180f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-638.8582f, 62.414f, 46.2529f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-14.5847f, 0f, -138.3022f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-637.4379f, 59.9699f, 43.4399f};
			*uParam0.f_1742.f_27 = 110.4011f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-636.2328f, 53.451f, 42.4178f};
			*uParam0.f_1742.f_90[0] = 93.8782f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-636.4083f, 56.4379f, 42.7701f};
			*uParam0.f_1742.f_90[1] = 92.4188f;
			*uParam0.f_1742.f_96[0] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-636.2635f, 59.5577f, 43.2135f};
			*uParam0.f_1742.f_90[2] = 90.156f;
			*uParam0.f_1742.f_96[0] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-642.732f, 60.1266f, 43.7986f};
			*uParam0.f_1742.f_90[3] = 86.9803f;
			*uParam0.f_1742.f_96[0] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-642.8851f, 55.8529f, 42.6135f};
			*uParam0.f_1742.f_90[4] = 89.2534f;
			*uParam0.f_1742.f_96[0] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 8:
			*uParam0 = {282.0378f, -158.5011f, 62.6221f};
			*(uParam0.f_3[0 /*3*/]) = {284.6026f, -160.2201f, 63.6221f};
			*(uParam0.f_3[1 /*3*/]) = {280.2899f, -146.4596f, 64.1177f};
			*uParam0.f_24 = {263.1562f, -117.1081f, 76.728f};
			*uParam0.f_24.f_3 = {-8.117f, 0f, -147.0301f};
			*uParam0.f_24.f_6 = 37.9554f;
			*uParam0.f_13 = {272.6708f, -156.0256f, 62.3682f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {286.7726f, -159.5756f, 63.18133f};
			*(uParam0.f_38[0 /*27*/].f_3) = {286.0667f, -161.5137f, 66.6778f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 250.5252f;
			*(uParam0.f_38[0 /*27*/].f_23) = {285.2146f, -162.0428f, 63.62207f};
			*(uParam0.f_38[0 /*27*/].f_16) = {285.8317f, -162.205f, 65.1628f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -110f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {282.6784f, -158.9562f, 62.6221f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 71.7708f;
			*(uParam0.f_1886[0 /*7*/]) = {284.4029f, -164.5213f, 68.2954f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-36.4588f, 0f, 18.4559f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {286.9199f, -145.6808f, 63.5647f};
			*(uParam0.f_38[1 /*27*/].f_3) = {284.9288f, -151.1508f, 67.92525f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5.25f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 250.4756f;
			*(uParam0.f_38[1 /*27*/].f_23) = {285.9212f, -144.6046f, 64.08031f};
			*(uParam0.f_38[1 /*27*/].f_16) = {286.4148f, -144.7555f, 65.6753f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -110f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {286.9442f, -142.8617f, 68.419f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-28.8168f, 3.9695f, 133.951f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {274.3903f, -137.1274f, 65.7109f};
			*uParam0.f_1742.f_27 = 89.7489f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {278.6978f, -145.3078f, 64.2479f};
			*uParam0.f_1742.f_90[0] = 66.6052f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {269.8685f, -133.7206f, 65.8865f};
			*uParam0.f_1742.f_90[1] = 342.0529f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {283.8793f, -135.192f, 66.3761f};
			*uParam0.f_1742.f_90[2] = 68.5635f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {270.2002f, -163.5318f, 59.976f};
			*uParam0.f_1742.f_90[3] = 69.4681f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {265.367f, -150.362f, 62.7343f};
			*uParam0.f_1742.f_90[4] = 338.2748f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 9:
			*uParam0 = {2.8889f, 35.7762f, 70.5349f};
			*(uParam0.f_3[0 /*3*/]) = {2.84f, 35.2876f, 70.5349f};
			*(uParam0.f_3[1 /*3*/]) = {-11.7956f, 36.4751f, 70.6604f};
			*uParam0.f_24 = {-19.3488f, -9.4322f, 89.2875f};
			*uParam0.f_24.f_3 = {-5.8716f, 0f, -21.2911f};
			*uParam0.f_24.f_6 = 40.1614f;
			*uParam0.f_13 = {0.7433f, 30.957f, 70.0813f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {2.70167f, 37.91897f, 69.36495f};
			*(uParam0.f_38[0 /*27*/].f_3) = {4.666537f, 37.20284f, 73.37553f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 336.3539f;
			*(uParam0.f_38[0 /*27*/].f_23) = {5.72587f, 36.02024f, 70.53527f};
			*(uParam0.f_38[0 /*27*/].f_16) = {6.1991f, 35.8211f, 72.121f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -110f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {1.7704f, 32.7973f, 70.0909f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 149.8567f;
			*(uParam0.f_1886[0 /*7*/]) = {5.6274f, 36.3837f, 73.3125f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-32.924f, 0f, 101.9878f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50.5336f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-15.47612f, 44.57702f, 69.84895f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-4.834036f, 40.70276f, 73.87646f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 345.9296f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-10.3984f, 41.7438f, 70.4113f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-5.2392f, 39.6933f, 71.7436f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -110f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-3.7128f, 38.3486f, 74.8271f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-30.142f, 4.818f, 92.9892f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-4.8106f, 34.7009f, 70.3499f};
			*uParam0.f_1742.f_27 = 165.3343f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-14.0049f, 39.8929f, 70.7672f};
			*uParam0.f_1742.f_90[0] = 161.0269f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-8.7064f, 37.7788f, 70.5283f};
			*uParam0.f_1742.f_90[1] = 161.1748f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-13.4518f, 32.8482f, 70.5989f};
			*uParam0.f_1742.f_90[2] = 160.3379f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-19.8498f, 34.1721f, 70.7425f};
			*uParam0.f_1742.f_90[3] = 111.2427f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-9.1111f, 30.4793f, 70.2918f};
			*uParam0.f_1742.f_90[4] = 206.6557f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 10:
			*uParam0 = {9.74f, 84.6906f, 77.3975f};
			*(uParam0.f_3[0 /*3*/]) = {10.4433f, 83.3155f, 77.3975f};
			*(uParam0.f_3[1 /*3*/]) = {26.8874f, 82.7536f, 73.7902f};
			*uParam0.f_24 = {-42.7037f, 92.9252f, 89.2578f};
			*uParam0.f_24.f_3 = {-6.9786f, 0f, -109.8209f};
			*uParam0.f_24.f_6 = 42.5562f;
			*uParam0.f_13 = {-11.8278f, 96.4341f, 77.5908f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {10.32504f, 80.74281f, 77.24245f};
			*(uParam0.f_38[0 /*27*/].f_3) = {8.381888f, 81.45248f, 80.49538f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 161.0883f;
			*(uParam0.f_38[0 /*27*/].f_23) = {11.84303f, 81.16698f, 77.43491f};
			*(uParam0.f_38[0 /*27*/].f_16) = {12.5023f, 80.8683f, 78.9946f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -110f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-12.7328f, 94.7645f, 77.2155f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 140.6907f;
			*(uParam0.f_1886[0 /*7*/]) = {14.4919f, 82.5583f, 80.6919f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-19.366f, 0f, 70.3056f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {28.16142f, 75.67027f, 73.52016f};
			*(uParam0.f_38[1 /*27*/].f_3) = {22.64169f, 77.67749f, 77.29105f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 159.8871f;
			*(uParam0.f_38[1 /*27*/].f_23) = {23.60801f, 78.95453f, 73.63702f};
			*(uParam0.f_38[1 /*27*/].f_16) = {23.3697f, 78.2563f, 75.2878f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 160f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {21.0105f, 79.3261f, 76.9841f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-23.5919f, 2.1002f, -88.4588f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {30.0462f, 77.2835f, 73.7957f};
			*uParam0.f_1742.f_27 = 280.8853f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {23.1398f, 81.3826f, 73.6617f};
			*uParam0.f_1742.f_90[0] = 282.895f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {30.0217f, 79.9709f, 73.9552f};
			*uParam0.f_1742.f_90[1] = 279.5829f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {38.0929f, 77.4687f, 74.4692f};
			*uParam0.f_1742.f_90[2] = 247.9818f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {47.0701f, 79.3809f, 75.4097f};
			*uParam0.f_1742.f_90[3] = 340.0299f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {43.1922f, 69.5084f, 73.3978f};
			*uParam0.f_1742.f_90[4] = 159.0439f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 11:
			*uParam0 = {-512.1465f, 111.2223f, 62.351f};
			*(uParam0.f_3[0 /*3*/]) = {-512.0948f, 110.6228f, 62.5925f};
			*(uParam0.f_3[1 /*3*/]) = {-496.6235f, 84.257f, 54.8619f};
			*uParam0.f_24 = {-534.6452f, 137.1912f, 75.7177f};
			*uParam0.f_24.f_3 = {-4.1062f, 0f, -142.8033f};
			*uParam0.f_24.f_6 = 36.7108f;
			*uParam0.f_13 = {-512.1901f, 115.9776f, 62.318f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-510.4756f, 107.9882f, 60.59078f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-512.752f, 107.6685f, 65.34436f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 194.6077f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-510.2329f, 108.6199f, 62.80056f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-510.1327f, 108.0511f, 64.2438f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -172f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-512.5056f, 111.1181f, 62.3456f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 19.982f;
			*(uParam0.f_1886[0 /*7*/]) = {-508.4918f, 109.1324f, 65.8247f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-19.4084f, 0f, 61.2413f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-495.9238f, 87.28843f, 54.63787f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-496.0893f, 81.49071f, 58.33294f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 272.1017f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-497.0595f, 78.38213f, 54.88129f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-496.4968f, 78.337f, 56.4797f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -91.5f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-496.7119f, 77.6624f, 59.1793f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-28.4671f, 4.9064f, 26.285f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-498.7155f, 79.435f, 55.0144f};
			*uParam0.f_1742.f_27 = 88.8337f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-499.8006f, 84.5234f, 55.1152f};
			*uParam0.f_1742.f_90[0] = 88.442f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-508.5442f, 84.7626f, 55.8091f};
			*uParam0.f_1742.f_90[1] = 88.4254f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-517.9949f, 85.0214f, 56.5581f};
			*uParam0.f_1742.f_90[2] = 88.4314f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-529.6277f, 84.8542f, 57.3585f};
			*uParam0.f_1742.f_90[3] = 91.5164f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-538.8803f, 84.3561f, 57.4109f};
			*uParam0.f_1742.f_90[4] = 84.0946f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 12:
			*uParam0 = {-197.3405f, 88.1053f, 68.7422f};
			*(uParam0.f_3[0 /*3*/]) = {-197.516f, 87.9089f, 68.7457f};
			*(uParam0.f_3[1 /*3*/]) = {-213.6f, 38f, 60.5f};
			*uParam0.f_24 = {-198.4187f, 129.4615f, 77.2345f};
			*uParam0.f_24.f_3 = {-1.6958f, 0f, -165.7142f};
			*uParam0.f_24.f_6 = 39.1733f;
			*uParam0.f_13 = {-202.4989f, 98.5772f, 68.4945f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-197.096f, 85.23809f, 67.55541f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-198.5943f, 85.55336f, 71.30595f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 171.9653f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-198.9633f, 86.33958f, 68.75433f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-199.1217f, 85.5957f, 70.3121f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 169f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-199.7983f, 94.968f, 68.5241f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 33.5049f;
			*(uParam0.f_1886[0 /*7*/]) = {-195.7844f, 86.3135f, 72.2746f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-20.9847f, 0f, 31.3591f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-211.7682f, 31.64632f, 58.19961f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-209.5516f, 43.9165f, 62.87999f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 267.3955f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-212.2958f, 32.53296f, 58.82444f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-212.4217f, 31.8592f, 60.4929f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 171f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-209.6682f, 68.034f, 69.8104f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-21.822f, 0f, -10.4246f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 62.2409f;
			*uParam0.f_1742.f_24 = {-208.6779f, 79.2142f, 66.6934f};
			*uParam0.f_1742.f_27 = 70.3424f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-215.2726f, 36.7172f, 58.5308f};
			*uParam0.f_1742.f_90[0] = 83.0326f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-214.0385f, 40.5861f, 59.1211f};
			*uParam0.f_1742.f_90[1] = 80.4651f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-222.028f, 39.8632f, 58.6695f};
			*uParam0.f_1742.f_90[2] = 78.6603f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-220.3056f, 43.9508f, 59.7136f};
			*uParam0.f_1742.f_90[3] = 80.1687f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-222.5635f, 35.5804f, 57.6641f};
			*uParam0.f_1742.f_90[4] = 82.3515f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 13:
			*uParam0 = {-631.8065f, 170.2451f, 60.3941f};
			*(uParam0.f_3[0 /*3*/]) = {-628.8236f, 169.5813f, 60.1437f};
			*(uParam0.f_3[1 /*3*/]) = {-628.5014f, 152.7422f, 55.7063f};
			*uParam0.f_24 = {-696.6976f, 83.2761f, 71.5015f};
			*uParam0.f_24.f_3 = {1.1701f, 0f, -49.3976f};
			*uParam0.f_24.f_6 = 23.6246f;
			*uParam0.f_13 = {-637.3282f, 169.9458f, 60.4572f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-627.3895f, 171.0531f, 62.46693f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-627.3917f, 168.3466f, 59.97893f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 277.959f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-628.056f, 168.0867f, 60.15696f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-627.387f, 168.1326f, 61.8173f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-630.0102f, 169.6864f, 60.2309f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 92.4426f;
			*(uParam0.f_1886[0 /*7*/]) = {-628.483f, 163.9228f, 64.2357f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-30.7736f, 0f, 7.6243f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-625.9822f, 155.9878f, 59.13111f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-625.9763f, 148.7176f, 55.12997f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 274.2654f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-626.4587f, 149.2809f, 55.50729f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-626.4755f, 148.8474f, 57.1539f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 179.5f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-626.3999f, 148.4401f, 59.2913f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-30.5292f, 2.6808f, 39.367f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-637.4221f, 158.0952f, 57.6976f};
			*uParam0.f_1742.f_27 = 98.4512f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-630.2997f, 152.306f, 55.9224f};
			*uParam0.f_1742.f_90[0] = 88.1313f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-638.1433f, 150.1428f, 56.6599f};
			*uParam0.f_1742.f_90[1] = 105.7233f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-638.8364f, 154.329f, 57.0811f};
			*uParam0.f_1742.f_90[2] = 76.4708f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-642.5622f, 144.1441f, 56.0075f};
			*uParam0.f_1742.f_90[3] = 178.5606f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-643.6265f, 161.9029f, 58.4242f};
			*uParam0.f_1742.f_90[4] = 2.3175f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 14:
			*uParam0 = {-973.3757f, -1429.425f, 6.6791f};
			*(uParam0.f_3[0 /*3*/]) = {-970.4616f, -1431.552f, 6.6791f};
			*(uParam0.f_3[1 /*3*/]) = {-979.8791f, -1449.725f, 3.7352f};
			*uParam0.f_24 = {-1005.595f, -1485.397f, 16.3224f};
			*uParam0.f_24.f_3 = {-0.7255f, 0f, -31.8818f};
			*uParam0.f_24.f_6 = 38.7981f;
			*uParam0.f_13 = {-990.0446f, -1438.654f, 4.0512f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-969.6593f, -1429.292f, 9.274211f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-968.3226f, -1432.8f, 5.267247f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 288.7475f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-968.9998f, -1433.182f, 6.67908f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-968.2812f, -1432.925f, 8.1858f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 70f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 1;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-975.5323f, -1435.457f, 6.6791f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 114.4599f;
			*(uParam0.f_1886[0 /*7*/]) = {-974.1971f, -1427.844f, 9.1311f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-10.871f, 0f, -136.918f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-979.5995f, -1446.877f, 6.075722f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-977.9403f, -1451.485f, 3.582479f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.25f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 290.9057f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-980.5159f, -1447.772f, 3.72778f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-980.7506f, -1447.021f, 4.5223f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -70f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 3;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-977.2012f, -1452.591f, 6.194f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-22.1332f, 1.2127f, 61.7078f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-988.2418f, -1447.773f, 4.1853f};
			*uParam0.f_1742.f_27 = 119.0613f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-992.6162f, -1425.061f, 4.0163f};
			*uParam0.f_1742.f_90[0] = 108.4024f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-998.91f, -1427.121f, 4.0575f};
			*uParam0.f_1742.f_90[1] = 109.1714f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1003.862f, -1434.213f, 4.0621f};
			*uParam0.f_1742.f_90[2] = 145.2133f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1003.106f, -1424.053f, 4.0372f};
			*uParam0.f_1742.f_90[3] = 109.7396f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1010.441f, -1426.668f, 4.0384f};
			*uParam0.f_1742.f_90[4] = 109.6394f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 15:
			*uParam0 = {-829.1362f, -855.0104f, 18.6297f};
			*(uParam0.f_3[0 /*3*/]) = {-831.4647f, -861.3573f, 19.6944f};
			*(uParam0.f_3[1 /*3*/]) = {-761.7806f, -870.2498f, 20.0595f};
			*uParam0.f_24 = {-793.917f, -794.2643f, 43.4654f};
			*uParam0.f_24.f_3 = {-9.0463f, 0f, 177.2242f};
			*uParam0.f_24.f_6 = 44.2989f;
			*uParam0.f_13 = {-831.3257f, -850.3224f, 18.5661f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-828.7973f, -862.9904f, 21.95895f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-833.8962f, -862.9568f, 19.44106f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 185.1126f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-833.6105f, -862.5637f, 19.69465f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-833.9494f, -862.6305f + 0.1f, 21.2407f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-831.7097f, -860.6437f, 19.6944f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 358.8877f;
			*(uParam0.f_1886[0 /*7*/]) = {-828.6544f, -862.7701f, 23.569f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.3573f, 0f, 58.9153f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-763.5058f, -874.874f, 23.62881f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-763.5212f, -866.5589f, 19.64355f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 91.3542f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-762.8984f, -866.1638f, 19.91171f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-763.3941f, -866.1509f, 21.3894f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-763.5423f, -875.5127f, 23.5228f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-21.7641f, 5.0336f, -41.0061f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-761.8991f, -865.2859f, 20.1452f};
			*uParam0.f_1742.f_27 = 258.711f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-760.1564f, -868.7128f, 20.4351f};
			*uParam0.f_1742.f_90[0] = 268.3556f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-760.1168f, -872.2332f, 20.2893f};
			*uParam0.f_1742.f_90[1] = 268.082f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-754.119f, -874.6438f, 20.7304f};
			*uParam0.f_1742.f_90[2] = 229.9483f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-753.7412f, -869.8978f, 20.9882f};
			*uParam0.f_1742.f_90[3] = 268.8166f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-754.4808f, -863.8301f, 21.2895f};
			*uParam0.f_1742.f_90[4] = 311.049f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 16:
			*uParam0 = {-757.5739f, -755.5591f, 25.5697f};
			*(uParam0.f_3[0 /*3*/]) = {-762.0167f, -753.7158f, 26.8736f};
			*(uParam0.f_3[1 /*3*/]) = {-786.6761f, -800.9836f, 19.6249f};
			*uParam0.f_24 = {-840.3021f, -913.9555f, 62.548f};
			*uParam0.f_24.f_3 = {-1.9782f, 0f, -29.9785f};
			*uParam0.f_24.f_6 = 33.9137f;
			*uParam0.f_13 = {-753.0964f, -753.3385f, 25.6773f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-763.9045f, -756.6182f, 29.50931f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-763.8939f, -750.9608f, 25.51395f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 90.155f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-763.183f, -750.9277f, 26.87358f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-763.9045f, -750.8787f + -0.1f, 28.4594f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 0;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-761.0186f, -753.8593f, 26.8736f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 270.2364f;
			*(uParam0.f_1886[0 /*7*/]) = {-763.5029f, -757.6476f, 30.9677f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-38.1858f, 0f, -14.2267f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50.0297f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-791.6463f, -798.5154f, 23.02112f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-781.8895f, -798.5438f, 19.49486f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 4f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 332.1913f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-782.696f, -799.9818f, 19.759f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-782.0396f, -799.9789f, 21.4256f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-792.3658f, -802.0107f, 23.5808f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-33.4177f, 1.7446f, -129.4547f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-790.1055f, -803.9869f, 19.6203f};
			*uParam0.f_1742.f_27 = 185.4586f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-788.9369f, -802.5391f, 19.6203f};
			*uParam0.f_1742.f_90[0] = 178.9109f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-784.7282f, -802.613f, 19.6905f};
			*uParam0.f_1742.f_90[1] = 178.8607f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-788.4198f, -810.0004f, 19.6203f};
			*uParam0.f_1742.f_90[2] = 177.8878f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-788.6883f, -816.7969f, 19.8097f};
			*uParam0.f_1742.f_90[3] = 177.8166f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-784.2047f, -821.8116f, 20.0773f};
			*uParam0.f_1742.f_90[4] = 181.9788f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 17:
			*uParam0 = {-45.1289f, -57.0925f, 62.2531f};
			*(uParam0.f_3[0 /*3*/]) = {-41.6451f, -58.4377f, 62.509f};
			*(uParam0.f_3[1 /*3*/]) = {-38.6172f, -64.4738f, 58.4488f};
			*uParam0.f_24 = {-83.9575f, -39.5983f, 72.6015f};
			*uParam0.f_24.f_3 = {-5.5826f, 0f, -106.7397f};
			*uParam0.f_24.f_6 = 24.661f;
			*uParam0.f_13 = {-53.1021f, -61.712f, 59.0581f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-40.1706f, -58.13974f, 65.36941f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-40.6294f, -59.63993f, 62.3827f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 251.3745f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-41.5895f, -58.7089f, 63.6596f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-40.9042f, -60.013f, 64.324f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -107.5f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-43.5543f, -61.1891f, 62.5837f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 83.4021f;
			*(uParam0.f_1886[0 /*7*/]) = {-39.88f, -55.6415f, 66.3075f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-38.5367f, 0f, 135.6675f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50.0297f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-44.13745f, -61.39634f, 61.97551f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-28.90347f, -65.97524f, 58.49137f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 349.0972f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-29.33882f, -66.43806f, 58.53217f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-28.943f, -66.5774f, 60.244f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -107f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-28.5985f, -67.3177f, 62.0343f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-16.5682f, 0f, 79.599f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-45.2779f, -63.3981f, 58.4721f};
			*uParam0.f_1742.f_27 = 110.5964f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-30.9354f, -68.7573f, 58.3542f};
			*uParam0.f_1742.f_90[0] = 196.156f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-37.6065f, -66.7263f, 58.2968f};
			*uParam0.f_1742.f_90[1] = 114.2586f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-43.3868f, -65.4183f, 58.2721f};
			*uParam0.f_1742.f_90[2] = 99.3293f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-50.3881f, -64.1393f, 58.5953f};
			*uParam0.f_1742.f_90[3] = 76.2414f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-57.0713f, -62.5026f, 58.7976f};
			*uParam0.f_1742.f_90[4] = 77.0011f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 18:
			*uParam0 = {-206.7293f, 184.142f, 79.3279f};
			*(uParam0.f_3[0 /*3*/]) = {-201.9074f, 186.2365f, 79.3279f};
			*(uParam0.f_3[1 /*3*/]) = {-204.1669f, 192.5419f, 79.0583f};
			*uParam0.f_24 = {-228.8237f, 215.2885f, 91.0992f};
			*uParam0.f_24.f_3 = {-8.9858f, 0f, -135.2404f};
			*uParam0.f_24.f_6 = 30.8687f;
			*uParam0.f_13 = {-213.5534f, 184.6969f, 77.9346f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-200.399f, 186.916f, 81.71852f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-200.399f, 185.5356f, 75.23538f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 271.6089f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-200.9272f, 185.1394f, 79.31755f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-200.5526f, 185.1893f, 80.9715f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-205.1874f, 184.6205f, 79.3279f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 91.1398f;
			*(uParam0.f_1886[0 /*7*/]) = {-200.7608f, 184.2875f, 82.3418f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-40.6867f, 0f, 14.5767f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-200.468f, 196.4228f, 82.00661f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-200.399f, 189.0262f, 77.97586f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 261.7313f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-201.2675f, 192.7632f, 78.464f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-200.5526f, 196.626f, 80.005f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-200.8381f, 197.3646f, 82.348f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-21.7228f, 0f, 142.5736f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-212.6341f, 187.5834f, 78.6904f};
			*uParam0.f_1742.f_27 = 95.5658f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-204.3918f, 193.063f, 79.1536f};
			*uParam0.f_1742.f_90[0] = 87.3067f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-211.8205f, 193.6091f, 80.2532f};
			*uParam0.f_1742.f_90[1] = 83.0203f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-216.5322f, 189.6087f, 79.1441f};
			*uParam0.f_1742.f_90[2] = 119.5884f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-216.1513f, 197.3657f, 81.0638f};
			*uParam0.f_1742.f_90[3] = 59.2407f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-216.4448f, 204.4023f, 82.9056f};
			*uParam0.f_1742.f_90[4] = 353.2901f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 19:
			*uParam0 = {-811.7045f, -984.1961f, 13.1538f};
			*(uParam0.f_3[0 /*3*/]) = {-813.1431f, -981.0231f, 13.1452f};
			*(uParam0.f_3[1 /*3*/]) = {-800.3237f, -981.835f, 12.4718f};
			*uParam0.f_24 = {-813.5714f, -1050.236f, 23.4961f};
			*uParam0.f_24.f_3 = {-2.8056f, 0f, -3.2598f};
			*uParam0.f_24.f_6 = 18.4201f;
			*uParam0.f_13 = {-816.0616f, -992.5058f, 12.4806f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-812.9588f, -978.9105f, 16.24657f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-811.21f, -981.4077f, 12.69891f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 306.7349f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-813.5463f, -979.8727f, 13.18758f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-813.8711f, -979.4198f, 14.7474f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 35f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-814.5236f, -983.1685f, 13.0938f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 175.3115f;
			*(uParam0.f_1886[0 /*7*/]) = {-808.9595f, -985.3073f, 16.4923f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-23.308f, 0f, 54.3617f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-800.3867f, -981.6565f, 12.04055f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-802.4772f, -978.6157f, 15.51671f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 6.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 44.5014f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-802.6703f, -982.9598f, 12.21205f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-803.2634f, -983.3758f, 13.0737f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 34.2f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 3;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-803.7123f, -982.5094f, 14.1644f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-13.7254f, 2.7563f, -86.2615f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-801.9234f, -987.0692f, 12.7538f};
			*uParam0.f_1742.f_27 = 221.5954f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-799.9266f, -984.2426f, 12.8616f};
			*uParam0.f_1742.f_90[0] = 216.4714f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-797.6566f, -982.7219f, 12.9562f};
			*uParam0.f_1742.f_90[1] = 215.8357f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-792.1985f, -981.5099f, 13.2024f};
			*uParam0.f_1742.f_90[2] = 278.4626f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-801.33f, -989.4982f, 12.6938f};
			*uParam0.f_1742.f_90[3] = 164.9299f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-794.952f, -987.8015f, 12.7256f};
			*uParam0.f_1742.f_90[4] = 219.2995f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 20:
			*uParam0 = {-664.0032f, -853.6744f, 23.4325f};
			*(uParam0.f_3[0 /*3*/]) = {-662.4317f, -853.6143f, 23.4561f};
			*(uParam0.f_3[1 /*3*/]) = {-668.6993f, -854.7399f, 23.2635f};
			*uParam0.f_24 = {-631.6448f, -807.6888f, 43.8212f};
			*uParam0.f_24.f_3 = {-6.3784f, 0f, 142.6094f};
			*uParam0.f_24.f_6 = 32.7941f;
			*uParam0.f_13 = {-668.6069f, -848.1468f, 23.2887f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-662.4266f, -854.6357f, 25.98962f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-662.4232f, -853.7543f, 23.2082f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 193.8726f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-662.3884f, -853.9021f, 23.4638f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-663.2095f, -854.3929f, 25.1573f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -177f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-662.5104f, -852.2342f, 23.4378f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 13.9347f;
			*(uParam0.f_1886[0 /*7*/]) = {-659.7298f, -854.2432f, 28.5561f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-48.901f, 0f, 63.8518f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-664.9603f, -856.6751f, 26.88633f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-670.8594f, -856.6225f, 22.88633f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 188.2017f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-665.4197f, -855.7644f, 23.35765f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-664.9559f, -855.7695f, 25.0188f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-672.7541f, -854.4485f, 26.9547f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-31.7934f, 2.975f, -69.0846f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-664.1664f, -853.1893f, 23.4233f};
			*uParam0.f_1742.f_27 = 356.0786f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-667.947f, -852.0844f, 23.2814f};
			*uParam0.f_1742.f_90[0] = 359.9586f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-661.9177f, -848.2018f, 23.41f};
			*uParam0.f_1742.f_90[1] = 320.3188f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-676.1816f, -846.8066f, 23.019f};
			*uParam0.f_1742.f_90[2] = 92.623f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-670.7328f, -847.1837f, 23.1038f};
			*uParam0.f_1742.f_90[3] = 30.6874f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-657.152f, -846.9487f, 23.3693f};
			*uParam0.f_1742.f_90[4] = 269.8845f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 21:
			*uParam0 = {-1534.025f, -324.5247f, 46.5237f};
			*(uParam0.f_3[0 /*3*/]) = {-1533.916f, -326.4442f, 46.9108f};
			*(uParam0.f_3[1 /*3*/]) = {-1529.016f, -344.6623f, 44.3427f};
			*uParam0.f_24 = {-1548.386f, -299.5765f, 56.3053f};
			*uParam0.f_24.f_3 = {-6.1519f, 0f, -133.5596f};
			*uParam0.f_24.f_6 = 41.7577f;
			*uParam0.f_13 = {-1540.297f, -322.4765f, 46.3136f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1532.288f, -326.3052f, 49.22947f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1534.089f, -328.0757f, 46.22101f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 237.6246f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1532.792f, -325.7376f, 46.91117f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1532.43f, -325.3266f, 48.5029f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -45f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1535.193f, -325.2051f, 46.4857f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 51.5003f;
			*(uParam0.f_1886[0 /*7*/]) = {-1536.047f, -328.864f, 50.8195f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.4352f, 0f, -18.8051f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1530.623f, -341.288f, 47.99068f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1525.619f, -346.0659f, 43.99908f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 324.1467f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1526.119f, -345.6634f, 44.32087f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1525.825f, -346.0658f, 45.7772f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -135f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1532.078f, -340.942f, 47.9153f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-26.7709f, 0.8689f, -155.4644f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-1533.735f, -342.6815f, 44.6768f};
			*uParam0.f_1742.f_27 = 131.1871f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1531.969f, -344.8956f, 44.4344f};
			*uParam0.f_1742.f_90[0] = 123.1062f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1538.738f, -348.5782f, 44.6988f};
			*uParam0.f_1742.f_90[1] = 119.3949f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1528.724f, -347.6192f, 44.0972f};
			*uParam0.f_1742.f_90[2] = 145.9691f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1533.385f, -355.9714f, 43.7891f};
			*uParam0.f_1742.f_90[3] = 152.8662f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1536.266f, -352.611f, 44.1812f};
			*uParam0.f_1742.f_90[4] = 135.3279f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 22:
			*uParam0 = {-1561.381f, -412.1974f, 41.389f};
			*(uParam0.f_3[0 /*3*/]) = {-1562.949f, -406.2817f, 41.389f};
			*(uParam0.f_3[1 /*3*/]) = {-1557.401f, -400.0025f, 40.9881f};
			*uParam0.f_24 = {-1549.536f, -453.3481f, 56.7394f};
			*uParam0.f_24.f_3 = {-6.3982f, 0f, 10.7246f};
			*uParam0.f_24.f_6 = 34.3497f;
			*uParam0.f_13 = {-1556.617f, -417.2538f, 41.1883f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1564.903f, -406.1853f, 43.81025f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1563.757f, -404.7879f, 41.28488f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 53.1375f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1562.454f, -404.2675f, 41.38898f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1562.817f, -403.8937f, 43.0028f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 50f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1560.323f, -409.2578f, 41.389f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 216.3644f;
			*(uParam0.f_1886[0 /*7*/]) = {-1566.96f, -415.1502f, 46.0548f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-29.7021f, 0f, -70.8796f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1560.775f, -401.2273f, 44.12476f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1556.795f, -396.4833f, 40.57999f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 48.7978f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1556.072f, -396.7669f, 40.98813f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1556.446f, -396.3038f, 42.5343f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 50f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1552.687f, -398.0967f, 44.8597f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-30.5051f, 2.4603f, 165.9363f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-1551.265f, -399.6432f, 40.9881f};
			*uParam0.f_1742.f_27 = 221.7628f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1555.492f, -401.5921f, 40.9881f};
			*uParam0.f_1742.f_90[0] = 229.0269f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1550.09f, -406.281f, 40.9881f};
			*uParam0.f_1742.f_90[1] = 229.035f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1548.697f, -401.6271f, 40.9881f};
			*uParam0.f_1742.f_90[2] = 257.9825f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1542.325f, -399.0072f, 40.9881f};
			*uParam0.f_1742.f_90[3] = 292.403f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1543.977f, -405.3359f, 40.989f};
			*uParam0.f_1742.f_90[4] = 291.6289f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 23:
			*uParam0 = {-1608.851f, -429.184f, 39.439f};
			*(uParam0.f_3[0 /*3*/]) = {-1606.781f, -431.8483f, 39.4372f};
			*(uParam0.f_3[1 /*3*/]) = {-1606.729f, -448.6675f, 37.1799f};
			*uParam0.f_24 = {-1616.953f, -505.0326f, 53.6363f};
			*uParam0.f_24.f_3 = {-6.7901f, 0f, -19.8142f};
			*uParam0.f_24.f_6 = 34.4399f;
			*uParam0.f_13 = {-1614.846f, -425.6327f, 39.3947f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1604.96f, -431.835f, 41.95771f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1606.788f, -434.0118f, 38.44287f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 232.2676f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1607.479f, -433.7236f, 39.43241f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1607.04f, -434.1056f, 41.0649f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -130f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1609.212f, -429.7664f, 39.4372f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 55.7531f;
			*(uParam0.f_1886[0 /*7*/]) = {-1604.806f, -429.8766f, 44.8098f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-48.1096f, 0f, 102.1529f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1608.379f, -446.1646f, 36.55541f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1603.769f, -450.0924f, 40.71634f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 314.7102f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1604.147f, -449.441f, 37.20527f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1603.724f, -449.8294f, 38.7276f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -130f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1603.83f, -449.2337f, 40.259f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-35.7033f, -0.9669f, 99.5657f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-1607.45f, -456.7893f, 36.8592f};
			*uParam0.f_1742.f_27 = 148.0527f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1607.822f, -450.3613f, 37.1359f};
			*uParam0.f_1742.f_90[0] = 139.9644f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1609.779f, -458.7872f, 36.8884f};
			*uParam0.f_1742.f_90[1] = 168.1596f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1613.238f, -456.8185f, 37.0621f};
			*uParam0.f_1742.f_90[2] = 140.1804f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1617.052f, -454.571f, 37.3955f};
			*uParam0.f_1742.f_90[3] = 112.6241f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1621.3f, -453.1793f, 37.4966f};
			*uParam0.f_1742.f_90[4] = 48.5007f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 24:
			*(uParam0.f_3[0 /*3*/]) = {963.4199f, -1022.13f, 39.8475f};
			*uParam0.f_24 = {1002.128f, -1023.431f, 49.5466f};
			*uParam0.f_24.f_3 = {-2.4589f, 0f, 88.9038f};
			*uParam0.f_24.f_6 = 36.2121f;
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {961.8676f, -1022.555f, 39.34748f};
			*(uParam0.f_38[0 /*27*/].f_3) = {965.0557f, -1022.582f, 44.09748f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 22.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 80.8479f;
			*(uParam0.f_38[0 /*27*/].f_23) = {964.2448f, -1022.683f, 39.84748f};
			*(uParam0.f_38[0 /*27*/].f_16) = {963.2421f, -1022.59f, 41.5091f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0 = {965.1798f, -1031.32f, 39.8384f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {966.2585f, -1010.017f, 40.0476f};
			*uParam0.f_1742.f_27 = 263.2577f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {966.338f, -1031.135f, 39.839f};
			*uParam0.f_1742.f_90[0] = 266.5586f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {967.1743f, -1025.61f, 39.8475f};
			*uParam0.f_1742.f_90[1] = 270.8348f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {967.6329f, -1020.004f, 39.8475f};
			*uParam0.f_1742.f_90[2] = 270.4741f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {966.9617f, -1013.71f, 39.8475f};
			*uParam0.f_1742.f_90[3] = 271.1738f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {965.698f, -1037.592f, 39.8303f};
			*uParam0.f_1742.f_90[4] = 263.0311f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 25:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {896.3395f, -889.294f, 26.00315f};
			*(uParam0.f_38[0 /*27*/].f_3) = {894.2404f, -889.2759f, 30.36714f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 9f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 268.5209f;
			*(uParam0.f_38[0 /*27*/].f_23) = {895.2014f, -889.3182f, 26.19163f};
			*(uParam0.f_38[0 /*27*/].f_16) = {895.5656f, -889.3296f, 27.6491f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {895.9359f, -888.7846f, 26.2485f};
			*uParam0.f_24 = {840.2737f, -935.0451f, 42.8762f};
			*uParam0.f_24.f_3 = {-2.9799f, 0f, -53.3725f};
			*uParam0.f_24.f_6 = 32.5988f;
			*uParam0 = {893.8858f, -887.0587f, 26.0899f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {894.3965f, -892.7888f, 26.1293f};
			*uParam0.f_1742.f_27 = 84.393f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {892.3411f, -886.9641f, 25.9702f};
			*uParam0.f_1742.f_90[0] = 87.7599f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {892.4629f, -891.6348f, 25.9794f};
			*uParam0.f_1742.f_90[1] = 91.7013f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {883.635f, -891.8969f, 25.2952f};
			*uParam0.f_1742.f_90[2] = 91.729f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {882.4849f, -886.9933f, 25.2061f};
			*uParam0.f_1742.f_90[3] = 91.5397f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {872.6458f, -887.7606f, 24.9248f};
			*uParam0.f_1742.f_90[4] = 177.6021f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 26:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {817.637f, -926.1711f, 25.39701f};
			*(uParam0.f_38[0 /*27*/].f_3) = {817.6722f, -923.8012f, 29.42732f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 9f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 186.4707f;
			*(uParam0.f_38[0 /*27*/].f_23) = {812.2981f, -924.2517f, 25.20545f};
			*(uParam0.f_38[0 /*27*/].f_16) = {812.2344f, -924.6008f, 26.7609f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -180f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {817.4532f, -924.8551f, 25.243f};
			*uParam0.f_24 = {846.5938f, -912.0248f, 29.8333f};
			*uParam0.f_24.f_3 = {1.8843f, 0f, 116.7035f};
			*uParam0.f_24.f_6 = 32.0039f;
			*uParam0 = {817.4396f, -923.2914f, 25.1455f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {811.3528f, -922.7236f, 25.1103f};
			*uParam0.f_1742.f_27 = 25.2843f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {818.6449f, -922.2507f, 25.0809f};
			*uParam0.f_1742.f_90[0] = 28.7207f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {813.7722f, -922.1363f, 25.0738f};
			*uParam0.f_1742.f_90[1] = 33.443f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {830.8185f, -913.9405f, 24.6657f};
			*uParam0.f_1742.f_90[2] = 91.328f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {820.7473f, -913.1084f, 24.5875f};
			*uParam0.f_1742.f_90[3] = 92.9782f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {810.5826f, -913.3151f, 24.6075f};
			*uParam0.f_1742.f_90[4] = 93.412f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 27:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {758.1571f, -755.4667f, 25.43073f};
			*(uParam0.f_38[0 /*27*/].f_3) = {759.6239f, -755.4764f, 30.15429f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 10.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 86.9705f;
			*(uParam0.f_38[0 /*27*/].f_23) = {759.4803f, -749.9961f, 26.13875f};
			*(uParam0.f_38[0 /*27*/].f_16) = {759.0246f, -749.9797f, 27.6906f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {759.2387f, -755.3151f, 25.9151f};
			*uParam0.f_24 = {792.6638f, -754.671f, 34.6688f};
			*uParam0.f_24.f_3 = {0.7646f, 0f, 90.0749f};
			*uParam0.f_24.f_6 = 42.4321f;
			*uParam0 = {760.4014f, -758.006f, 25.8063f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {759.4371f, -760.0032f, 25.7598f};
			*uParam0.f_1742.f_27 = 277.8507f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {761.8399f, -750.8654f, 25.9419f};
			*uParam0.f_1742.f_90[0] = 306.6377f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {761.6503f, -756.5213f, 25.7067f};
			*uParam0.f_1742.f_90[1] = 294.2219f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {762.6526f, -746.4432f, 26.1404f};
			*uParam0.f_1742.f_90[2] = 358.0908f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {762.9658f, -738.5776f, 26.5185f};
			*uParam0.f_1742.f_90[3] = 358.359f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {763.2261f, -769.1245f, 25.3579f};
			*uParam0.f_1742.f_90[4] = 180.7413f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 28:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {842.03f, -1167.654f, 23.76806f};
			*(uParam0.f_38[0 /*27*/].f_3) = {841.8851f, -1163.102f, 28.51806f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 187.1127f;
			*(uParam0.f_38[0 /*27*/].f_23) = {844.5606f, -1164.146f, 24.26806f};
			*(uParam0.f_38[0 /*27*/].f_16) = {844.5184f, -1164.657f, 25.939f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -176.5f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {842.1298f, -1165.075f, 24.3046f};
			*uParam0.f_24 = {873.2134f, -1114.663f, 48.9161f};
			*uParam0.f_24.f_3 = {-13.8258f, 0f, 144.1864f};
			*uParam0.f_24.f_6 = 37.2109f;
			*uParam0 = {842.0649f, -1162.52f, 24.2681f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {841.5887f, -1163.36f, 24.2681f};
			*uParam0.f_1742.f_27 = 7.7576f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {841.9616f, -1162.19f, 24.2681f};
			*uParam0.f_1742.f_90[0] = 2.6753f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {834.491f, -1153.009f, 24.2281f};
			*uParam0.f_1742.f_90[1] = 272.6176f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {835.1475f, -1156.969f, 24.2681f};
			*uParam0.f_1742.f_90[2] = 273.0558f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {844.0175f, -1156.497f, 24.2681f};
			*uParam0.f_1742.f_90[3] = 273.0678f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {846.6666f, -1151.596f, 24.1599f};
			*uParam0.f_1742.f_90[4] = 269.9492f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 29:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {529.376f, -1604.027f, 27.83152f};
			*(uParam0.f_38[0 /*27*/].f_3) = {527.9105f, -1602.797f, 32.47459f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 216.8423f;
			*(uParam0.f_38[0 /*27*/].f_23) = {526.6204f, -1604.665f, 28.27846f};
			*(uParam0.f_38[0 /*27*/].f_16) = {527.0496f, -1605.207f, 29.8629f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -130f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {528.8805f, -1603.029f, 28.3225f};
			*uParam0.f_24 = {511.6405f, -1541.918f, 41.1761f};
			*uParam0.f_24.f_3 = {-4.7034f, 0f, -169.109f};
			*uParam0.f_24.f_6 = 20.2458f;
			*uParam0 = {527.3356f, -1602.143f, 28.1478f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {525.8525f, -1604.599f, 28.255f};
			*uParam0.f_1742.f_27 = 45.4901f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {525.7641f, -1601.401f, 28.1769f};
			*uParam0.f_1742.f_90[0] = 50.8529f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {517.8649f, -1601.587f, 28.2864f};
			*uParam0.f_1742.f_90[1] = 73.5817f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {515.6566f, -1605.229f, 28.3055f};
			*uParam0.f_1742.f_90[2] = 78.3556f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {526.7875f, -1592.32f, 28.2797f};
			*uParam0.f_1742.f_90[3] = 8.7291f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {512.2185f, -1609.11f, 28.3116f};
			*uParam0.f_1742.f_90[4] = 80.5639f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 30:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {569.6525f, -1570.559f, 27.3277f};
			*(uParam0.f_38[0 /*27*/].f_3) = {570.5089f, -1569.585f, 31.84068f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 135.5236f;
			*(uParam0.f_38[0 /*27*/].f_23) = {568.2858f, -1568.318f, 27.70387f};
			*(uParam0.f_38[0 /*27*/].f_16) = {567.9484f, -1568.682f, 29.2407f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 140f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {569.9441f, -1570.293f, 27.5777f};
			*uParam0.f_24 = {595.9171f, -1540.184f, 32.4308f};
			*uParam0.f_24.f_3 = {0.5723f, 0f, 138.7878f};
			*uParam0.f_24.f_6 = 24.2761f;
			*uParam0 = {571.3317f, -1569.211f, 27.5769f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {571.9505f, -1570.715f, 27.4944f};
			*uParam0.f_1742.f_27 = 316.8053f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {571.9572f, -1567.979f, 27.6032f};
			*uParam0.f_1742.f_90[0] = 318.9168f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {567.3885f, -1564.272f, 27.8734f};
			*uParam0.f_1742.f_90[1] = 11.3999f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {576.4351f, -1571.697f, 27.346f};
			*uParam0.f_1742.f_90[2] = 284.5693f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {579.3066f, -1574.521f, 27.102f};
			*uParam0.f_1742.f_90[3] = 316.8582f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {563.3011f, -1560.777f, 28.0953f};
			*uParam0.f_1742.f_90[4] = 319.6255f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 31:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {724.8976f, -1188.177f, 23.18106f};
			*(uParam0.f_38[0 /*27*/].f_3) = {724.7759f, -1191.176f, 27.52946f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 8.0958f;
			*(uParam0.f_38[0 /*27*/].f_23) = {726.7602f, -1189.995f, 23.27746f};
			*(uParam0.f_38[0 /*27*/].f_16) = {726.7885f, -1189.545f, 24.7175f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 0f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {727.757f, -1189.837f, 23.2765f};
			*uParam0.f_24 = {751.2015f, -1201.478f, 25.9253f};
			*uParam0.f_24.f_3 = {0.2972f, 0f, 68.1021f};
			*uParam0.f_24.f_6 = 28.04f;
			*uParam0 = {724.9683f, -1191.589f, 23.2793f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {722.4882f, -1190.696f, 23.2818f};
			*uParam0.f_1742.f_27 = 226.8115f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {727.2533f, -1192.654f, 23.2769f};
			*uParam0.f_1742.f_90[0] = 225.7019f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {734.2759f, -1194.892f, 23.2741f};
			*uParam0.f_1742.f_90[1] = 270.6564f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {742.4778f, -1194.803f, 23.2677f};
			*uParam0.f_1742.f_90[2] = 270.655f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {743.9144f, -1198.586f, 23.26f};
			*uParam0.f_1742.f_90[3] = 268.5719f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {721.1934f, -1193.58f, 23.2832f};
			*uParam0.f_1742.f_90[4] = 223.0747f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 32:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {504.4415f, -1492.073f, 27.90107f};
			*(uParam0.f_38[0 /*27*/].f_3) = {504.4351f, -1493.984f, 32.53869f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 13f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 6.0979f;
			*(uParam0.f_38[0 /*27*/].f_23) = {504.6553f, -1493.162f, 28.28859f};
			*(uParam0.f_38[0 /*27*/].f_16) = {504.7454f, -1492.723f, 29.8382f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 0f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {504.6782f, -1492.887f, 28.2886f};
			*uParam0.f_24 = {489.3747f, -1518.901f, 31.5557f};
			*uParam0.f_24.f_3 = {-1.829f, 0f, -32.9606f};
			*uParam0.f_24.f_6 = 22.1333f;
			*uParam0 = {501.0715f, -1494.16f, 28.289f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {497.347f, -1493.924f, 28.2893f};
			*uParam0.f_1742.f_27 = 211.2587f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {501.0577f, -1496.164f, 28.2891f};
			*uParam0.f_1742.f_90[0] = 178.7652f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {501.4612f, -1502.653f, 28.2889f};
			*uParam0.f_1742.f_90[1] = 189.8566f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {507.9253f, -1496.236f, 28.2885f};
			*uParam0.f_1742.f_90[2] = 179.6585f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {507.9807f, -1502.452f, 28.2883f};
			*uParam0.f_1742.f_90[3] = 182.123f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {504.4424f, -1506.796f, 28.2716f};
			*uParam0.f_1742.f_90[4] = 268.4133f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 33:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {474.9897f, -1547.675f, 27.78279f};
			*(uParam0.f_38[0 /*27*/].f_3) = {475.861f, -1546.61f, 32.53279f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 9f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 137.901f;
			*(uParam0.f_38[0 /*27*/].f_23) = {472.2744f, -1543.771f, 28.28258f};
			*(uParam0.f_38[0 /*27*/].f_16) = {471.8385f, -1544.341f, 29.8348f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 140f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {475.7058f, -1547.123f, 28.2828f};
			*uParam0.f_24 = {474.4796f, -1526.742f, 32.3941f};
			*uParam0.f_24.f_3 = {-1.0343f, 0f, -175.9226f};
			*uParam0.f_24.f_6 = 31.816f;
			*uParam0 = {478.0967f, -1547.739f, 28.2826f};
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {481.4461f, -1551.521f, 28.2828f};
			*uParam0.f_1742.f_27 = 319.4575f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {476.7013f, -1543.273f, 28.2688f};
			*uParam0.f_1742.f_90[0] = 317.4218f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {478.8961f, -1546.518f, 28.2828f};
			*uParam0.f_1742.f_90[1] = 321.1352f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {487.6636f, -1543.096f, 28.2618f};
			*uParam0.f_1742.f_90[2] = 230.0298f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {481.2663f, -1537.818f, 28.2474f};
			*uParam0.f_1742.f_90[3] = 230.3941f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {471.9972f, -1530.952f, 28.2219f};
			*uParam0.f_1742.f_90[4] = 232.9607f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			func_26(uParam0, iParam1);
			break;
		
		case 68:
		case 69:
		case 70:
		case 71:
			func_25(uParam0, iParam1);
			break;
	}
	*uParam0.f_35 = iParam1;
	func_24(uParam0.f_1876, *uParam0.f_35);
}

void func_24(auto uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			*uParam0[0] = 1;
			*uParam0[1] = 2;
			*uParam0[2] = 3;
			*uParam0[3] = 4;
			*uParam0[4] = 61;
			*uParam0[5] = 83;
			*uParam0[6] = 84;
			*uParam0[7] = 85;
			*uParam0.f_9 = 8;
			break;
		
		case 2:
			*uParam0[0] = 5;
			*uParam0[1] = 6;
			*uParam0.f_9 = 2;
			break;
		
		case 3:
			*uParam0[0] = 7;
			*uParam0[1] = 34;
			*uParam0[2] = 62;
			*uParam0.f_9 = 3;
			break;
		
		case 4:
			*uParam0[0] = 35;
			*uParam0[1] = 36;
			*uParam0[2] = 37;
			*uParam0.f_9 = 3;
			break;
		
		case 5:
			*uParam0[0] = 38;
			*uParam0[1] = 39;
			*uParam0[2] = 65;
			*uParam0.f_9 = 3;
			break;
		
		case 6:
			*uParam0[0] = 40;
			*uParam0[1] = 41;
			*uParam0[2] = 63;
			*uParam0.f_9 = 3;
			break;
		
		case 7:
			*uParam0[0] = 42;
			*uParam0[1] = 43;
			*uParam0[2] = 64;
			*uParam0.f_9 = 3;
			break;
		
		case 8:
			*uParam0[0] = 8;
			*uParam0.f_9 = 1;
			break;
		
		case 9:
			*uParam0[0] = 9;
			*uParam0.f_9 = 1;
			break;
		
		case 10:
			*uParam0[0] = 10;
			*uParam0.f_9 = 1;
			break;
		
		case 11:
			*uParam0[0] = 11;
			*uParam0.f_9 = 1;
			break;
		
		case 12:
			*uParam0[0] = 12;
			*uParam0.f_9 = 1;
			break;
		
		case 13:
			*uParam0[0] = 13;
			*uParam0.f_9 = 1;
			break;
		
		case 14:
			*uParam0[0] = 14;
			*uParam0.f_9 = 1;
			break;
		
		case 15:
			*uParam0[0] = 15;
			*uParam0.f_9 = 1;
			break;
		
		case 16:
			*uParam0[0] = 16;
			*uParam0.f_9 = 1;
			break;
		
		case 17:
			*uParam0[0] = 17;
			*uParam0.f_9 = 1;
			break;
		
		case 18:
			*uParam0[0] = 18;
			*uParam0.f_9 = 1;
			break;
		
		case 19:
			*uParam0[0] = 19;
			*uParam0.f_9 = 1;
			break;
		
		case 20:
			*uParam0[0] = 20;
			*uParam0.f_9 = 1;
			break;
		
		case 21:
			*uParam0[0] = 21;
			*uParam0.f_9 = 1;
			break;
		
		case 22:
			*uParam0[0] = 22;
			*uParam0.f_9 = 1;
			break;
		
		case 23:
			*uParam0[0] = 23;
			*uParam0.f_9 = 1;
			break;
		
		case 24:
			*uParam0[0] = 24;
			*uParam0.f_9 = 1;
			break;
		
		case 25:
			*uParam0[0] = 25;
			*uParam0.f_9 = 1;
			break;
		
		case 26:
			*uParam0[0] = 26;
			*uParam0.f_9 = 1;
			break;
		
		case 27:
			*uParam0[0] = 27;
			*uParam0.f_9 = 1;
			break;
		
		case 28:
			*uParam0[0] = 28;
			*uParam0.f_9 = 1;
			break;
		
		case 29:
			*uParam0[0] = 29;
			*uParam0.f_9 = 1;
			break;
		
		case 30:
			*uParam0[0] = 30;
			*uParam0.f_9 = 1;
			break;
		
		case 31:
			*uParam0[0] = 31;
			*uParam0.f_9 = 1;
			break;
		
		case 32:
			*uParam0[0] = 32;
			*uParam0.f_9 = 1;
			break;
		
		case 33:
			*uParam0[0] = 33;
			*uParam0.f_9 = 1;
			break;
		
		case 34:
			*uParam0[0] = 44;
			*uParam0.f_9 = 1;
			break;
		
		case 35:
			*uParam0[0] = 45;
			*uParam0.f_9 = 1;
			break;
		
		case 36:
			*uParam0[0] = 46;
			*uParam0.f_9 = 1;
			break;
		
		case 37:
			*uParam0[0] = 47;
			*uParam0.f_9 = 1;
			break;
		
		case 38:
			*uParam0[0] = 48;
			*uParam0.f_9 = 1;
			break;
		
		case 39:
			*uParam0[0] = 49;
			*uParam0.f_9 = 1;
			break;
		
		case 40:
			*uParam0[0] = 50;
			*uParam0.f_9 = 1;
			break;
		
		case 41:
			*uParam0[0] = 51;
			*uParam0.f_9 = 1;
			break;
		
		case 42:
			*uParam0[0] = 52;
			*uParam0.f_9 = 1;
			break;
		
		case 43:
			*uParam0[0] = 53;
			*uParam0.f_9 = 1;
			break;
		
		case 44:
			*uParam0[0] = 54;
			*uParam0.f_9 = 1;
			break;
		
		case 45:
			*uParam0[0] = 55;
			*uParam0.f_9 = 1;
			break;
		
		case 46:
			*uParam0[0] = 56;
			*uParam0.f_9 = 1;
			break;
		
		case 47:
			*uParam0[0] = 57;
			*uParam0.f_9 = 1;
			break;
		
		case 48:
			*uParam0[0] = 58;
			*uParam0.f_9 = 1;
			break;
		
		case 49:
			*uParam0[0] = 59;
			*uParam0.f_9 = 1;
			break;
		
		case 50:
			*uParam0[0] = 60;
			*uParam0.f_9 = 1;
			break;
		
		case 51:
			*uParam0[0] = 66;
			*uParam0.f_9 = 1;
			break;
		
		case 52:
			*uParam0[0] = 67;
			*uParam0.f_9 = 1;
			break;
		
		case 53:
			*uParam0[0] = 68;
			*uParam0.f_9 = 1;
			break;
		
		case 54:
			*uParam0[0] = 69;
			*uParam0.f_9 = 1;
			break;
		
		case 55:
			*uParam0[0] = 70;
			*uParam0.f_9 = 1;
			break;
		
		case 56:
			*uParam0[0] = 71;
			*uParam0.f_9 = 1;
			break;
		
		case 57:
			*uParam0[0] = 72;
			*uParam0.f_9 = 1;
			break;
		
		case 58:
			*uParam0[0] = 73;
			*uParam0.f_9 = 1;
			break;
		
		case 59:
			*uParam0[0] = 74;
			*uParam0.f_9 = 1;
			break;
		
		case 60:
			*uParam0[0] = 75;
			*uParam0.f_9 = 1;
			break;
		
		case 61:
			*uParam0[0] = 76;
			*uParam0.f_9 = 1;
			break;
		
		case 62:
			*uParam0[0] = 77;
			*uParam0.f_9 = 1;
			break;
		
		case 63:
			*uParam0[0] = 78;
			*uParam0.f_9 = 1;
			break;
		
		case 64:
			*uParam0[0] = 79;
			*uParam0.f_9 = 1;
			break;
		
		case 65:
			*uParam0[0] = 80;
			*uParam0.f_9 = 1;
			break;
		
		case 66:
			*uParam0[0] = 81;
			*uParam0.f_9 = 1;
			break;
		
		case 67:
			*uParam0[0] = 82;
			*uParam0.f_9 = 1;
			break;
		
		case 68:
			*uParam0[0] = 87;
			*uParam0.f_9 = 1;
			break;
		
		case 69:
			*uParam0[0] = 88;
			*uParam0.f_9 = 1;
			break;
		
		case 70:
			*uParam0[0] = 89;
			*uParam0.f_9 = 1;
			break;
		
		case 71:
			*uParam0[0] = 90;
			*uParam0.f_9 = 1;
			break;
	}
}

void func_25(auto uParam0, int iParam1)
{
	struct<4> Var0;
	
	*(uParam0.f_38[0 /*27*/]).f_22 = 5;
	*(uParam0.f_38[1 /*27*/]).f_22 = 5;
	*(uParam0.f_38[2 /*27*/]).f_22 = 5;
	switch (iParam1)
	{
		case 68:
			*uParam0 = {-1581.5f, -558.3f, 35f};
			*(uParam0.f_3[0 /*3*/]) = {-1581.5f, -558.3f, 35f};
			*(uParam0.f_3[1 /*3*/]) = {-1560.771f, -569.1514f, 113.7914f};
			*uParam0.f_24 = {-1587.957f, -483.1875f, 75.0841f};
			*uParam0.f_24.f_3 = {-1.3627f, 0f, -179.447f};
			*uParam0.f_24.f_6 = 69.7352f;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1580.198f, -557.6818f, 33.95282f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1582.202f, -559.1873f, 36.45286f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 216.2582f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1583.52f, -558.453f, 33.9535f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1582.046f, -559.602f, 35.25f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -142.2f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1584.053f, -554.6662f, 33.9762f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 39.6483f;
			*(uParam0.f_1886[0 /*7*/]) = {-1577.825f, -557.2221f, 41.1317f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-44.1509f, 0f, 89.9985f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 77.4526f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 1;
			*(uParam0.f_38[1 /*27*/]) = {-1559.692f, -568.1177f, 113.4493f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1562.036f, -569.738f, 115.6993f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 209.3411f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1563.515f, -568.7156f, 113.4493f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1561.895f, -570.2933f, 114.859f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -142.3f};
			*(uParam0.f_38[1 /*27*/].f_12) = {-1562.338f, -569.6094f, 114.4321f};
			*(uParam0.f_146[1 /*12*/].f_8) = {-1561.962f, -567.2552f, 113.4493f};
			*(uParam0.f_146[1 /*12*/]).f_11 = 24.255f;
			*(uParam0.f_1886[1 /*7*/]) = {-1556.47f, -566.1495f, 119.3585f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-31.7605f, 0f, 104.6976f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 59.2455f;
			*uParam0.f_36 = 2;
			*uParam0.f_34 = 3;
			break;
		
		case 69:
			*uParam0 = {-1363.756f, -510.9757f, 30.2801f};
			*(uParam0.f_3[0 /*3*/]) = {-1370.348f, -503.0963f, 32.1574f};
			*(uParam0.f_3[1 /*3*/]) = {-1369.749f, -472.048f, 83.7585f};
			*uParam0.f_24 = {-1378.655f, -532.7894f, 41.1471f};
			*uParam0.f_24.f_3 = {-4.7752f, 0f, -16.1497f};
			*uParam0.f_24.f_6 = 63.2894f;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1369.998f, -502.7983f, 31.94083f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1370.934f, -503.4724f, 35.40741f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 307.1366f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1370.348f, -503.0963f, 32.1574f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1369.081f, -504.853f, 33.4758f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -54.9f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1371.698f, -504.2646f, 32.1574f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 136.379f;
			*(uParam0.f_1886[0 /*7*/]) = {-1373.593f, -499.2561f, 37.2086f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-29.2442f, 0f, -174.7204f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 64.132f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 1;
			*(uParam0.f_38[1 /*27*/]) = {-1369.871f, -472.2444f, 83.33684f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1369.224f, -471.7853f, 86.69694f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 124.2775f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1369.569f, -471.9889f, 83.4469f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1370.197f, -471.486f, 84.8834f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 122.74f};
			*(uParam0.f_38[1 /*27*/].f_12) = {-1369.618f, -471.1026f, 84.4431f};
			*(uParam0.f_146[1 /*12*/].f_8) = {-1367.407f, -471.275f, 83.4469f};
			*(uParam0.f_146[1 /*12*/]).f_11 = 192.5905f;
			*(uParam0.f_1886[1 /*7*/]) = {-1364.575f, -486.9128f, 89.3676f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-16.1979f, 0f, 47.8232f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 71.8136f;
			*uParam0.f_36 = 2;
			*uParam0.f_34 = 3;
			break;
		
		case 70:
			*uParam0 = {-92.6372f, -578.662f, 35.3123f};
			*(uParam0.f_3[0 /*3*/]) = {-117.5296f, -605.7157f, 35.2857f};
			*(uParam0.f_3[1 /*3*/]) = {-134.3277f, -584.6831f, 200.8647f};
			*uParam0.f_24 = {-65.569f, -745.3246f, 90.7794f};
			*uParam0.f_24.f_3 = {9.2283f, 0f, 29.2714f};
			*uParam0.f_24.f_6 = 62.6955f;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-119.6858f, -609.6423f, 35.25896f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-115.8885f, -599.1504f, 38.39197f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.1875f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 64.6717f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-118.5747f, -610.1472f, 35.5043f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-119.768f, -609.7531f, 36.6249f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 70.155f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-110.9626f, -605.3646f, 35.2857f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 255.3759f;
			*(uParam0.f_1886[0 /*7*/]) = {-117.2984f, -588.0927f, 39.4723f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-13.4276f, 0f, -137.6638f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 61.2735f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 1;
			*(uParam0.f_38[1 /*27*/]) = {-133.5413f, -585.7881f, 200.6802f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-135.2397f, -583.7808f, 203.3786f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.6875f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 134.4353f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-134.9465f, -583.0051f, 201.1521f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-135.2997f, -583.7286f, 202.1938f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 140.44f};
			*(uParam0.f_38[1 /*27*/].f_12) = {-134.7125f, -583.3456f, 201.762f};
			*(uParam0.f_146[1 /*12*/].f_8) = {-131.9133f, -585.8597f, 200.7354f};
			*(uParam0.f_146[1 /*12*/]).f_11 = 212.5333f;
			*(uParam0.f_1886[1 /*7*/]) = {-165.6158f, -590.6523f, 216.2003f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-8.8826f, 0f, -95.9212f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 56.7626f;
			*uParam0.f_36 = 2;
			*uParam0.f_34 = 3;
			break;
		
		case 71:
			*uParam0 = {-56.6f, -783.3f, 44.1f};
			*(uParam0.f_3[0 /*3*/]) = {-81.3f, -797.5f, 44.2f};
			*(uParam0.f_3[1 /*3*/]) = {-67.8f, -821.6f, 320.4f};
			*uParam0.f_24 = {-49.6763f, -931.4156f, 403.287f};
			*uParam0.f_24.f_3 = {-56.1945f, 0f, 6.8735f};
			*uParam0.f_24.f_6 = 50f;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-82.05029f, -797.7917f, 43.22731f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-78.21367f, -796.7432f, 45.72731f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 205.4841f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-78.3f, -799.7f, 44.2f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-82.5033f, -797.64f, 44.5225f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 136.44f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-83.3513f, -794.3069f, 43.2273f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 19.2204f;
			*(uParam0.f_1886[0 /*7*/]) = {-80.0721f, -805.2011f, 50.2228f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-23.299f, 0f, -23.5398f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 63.0745f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 1;
			*(uParam0.f_38[1 /*27*/]) = {-68.30604f, -822.9664f, 320.2975f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-67.01254f, -819.4177f, 322.7896f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 75.5765f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-67.7f, -821.6f, 321.3f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-67.249f, -819.9236f, 321.7416f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 79.84f};
			*(uParam0.f_38[1 /*27*/].f_12) = {-66.3545f, -819.9989f, 321.313f};
			*(uParam0.f_1886[1 /*7*/]) = {-66.9822f, -819.1842f, 323.0544f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-27.147f, 0f, -173.347f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 57.4756f;
			*(uParam0.f_146[1 /*12*/].f_8) = {-65.9803f, -818.9702f, 320.2896f};
			*(uParam0.f_146[1 /*12*/]).f_11 = 356.4971f;
			*uParam0.f_36 = 2;
			*uParam0.f_34 = 3;
			break;
	}
}

void func_26(auto uParam0, int iParam1)
{
	struct<4> Var0;
	
	*(uParam0.f_38[0 /*27*/]).f_22 = 5;
	*(uParam0.f_38[1 /*27*/]).f_22 = 5;
	*(uParam0.f_38[2 /*27*/]).f_22 = 5;
	switch (iParam1)
	{
		case 34:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-66.96652f, 6427.382f, 34.2641f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-69.53132f, 6424.848f, 29.28271f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 238.4392f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-70.23156f, 6425.214f, 30.43954f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-69.804f, 6424.731f, 31.8753f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -135f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-68.702f, 6426.148f, 30.439f};
			*uParam0.f_24 = {-83.3466f, 6436.804f, 35.1359f};
			*uParam0.f_24.f_3 = {9.9582f, 0f, -134.7812f};
			*uParam0.f_24.f_6 = 58.8827f;
			*uParam0 = {-67.0695f, 6429.729f, 30.4383f};
			*(uParam0.f_1886[0 /*7*/]) = {-66.4177f, 6428.49f, 35.0323f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-39.6313f, 0f, 112.9385f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 57.0534f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {-71.5713f, 6434.253f, 30.4396f};
			*uParam0.f_1742.f_27 = 70.9241f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-71.1927f, 6428.891f, 30.4394f};
			*uParam0.f_1742.f_90[0] = 45.2484f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-73.277f, 6435.93f, 30.4402f};
			*uParam0.f_1742.f_90[1] = 45.8937f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-78.9433f, 6441.69f, 30.4971f};
			*uParam0.f_1742.f_90[2] = 44.1069f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-81.1158f, 6436.341f, 30.4943f};
			*uParam0.f_1742.f_90[3] = 45.7366f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-75.5796f, 6424.689f, 30.4904f};
			*uParam0.f_1742.f_90[4] = 44.5217f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 35:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-249.0387f, 6239.045f, 33.51245f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-245.7872f, 6242.423f, 30.08331f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 46.1642f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-249.0587f, 6237.587f, 30.48934f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-249.5378f, 6237.945f, 31.93f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 45f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-245.5158f, 6239.048f, 30.4892f};
			*uParam0.f_24 = {-223.8007f, 6241.24f, 34.9939f};
			*uParam0.f_24.f_3 = {-0.6584f, 0f, 98.1777f};
			*uParam0.f_24.f_6 = 33.186f;
			*uParam0 = {-249.6617f, 6235.997f, 30.4891f};
			*(uParam0.f_1886[0 /*7*/]) = {-244.8033f, 6242.578f, 34.2428f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-40.6708f, 0f, 145.1215f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 64.184f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {-251.6962f, 6234.687f, 30.4891f};
			*uParam0.f_1742.f_27 = 243.0621f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-244.7509f, 6238.024f, 30.4896f};
			*uParam0.f_1742.f_90[0] = 225.149f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-246.2962f, 6231.415f, 30.4894f};
			*uParam0.f_1742.f_90[1] = 134.7321f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-244.3101f, 6228.875f, 30.5019f};
			*uParam0.f_1742.f_90[2] = 134.7857f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-235.0201f, 6237.399f, 30.4898f};
			*uParam0.f_1742.f_90[3] = 134.9227f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-237.9496f, 6240.667f, 30.4907f};
			*uParam0.f_1742.f_90[4] = 132.8805f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 36:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {2556.065f, 4668.818f, 37.05597f};
			*(uParam0.f_38[0 /*27*/].f_3) = {2552.245f, 4667.132f, 32.03184f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 208.9861f;
			*(uParam0.f_38[0 /*27*/].f_23) = {2556.194f, 4669.482f, 33.05043f};
			*(uParam0.f_38[0 /*27*/].f_16) = {2556.394f, 4669.029f, 34.5895f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -154f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {2554.165f, 4668.059f, 33.0233f};
			*uParam0.f_24 = {2524.19f, 4696.846f, 35.3387f};
			*uParam0.f_24.f_3 = {6.4304f, 0f, -121.3408f};
			*uParam0.f_24.f_6 = 32.2333f;
			*uParam0 = {2556.83f, 4671.37f, 32.9989f};
			*(uParam0.f_1886[0 /*7*/]) = {2551.094f, 4666.864f, 37.0818f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-36.8487f, 0f, -50.5276f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 57.5607f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {2549.016f, 4668.996f, 33.0767f};
			*uParam0.f_1742.f_27 = 359.9875f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {2552.807f, 4671.207f, 32.9544f};
			*uParam0.f_1742.f_90[0] = 23.4604f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {2549.964f, 4678.307f, 32.9764f};
			*uParam0.f_1742.f_90[1] = 21.7014f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {2545.627f, 4688.416f, 32.5933f};
			*uParam0.f_1742.f_90[2] = 23.9501f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {2552.973f, 4681.752f, 32.9039f};
			*uParam0.f_1742.f_90[3] = 16.9448f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {2549.834f, 4690.195f, 32.6529f};
			*uParam0.f_1742.f_90[4] = 19.1831f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 37:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {2460.893f, 1587.034f, 36.20595f};
			*(uParam0.f_38[0 /*27*/].f_3) = {2460.913f, 1591.732f, 29.72712f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 90.6692f;
			*(uParam0.f_38[0 /*27*/].f_23) = {2461.743f, 1592.128f, 31.72039f};
			*(uParam0.f_38[0 /*27*/].f_16) = {2461.013f, 1592.082f, 33.506f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {2461.22f, 1589.255f, 32.0443f};
			*uParam0.f_24 = {2554.219f, 1605.985f, 39.4534f};
			*uParam0.f_24.f_3 = {2.9221f, 0f, 108.0557f};
			*uParam0.f_24.f_6 = 32.0143f;
			*uParam0 = {2463.384f, 1585.373f, 31.7201f};
			*(uParam0.f_1886[0 /*7*/]) = {2461.326f, 1592.225f, 36.2419f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-48.7504f, 0f, -174.4014f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 60.2443f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {2462.87f, 1593.299f, 31.7201f};
			*uParam0.f_1742.f_27 = 232.3503f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {2464.2f, 1589.407f, 31.7204f};
			*uParam0.f_1742.f_90[0] = 270.5459f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {2472.122f, 1589.47f, 31.7204f};
			*uParam0.f_1742.f_90[1] = 270.4538f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {2481.73f, 1589.536f, 31.7204f};
			*uParam0.f_1742.f_90[2] = 270.3932f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {2472.543f, 1582.706f, 31.7204f};
			*uParam0.f_1742.f_90[3] = 236.267f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {2482.195f, 1578.474f, 31.7204f};
			*uParam0.f_1742.f_90[4] = 249.5383f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 38:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-2204.263f, 4241.036f, 47.07064f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-2206.512f, 4244.067f, 50.31763f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 9f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 215.8775f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-2201.778f, 4245.773f, 47.29582f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-2201.597f, 4245.499f, 48.8956f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -143f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-2203.335f, 4244.427f, 47.3305f};
			*uParam0.f_24 = {-2203.167f, 4289.137f, 57.1272f};
			*uParam0.f_24.f_3 = {-14.5968f, 0f, 165.7235f};
			*uParam0.f_24.f_6 = 26.2662f;
			*uParam0 = {-2203.834f, 4245.811f, 46.9031f};
			*(uParam0.f_1886[0 /*7*/]) = {-2201.486f, 4245.646f, 50.0007f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-39.3492f, 0f, 97.0326f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 63.7082f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {-2210.007f, 4257.927f, 46.3102f};
			*uParam0.f_1742.f_27 = 0f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-2204.835f, 4247.093f, 46.6831f};
			*uParam0.f_1742.f_90[0] = 37.0444f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-2211.009f, 4253.173f, 46.3205f};
			*uParam0.f_1742.f_90[1] = 65.1199f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-2220.877f, 4256.592f, 45.5691f};
			*uParam0.f_1742.f_90[2] = 67.5084f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-2209.193f, 4246.208f, 46.5722f};
			*uParam0.f_1742.f_90[3] = 57.1749f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-2219.052f, 4250.296f, 45.6889f};
			*uParam0.f_1742.f_90[4] = 67.5023f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 39:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {220.7273f, 2601.928f, 48.24141f};
			*(uParam0.f_38[0 /*27*/].f_3) = {215.3755f, 2600.983f, 43.25517f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 5.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 194.0507f;
			*(uParam0.f_38[0 /*27*/].f_23) = {215.0567f, 2601.512f, 44.75016f};
			*(uParam0.f_38[0 /*27*/].f_16) = {215.0199f, 2601.026f, 46.297f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -170f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {218.0665f, 2601.817f, 44.7668f};
			*uParam0.f_24 = {203.8715f, 2620.372f, 47.9511f};
			*uParam0.f_24.f_3 = {0.9185f, 0f, -139.0046f};
			*uParam0.f_24.f_6 = 25.1587f;
			*uParam0 = {211.8593f, 2605.902f, 44.9672f};
			*(uParam0.f_1886[0 /*7*/]) = {214.6859f, 2601.036f, 47.936f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-35.1379f, 0f, -59.8548f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 62.3358f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {221.5349f, 2608.276f, 45.219f};
			*uParam0.f_1742.f_27 = 2.3625f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {217.5363f, 2604.545f, 44.9176f};
			*uParam0.f_1742.f_90[0] = 10.8359f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {215.546f, 2615.004f, 46.0539f};
			*uParam0.f_1742.f_90[1] = 10.3759f;
			*uParam0.f_1742.f_96[0] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {208.0219f, 2618.404f, 46.4394f};
			*uParam0.f_1742.f_90[2] = 38.3398f;
			*uParam0.f_1742.f_96[0] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {225.5106f, 2608.12f, 45.156f};
			*uParam0.f_1742.f_90[3] = 34.4217f;
			*uParam0.f_1742.f_96[0] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {221.6936f, 2616.874f, 45.894f};
			*uParam0.f_1742.f_90[4] = 14.1856f;
			*uParam0.f_1742.f_96[0] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 40:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {186.232f, 2784.173f, 49.26564f};
			*(uParam0.f_38[0 /*27*/].f_3) = {185.4784f, 2788.869f, 42.74625f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 96.4365f;
			*(uParam0.f_38[0 /*27*/].f_23) = {185.9816f, 2789.387f, 44.5275f};
			*(uParam0.f_38[0 /*27*/].f_16) = {185.4518f, 2789.384f, 46.0915f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 99.5f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {186.1719f, 2786.343f, 45.0144f};
			*uParam0.f_24 = {204.1797f, 2781.61f, 46.8041f};
			*uParam0.f_24.f_3 = {2.1959f, 0f, 70.7072f};
			*uParam0.f_24.f_6 = 30.0687f;
			*uParam0 = {187.7611f, 2782.947f, 44.6553f};
			*(uParam0.f_1886[0 /*7*/]) = {186.8019f, 2782.575f, 49.2501f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-40.3641f, 0f, -20.6897f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 61.8127f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {188.1871f, 2790.814f, 44.5641f};
			*uParam0.f_1742.f_27 = 263.0688f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {190.1576f, 2787.299f, 44.6088f};
			*uParam0.f_1742.f_90[0] = 282.2347f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {188.926f, 2794.514f, 44.6552f};
			*uParam0.f_1742.f_90[1] = 6.4226f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {193.6776f, 2794.987f, 44.6552f};
			*uParam0.f_1742.f_90[2] = 8.4438f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {188.1367f, 2802.647f, 44.6552f};
			*uParam0.f_1742.f_90[3] = 4.8248f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {192.7628f, 2803.063f, 44.6552f};
			*uParam0.f_1742.f_90[4] = 8.5929f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 41:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {641.296f, 2771.37f, 40.68779f};
			*(uParam0.f_38[0 /*27*/].f_3) = {637.1742f, 2771.076f, 44.58272f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 184.4578f;
			*(uParam0.f_38[0 /*27*/].f_23) = {636.962f, 2772.022f, 41.02439f};
			*(uParam0.f_38[0 /*27*/].f_16) = {636.8882f, 2771.198f, 42.5919f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -176f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {639.45f, 2771.2f, 41.2f};
			*uParam0.f_24 = {680.7204f, 2782.697f, 45.1229f};
			*uParam0.f_24.f_3 = {0.1065f, 0f, 80.5649f};
			*uParam0.f_24.f_6 = 34.4741f;
			*uParam0 = {643.8202f, 2787.873f, 40.9563f};
			*(uParam0.f_1886[0 /*7*/]) = {641.882f, 2794.91f, 44.633f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-39.3967f, 0f, -161.2362f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 55.4012f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {637.2254f, 2784.663f, 41.0101f};
			*uParam0.f_1742.f_27 = 227.5745f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {638.8456f, 2776.42f, 40.969f};
			*uParam0.f_1742.f_90[0] = 4.5972f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {644.3888f, 2779.171f, 40.9367f};
			*uParam0.f_1742.f_90[1] = 275.5146f;
			*uParam0.f_1742.f_96[0] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {647.0148f, 2770.983f, 40.9766f};
			*uParam0.f_1742.f_90[2] = 183.5678f;
			*uParam0.f_1742.f_96[0] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {649.6042f, 2757.442f, 40.9613f};
			*uParam0.f_1742.f_90[3] = 202.3017f;
			*uParam0.f_1742.f_96[0] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {653.1031f, 2764.209f, 40.9388f};
			*uParam0.f_1742.f_90[4] = 228.5975f;
			*uParam0.f_1742.f_96[0] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 42:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-1131.622f, 2702.445f, 20.78433f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1129.754f, 2700.222f, 17.56647f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 308.0592f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1128.031f, 2697.541f, 17.80039f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1127.666f, 2697.752f, 19.3395f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -48f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-1130.938f, 2701.133f, 17.8004f};
			*uParam0.f_24 = {-1154.722f, 2665.794f, 20.9318f};
			*uParam0.f_24.f_3 = {2.0466f, 0f, -47.8797f};
			*uParam0.f_24.f_6 = 26.9081f;
			*uParam0 = {-1129.377f, 2697.944f, 17.8005f};
			*(uParam0.f_1886[0 /*7*/]) = {-1128.825f, 2698.855f, 21.1368f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-34.5325f, 0f, 54.3263f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 59.8904f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {-1129.415f, 2697.958f, 17.8003f};
			*uParam0.f_1742.f_27 = 148.8793f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1131.814f, 2697.076f, 17.8004f};
			*uParam0.f_1742.f_90[0] = 153.0315f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1135.403f, 2690.03f, 17.8004f};
			*uParam0.f_1742.f_90[1] = 152.989f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1138.859f, 2682.206f, 17.1049f};
			*uParam0.f_1742.f_90[2] = 174.7645f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1135.563f, 2672.686f, 17.0939f};
			*uParam0.f_1742.f_90[3] = 219.4992f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1138.647f, 2667.399f, 17.0928f};
			*uParam0.f_1742.f_90[4] = 178.486f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 43:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-9.27419f, -1648.472f, 33.09653f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-13.00892f, -1645.338f, 27.81558f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 153.8012f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-8.29621f, -1648.12f, 28.32089f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-8.7565f, -1648.45f, 29.9717f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 140f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-10.944f, -1646.76f, 28.3125f};
			*uParam0.f_24 = {30.3715f, -1607.508f, 36.8431f};
			*uParam0.f_24.f_3 = {-3.1524f, 0f, 139.9197f};
			*uParam0.f_24.f_6 = 21.3688f;
			*uParam0 = {-7.1931f, -1648.7f, 28.3206f};
			*(uParam0.f_1886[0 /*7*/]) = {-7.8353f, -1649.2f, 32.719f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-35.0705f, 0f, 28.4357f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 56.1118f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {-1.0175f, -1653.235f, 28.3206f};
			*uParam0.f_1742.f_27 = 308.6224f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-8.7616f, -1644f, 28.1685f};
			*uParam0.f_1742.f_90[0] = 319.3071f;
			*uParam0.f_1742.f_96[0] = 50.0901f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-13.2855f, -1639.263f, 28.1651f};
			*uParam0.f_1742.f_90[1] = 320.2909f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-4.2297f, -1646.732f, 28.1645f};
			*uParam0.f_1742.f_90[2] = 231.2027f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {0.6959f, -1650.679f, 28.1606f};
			*uParam0.f_1742.f_90[3] = 231.2781f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {6.6154f, -1654.31f, 28.1579f};
			*uParam0.f_1742.f_90[4] = 264.0044f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 44:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {1023.65f, -2401.359f, 34.94485f};
			*(uParam0.f_38[0 /*27*/].f_3) = {1024.32f, -2395.398f, 28.73516f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 92.2894f;
			*(uParam0.f_38[0 /*27*/].f_23) = {1026.166f, -2394.392f, 29.07515f};
			*(uParam0.f_38[0 /*27*/].f_16) = {1025.504f, -2394.214f, 30.7512f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 85f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {1024.263f, -2398.404f, 29.1261f};
			*uParam0.f_24 = {1056.391f, -2400.214f, 36.3721f};
			*uParam0.f_24.f_3 = {1.2159f, 0f, 86.3154f};
			*uParam0.f_24.f_6 = 41.0913f;
			*uParam0 = {1026.017f, -2404.073f, 28.72f};
			*(uParam0.f_1886[0 /*7*/]) = {1025.464f, -2394.471f, 35.467f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-52.0974f, 0f, 175.3725f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 63.314f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {1026.868f, -2383.195f, 29.3707f};
			*uParam0.f_1742.f_27 = 278.7988f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {1028.058f, -2398.673f, 28.785f};
			*uParam0.f_1742.f_90[0] = 263.1474f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {1028.79f, -2403.651f, 28.5859f};
			*uParam0.f_1742.f_90[1] = 211.1604f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {1030.302f, -2394.42f, 28.9265f};
			*uParam0.f_1742.f_90[2] = 323.9013f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {1030.851f, -2388.205f, 29.1169f};
			*uParam0.f_1742.f_90[3] = 354.9865f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {1028.437f, -2409.648f, 28.3444f};
			*uParam0.f_1742.f_90[4] = 176.4828f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 45:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {870.895f, -2230.893f, 29.01948f};
			*(uParam0.f_38[0 /*27*/].f_3) = {870.6178f, -2233.976f, 34.8327f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 355.1031f;
			*(uParam0.f_38[0 /*27*/].f_23) = {873.1846f, -2233.253f, 29.54528f};
			*(uParam0.f_38[0 /*27*/].f_16) = {873.3047f, -2232.607f, 31.0195f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -5f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {870.8577f, -2232.323f, 29.5508f};
			*uParam0.f_24 = {839.1729f, -2251.336f, 36.3461f};
			*uParam0.f_24.f_3 = {-2.4285f, 0f, -61.0109f};
			*uParam0.f_24.f_6 = 27.8913f;
			*uParam0 = {867.3748f, -2233.064f, 29.512f};
			*(uParam0.f_1886[0 /*7*/]) = {865.7656f, -2231.933f, 35.202f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.4886f, 0f, -115.6493f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 52.8804f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 6;
			*uParam0.f_1742.f_24 = {857.1803f, -2231.298f, 29.4231f};
			*uParam0.f_1742.f_27 = 198.7231f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {870.4635f, -2235.976f, 29.6135f};
			*uParam0.f_1742.f_90[0] = 175.5827f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {865.8381f, -2235.665f, 29.5193f};
			*uParam0.f_1742.f_90[1] = 126.777f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {875.8398f, -2239.864f, 29.4001f};
			*uParam0.f_1742.f_90[2] = 264.6278f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {864.8415f, -2239.633f, 29.3801f};
			*uParam0.f_1742.f_90[3] = 85.2316f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {857.426f, -2236.423f, 29.3134f};
			*uParam0.f_1742.f_90[4] = 105.4882f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 46:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-662.1819f, -2377.943f, 17.99851f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-665.3298f, -2383.396f, 12.70213f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 4.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 246.1582f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-667.0486f, -2383.269f, 12.92401f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-666.3141f, -2383.771f, 14.6044f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -120f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-663.8541f, -2380.389f, 12.9446f};
			*uParam0.f_24 = {-719.574f, -2366.942f, 20.1524f};
			*uParam0.f_24.f_3 = {1.5858f, 0f, -92.4432f};
			*uParam0.f_24.f_6 = 25.2947f;
			*uParam0 = {-662.9977f, -2375.878f, 12.9198f};
			*(uParam0.f_1886[0 /*7*/]) = {-666.2004f, -2383.66f, 17.4456f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.4322f, 0f, -22.9677f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 64.8067f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {-659.9097f, -2368.972f, 12.9446f};
			*uParam0.f_1742.f_27 = 49.4983f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-667.7959f, -2378.347f, 12.8602f};
			*uParam0.f_1742.f_90[0] = 59.5981f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-668.5652f, -2372.979f, 12.8107f};
			*uParam0.f_1742.f_90[1] = 27.3385f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-674.8391f, -2379.854f, 12.8041f};
			*uParam0.f_1742.f_90[2] = 100.3572f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-670.3742f, -2383.357f, 12.8684f};
			*uParam0.f_1742.f_90[3] = 121.2465f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-679.6597f, -2387.965f, 12.8113f};
			*uParam0.f_1742.f_90[4] = 113.4791f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 47:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-1086.132f, -2237.118f, 18.6774f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1091.123f, -2232.126f, 11.67346f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 132.9527f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1090.987f, -2231.392f, 12.22213f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1091.348f, -2231.695f, 13.7872f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -135f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-1088.616f, -2235.098f, 12.2182f};
			*uParam0.f_24 = {-1089.117f, -2209.689f, 16.848f};
			*uParam0.f_24.f_3 = {1.8425f, 0f, -162.2026f};
			*uParam0.f_24.f_6 = 38.658f;
			*uParam0 = {-1084.306f, -2237.953f, 12.2685f};
			*(uParam0.f_1886[0 /*7*/]) = {-1092.002f, -2230.709f, 18.7219f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.9243f, 0f, -135.0189f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 57.1276f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 10;
			*uParam0.f_1742.f_24 = {-1078.761f, -2242.177f, 12.2722f};
			*uParam0.f_1742.f_27 = 307.3823f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1086.267f, -2232.278f, 12.2336f};
			*uParam0.f_1742.f_90[0] = 314.623f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1082.558f, -2234.562f, 12.2378f};
			*uParam0.f_1742.f_90[1] = 282.1199f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1089.81f, -2228.242f, 12.235f};
			*uParam0.f_1742.f_90[2] = 1.351f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1094.435f, -2223.478f, 12.2355f};
			*uParam0.f_1742.f_90[3] = 23.0358f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1077.579f, -2238.853f, 12.2399f};
			*uParam0.f_1742.f_90[4] = 248.6185f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 48:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-341.6828f, -1466.341f, 28.86167f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-346.6502f, -1466.225f, 32.95016f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 8.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 96.3665f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-342.0189f, -1466.667f, 29.61167f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-342.7317f, -1466.629f, 31.2761f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 90f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-342.5126f, -1468.675f, 29.6107f};
			*uParam0.f_24 = {-310.1259f, -1433.784f, 36.4266f};
			*uParam0.f_24.f_3 = {-2.5852f, 0f, 142.0256f};
			*uParam0.f_24.f_6 = 23.0369f;
			*uParam0 = {-341.5999f, -1471.628f, 29.7515f};
			*(uParam0.f_1886[0 /*7*/]) = {-342.7205f, -1471.862f, 33.2148f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-32.0401f, 0f, -23.2693f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 56.3666f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {-356.7247f, -1463.142f, 28.6324f};
			*uParam0.f_1742.f_27 = 5.3571f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-339.002f, -1467.799f, 29.5844f};
			*uParam0.f_1742.f_90[0] = 281.1683f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-339.1405f, -1462.892f, 29.59f};
			*uParam0.f_1742.f_90[1] = 293.1545f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-332.1327f, -1458.45f, 29.4955f};
			*uParam0.f_1742.f_90[2] = 306.6605f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-330.6393f, -1464.046f, 29.5099f};
			*uParam0.f_1742.f_90[3] = 298.5376f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-336.3814f, -1474.688f, 29.5482f};
			*uParam0.f_1742.f_90[4] = 212.1829f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 49:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {-1240.189f, -259.5058f, 41.04411f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1242.814f, -260.9294f, 37.77705f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 211.7432f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1243.636f, -260.3023f, 37.94491f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1243.329f, -261.0626f, 39.5057f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -151.5f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 6;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {-1241.54f, -259.8841f, 37.9445f};
			*uParam0.f_24 = {-1238.615f, -237.732f, 41.2694f};
			*uParam0.f_24.f_3 = {-0.1405f, 0f, 174.5821f};
			*uParam0.f_24.f_6 = 29.2463f;
			*uParam0 = {-1239.297f, -257.472f, 37.9577f};
			*(uParam0.f_1886[0 /*7*/]) = {-1243.715f, -261.1733f, 41.046f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-41.9739f, 0f, -52.1773f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 64.1421f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {-1231.752f, -261.1873f, 37.7356f};
			*uParam0.f_1742.f_27 = 309.7137f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1243.307f, -256.9916f, 38.0127f};
			*uParam0.f_1742.f_90[0] = 28.1569f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1239.413f, -252.4819f, 38.1356f};
			*uParam0.f_1742.f_90[1] = 345.0404f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1247.614f, -259.2161f, 38.0121f};
			*uParam0.f_1742.f_90[2] = 83.7995f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1254.619f, -261.4668f, 38.0736f};
			*uParam0.f_1742.f_90[3] = 117.0801f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1234.794f, -253.125f, 38.1299f};
			*uParam0.f_1742.f_90[4] = 250.101f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 50:
			*(uParam0.f_38[0 /*27*/]).f_26 = 2;
			*(uParam0.f_38[0 /*27*/]) = {901.9956f, -148.9021f, 79.34973f};
			*(uParam0.f_38[0 /*27*/].f_3) = {897.7418f, -146.4941f, 75.32096f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 3.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 150.9974f;
			*(uParam0.f_38[0 /*27*/].f_23) = {897.5184f, -145.3406f, 75.70785f};
			*(uParam0.f_38[0 /*27*/].f_16) = {897.3796f, -145.9439f, 77.0859f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 150f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 5;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_3[0 /*3*/]) = {899.8448f, -147.528f, 75.5674f};
			*uParam0.f_24 = {897.9404f, -97.0383f, 81.3473f};
			*uParam0.f_24.f_3 = {-0.5489f, 0f, -176.1915f};
			*uParam0.f_24.f_6 = 18.6505f;
			*uParam0 = {895.2067f, -142.3797f, 75.9438f};
			*(uParam0.f_1886[0 /*7*/]) = {903.5604f, -148.9383f, 79.4718f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-33.5031f, 0f, 47.9397f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 61.3316f;
			*uParam0.f_36 = 1;
			*uParam0.f_33 = 2;
			*uParam0.f_1742.f_24 = {896.6425f, -143.7906f, 75.8284f};
			*uParam0.f_1742.f_27 = 331.8638f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {901.4795f, -145.0157f, 75.6218f};
			*uParam0.f_1742.f_90[0] = 327.9151f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {908.1265f, -141.9543f, 75.409f};
			*uParam0.f_1742.f_90[1] = 291.4932f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {901.1325f, -137.1122f, 75.7044f};
			*uParam0.f_1742.f_90[2] = 16.3723f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {895.2284f, -133.0699f, 76.0953f};
			*uParam0.f_1742.f_90[3] = 56.9496f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {914.0188f, -145.0915f, 74.9349f};
			*uParam0.f_1742.f_90[4] = 237.7844f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_34 = 1;
			break;
		
		case 51:
			*uParam0 = {-1405.411f, 526.8572f, 122.8361f};
			*(uParam0.f_3[0 /*3*/]) = {-1405.411f, 526.8572f, 122.8361f};
			*(uParam0.f_3[1 /*3*/]) = {-1405.087f, 540.0269f, 121.9285f};
			*uParam0.f_24 = {-1426.95f, 560.2891f, 134.0229f};
			*uParam0.f_24.f_3 = {-12.2373f, 0f, -138.4202f};
			*uParam0.f_24.f_6 = 30.8201f;
			*uParam0.f_13 = {-1409.14f, 534.6944f, 121.9111f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1404.915f, 526.8506f, 121.8675f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1406.637f, 526.8434f, 126.5861f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 262.0459f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1405.411f, 526.8572f, 122.8361f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1405.407f, 528.2228f, 124.34f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -88.8f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1406.144f, 529.9474f, 122.8361f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 11.333f;
			*(uParam0.f_1886[0 /*7*/]) = {-1405.92f, 525.1206f, 126.2389f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-45.9372f, 0f, 12.568f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 56.7555f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1404.633f, 540.3209f, 120.9692f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1406.55f, 540.3247f, 125.6773f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 8f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 265.3779f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1405.087f, 540.0269f, 121.9285f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1405.477f, 535.6528f, 123.37f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -88.8f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1405.871f, 543.8805f, 125.0912f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-41.1469f, 0f, 159.0998f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 68.4407f;
			*uParam0.f_1742.f_24 = {-1409.29f, 538.0002f, 121.9135f};
			*uParam0.f_1742.f_27 = 93.7343f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1409.073f, 537.755f, 121.9144f};
			*uParam0.f_1742.f_90[0] = 98.0524f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1409.026f, 541.6954f, 121.918f};
			*uParam0.f_1742.f_90[1] = 104.4953f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1417.079f, 539.019f, 120.7941f};
			*uParam0.f_1742.f_90[2] = 114.0971f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1416.728f, 535.2925f, 120.5692f};
			*uParam0.f_1742.f_90[3] = 107.5656f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1423.547f, 534.5643f, 119.4372f};
			*uParam0.f_1742.f_90[4] = 106.4241f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 52:
			*uParam0 = {1336.899f, -1578.744f, 53.4443f};
			*(uParam0.f_3[0 /*3*/]) = {1336.899f, -1578.744f, 53.4443f};
			*(uParam0.f_3[1 /*3*/]) = {1351.944f, -1575.299f, 53.0439f};
			*uParam0.f_24 = {1369.593f, -1586.224f, 56.3956f};
			*uParam0.f_24.f_3 = {-2.2156f, 0f, 66.1587f};
			*uParam0.f_24.f_6 = 26.8035f;
			*uParam0.f_13 = {1338.163f, -1580.722f, 53.0517f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {1337.235f, -1579.398f, 52.80171f};
			*(uParam0.f_38[0 /*27*/].f_3) = {1336.623f, -1578.602f, 55.91057f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 44.401f;
			*(uParam0.f_38[0 /*27*/].f_23) = {1336.899f, -1578.744f, 53.4443f};
			*(uParam0.f_38[0 /*27*/].f_16) = {1335.67f, -1579.34f, 54.49f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 36.75f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {1338.163f, -1580.722f, 53.0517f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 233.6165f;
			*(uParam0.f_1886[0 /*7*/]) = {1344.815f, -1579.647f, 55.9164f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-20.7335f, 0f, 83.8051f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {1347.031f, -1573.104f, 52.91921f};
			*(uParam0.f_38[1 /*27*/].f_3) = {1352.191f, -1570.003f, 55.65532f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 31.013f;
			*(uParam0.f_38[1 /*27*/].f_23) = {1351.944f, -1575.299f, 53.0439f};
			*(uParam0.f_38[1 /*27*/].f_16) = {1346.88f, -1573.19f, 54.49f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 30.65f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {1347.828f, -1577.406f, 55.9645f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-20.5771f, 0f, -12.7006f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {1350.608f, -1573.058f, 53.0515f};
			*uParam0.f_1742.f_27 = 214.7269f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {1354.652f, -1578.635f, 52.7106f};
			*uParam0.f_1742.f_90[0] = 215.0819f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {1372.814f, -1582.146f, 52.6f};
			*uParam0.f_1742.f_90[1] = 305.4971f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {1386.53f, -1572.217f, 53.9185f};
			*uParam0.f_1742.f_90[2] = 305.6955f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {1353.222f, -1589.885f, 51.5701f};
			*uParam0.f_1742.f_90[3] = 128.0031f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {1344.09f, -1596.932f, 51.0919f};
			*uParam0.f_1742.f_90[4] = 127.4157f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 53:
			*uParam0 = {-104.9801f, 6529.164f, 29.1719f};
			*(uParam0.f_3[0 /*3*/]) = {-104.9801f, 6529.164f, 29.1719f};
			*(uParam0.f_3[1 /*3*/]) = {-105.0318f, 6534.678f, 28.8092f};
			*uParam0.f_24 = {-110.173f, 6576.258f, 32.1717f};
			*uParam0.f_24.f_3 = {0.0198f, 0f, -177.4159f};
			*uParam0.f_24.f_6 = 18.7421f;
			*uParam0.f_13 = {-108.2526f, 6531.63f, 28.8092f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-105.3736f, 6527.765f, 28.95259f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-106.4736f, 6528.864f, 31.61336f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 134.6413f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-104.9801f, 6529.164f, 29.1719f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-106.6888f, 6528.88f, 30.3018f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -137.2f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-108.2526f, 6531.63f, 28.8092f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 49.2311f;
			*(uParam0.f_1886[0 /*7*/]) = {-100.0377f, 6532.986f, 31.7713f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-15.7838f, 0f, 102.1657f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-99.83927f, 6532.972f, 28.76542f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-103.0506f, 6529.76f, 31.86795f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 225.295f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-105.0318f, 6534.678f, 28.8092f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-99.7988f, 6533.01f, 30.2618f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -134.5f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-110.8133f, 6530.848f, 31.812f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-16.9222f, 0f, -80.7392f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 52.8642f;
			*uParam0.f_1742.f_24 = {-103.1034f, 6532.659f, 28.8092f};
			*uParam0.f_1742.f_27 = 43.8528f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-104.5972f, 6534.244f, 28.8092f};
			*uParam0.f_1742.f_90[0] = 46.119f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-110.2358f, 6539.664f, 28.7473f};
			*uParam0.f_1742.f_90[1] = 46.16f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-110.7653f, 6550.791f, 28.5617f};
			*uParam0.f_1742.f_90[2] = 312.715f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-101.0747f, 6560.041f, 28.563f};
			*uParam0.f_1742.f_90[3] = 312.1525f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-129.3656f, 6539.909f, 28.508f};
			*uParam0.f_1742.f_90[4] = 136.403f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 54:
			*uParam0 = {-302.6793f, 6327.531f, 31.8915f};
			*(uParam0.f_3[0 /*3*/]) = {-302.6793f, 6327.531f, 31.8915f};
			*(uParam0.f_3[1 /*3*/]) = {-294.5604f, 6338.522f, 31.2827f};
			*uParam0.f_24 = {-338.4015f, 6342.919f, 33.9788f};
			*uParam0.f_24.f_3 = {-0.5933f, 0f, -109.2485f};
			*uParam0.f_24.f_6 = 26.0857f;
			*uParam0.f_13 = {-774.1072f, 303.6408f, 84.7069f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-301.2911f, 6327.554f, 31.74294f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-302.7279f, 6326.001f, 34.44438f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 220.679f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-302.6793f, 6327.531f, 31.8915f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-301.07f, 6327.54f, 33.36f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -136.7f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-305.3481f, 6331.015f, 31.4893f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 48.1647f;
			*(uParam0.f_1886[0 /*7*/]) = {-306.7626f, 6327.715f, 34.1136f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-23.3308f, 0f, -79.0093f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-289.3913f, 6337.942f, 29.08413f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-293.8093f, 6333.272f, 34.08807f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 225.6549f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-294.5604f, 6338.522f, 31.2827f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-294.03f, 6333.04f, 32.98f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -133f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-300.2161f, 6330.604f, 33.8086f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-10.9035f, 0f, -49.6255f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-293.1363f, 6337.654f, 31.4098f};
			*uParam0.f_1742.f_27 = 38.2211f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-295.2674f, 6339.103f, 31.2112f};
			*uParam0.f_1742.f_90[0] = 45.0538f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-303.0802f, 6346.869f, 29.8847f};
			*uParam0.f_1742.f_90[1] = 45.1332f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-301.9123f, 6360.823f, 29.504f};
			*uParam0.f_1742.f_90[2] = 312.3356f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-320.7206f, 6350.699f, 29.3934f};
			*uParam0.f_1742.f_90[3] = 133.3218f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-329.3412f, 6342.112f, 29.2682f};
			*uParam0.f_1742.f_90[4] = 134.0955f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 6;
			*uParam0.f_34 = 0;
			break;
		
		case 55:
			*uParam0 = {-14.8944f, 6557.818f, 32.2454f};
			*(uParam0.f_3[0 /*3*/]) = {-14.8944f, 6557.818f, 32.2454f};
			*(uParam0.f_3[1 /*3*/]) = {-12.2099f, 6563.895f, 30.9552f};
			*uParam0.f_24 = {13.1554f, 6522.455f, 33.9638f};
			*uParam0.f_24.f_3 = {2.0923f, 0f, 45.5912f};
			*uParam0.f_24.f_6 = 22.9656f;
			*uParam0.f_13 = {-12.7249f, 6559.958f, 30.971f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-15.00959f, 6556.497f, 32.01028f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-16.19772f, 6557.742f, 34.74551f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.25f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 136.3973f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-14.8944f, 6557.818f, 32.2454f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-14.66f, 6556.14f, 33.75f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 135f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-12.7249f, 6559.958f, 30.971f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 315.8066f;
			*(uParam0.f_1886[0 /*7*/]) = {-18.339f, 6560.119f, 34.7698f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-16.6529f, 0f, -109.5559f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-16.8522f, 6565.349f, 30.65897f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-13.64239f, 6568.558f, 33.62691f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 44.047f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-12.2099f, 6563.895f, 30.9552f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-16.99f, 6565.21f, 32.34f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 45.1f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-9.7957f, 6554.708f, 35.1352f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-19.8197f, 0f, 18.0251f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {-13.5522f, 6565.253f, 30.9267f};
			*uParam0.f_1742.f_27 = 221.1647f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-9.9209f, 6561.55f, 30.971f};
			*uParam0.f_1742.f_90[0] = 224.95f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-3.6101f, 6555.218f, 30.934f};
			*uParam0.f_1742.f_90[1] = 225.1458f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {2.3391f, 6549.301f, 30.3709f};
			*uParam0.f_1742.f_90[2] = 225.4122f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {0.4904f, 6539.524f, 30.3861f};
			*uParam0.f_1742.f_90[3] = 135.0325f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {18.4567f, 6550.539f, 30.3861f};
			*uParam0.f_1742.f_90[4] = 314.7267f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 56:
			*uParam0 = {1900.406f, 3772.148f, 31.886f};
			*(uParam0.f_3[0 /*3*/]) = {1898.915f, 3781.82f, 31.8819f};
			*(uParam0.f_3[1 /*3*/]) = {1883.898f, 3774.326f, 31.7873f};
			*uParam0.f_24 = {1925.606f, 3757.141f, 34.3505f};
			*uParam0.f_24.f_3 = {0.5929f, 0f, 63.7656f};
			*uParam0.f_24.f_6 = 21.8329f;
			*uParam0.f_13 = {1901.758f, 3770.143f, 31.7519f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {1898.433f, 3781.732f, 31.73598f};
			*(uParam0.f_38[0 /*27*/].f_3) = {1899.448f, 3782.283f, 35.30321f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 123.484f;
			*(uParam0.f_38[0 /*27*/].f_23) = {1898.915f, 3781.82f, 31.8819f};
			*(uParam0.f_38[0 /*27*/].f_16) = {1899.13f, 3780.52f, 33.31f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 119.1f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {1901.758f, 3770.143f, 31.7519f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 210.6425f;
			*(uParam0.f_1886[0 /*7*/]) = {1893.778f, 3770.252f, 35.0531f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-20.2686f, 0f, -84.6772f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {1880.156f, 3772.427f, 34.53546f};
			*(uParam0.f_38[1 /*27*/].f_3) = {1886.478f, 3776.083f, 31.58368f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 39.8771f;
			*(uParam0.f_38[1 /*27*/].f_23) = {1883.898f, 3774.326f, 31.7873f};
			*(uParam0.f_38[1 /*27*/].f_16) = {1880.01f, 3772.35f, 33.28f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 31.6f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {1893.417f, 3770.267f, 35.0829f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-17.6513f, 0f, 69.9366f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {1885.583f, 3772.421f, 31.8156f};
			*uParam0.f_1742.f_27 = 203.6179f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {1884.573f, 3767.766f, 31.8607f};
			*uParam0.f_1742.f_90[0] = 208.1913f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {1891.307f, 3759.014f, 31.607f};
			*uParam0.f_1742.f_90[1] = 210.2192f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {1887.656f, 3768.965f, 31.7966f};
			*uParam0.f_1742.f_90[2] = 200.6109f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {1886.55f, 3748.047f, 31.6557f};
			*uParam0.f_1742.f_90[3] = 121.3845f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {1905.564f, 3753.289f, 31.4482f};
			*uParam0.f_1742.f_90[4] = 299.79f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 57:
			*uParam0 = {1663.031f, 4776.304f, 41.0075f};
			*(uParam0.f_3[0 /*3*/]) = {1663.031f, 4776.304f, 41.0075f};
			*(uParam0.f_3[1 /*3*/]) = {1661.818f, 4768.248f, 41.0075f};
			*uParam0.f_24 = {1696.1f, 4776.849f, 43.6956f};
			*uParam0.f_24.f_3 = {6.4054f, 0f, 94.3951f};
			*uParam0.f_24.f_6 = 28.4081f;
			*uParam0.f_13 = {1664.526f, 4776.464f, 40.9783f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {1661.922f, 4775.278f, 44.09471f};
			*(uParam0.f_38[0 /*27*/].f_3) = {1661.731f, 4776.941f, 40.89644f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.5f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 101.185f;
			*(uParam0.f_38[0 /*27*/].f_23) = {1663.031f, 4776.304f, 41.0075f};
			*(uParam0.f_38[0 /*27*/].f_16) = {1662f, 4774.67f, 42.47f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 97.4f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {1664.526f, 4776.464f, 40.9783f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 270.1331f;
			*(uParam0.f_1886[0 /*7*/]) = {1662.714f, 4770.478f, 44.8333f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-26.9123f, 0f, -12.3788f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {1658.107f, 4765.853f, 44.06079f};
			*(uParam0.f_38[1 /*27*/].f_3) = {1657.608f, 4769.538f, 40.82854f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 98.8964f;
			*(uParam0.f_38[1 /*27*/].f_23) = {1661.818f, 4768.248f, 41.0075f};
			*(uParam0.f_38[1 /*27*/].f_16) = {1657.89f, 4765.6f, 42.45f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 7.6f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {1663.792f, 4770.251f, 43.9323f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-21.1548f, 0f, 134.314f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*uParam0.f_1742.f_24 = {1661.561f, 4768.141f, 41.0075f};
			*uParam0.f_1742.f_27 = 281.5633f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {1663.362f, 4768.258f, 41.0075f};
			*uParam0.f_1742.f_90[0] = 278.2557f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {1675.248f, 4762.792f, 40.9741f};
			*uParam0.f_1742.f_90[1] = 196.0204f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {1678.105f, 4753.611f, 40.9893f};
			*uParam0.f_1742.f_90[2] = 198.769f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {1679.2f, 4778.584f, 40.9837f};
			*uParam0.f_1742.f_90[3] = 1.7503f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {1678.739f, 4790.436f, 40.9947f};
			*uParam0.f_1742.f_90[4] = 3.3935f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 2;
			*uParam0.f_34 = 0;
			break;
		
		case 58:
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*uParam0 = {-194.9809f, 501.7973f, 132.4774f};
			*(uParam0.f_3[0 /*3*/]) = {-177.2919f, 504.2896f, 135.8602f};
			*(uParam0.f_3[1 /*3*/]) = {-191.7057f, 500.0735f, 133.4895f};
			*uParam0.f_24 = {-197.7389f, 510.5206f, 136.3903f};
			*uParam0.f_24.f_3 = {4.4541f, 0f, -130.5121f};
			*uParam0.f_24.f_6 = 50.4296f;
			*(uParam0.f_1886[0 /*7*/]) = {-177.0029f, 501.2041f, 138.6498f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-23.7879f, 0f, -52.9233f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 61.2835f;
			*(uParam0.f_1886[1 /*7*/]) = {-184.3932f, 503.7115f, 136.354f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-19.4473f, 0f, 134.8015f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50.3357f;
			*(uParam0.f_38[0 /*27*/]) = {-174.797f, 503.2035f, 136.6536f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-174.4876f, 501.8871f, 138.6536f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-176.7676f, 503.9538f, 135.8529f};
			*(uParam0.f_38[0 /*27*/]).f_7 = 282.6224f;
			*(uParam0.f_38[0 /*27*/].f_16) = {-173.997f, 501.8261f, 137.7961f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -78.8f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-176.7676f, 503.9538f, 135.8529f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 29.145f;
			*uParam0.f_13 = {-176.7676f, 503.9538f, 135.8529f};
			*uParam0.f_1742.f_24 = {-188.9353f, 502.4905f, 133.4325f};
			*uParam0.f_1742.f_27 = 34.1741f;
			*uParam0.f_146.f_1517.f_8 = {-173.976f, 501.86f, 136.464f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, -110f};
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/].f_23) = {-188.8384f, 499.6424f, 133.7361f};
			*(uParam0.f_38[1 /*27*/]) = {-185.5276f, 501.6372f, 133.8779f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-192.1181f, 500.2362f, 136.0939f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.81f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 193.6283f;
			*(uParam0.f_38[1 /*27*/].f_16) = {-192.375f, 498.75f, 134.886f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 189.5f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-187.3407f, 502.9363f, 133.6252f};
			*uParam0.f_1742.f_90[0] = 17.8818f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-190.5919f, 502.013f, 133.1963f};
			*uParam0.f_1742.f_90[1] = 19.9412f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-197.0257f, 502.7821f, 132.2657f};
			*uParam0.f_1742.f_90[2] = 104.2812f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-172.2021f, 509.0025f, 136.0632f};
			*uParam0.f_1742.f_90[3] = 136.7116f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-206.8378f, 500.7487f, 130.7149f};
			*uParam0.f_1742.f_90[4] = 100.8708f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 59:
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {346.9647f, 440.7964f, 146.7072f};
			*(uParam0.f_38[0 /*27*/].f_3) = {345.8796f, 440.2971f, 149.9908f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 112.2264f;
			*(uParam0.f_38[0 /*27*/].f_23) = {346.6832f, 440.3893f, 146.7075f};
			*(uParam0.f_38[0 /*27*/].f_16) = {345.275f, 442f, 148.053f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 116.8f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {345.261f, 441.95f, 146.75f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, 77f};
			*uParam0 = {348.275f, 446.7f, 145f};
			*(uParam0.f_3[0 /*3*/]) = {347.2768f, 442.0909f, 146.7065f};
			*(uParam0.f_3[1 /*3*/]) = {353.3849f, 435.0725f, 146.124f};
			*uParam0.f_24 = {349.7426f, 463.4214f, 150.5502f};
			*uParam0.f_24.f_3 = {-2.7041f, 0f, 161.0581f};
			*uParam0.f_24.f_6 = 35.5099f;
			*(uParam0.f_1886[0 /*7*/]) = {347.4289f, 439.4345f, 149.7005f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-32.3614f, 0f, 3.6285f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 91.4098f;
			*(uParam0.f_1886[1 /*7*/]) = {349.454f, 439.5841f, 150.1733f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-48.7754f, 0f, -127.4111f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 92.1135f;
			*(uParam0.f_146[0 /*12*/].f_8) = {350.0362f, 443.1544f, 146.9524f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 306.6064f;
			*uParam0.f_13 = {350.0362f, 443.1544f, 146.9524f};
			*uParam0.f_1742.f_24 = {353.7372f, 437.4555f, 145.6733f};
			*uParam0.f_1742.f_27 = 301.9638f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {352.6306f, 432.4351f, 146.146f};
			*(uParam0.f_38[1 /*27*/].f_3) = {349.0583f, 439.5597f, 150.0275f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 114.2784f;
			*(uParam0.f_38[1 /*27*/].f_23) = {352.1213f, 436.8011f, 146.229f};
			*(uParam0.f_38[1 /*27*/].f_16) = {352.4493f, 432.7883f, 147.83f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 115.775f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {356.4036f, 436.1895f, 145.1594f};
			*uParam0.f_1742.f_90[0] = 295.2705f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {354.2893f, 440.1214f, 145.0805f};
			*uParam0.f_1742.f_90[1] = 300.6924f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {349.0107f, 448.4448f, 145.368f};
			*uParam0.f_1742.f_90[2] = 228.5837f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {363.8029f, 438.9819f, 143.8032f};
			*uParam0.f_1742.f_90[3] = 251.7819f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {364.4465f, 447.8789f, 144.3506f};
			*uParam0.f_1742.f_90[4] = 66.8917f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 60:
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-754.0821f, 621.3502f, 140.7753f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-753.3868f, 619.2969f, 144.6737f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.5625f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 110.3481f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-754.0821f, 621.3502f, 140.7753f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-753.909f, 621.845f, 142.832f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 108.9f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {-753.86f, 621.628f, 142.025f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, 77f};
			*uParam0 = {-749.1125f, 616.125f, 140.9f};
			*(uParam0.f_3[0 /*3*/]) = {-753.4206f, 620.2255f, 141.8517f};
			*(uParam0.f_3[1 /*3*/]) = {-756.555f, 628.7863f, 141.8053f};
			*uParam0.f_24 = {-736.233f, 620.3261f, 147.0935f};
			*uParam0.f_24.f_3 = {-11.7133f, 0f, 89.1236f};
			*uParam0.f_24.f_6 = 50f;
			*(uParam0.f_1886[0 /*7*/]) = {-753.6261f, 621.4352f, 145.5712f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-61.2992f, 0f, -144.1396f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 60.5044f;
			*(uParam0.f_1886[1 /*7*/]) = {-753.89f, 622.1678f, 145.1428f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-28.3326f, 0f, 2.8184f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50.7379f;
			*(uParam0.f_146[0 /*12*/].f_8) = {-751.3826f, 621.3622f, 141.254f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 286.1973f;
			*uParam0.f_13 = {-751.3826f, 621.3622f, 141.254f};
			*uParam0.f_1742.f_24 = {-753.0756f, 627.3389f, 141.5332f};
			*uParam0.f_1742.f_27 = 142.5343f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-754.1096f, 622.5068f, 140.2989f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-757.1106f, 631.3733f, 145.0052f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3.1875f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 110.3481f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-754.1096f, 622.5068f, 140.2989f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-757.2359f, 631.6739f, 143.0083f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 108.93f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-752.8541f, 626.0184f, 141.5241f};
			*uParam0.f_1742.f_90[0] = 337.0182f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-754.2813f, 631.2744f, 141.5919f};
			*uParam0.f_1742.f_90[1] = 327.5519f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-747.2169f, 615.7965f, 141.1734f};
			*uParam0.f_1742.f_90[2] = 15.4398f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-752.8635f, 640.1825f, 141.6789f};
			*uParam0.f_1742.f_90[3] = 10.0842f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-753.9585f, 646.4396f, 141.8233f};
			*uParam0.f_1742.f_90[4] = 9.884f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 61:
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-685.1532f, 596.2136f, 142.6836f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-686.1266f, 595.388f, 145.5112f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.5625f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 222.3235f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-686.7532f, 596.7286f, 142.6471f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-687.195f, 594.773f, 143.99f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -139.2f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {-687.152f, 594.762f, 142.71f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, -180f};
			*uParam0 = {-692.5033f, 596.4478f, 141.53f};
			*(uParam0.f_3[0 /*3*/]) = {-685.5753f, 595.7667f, 143.0528f};
			*(uParam0.f_3[1 /*3*/]) = {-682.1959f, 601.0403f, 142.7455f};
			*uParam0.f_24 = {-717.0034f, 600.6978f, 147.893f};
			*uParam0.f_24.f_3 = {-4.9085f, 0f, -98.586f};
			*uParam0.f_24.f_6 = 32f;
			*(uParam0.f_1886[0 /*7*/]) = {-685.3674f, 597.9558f, 147.095f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-57.9486f, 0f, 123.0923f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 49.2029f;
			*(uParam0.f_1886[1 /*7*/]) = {-679.6271f, 609.7404f, 146.4369f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-19.6156f, 0f, 148.6934f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 41.7163f;
			*(uParam0.f_146[0 /*12*/].f_8) = {-687.2443f, 597.7927f, 142.6471f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 39.4563f;
			*uParam0.f_13 = {-687.2443f, 597.7927f, 142.6471f};
			*uParam0.f_1742.f_24 = {-682.754f, 601.2996f, 141.8721f};
			*uParam0.f_1742.f_27 = 39.75f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-685.3328f, 599.2325f, 142.6945f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-679.9803f, 603.7507f, 146.0125f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 1.625f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 204.6117f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-682.4546f, 601.7089f, 142.6945f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-679.7475f, 604.0975f, 144.0625f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, -139.2f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-682.9122f, 605.372f, 142.8277f};
			*uParam0.f_1742.f_90[0] = 348.696f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-694.9319f, 597.1962f, 141.8161f};
			*uParam0.f_1742.f_90[1] = 308.7104f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-679.9867f, 615.1488f, 143.8798f};
			*uParam0.f_1742.f_90[2] = 338.6013f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-677.8329f, 622.587f, 144.7422f};
			*uParam0.f_1742.f_90[3] = 347.6829f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-676.5367f, 633.3019f, 146.0182f};
			*uParam0.f_1742.f_90[4] = 355.3295f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 62:
			*uParam0 = {122.4f, 568.4f, 183.1f};
			*(uParam0.f_3[0 /*3*/]) = {118.1757f, 563.7846f, 182.9644f};
			*(uParam0.f_3[1 /*3*/]) = {128.9398f, 566.35f, 182.9644f};
			*uParam0.f_13 = {118.369f, 569.6913f, 183.3575f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/].f_23) = {120.2f, 573.1f, 184.1f};
			*(uParam0.f_38[0 /*27*/]) = {120.2277f, 564.24f, 182.9644f};
			*(uParam0.f_38[0 /*27*/].f_3) = {118.6009f, 564.1241f, 185.5466f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 182.947f;
			*uParam0.f_24 = {112.0956f, 573.5894f, 189.6378f};
			*uParam0.f_24.f_3 = {-20.3798f, 0f, -141.0139f};
			*uParam0.f_24.f_6 = 50f;
			*(uParam0.f_38[0 /*27*/].f_16) = {118.3342f, 563.5432f, 184.299f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -173.88f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {118.369f, 569.6913f, 183.3575f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 4.6f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/].f_23) = {133.2049f, 565.3521f, 182.9341f};
			*(uParam0.f_38[1 /*27*/]) = {134.1996f, 566.0651f, 182.8705f};
			*(uParam0.f_38[1 /*27*/].f_3) = {129.5288f, 565.5358f, 185.1211f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 180.7678f;
			*(uParam0.f_38[1 /*27*/].f_16) = {129.1583f, 565.8832f, 184.3003f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 180f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_1742.f_24 = {131.922f, 567.1509f, 182.6452f};
			*uParam0.f_1742.f_27 = 15.8382f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {131.8633f, 568.3463f, 182.3683f};
			*uParam0.f_1742.f_90[0] = 4.0689f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {133.885f, 577.6986f, 182.5053f};
			*uParam0.f_1742.f_90[1] = 92.9431f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {128.1558f, 577.4041f, 182.2566f};
			*uParam0.f_1742.f_90[2] = 93.0176f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {121.7724f, 577.1444f, 182.1052f};
			*uParam0.f_1742.f_90[3] = 97.5507f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {130.489f, 581.2024f, 182.6389f};
			*uParam0.f_1742.f_90[4] = 113.4962f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 63:
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-559.0781f, 663.3232f, 144.5397f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-560.3202f, 663.6382f, 146.826f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.4375f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 156.1758f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-559.4445f, 663.9685f, 144.457f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-558.77f, 663.24f, 145.67f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 160.3586f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {-687.152f, 594.762f, 142.71f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, -180f};
			*uParam0 = {-558.1771f, 669.1576f, 143.5971f};
			*(uParam0.f_3[0 /*3*/]) = {-559.6165f, 663.6034f, 144.5187f};
			*(uParam0.f_3[1 /*3*/]) = {-556.4049f, 662.471f, 144.6138f};
			*uParam0.f_24 = {-543.6597f, 674.514f, 147.0296f};
			*uParam0.f_24.f_3 = {-2.4999f, 0f, 129.3025f};
			*uParam0.f_24.f_6 = 33f;
			*(uParam0.f_1886[0 /*7*/]) = {-558.7669f, 663.3293f, 147.213f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-58.1066f, 0f, 31.9443f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_1886[1 /*7*/]) = {-553.623f, 662.0633f, 147.18f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-54.5653f, 0f, 43.0157f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 61.4621f;
			*(uParam0.f_146[0 /*12*/].f_8) = {-558.2228f, 664.6216f, 144.4907f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 310.6559f;
			*uParam0.f_13 = {-558.2228f, 664.6216f, 144.4907f};
			*uParam0.f_1742.f_24 = {-555.3579f, 664.1602f, 144.2354f};
			*uParam0.f_1742.f_27 = 343.726f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-553.8307f, 661.7946f, 144.2398f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-558.3751f, 662.9314f, 146.9211f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 2.625f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 167.8321f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-555.9142f, 662.6932f, 144.49f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-553.19f, 663.55f, 145.497f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 249.497f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-554.8588f, 666.1501f, 143.8092f};
			*uParam0.f_1742.f_90[0] = 342.3456f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-560.1591f, 671.697f, 144.2621f};
			*uParam0.f_1742.f_90[1] = 253.1444f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-567.9676f, 673.9246f, 145.0193f};
			*uParam0.f_1742.f_90[2] = 256.4467f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-577.1042f, 675.9783f, 145.7941f};
			*uParam0.f_1742.f_90[3] = 257.1249f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-546.3216f, 666.6395f, 142.6902f};
			*uParam0.f_1742.f_90[4] = 247.2661f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 64:
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-732.6531f, 593.1397f, 141.0619f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-733.8533f, 593.8037f, 144.0151f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 147.7891f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-733.2375f, 593.7828f, 141.4827f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-734.1544f, 593.8073f, 142.5726f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 151f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {-733.287f, 593.431f, 141.456f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, -29.25f};
			*uParam0 = {-731.0388f, 593.46f, 140.6234f};
			*(uParam0.f_3[0 /*3*/]) = {-733.4767f, 593.2111f, 141.5178f};
			*(uParam0.f_3[1 /*3*/]) = {-744.303f, 599.5864f, 141.5458f};
			*uParam0.f_24 = {-728.4564f, 610.9077f, 148.0444f};
			*uParam0.f_24.f_3 = {-11.9555f, 0f, 138.3181f};
			*uParam0.f_24.f_6 = 50f;
			*(uParam0.f_1886[0 /*7*/]) = {-731.791f, 592.6054f, 144.7493f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-44.7805f, 0f, 41.0826f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 50f;
			*(uParam0.f_1886[1 /*7*/]) = {-746.4487f, 604.9315f, 143.8863f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-13.5851f, 0f, -153.1004f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*(uParam0.f_146[0 /*12*/].f_8) = {-732.5507f, 594.9288f, 141.064f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 332.0094f;
			*uParam0.f_13 = {-732.5507f, 594.9288f, 141.064f};
			*uParam0.f_1742.f_24 = {-746.3018f, 601.5711f, 141.0995f};
			*uParam0.f_1742.f_27 = 327.7594f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-741.2551f, 597.9217f, 141.0924f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-747.4568f, 601.4027f, 144.5251f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 142.3104f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-744.2535f, 600.0396f, 141.5243f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-747.4618f, 602.1413f, 142.8174f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 151f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-740.8754f, 602.3074f, 140.9152f};
			*uParam0.f_1742.f_90[0] = 278.061f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-744.7444f, 610.6098f, 141.1045f};
			*uParam0.f_1742.f_90[1] = 207.2077f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-733.4897f, 597.4697f, 140.8929f};
			*uParam0.f_1742.f_90[2] = 235.7999f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-725.7398f, 594.1789f, 140.8683f};
			*uParam0.f_1742.f_90[3] = 252.9259f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-715.8591f, 592.7691f, 140.936f};
			*uParam0.f_1742.f_90[4] = 269.455f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 65:
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-852.3071f, 694.8876f, 147.866f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-853.6318f, 694.7849f, 150.5503f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 2.06f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 181.543f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-853.0189f, 695.239f, 147.7879f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-853.84f, 694.62f, 149.11f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, -176f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_146.f_1517.f_8 = {-853.81f, 694.6f, 147.8f};
			*uParam0.f_146.f_1517.f_11 = {0f, 0f, 156f};
			*uParam0 = {-849.8375f, 702.65f, 147.325f};
			*(uParam0.f_3[0 /*3*/]) = {-852.9005f, 694.7808f, 148.0741f};
			*(uParam0.f_3[1 /*3*/]) = {-865.7102f, 695.9731f, 148.1733f};
			*uParam0.f_24 = {-863.8798f, 714.2239f, 152.3501f};
			*uParam0.f_24.f_3 = {-6.6228f, 0f, -167.161f};
			*uParam0.f_24.f_6 = 50f;
			*(uParam0.f_1886[0 /*7*/]) = {-851.5412f, 695.0746f, 151.411f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-49.9033f, 0f, 77.4696f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 46.8069f;
			*(uParam0.f_1886[1 /*7*/]) = {-869.0064f, 698.2f, 151.6408f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-42.0295f, 0f, -83.6115f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 50f;
			*(uParam0.f_146[0 /*12*/].f_8) = {-853.3578f, 697.1407f, 147.8176f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 4.32f;
			*uParam0.f_13 = {-853.3578f, 697.1407f, 147.8176f};
			*uParam0.f_1742.f_24 = {-863.2893f, 695.5299f, 148.0291f};
			*uParam0.f_1742.f_27 = 336.7931f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-862.2796f, 694.6273f, 148.0229f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-868.9159f, 697.3097f, 151.3608f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3.43f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 155.3475f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-865.5343f, 696.291f, 147.9989f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-861.7898f, 695.125f, 149.3596f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 157.605f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-863.5904f, 699.6087f, 148.0632f};
			*uParam0.f_1742.f_90[0] = 326.1612f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-856.5907f, 699.4403f, 147.8406f};
			*uParam0.f_1742.f_90[1] = 350.5732f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-849.4887f, 705.9847f, 147.6541f};
			*uParam0.f_1742.f_90[2] = 287.6365f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-841.0287f, 708.6886f, 147.3639f};
			*uParam0.f_1742.f_90[3] = 252.9259f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-871.8189f, 699.3496f, 148.4745f};
			*uParam0.f_1742.f_90[4] = 326.451f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			break;
		
		case 66:
			*uParam0 = {-1302.448f, 455.2224f, 96.771f};
			*(uParam0.f_3[0 /*3*/]) = {-1294.275f, 454.0578f, 96.7013f};
			*(uParam0.f_3[1 /*3*/]) = {-1297.91f, 453.6508f, 96.7213f};
			*uParam0.f_24 = {-1306.609f, 466.3748f, 101.9808f};
			*uParam0.f_24.f_3 = {-14.3811f, 0f, -141.5052f};
			*uParam0.f_24.f_6 = 47.8726f;
			*uParam0.f_13 = {-1295.008f, 456.3158f, 96.1681f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {-1294.373f, 454.6308f, 96.2746f};
			*(uParam0.f_38[0 /*27*/].f_3) = {-1294.326f, 453.504f, 99.1897f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1.75f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 179.7048f;
			*(uParam0.f_38[0 /*27*/].f_23) = {-1294.389f, 454.463f, 96.5513f};
			*(uParam0.f_38[0 /*27*/].f_16) = {-1295.118f, 454.025f, 97.915f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 180f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {-1294.309f, 455.405f, 96.3444f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 0.7367f;
			*(uParam0.f_1886[0 /*7*/]) = {-1292.578f, 454.2545f, 99.3409f};
			*(uParam0.f_1886[0 /*7*/].f_3) = {-39.6077f, 0f, 69.4682f};
			*(uParam0.f_1886[0 /*7*/]).f_6 = 46.1469f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {-1298.06f, 455.0111f, 96.28043f};
			*(uParam0.f_38[1 /*27*/].f_3) = {-1298.078f, 451.717f, 99.54697f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 176.5304f;
			*(uParam0.f_38[1 /*27*/].f_23) = {-1297.903f, 454.2289f, 96.6315f};
			*(uParam0.f_38[1 /*27*/].f_16) = {-1300.563f, 454.0388f, 98.0586f};
			*(uParam0.f_38[1 /*27*/].f_19) = {-0.4682f, 0f, 180f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_1886[1 /*7*/]) = {-1300.981f, 454.1239f, 99.3252f};
			*(uParam0.f_1886[1 /*7*/].f_3) = {-31.7665f, 0f, -72.5331f};
			*(uParam0.f_1886[1 /*7*/]).f_6 = 42.2252f;
			*uParam0.f_1742.f_24 = {-1298.402f, 455.4963f, 96.4856f};
			*uParam0.f_1742.f_27 = 356.4123f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {-1295.846f, 457.1532f, 96.2299f};
			*uParam0.f_1742.f_90[0] = 297.279f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {-1283.449f, 459.2665f, 95.2123f};
			*uParam0.f_1742.f_90[1] = 277.3313f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {-1307.91f, 457.9644f, 97.3667f};
			*uParam0.f_1742.f_90[2] = 270.7701f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {-1282.912f, 466.1473f, 95.0291f};
			*uParam0.f_1742.f_90[3] = 95.758f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {-1298.734f, 464.2884f, 96.4425f};
			*uParam0.f_1742.f_90[4] = 92.1621f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
		
		case 67:
			*uParam0 = {368.8f, 432.8f, 144.6f};
			*(uParam0.f_3[0 /*3*/]) = {373.8f, 428.4f, 145.7f};
			*(uParam0.f_3[1 /*3*/]) = {391.3558f, 427.1763f, 143.2039f};
			*uParam0.f_24 = {366.2502f, 450.5897f, 151.1863f};
			*uParam0.f_24.f_3 = {-14.3367f, -1.2993f, -158.6361f};
			*uParam0.f_24.f_6 = 40.2194f;
			*uParam0.f_13 = {372.453f, 431.8328f, 143.7681f};
			*(uParam0.f_38[0 /*27*/]).f_26 = 1;
			*(uParam0.f_38[0 /*27*/]) = {374.6152f, 428.3344f, 146.9068f};
			*(uParam0.f_38[0 /*27*/].f_3) = {374.34f, 427.1751f, 144.896f};
			*(uParam0.f_38[0 /*27*/]).f_6 = 1f;
			*(uParam0.f_38[0 /*27*/]).f_7 = 263.0232f;
			*(uParam0.f_38[0 /*27*/].f_23) = {373.4f, 430.6f, 145.1f};
			*(uParam0.f_38[0 /*27*/].f_16) = {372.6857f, 426.9829f, 146.0747f};
			*(uParam0.f_38[0 /*27*/].f_19) = {0f, 0f, 170f};
			*(uParam0.f_38[0 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[0 /*27*/].f_16), *(uParam0.f_38[0 /*27*/].f_19), &Var0, *(uParam0.f_38[0 /*27*/]).f_22);
			*(uParam0.f_38[0 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[0 /*27*/]).f_15 = Var0.f_3.f_2;
			*(uParam0.f_146[0 /*12*/].f_8) = {372.453f, 431.8328f, 143.7681f};
			*(uParam0.f_146[0 /*12*/]).f_11 = 340.1881f;
			*(uParam0.f_38[1 /*27*/]).f_26 = 2;
			*(uParam0.f_38[1 /*27*/]) = {394.8998f, 427.1304f, 146.2929f};
			*(uParam0.f_38[1 /*27*/].f_3) = {387.6972f, 427.8093f, 143.2496f};
			*(uParam0.f_38[1 /*27*/]).f_6 = 3.5f;
			*(uParam0.f_38[1 /*27*/]).f_7 = 172.5183f;
			*(uParam0.f_38[1 /*27*/].f_23) = {391.1181f, 427.7463f, 143.2038f};
			*(uParam0.f_38[1 /*27*/].f_16) = {387.2895f, 428.0783f, 144.3926f};
			*(uParam0.f_38[1 /*27*/].f_19) = {0f, 0f, 170f};
			*(uParam0.f_38[1 /*27*/]).f_22 = 2;
			func_27(*(uParam0.f_38[1 /*27*/].f_16), *(uParam0.f_38[1 /*27*/].f_19), &Var0, *(uParam0.f_38[1 /*27*/]).f_22);
			*(uParam0.f_38[1 /*27*/].f_12) = {Var0};
			*(uParam0.f_38[1 /*27*/]).f_15 = Var0.f_3.f_2;
			*uParam0.f_1742.f_24 = {390.8834f, 429.929f, 142.7315f};
			*uParam0.f_1742.f_27 = 359.9581f;
			*(uParam0.f_1742.f_74[0 /*3*/]) = {394.5217f, 433.2644f, 142.0235f};
			*uParam0.f_1742.f_90[0] = 325.5933f;
			*uParam0.f_1742.f_96[0] = 1f;
			*(uParam0.f_1742.f_74[1 /*3*/]) = {384.9257f, 434.2468f, 142.507f};
			*uParam0.f_1742.f_90[1] = 81.9996f;
			*uParam0.f_1742.f_96[1] = 0.9f;
			*(uParam0.f_1742.f_74[2 /*3*/]) = {373.5152f, 436.3026f, 143.1639f};
			*uParam0.f_1742.f_90[2] = 77.5761f;
			*uParam0.f_1742.f_96[2] = 0.8f;
			*(uParam0.f_1742.f_74[3 /*3*/]) = {389.9466f, 441.0051f, 142.2565f};
			*uParam0.f_1742.f_90[3] = 263.4446f;
			*uParam0.f_1742.f_96[3] = 0.7f;
			*(uParam0.f_1742.f_74[4 /*3*/]) = {399.8194f, 432.383f, 141.7439f};
			*uParam0.f_1742.f_90[4] = 264.9702f;
			*uParam0.f_1742.f_96[4] = 0.6f;
			*uParam0.f_36 = 2;
			*uParam0.f_33 = 10;
			*uParam0.f_34 = 0;
			break;
	}
}

void func_27(Vector3 vParam0, Vector3 vParam1, auto uParam2, int iParam3)
{
	struct<6> Var0;
	struct<6> Var6;
	struct<6> Var12;
	
	*uParam6 = {0f, 0f, 0f};
	*uParam6.f_3 = {0f, 0f, 0f};
	switch (iParam7)
	{
		case 0:
			Var0 = {285.8317f, -162.205f, 65.1628f};
			Var0.f_3 = {0f, 0f, -110f};
			Var6 = {285.138f, -162.024f, 63.614f};
			Var6.f_3 = {0f, 0f, 160f};
			break;
		
		case 1:
			Var0 = {-968.2812f, -1432.925f, 8.1858f};
			Var0.f_3 = {0f, 0f, 70f};
			Var6 = {-968.944f, -1433.234f, 6.673f};
			Var6.f_3 = {0f, 0f, -160f};
			break;
		
		case 2:
			Var0 = {-778.8333f, 313.5024f, 86.1362f};
			Var0.f_3 = {0f, 0f, 0f};
			Var6 = {-778.727f, 312.728f, 84.693f};
			Var6.f_3 = {0f, 0f, -90f};
			break;
		
		case 3:
			Var0 = {-980.7506f, -1447.021f, 4.5223f};
			Var0.f_3 = {0f, 0f, -70f};
			Var6 = {-980.29f, -1447.934f, 3.723f};
			Var6.f_3 = {0f, 0f, -70f};
			break;
		
		case 4:
			Var0 = {895.5656f, -889.3296f, 27.6491f};
			Var0.f_3 = {0f, 0f, -90f};
			Var6 = {894.954f, -889.428f, 26.158f};
			Var6.f_3 = {0f, 0f, 180f};
			break;
		
		case 5:
			Var0 = {726.7885f, -1189.545f, 24.7175f};
			Var0.f_3 = {0f, 0f, 0f};
			Var6 = {726.857f, -1190.163f, 23.27f};
			Var6.f_3 = {0f, 0f, -90f};
			break;
		
		case 6:
			Var0 = {-833.9494f, -862.6305f, 21.2407f};
			Var0.f_3 = {0f, 0f, 90f};
			Var6 = {-833.335f, -862.65f, 19.682f};
			Var6.f_3 = {0f, 0f, 0f};
			break;
	}
	Var12 = {vParam0};
	Var12.f_3 = {vParam3};
	func_28(Var0, Var6, Var12, uParam6);
}

void func_28(struct<4> Param0, auto uParam1, auto uParam2, struct<6> Param3, struct<4> Param4, auto uParam5, auto uParam6, auto uParam7)
{
	Vector3 vVar0;
	
	*uParam18 = {Param6};
	vVar0 = {*uParam18 - Param0};
	vVar0 = {func_6(vVar0, -Param0.f_3.f_2)};
	vVar0 = {func_6(vVar0, Param12.f_3.f_2)};
	*uParam18 = {_get_object_offset_from_coords(Param12, 0f, vVar0)};
	if (!func_29(Param12.f_3, Param0.f_3, 0))
	{
		while (Param0.f_3.f_2 > 180f)
		{
			Param0.f_3.f_2 -= 360f;
		}
		while (Param0.f_3.f_2 < -180f)
		{
			Param0.f_3.f_2 += 360f;
		}
		while (Param12.f_3.f_2 > 180f)
		{
			Param12.f_3.f_2 -= 360f;
		}
		while (Param12.f_3.f_2 < -180f)
		{
			Param12.f_3.f_2 += 360f;
		}
		*uParam18.f_3.f_2 += Param12.f_3.f_2 - Param0.f_3.f_2;
		while (*uParam18.f_3.f_2 > 180f)
		{
			*uParam18.f_3.f_2 -= 360f;
		}
		while (*uParam18.f_3.f_2 < -180f)
		{
			*uParam18.f_3.f_2 += 360f;
		}
	}
}

int func_29(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<4> func_30(int iParam0)
{
	char[16] cVar0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&cVar0, "MP_PROP_1DES", 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_PROP_2DES", 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_PROP_3DES", 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_PROP_4DES", 16);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_PROP_5DES", 16);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_PROP_6DES", 16);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_PROP_7DES", 16);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_PROP_8DES", 16);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_PROP_9DES", 16);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_PROP_10DES", 16);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_PROP_11DES", 16);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_PROP_12DES", 16);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_PROP_13DES", 16);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_PROP_14DES", 16);
			break;
		
		case 15:
			StringCopy(&cVar0, "MP_PROP_15DES", 16);
			break;
		
		case 16:
			StringCopy(&cVar0, "MP_PROP_16DES", 16);
			break;
		
		case 17:
			StringCopy(&cVar0, "MP_PROP_17DES", 16);
			break;
		
		case 18:
			StringCopy(&cVar0, "MP_PROP_18DES", 16);
			break;
		
		case 19:
			StringCopy(&cVar0, "MP_PROP_19DES", 16);
			break;
		
		case 20:
			StringCopy(&cVar0, "MP_PROP_20DES", 16);
			break;
		
		case 21:
			StringCopy(&cVar0, "MP_PROP_21DES", 16);
			break;
		
		case 22:
			StringCopy(&cVar0, "MP_PROP_22DES", 16);
			break;
		
		case 23:
			StringCopy(&cVar0, "MP_PROP_23DES", 16);
			break;
		
		case 24:
			StringCopy(&cVar0, "MP_PROP_24DES", 16);
			break;
		
		case 25:
			StringCopy(&cVar0, "MP_PROP_25DES", 16);
			break;
		
		case 26:
			StringCopy(&cVar0, "MP_PROP_26DES", 16);
			break;
		
		case 27:
			StringCopy(&cVar0, "MP_PROP_27DES", 16);
			break;
		
		case 28:
			StringCopy(&cVar0, "MP_PROP_28DES", 16);
			break;
		
		case 29:
			StringCopy(&cVar0, "MP_PROP_29DES", 16);
			break;
		
		case 30:
			StringCopy(&cVar0, "MP_PROP_30DES", 16);
			break;
		
		case 31:
			StringCopy(&cVar0, "MP_PROP_31DES", 16);
			break;
		
		case 32:
			StringCopy(&cVar0, "MP_PROP_32DES", 16);
			break;
		
		case 33:
			StringCopy(&cVar0, "MP_PROP_33DES", 16);
			break;
		
		case 34:
			StringCopy(&cVar0, "MP_PROP_34DES", 16);
			break;
		
		case 35:
			StringCopy(&cVar0, "MP_PROP_35DES", 16);
			break;
		
		case 36:
			StringCopy(&cVar0, "MP_PROP_36DES", 16);
			break;
		
		case 37:
			StringCopy(&cVar0, "MP_PROP_37DES", 16);
			break;
		
		case 38:
			StringCopy(&cVar0, "MP_PROP_38DES", 16);
			break;
		
		case 39:
			StringCopy(&cVar0, "MP_PROP_39DES", 16);
			break;
		
		case 40:
			StringCopy(&cVar0, "MP_PROP_40DES", 16);
			break;
		
		case 41:
			StringCopy(&cVar0, "MP_PROP_41DES", 16);
			break;
		
		case 42:
			StringCopy(&cVar0, "MP_PROP_42DES", 16);
			break;
		
		case 43:
			StringCopy(&cVar0, "MP_PROP_43DES", 16);
			break;
		
		case 44:
			StringCopy(&cVar0, "MP_PROP_44DES", 16);
			break;
		
		case 45:
			StringCopy(&cVar0, "MP_PROP_45DES", 16);
			break;
		
		case 46:
			StringCopy(&cVar0, "MP_PROP_46DES", 16);
			break;
		
		case 47:
			StringCopy(&cVar0, "MP_PROP_48DES", 16);
			break;
		
		case 48:
			StringCopy(&cVar0, "MP_PROP_49DES", 16);
			break;
		
		case 49:
			StringCopy(&cVar0, "MP_PROP_50DES", 16);
			break;
		
		case 50:
			StringCopy(&cVar0, "MP_PROP_51DES", 16);
			break;
		
		case 51:
			StringCopy(&cVar0, "MP_PROP_52DES", 16);
			break;
		
		case 52:
			StringCopy(&cVar0, "MP_PROP_57DES", 16);
			break;
		
		case 53:
			StringCopy(&cVar0, "MP_PROP_59DES", 16);
			break;
		
		case 54:
			StringCopy(&cVar0, "MP_PROP_60DES", 16);
			break;
		
		case 55:
			StringCopy(&cVar0, "MP_PROP_61DES", 16);
			break;
		
		case 56:
			StringCopy(&cVar0, "MP_PROP_62DES", 16);
			break;
		
		case 57:
			StringCopy(&cVar0, "MP_PROP_63DES", 16);
			break;
		
		case 58:
			StringCopy(&cVar0, "MP_PROP_64DES", 16);
			break;
		
		case 59:
			StringCopy(&cVar0, "MP_PROP_65DES", 16);
			break;
		
		case 60:
			StringCopy(&cVar0, "MP_PROP_66DES", 16);
			break;
		
		case 61:
			StringCopy(&cVar0, "MP_PROP_67DES", 16);
			break;
		
		case 62:
			StringCopy(&cVar0, "MP_PROP_68DES", 16);
			break;
		
		case 63:
			StringCopy(&cVar0, "MP_PROP_69DES", 16);
			break;
		
		case 64:
			StringCopy(&cVar0, "MP_PROP_70DES", 16);
			break;
		
		case 65:
			StringCopy(&cVar0, "MP_PROP_71DES", 16);
			break;
		
		case 66:
			StringCopy(&cVar0, "MP_PROP_72DES", 16);
			break;
		
		case 67:
			StringCopy(&cVar0, "MP_PROP_73DES", 16);
			break;
		
		case 68:
			StringCopy(&cVar0, "MP_PROP_74DES", 16);
			break;
		
		case 69:
			StringCopy(&cVar0, "MP_PROP_75DES", 16);
			break;
		
		case 70:
			StringCopy(&cVar0, "MP_PROP_76DES", 16);
			break;
		
		case 71:
			StringCopy(&cVar0, "MP_PROP_77DES", 16);
			break;
		
		case 72:
			StringCopy(&cVar0, "MP_PROP_78DES", 16);
			break;
		
		case 83:
			StringCopy(&cVar0, "MP_PROP_79DES", 16);
			break;
		
		case 84:
			StringCopy(&cVar0, "MP_PROP_80DES", 16);
			break;
		
		case 85:
			StringCopy(&cVar0, "MP_PROP_81DES", 16);
			break;
		
		case 73:
			StringCopy(&cVar0, "MP_PROP_83DES", 16);
			break;
		
		case 74:
			StringCopy(&cVar0, "MP_PROP_84DES", 16);
			break;
		
		case 75:
			StringCopy(&cVar0, "MP_PROP_85DES", 16);
			break;
		
		case 76:
			StringCopy(&cVar0, "MP_PROP_86DES", 16);
			break;
		
		case 77:
			StringCopy(&cVar0, "MP_PROP_87DES", 16);
			break;
		
		case 78:
			StringCopy(&cVar0, "MP_PROP_89DES", 16);
			break;
		
		case 79:
			StringCopy(&cVar0, "MP_PROP_90DES", 16);
			break;
		
		case 80:
			StringCopy(&cVar0, "MP_PROP_92DES", 16);
			break;
		
		case 81:
			StringCopy(&cVar0, "MP_PROP_94DES", 16);
			break;
		
		case 82:
			StringCopy(&cVar0, "MP_PROP_95DES", 16);
			break;
		
		case 87:
			StringCopy(&cVar0, "MP_PROP_96DES", 16);
			break;
		
		case 88:
			StringCopy(&cVar0, "MP_PROP_97DES", 16);
			break;
		
		case 89:
			StringCopy(&cVar0, "MP_PROP_98DES", 16);
			break;
		
		case 90:
			StringCopy(&cVar0, "MP_PROP_99DES", 16);
			break;
	}
	return cVar0;
}

struct<4> func_31(int iParam0)
{
	char[16] cVar0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&cVar0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&cVar0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&cVar0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&cVar0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&cVar0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&cVar0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&cVar0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&cVar0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&cVar0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&cVar0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&cVar0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&cVar0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&cVar0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&cVar0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&cVar0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&cVar0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&cVar0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&cVar0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&cVar0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&cVar0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&cVar0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&cVar0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&cVar0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&cVar0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&cVar0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&cVar0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&cVar0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&cVar0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&cVar0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&cVar0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&cVar0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&cVar0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&cVar0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&cVar0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&cVar0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&cVar0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&cVar0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&cVar0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&cVar0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&cVar0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&cVar0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&cVar0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&cVar0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&cVar0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&cVar0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&cVar0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&cVar0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&cVar0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&cVar0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&cVar0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&cVar0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&cVar0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&cVar0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&cVar0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&cVar0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&cVar0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&cVar0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&cVar0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&cVar0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&cVar0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&cVar0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&cVar0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&cVar0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&cVar0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&cVar0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&cVar0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&cVar0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&cVar0, "MP_PROP_89", 16);
			break;
		
		case 79:
			StringCopy(&cVar0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&cVar0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&cVar0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&cVar0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&cVar0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&cVar0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&cVar0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&cVar0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&cVar0, "MP_PROP_OFF4", 16);
			break;
	}
	return cVar0;
}

int func_32(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar17;
	int iVar18;
	struct<4> Var19;
	struct<4> Var23;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && is_pc_version())
	{
		iVar0 = 0;
		if (func_34(iParam0))
		{
			iVar0 = 1;
		}
		func_33(&sVar1, iParam0, iVar0);
		iVar17 = get_hash_key(&sVar1);
		if (_0x247F0F73A182EA0B(iVar17))
		{
			iVar18 = _network_shop_get_price(iVar17, 426439576, 1);
			Var19 = {func_31(iParam0)};
			return iVar18;
		}
		else
		{
			Var23 = {func_31(iParam0)};
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_3943;
			break;
		
		case 2:
			return Global_262145.f_3944;
			break;
		
		case 3:
			return Global_262145.f_3945;
			break;
		
		case 4:
			return Global_262145.f_3946;
			break;
		
		case 5:
			return Global_262145.f_3947;
			break;
		
		case 6:
			return Global_262145.f_3948;
			break;
		
		case 7:
			return Global_262145.f_3949;
			break;
		
		case 34:
			return Global_262145.f_3950;
			break;
		
		case 35:
			return Global_262145.f_3951;
			break;
		
		case 36:
			return Global_262145.f_3952;
			break;
		
		case 37:
			return Global_262145.f_3953;
			break;
		
		case 38:
			return Global_262145.f_3954;
			break;
		
		case 39:
			return Global_262145.f_3955;
			break;
		
		case 40:
			return Global_262145.f_3956;
			break;
		
		case 41:
			return Global_262145.f_3957;
			break;
		
		case 42:
			return Global_262145.f_3958;
			break;
		
		case 43:
			return Global_262145.f_3959;
			break;
		
		case 8:
			return Global_262145.f_3960;
			break;
		
		case 9:
			return Global_262145.f_3961;
			break;
		
		case 10:
			return Global_262145.f_3962;
			break;
		
		case 11:
			return Global_262145.f_3963;
			break;
		
		case 12:
			return Global_262145.f_3964;
			break;
		
		case 13:
			return Global_262145.f_3965;
			break;
		
		case 14:
			return Global_262145.f_3966;
			break;
		
		case 15:
			return Global_262145.f_3967;
			break;
		
		case 16:
			return Global_262145.f_3968;
			break;
		
		case 17:
			return Global_262145.f_3969;
			break;
		
		case 18:
			return Global_262145.f_3970;
			break;
		
		case 19:
			return Global_262145.f_3971;
			break;
		
		case 20:
			return Global_262145.f_3972;
			break;
		
		case 21:
			return Global_262145.f_3973;
			break;
		
		case 22:
			return Global_262145.f_3974;
			break;
		
		case 23:
			return Global_262145.f_3975;
			break;
		
		case 24:
			return Global_262145.f_3976;
			break;
		
		case 25:
			return Global_262145.f_3977;
			break;
		
		case 26:
			return Global_262145.f_3978;
			break;
		
		case 27:
			return Global_262145.f_3979;
			break;
		
		case 28:
			return Global_262145.f_3980;
			break;
		
		case 29:
			return Global_262145.f_3981;
			break;
		
		case 30:
			return Global_262145.f_3982;
			break;
		
		case 31:
			return Global_262145.f_3983;
			break;
		
		case 32:
			return Global_262145.f_3984;
			break;
		
		case 33:
			return Global_262145.f_3985;
			break;
		
		case 44:
			return Global_262145.f_3986;
			break;
		
		case 45:
			return Global_262145.f_3987;
			break;
		
		case 46:
			return Global_262145.f_3988;
			break;
		
		case 47:
			return Global_262145.f_3989;
			break;
		
		case 48:
			return Global_262145.f_3990;
			break;
		
		case 49:
			return Global_262145.f_3991;
			break;
		
		case 50:
			return Global_262145.f_3992;
			break;
		
		case 51:
			return Global_262145.f_3993;
			break;
		
		case 52:
			return Global_262145.f_3994;
			break;
		
		case 53:
			return Global_262145.f_3995;
			break;
		
		case 54:
			return Global_262145.f_3996;
			break;
		
		case 55:
			return Global_262145.f_3997;
			break;
		
		case 56:
			return Global_262145.f_3998;
			break;
		
		case 57:
			return Global_262145.f_3999;
			break;
		
		case 58:
			return Global_262145.f_4000;
			break;
		
		case 59:
			return Global_262145.f_4001;
			break;
		
		case 60:
			return Global_262145.f_4002;
			break;
		
		case 61:
			return Global_262145.f_5008[0];
			break;
		
		case 62:
			return Global_262145.f_5008[1];
			break;
		
		case 63:
			return Global_262145.f_5008[2];
			break;
		
		case 64:
			return Global_262145.f_5008[3];
			break;
		
		case 65:
			return Global_262145.f_5008[4];
			break;
		
		case 66:
			return Global_262145.f_6216;
			break;
		
		case 67:
			return Global_262145.f_6217;
			break;
		
		case 68:
			return Global_262145.f_6218;
			break;
		
		case 69:
			return Global_262145.f_6219;
			break;
		
		case 70:
			return Global_262145.f_6220;
			break;
		
		case 71:
			return Global_262145.f_6221;
			break;
		
		case 72:
			return Global_262145.f_6222;
			break;
		
		case 73:
			return Global_262145.f_10779;
		
		case 74:
			return Global_262145.f_10780;
		
		case 75:
			return Global_262145.f_10781;
		
		case 76:
			return Global_262145.f_10782;
		
		case 77:
			return Global_262145.f_10783;
		
		case 78:
			return Global_262145.f_10784;
		
		case 79:
			return Global_262145.f_10785;
		
		case 80:
			return Global_262145.f_10786;
		
		case 81:
			return Global_262145.f_10787;
		
		case 82:
			return Global_262145.f_10788;
		
		case 83:
			return Global_262145.f_10776;
		
		case 84:
			return Global_262145.f_10777;
		
		case 85:
			return Global_262145.f_10778;
		
		case 86:
			return 27000000;
		
		case 87:
			return Global_262145.f_12813;
		
		case 88:
			return Global_262145.f_12814;
		
		case 89:
			return Global_262145.f_12815;
		
		case 90:
			return Global_262145.f_12816;
	}
	return 0;
}

void func_33(char* sParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = {func_31(iParam1)};
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

bool func_34(int iParam0)
{
	if (func_36() && func_35())
	{
		if (iParam0 == 31)
		{
			return true;
		}
	}
	return false;
}

bool func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_bit_set(Global_25, 5))
	{
		if (is_bit_set(Global_25, true) || is_bit_set(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (is_bit_set(iVar0, 5))
		{
			if (is_bit_set(iVar0, true) || is_bit_set(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stat_get_int(iVar2, &iVar1, -1))
			{
				if (is_bit_set(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (is_bit_set(iVar3, true) || is_bit_set(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, true);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 3);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 5);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, true);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 3);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 5);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, true);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_36()
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

