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
	float fLocal_12 = 0;
	float fLocal_13 = 0;
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
	float fLocal_29 = 0;
	auto uLocal_30 = 0;
	auto uLocal_31 = 0;
	auto uLocal_32 = 0;
	float fLocal_33 = 0;
	float fLocal_34 = 0;
	auto uLocal_35 = 0;
	auto uLocal_36 = 0;
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
	auto uLocal_56 = 0;
	auto uLocal_57 = 8;
	auto uLocal_58 = 0;
	auto uLocal_59 = 0;
	auto uLocal_60 = 0;
	auto uLocal_61 = 0;
	auto uLocal_62 = 0;
	auto uLocal_63 = 0;
	auto uLocal_64 = 0;
	auto uLocal_65 = 0;
	auto uLocal_66 = 2;
	auto uLocal_67 = 0;
	auto uLocal_68 = 0;
	auto uLocal_69 = 8;
	auto uLocal_70 = 0;
	auto uLocal_71 = 0;
	auto uLocal_72 = 0;
	auto uLocal_73 = 0;
	auto uLocal_74 = 0;
	auto uLocal_75 = 0;
	auto uLocal_76 = 0;
	auto uLocal_77 = 0;
	auto uLocal_78 = 8;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	auto uLocal_82 = 0;
	auto uLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	float fLocal_87 = 0;
	auto uLocal_88 = 0;
	float fLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
#endregion

void main()
{
	auto uVar0;
	int iVar2;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_91 = 0.952f;
	fLocal_92 = 0.949f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		terminate_this_thread();
	}
	network_set_script_is_safe_for_network_game();
	while (true)
	{
		if (func_184(&uVar0, 5, 0))
		{
			func_35();
		}
		if (Global_1339940.f_1 == 0)
		{
			iVar2 = true;
		}
		func_34();
		func_33();
		func_11();
		if (iVar2)
		{
			set_streamed_texture_dict_as_no_longer_needed("timerbar_lines");
			func_1();
			terminate_this_thread();
		}
		wait(false);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_1339940 = 0;
	Global_1339940.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1339940.f_2[iVar0 /*2*/] = {Var1};
		Global_1339940.f_23[iVar0 /*2*/] = {Var1};
		Global_1339940.f_44[iVar0 /*2*/] = {Var1};
		Global_1339940.f_65[iVar0 /*2*/] = {Var1};
		Global_1339940.f_86[iVar0 /*2*/] = {Var1};
		Global_1339940.f_107[iVar0 /*2*/] = {Var1};
		Global_1339940.f_128[iVar0 /*2*/] = {Var1};
		Global_1339940.f_149[iVar0 /*2*/] = {Var1};
		Global_1339940.f_170[iVar0 /*2*/] = {Var1};
		Global_1339940.f_191[iVar0 /*2*/] = {Var1};
		Global_1339940.f_212[iVar0 /*2*/] = {Var1};
		Global_1339940.f_233[iVar0 /*2*/] = {Var1};
		Global_1339940.f_254[iVar0 /*2*/] = {Var1};
		Global_1339940.f_275[iVar0 /*2*/] = {Var1};
		Global_1339940.f_296[iVar0 /*2*/] = {Var1};
		Global_1339940.f_317[iVar0 /*2*/] = {Var1};
		Global_1339940.f_338[iVar0 /*2*/] = {Var1};
		Global_1339940.f_359[iVar0 /*2*/] = {Var1};
		Global_1339940.f_380[iVar0 /*2*/] = {Var1};
		Global_1339940.f_401[iVar0 /*2*/] = {Var1};
		Global_1339940.f_422[iVar0 /*2*/] = {Var1};
		Global_1339940.f_443[iVar0 /*2*/] = {Var1};
		Global_1339940.f_464[iVar0 /*2*/] = {Var1};
		Global_1339940.f_485[iVar0 /*2*/] = {Var1};
		Global_1339940.f_506[iVar0 /*2*/] = {Var1};
		Global_1339940.f_527[iVar0 /*2*/] = {Var1};
		Global_1339940.f_548[iVar0 /*2*/] = {Var1};
		Global_1339940.f_569[iVar0 /*2*/] = {Var1};
		Global_1339940.f_590[iVar0 /*2*/] = {Var1};
		Global_1339940.f_611[iVar0 /*2*/] = {Var1};
		Global_1339940.f_632[iVar0 /*2*/] = {Var1};
		Global_1339940.f_653[iVar0 /*2*/] = {Var1};
		Global_1339940.f_674[iVar0 /*2*/] = {Var1};
		Global_1339940.f_898[iVar0 /*2*/] = {Var1};
		Global_1339940.f_706[iVar0 /*2*/] = {Var1};
		Global_1339940.f_738[iVar0 /*2*/] = {Var1};
		Global_1339940.f_770[iVar0 /*2*/] = {Var1};
		Global_1339940.f_802[iVar0 /*2*/] = {Var1};
		Global_1339940.f_834[iVar0 /*2*/] = {Var1};
		Global_1339940.f_866[iVar0 /*2*/] = {Var1};
		Global_1339940.f_695[iVar0] = 0;
		Global_1339940.f_727[iVar0] = 0;
		Global_1339940.f_759[iVar0] = 0;
		Global_1339940.f_791[iVar0] = 0;
		Global_1339940.f_823[iVar0] = 0;
		Global_1339940.f_855[iVar0] = 0;
		Global_1339940.f_887[iVar0] = 0;
		Global_1339940.f_919[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_1339940.f_4726[iVar0] = 0;
		Global_1339940.f_4736[iVar0] = 0;
		Global_1339940.f_4746[iVar0] = 0;
		Global_1339940.f_4756[iVar0] = 0;
		iVar0++;
	}
	Global_1339940.f_4766 = 0;
	Global_1339940.f_4767 = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Global_1339940.f_4499 = {Var0};
}

void func_3()
{
	struct<390> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Var0.f_336 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Global_1339940.f_4109 = {Var0};
}

void func_4()
{
	struct<552> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_249 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_443 = 10;
	Var0.f_454 = 10;
	Var0.f_465 = 10;
	Var0.f_486 = 10;
	Var0.f_497 = 10;
	Var0.f_508 = 10;
	Var0.f_519 = 10;
	Var0.f_530 = 10;
	Var0.f_541 = 10;
	Global_1339940.f_3557 = {Var0};
}

void func_5()
{
	struct<314> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Global_1339940.f_3243 = {Var0};
}

void func_6()
{
	struct<336> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_238 = 10;
	Var0.f_259 = 10;
	Var0.f_270 = 10;
	Var0.f_281 = 10;
	Var0.f_292 = 10;
	Var0.f_303 = 10;
	Var0.f_314 = 10;
	Var0.f_325 = 10;
	Global_1339940.f_2907 = {Var0};
}

void func_7()
{
	struct<475> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_172 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_248 = 10;
	Var0.f_259 = 10;
	Var0.f_420 = 10;
	Var0.f_431 = 10;
	Var0.f_442 = 10;
	Var0.f_453 = 10;
	Var0.f_464 = 10;
	Global_1339940.f_2432 = {Var0};
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_33 = 10;
	Var0.f_44 = 10;
	Var0.f_55 = 10;
	Var0.f_66 = 10;
	Var0.f_77 = 10;
	Var0.f_88 = 10;
	Var0.f_99 = 10;
	Var0.f_260 = 10;
	Var0.f_271 = 10;
	Var0.f_282 = 10;
	Var0.f_293 = 10;
	Var0.f_304 = 10;
	Var0.f_315 = 10;
	Var0.f_326 = 10;
	Var0.f_357 = 10;
	Var0.f_368 = 10;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	Var0.f_401 = 10;
	Var0.f_412 = 10;
	Var0.f_423 = 10;
	Var0.f_434 = 10;
	Var0.f_445 = 10;
	Var0.f_456 = 10;
	Var0.f_467 = 10;
	Var0.f_478 = 10;
	Var0.f_489 = 10;
	Var0.f_500 = 10;
	Var0.f_511 = 10;
	Var0.f_522 = 10;
	Var0.f_533 = 10;
	Var0.f_544 = 10;
	Var0.f_555 = 10;
	Var0.f_576 = 10;
	Var0.f_587 = 10;
	Var0.f_598 = 10;
	Var0.f_609 = 10;
	Var0.f_620 = 10;
	Var0.f_631 = 10;
	Var0.f_642 = 10;
	Var0.f_653 = 10;
	Var0.f_664 = 10;
	Var0.f_675 = 10;
	Var0.f_686 = 10;
	Var0.f_697 = 10;
	Var0.f_708 = 10;
	Global_1339940.f_1713 = {Var0};
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Global_1339940.f_1368 = {Var0};
}

void func_10()
{
	struct<422> Var0;
	
	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	Var0.f_183 = 10;
	Var0.f_194 = 10;
	Var0.f_205 = 10;
	Var0.f_216 = 10;
	Var0.f_227 = 10;
	Var0.f_258 = 10;
	Var0.f_269 = 10;
	Var0.f_280 = 10;
	Var0.f_301 = 10;
	Var0.f_312 = 10;
	Var0.f_323 = 10;
	Var0.f_334 = 10;
	Var0.f_345 = 10;
	Var0.f_356 = 10;
	Var0.f_367 = 10;
	Var0.f_378 = 10;
	Var0.f_389 = 10;
	Var0.f_400 = 10;
	Var0.f_411 = 10;
	Global_1339940.f_946 = {Var0};
}

void func_11()
{
	int iVar0;
	
	Global_1339940 = 0;
	Global_1339940.f_931 = 0.725f;
	Global_1339940.f_930 = func_26();
	Global_1339940.f_1 = 0;
	Global_1339940.f_932 = 0;
	Global_1339940.f_933 = 0;
	Global_1339940.f_934 = 0;
	Global_1339940.f_935 = 0;
	Global_1339940.f_936 = 0;
	Global_1339940.f_937 = 0;
	Global_1339940.f_938 = 0;
	Global_1339940.f_939 = 0;
	Global_1339940.f_940 = 0;
	Global_1339940.f_941 = 0;
	Global_1339940.f_942 = 0;
	Global_1339940.f_943 = 0;
	Global_1339940.f_944 = 0;
	Global_1339940.f_945 = 0;
	Global_2444574 = 0;
	Global_2443098 = 0;
	Global_2443099 = 0;
	Global_2444549 = 1;
	Global_2445440 = 0;
	if (func_25(3))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(3, iVar0) && func_23(3, iVar0))
			{
				func_22(iVar0);
				func_21(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(6))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(6, iVar0) && func_23(6, iVar0))
			{
				func_20(iVar0);
				func_21(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(7))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(7, iVar0) && func_23(7, iVar0))
			{
				func_19(iVar0);
				func_21(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(4))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(4, iVar0) && func_23(4, iVar0))
			{
				func_18(iVar0);
				func_21(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(5))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(5, iVar0) && func_23(5, iVar0))
			{
				func_17(iVar0);
				func_21(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(1))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(1, iVar0) && func_23(1, iVar0))
			{
				func_16(iVar0);
				func_21(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(0))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(0, iVar0) && func_23(0, iVar0))
			{
				func_15(iVar0);
				func_21(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(2))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(2, iVar0) && func_23(2, iVar0) == 0)
			{
				func_13(iVar0);
				func_21(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_25(8))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(8, iVar0) && func_23(8, iVar0) == 0)
			{
				func_12(iVar0);
				func_21(8, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	Global_1339940.f_4499[iParam0] = 0f;
	StringCopy(&(Global_1339940.f_4499.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_4499.f_172[iParam0] = 0;
	Global_1339940.f_4499[iParam0] = 0f;
	Global_1339940.f_4499.f_183[iParam0] = 0;
	Global_1339940.f_4499.f_194[iParam0] = 0;
	Global_1339940.f_4499.f_205[iParam0] = 0;
	Global_1339940.f_4499.f_216[iParam0] = 2;
}

void func_13(int iParam0)
{
	Global_1339940.f_1713[iParam0] = 0;
	Global_1339940.f_1713.f_11[iParam0] = 0;
	Global_1339940.f_1713.f_22[iParam0] = 0;
	Global_1339940.f_1713.f_33[iParam0] = 0;
	Global_1339940.f_1713.f_44[iParam0] = 0;
	Global_1339940.f_1713.f_55[iParam0] = 0;
	Global_1339940.f_1713.f_66[iParam0] = 0;
	Global_1339940.f_1713.f_77[iParam0] = 0;
	Global_1339940.f_1713.f_88[iParam0] = 0;
	StringCopy(&(Global_1339940.f_1713.f_99[iParam0 /*16*/]), "", 64);
	Global_1339940.f_1713.f_260[iParam0] = -1;
	Global_1339940.f_1713.f_271[iParam0] = -1;
	Global_1339940.f_1713.f_282[iParam0] = 18;
	Global_1339940.f_1713.f_293[iParam0] = 6;
	Global_1339940.f_1713.f_304[iParam0] = -1;
	Global_1339940.f_1713.f_315[iParam0] = 2;
	Global_1339940.f_1713.f_326[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1339940.f_1713.f_357[iParam0] = 0;
	Global_1339940.f_1713.f_368[iParam0] = 1;
	Global_1339940.f_1713.f_379[iParam0] = 1;
	Global_1339940.f_1713.f_390[iParam0] = 1;
	Global_1339940.f_1713.f_401[iParam0] = 1;
	Global_1339940.f_1713.f_412[iParam0] = 1;
	Global_1339940.f_1713.f_423[iParam0] = 1;
	Global_1339940.f_1713.f_434[iParam0] = 1;
	Global_1339940.f_1713.f_445[iParam0] = 1;
	Global_1339940.f_1713.f_456[iParam0] = 1;
	Global_1339940.f_1713.f_467[iParam0] = 1;
	Global_1339940.f_1713.f_478[iParam0] = 1;
	Global_1339940.f_1713.f_489[iParam0] = 1;
	Global_1339940.f_1713.f_500[iParam0] = 1;
	Global_1339940.f_1713.f_511[iParam0] = 1;
	Global_1339940.f_1713.f_522[iParam0] = 1;
	Global_1339940.f_1713.f_533[iParam0] = 1;
	func_14(&(Global_1339940.f_1713.f_555[iParam0 /*2*/]));
	Global_1339940.f_1713.f_576[iParam0] = -1;
	Global_1339940.f_1713.f_609[iParam0] = 0;
}

void func_14(auto uParam0)
{
	*uParam0.f_1 = 0;
}

void func_15(int iParam0)
{
	Global_1339940.f_946[iParam0] = 0;
	Global_1339940.f_946.f_11[iParam0] = 0;
	StringCopy(&(Global_1339940.f_946.f_22[iParam0 /*16*/]), "", 64);
	Global_1339940.f_946.f_183[iParam0] = -1;
	Global_1339940.f_946.f_194[iParam0] = 1;
	Global_1339940.f_946.f_205[iParam0] = -1;
	Global_1339940.f_946.f_216[iParam0] = 2;
	Global_1339940.f_946.f_227[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1339940.f_946.f_258[iParam0] = 0;
	Global_1339940.f_946.f_269[iParam0] = 0;
	func_14(&(Global_1339940.f_946.f_280[iParam0 /*2*/]));
	Global_1339940.f_946.f_301[iParam0] = -1;
	Global_1339940.f_946.f_334[iParam0] = 0;
	Global_1339940.f_946.f_345[iParam0] = 0;
	Global_1339940.f_946.f_356[iParam0] = 0;
}

void func_16(int iParam0)
{
	Global_1339940.f_1368[iParam0] = 0;
	Global_1339940.f_1368.f_11[iParam0] = 0;
	StringCopy(&(Global_1339940.f_1368.f_22[iParam0 /*16*/]), "", 64);
	Global_1339940.f_1368.f_183[iParam0] = -1;
	Global_1339940.f_1368.f_194[iParam0] = 1;
	Global_1339940.f_1368.f_205[iParam0] = -1;
	Global_1339940.f_1368.f_216[iParam0] = 2;
	Global_1339940.f_1368.f_227[iParam0 /*3*/] = {0.5f, 0.5f, 0f};
	Global_1339940.f_1368.f_258[iParam0] = 0;
	Global_2467485[iParam0] = 0;
	Global_2467496[iParam0] = 0;
	Global_2467507[iParam0] = 0;
	Global_2467518[iParam0] = 0;
	Global_2467529[iParam0] = 0;
	Global_2467540[iParam0] = 0;
	Global_2467551[iParam0] = 0;
	Global_2467562[iParam0] = 0;
	Global_2467573[iParam0] = 0;
	Global_2467584[iParam0] = 0;
	Global_2467595[iParam0] = 0;
	Global_2467606[iParam0] = 0;
	Global_2467617[iParam0] = 0;
	Global_2467628[iParam0] = 0;
	Global_2467639[iParam0] = 0;
	Global_2467650[iParam0] = 0;
	func_14(&(Global_1339940.f_1368.f_280[iParam0 /*2*/]));
	Global_1339940.f_1368.f_301[iParam0] = -1;
}

void func_17(int iParam0)
{
	Global_1339940.f_3243[iParam0] = 0;
	StringCopy(&(Global_1339940.f_3243.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_3243.f_172[iParam0] = -1;
	Global_1339940.f_3243.f_183[iParam0] = -1;
	Global_1339940.f_3243.f_194[iParam0] = 1;
	Global_1339940.f_3243.f_205[iParam0] = -1;
	Global_1339940.f_3243.f_216[iParam0] = 2;
	Global_1339940.f_3243.f_227[iParam0] = 0;
	func_14(&(Global_1339940.f_3243.f_238[iParam0 /*2*/]));
	Global_1339940.f_3243.f_259[iParam0] = -1;
}

void func_18(int iParam0)
{
	Global_1339940.f_2907[iParam0] = -1;
	StringCopy(&(Global_1339940.f_2907.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_2907.f_172[iParam0] = -1;
	Global_1339940.f_2907.f_183[iParam0] = -1;
	Global_1339940.f_2907.f_194[iParam0] = 1;
	Global_1339940.f_2907.f_205[iParam0] = -1;
	Global_1339940.f_2907.f_216[iParam0] = 2;
	Global_1339940.f_2907.f_227[iParam0] = 0;
	func_14(&(Global_1339940.f_2907.f_238[iParam0 /*2*/]));
	Global_1339940.f_2907.f_259[iParam0] = -1;
}

void func_19(int iParam0)
{
	Global_1339940.f_4109[iParam0] = 0;
	StringCopy(&(Global_1339940.f_4109.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_4109.f_172[iParam0] = -1;
	Global_1339940.f_4109.f_183[iParam0] = -1;
	Global_1339940.f_4109.f_194[iParam0] = 0;
	Global_1339940.f_4109.f_205[iParam0] = 1;
	Global_1339940.f_4109.f_216[iParam0] = 0;
	Global_1339940.f_4109.f_227[iParam0] = -1;
	Global_1339940.f_4109.f_249[iParam0] = 2;
	Global_1339940.f_4109.f_260[iParam0] = 0;
	func_14(&(Global_1339940.f_4109.f_282[iParam0 /*2*/]));
	Global_1339940.f_4109.f_303[iParam0] = -1;
}

void func_20(int iParam0)
{
	Global_1339940.f_3557[iParam0] = 0;
	StringCopy(&(Global_1339940.f_3557.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_3557.f_172[iParam0] = -1;
	Global_1339940.f_3557.f_183[iParam0] = 1;
	Global_1339940.f_3557.f_194[iParam0] = -1;
	Global_1339940.f_3557.f_260[iParam0] = 2;
	Global_1339940.f_3557.f_271[iParam0] = 0;
	StringCopy(&(Global_1339940.f_3557.f_282[iParam0 /*16*/]), "", 64);
	Global_1339940.f_3557.f_443[iParam0] = 0;
	Global_1339940.f_3557.f_454[iParam0] = -1f;
	func_14(&(Global_1339940.f_3557.f_465[iParam0 /*2*/]));
	Global_1339940.f_3557.f_486[iParam0] = -1;
	Global_1339940.f_3557.f_519[iParam0] = 0;
}

void func_21(int iParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1339940.f_4746[iParam0]), iParam1);
}

void func_22(int iParam0)
{
	Global_1339940.f_2432[iParam0] = 0;
	StringCopy(&(Global_1339940.f_2432.f_11[iParam0 /*16*/]), "", 64);
	Global_1339940.f_2432.f_172[iParam0] = -1;
	Global_1339940.f_2432.f_183[iParam0] = 1;
	Global_1339940.f_2432.f_194[iParam0] = -1;
	Global_1339940.f_2432.f_205[iParam0] = 2;
	Global_1339940.f_2432.f_216[iParam0] = 0;
	func_14(&(Global_1339940.f_2432.f_227[iParam0 /*2*/]));
	Global_1339940.f_2432.f_248[iParam0] = -1;
}

int func_23(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4726[iParam0], iParam1);
}

int func_24(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1339940.f_4746[iParam0], iParam1);
}

bool func_25(int iParam0)
{
	if (Global_1339940.f_4726[iParam0] > 0)
	{
		return true;
	}
	return false;
}

float func_26()
{
	float fVar0;
	
	fVar0 = 0.925f - 0.002f;
	fVar0 += -0.036f * IntToFloat(Global_1339940.f_932);
	if (Global_1339940.f_933 == 1)
	{
		fVar0 += -0.15f;
	}
	else if (Global_1339940.f_934 == 1)
	{
		fVar0 += -0.048f - 0.753f;
	}
	if (Global_1339940.f_937 == 1)
	{
		fVar0 += -0.919f;
	}
	if (Global_1339940.f_938 == 1)
	{
		fVar0 += -0.184f;
	}
	if (Global_1339940.f_939 == 1)
	{
		fVar0 += -0.522f;
	}
	if (Global_1339940.f_935 == 1 && Global_1339940.f_936 == 0)
	{
		switch (func_27())
		{
			case 0:
				fVar0 += -0.405f;
				break;
			
			case 2:
				fVar0 += -0.405f;
				break;
			
			case 1:
				fVar0 += -0.414f;
				break;
			
			default:
				fVar0 += -0.405f;
				break;
			}
	}
	return fVar0;
}

auto func_27()
{
	func_28();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_28()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_32(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_31(PLAYER::PLAYER_PED_ID());
			if (func_30(iVar0) && (!func_29(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_30(Global_101154.f_1826.f_539.f_3549))
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

int func_29(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1339940.f_4726[iVar0] = 0;
		iVar0++;
	}
}

void func_34()
{
	Global_2444464 = 0;
}

void func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int[] iVar3 = new int[12];
	int iVar16;
	int iVar17;
	
	if (_0xB2A592B04648A9CB())
	{
		if (Global_1339940.f_932 == 0)
		{
			func_183(1);
		}
	}
	func_179();
	if (func_174())
	{
		if (func_173())
		{
			Global_1338622.f_1080 = 1;
		}
		iVar0 = false;
		while (iVar0 <= 9)
		{
			iVar16 = 0;
			if (func_23(7, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_3557.f_260[iVar0];
			}
			iVar16 = 1;
			if (func_23(3, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_2432.f_205[iVar0];
			}
			iVar16 = 2;
			if (func_23(4, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_2907.f_216[iVar0];
			}
			iVar16 = 3;
			if (func_23(5, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_3243.f_216[iVar0];
			}
			iVar16 = 4;
			if (func_23(1, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_1368.f_216[iVar0];
			}
			iVar16 = 5;
			if (func_23(0, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_946.f_216[iVar0];
			}
			iVar16 = 6;
			if (func_23(6, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_3557.f_260[iVar0];
			}
			iVar16 = 7;
			if (func_23(2, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_1713.f_315[iVar0];
			}
			iVar16 = 8;
			if (func_23(8, iVar0))
			{
				Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_4499.f_216[iVar0];
			}
			iVar0++;
		}
		iVar16 = 0;
		if (Global_1338622.f_1080 == 1)
		{
			iVar0 = false;
			while (iVar0 <= 9)
			{
				iVar16 = 0;
				if (func_23(7, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_4109.f_249[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_4109.f_249[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_4109.f_249[iVar0] == 2) || Global_1339940.f_4109.f_249[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_4109.f_249[iVar0] == 13) || Global_1339940.f_4109.f_249[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_4109.f_249[iVar0];
						}
					}
				}
				iVar16 = 1;
				if (func_23(3, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_2432.f_205[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_2432.f_205[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_2432.f_205[iVar0] == 2) || Global_1339940.f_2432.f_205[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_2432.f_205[iVar0] == 13) || Global_1339940.f_2432.f_205[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_2432.f_205[iVar0];
						}
					}
				}
				iVar16 = 2;
				if (func_23(4, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_2907.f_216[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_2907.f_216[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_2907.f_216[iVar0] == 2) || Global_1339940.f_2907.f_216[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_2907.f_216[iVar0] == 13) || Global_1339940.f_2907.f_216[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_2907.f_216[iVar0];
						}
					}
				}
				iVar16 = 3;
				if (func_23(5, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_3243.f_216[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_3243.f_216[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_3243.f_216[iVar0] == 2) || Global_1339940.f_3243.f_216[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_3243.f_216[iVar0] == 13) || Global_1339940.f_3243.f_216[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_3243.f_216[iVar0];
						}
					}
				}
				iVar16 = 4;
				if (func_23(1, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_1368.f_216[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_1368.f_216[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_1368.f_216[iVar0] == 2) || Global_1339940.f_1368.f_216[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_1368.f_216[iVar0] == 13) || Global_1339940.f_1368.f_216[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_1368.f_216[iVar0];
						}
					}
				}
				iVar16 = 5;
				if (func_23(0, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_946.f_216[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_946.f_216[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_946.f_216[iVar0] == 2) || Global_1339940.f_946.f_216[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_946.f_216[iVar0] == 13) || Global_1339940.f_946.f_216[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_946.f_216[iVar0];
						}
					}
				}
				iVar16 = 6;
				if (func_23(6, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_3557.f_260[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_3557.f_260[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_3557.f_260[iVar0] == 2) || Global_1339940.f_3557.f_260[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_3557.f_260[iVar0] == 13) || Global_1339940.f_3557.f_260[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_3557.f_260[iVar0];
						}
					}
				}
				iVar16 = 7;
				if (func_23(2, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_1713.f_315[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_1713.f_315[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_1713.f_315[iVar0] == 2) || Global_1339940.f_1713.f_315[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_1713.f_315[iVar0] == 13) || Global_1339940.f_1713.f_315[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_1713.f_315[iVar0];
						}
					}
				}
				iVar16 = 8;
				if (func_23(8, iVar0))
				{
					Global_1338622.f_1081[iVar16 /*11*/][iVar0] = Global_1339940.f_4499.f_216[iVar0];
					if (Global_1338622.f_1081[iVar16 /*11*/][iVar0] != 1)
					{
						if ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] != Global_1339940.f_4499.f_216[iVar0] && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_4499.f_216[iVar0] == 2) || Global_1339940.f_4499.f_216[iVar0] != 2)) && ((Global_1338622.f_1181[iVar16 /*11*/][iVar0] == 0 && Global_1339940.f_4499.f_216[iVar0] == 13) || Global_1339940.f_4499.f_216[iVar0] != 13))
						{
							Global_1338622.f_1181[iVar16 /*11*/][iVar0] = Global_1339940.f_4499.f_216[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = false;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] != Global_1338622.f_1181[iVar1 /*11*/][iVar0])
					{
						Global_1338622.f_1181[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = false;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = false;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_1338622.f_1081[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1338622.f_1181[iVar1 /*11*/][iVar0] = Global_1338622.f_1081[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = false;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (Global_1338622.f_1081[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[iVar2 - 1] == 1)
							{
								Global_1338622.f_1081[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_1338622.f_1181[iVar1 /*11*/][iVar0] = Global_1338622.f_1081[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_1338622.f_1081[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_1338622.f_1181[iVar1 /*11*/][iVar0] = Global_1338622.f_1081[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 += -1;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_1338622.f_1080 = 0;
		}
		if (Global_1339940.f_937)
		{
			iVar17 = 84;
		}
		else
		{
			iVar17 = 66;
		}
		if (func_174())
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (func_25(7))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[0 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[0 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[0 /*11*/][iVar0]))
							{
								func_165(1);
								if (Global_1339940.f_934 == 0)
								{
									_set_screen_draw_position(82, iVar17);
									_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								}
								func_149(iVar0, Global_1339940.f_4109[iVar0], &(Global_1339940.f_4109.f_11[iVar0 /*16*/]), Global_1339940.f_4109.f_172[iVar0], Global_1339940.f_4109.f_194[iVar0], Global_1339940.f_4109.f_216[iVar0], Global_1339940.f_4109.f_205[iVar0], Global_1339940.f_4109.f_183[iVar0], Global_1339940.f_4109.f_227[iVar0], Global_1339940.f_4109.f_260[iVar0], Global_1339940.f_4109.f_314[iVar0], Global_1339940.f_4109.f_325[iVar0], Global_1339940.f_4109.f_357[iVar0], Global_1339940.f_4109.f_238[iVar0], Global_1339940.f_4109.f_271[iVar0], Global_1339940.f_4109.f_368[iVar0], Global_1339940.f_4109.f_379[iVar0]);
								if (Global_1339940.f_934 == 0)
								{
									_0xE3A3DB414A373DAB();
								}
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(3))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[1 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[1 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[1 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_148(iVar0, Global_1339940.f_2432[iVar0], &(Global_1339940.f_2432.f_11[iVar0 /*16*/]), Global_1339940.f_2432.f_183[iVar0], Global_1339940.f_2432.f_172[iVar0], Global_1339940.f_2432.f_194[iVar0], Global_1339940.f_2432.f_216[iVar0], &(Global_1339940.f_2432.f_259[iVar0 /*16*/]), Global_1339940.f_2432.f_420[iVar0], Global_1339940.f_2432.f_453[iVar0], Global_1339940.f_2432.f_431[iVar0], Global_1339940.f_2432.f_442[iVar0], Global_1339940.f_2432.f_464[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(4))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[2 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[2 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[2 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_147(iVar0, Global_1339940.f_2907[iVar0], Global_1339940.f_2907.f_172[iVar0], &(Global_1339940.f_2907.f_11[iVar0 /*16*/]), Global_1339940.f_2907.f_194[iVar0], Global_1339940.f_2907.f_183[iVar0], Global_1339940.f_2907.f_205[iVar0], Global_1339940.f_2907.f_227[iVar0], Global_1339940.f_2907.f_270[iVar0], Global_1339940.f_2907.f_281[iVar0], Global_1339940.f_2907.f_292[iVar0], Global_1339940.f_2907.f_303[iVar0], Global_1339940.f_2907.f_314[iVar0], Global_1339940.f_2907.f_325[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(5))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[3 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[3 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[3 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_146(iVar0, Global_1339940.f_3243[iVar0], Global_1339940.f_3243.f_172[iVar0], &(Global_1339940.f_3243.f_11[iVar0 /*16*/]), Global_1339940.f_3243.f_194[iVar0], Global_1339940.f_3243.f_183[iVar0], Global_1339940.f_3243.f_205[iVar0], Global_1339940.f_3243.f_227[iVar0], Global_1339940.f_3243.f_270[iVar0], Global_1339940.f_3243.f_281[iVar0], Global_1339940.f_3243.f_292[iVar0], Global_1339940.f_3243.f_303[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(1))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[4 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[4 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[4 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_136(iVar0, Global_1339940.f_1368[iVar0], Global_1339940.f_1368.f_11[iVar0], &(Global_1339940.f_1368.f_22[iVar0 /*16*/]), Global_1339940.f_1368.f_194[iVar0], Global_1339940.f_1368.f_205[iVar0], Global_1339940.f_1368.f_258[iVar0], Global_1339940.f_1368.f_183[iVar0], Global_1339940.f_1368.f_227[iVar0 /*3*/], Global_1339940.f_1368.f_227[iVar0 /*3*/].f_1, Global_1339940.f_1368.f_312[iVar0], Global_1339940.f_1368.f_323[iVar0], Global_1339940.f_1368.f_269[iVar0], Global_2467485[iVar0], Global_2467496[iVar0], Global_2467507[iVar0], Global_2467518[iVar0], Global_2467529[iVar0], Global_2467540[iVar0], Global_2467551[iVar0], Global_2467562[iVar0], Global_1339940.f_1368.f_334[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(0))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[5 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[5 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[5 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_121(iVar0, Global_1339940.f_946[iVar0], Global_1339940.f_946.f_11[iVar0], &(Global_1339940.f_946.f_22[iVar0 /*16*/]), Global_1339940.f_946.f_194[iVar0], Global_1339940.f_946.f_183[iVar0], Global_1339940.f_946.f_227[iVar0 /*3*/], Global_1339940.f_946.f_227[iVar0 /*3*/].f_1, Global_1339940.f_946.f_258[iVar0], Global_1339940.f_946.f_205[iVar0], Global_1339940.f_946.f_269[iVar0], Global_1339940.f_946.f_312[iVar0], Global_1339940.f_946.f_323[iVar0], Global_1339940.f_946.f_334[iVar0], Global_1339940.f_946.f_345[iVar0], Global_1339940.f_946.f_356[iVar0], Global_1339940.f_946.f_367[iVar0], Global_1339940.f_946.f_378[iVar0], Global_1339940.f_946.f_389[iVar0], Global_1339940.f_946.f_400[iVar0], Global_1339940.f_946.f_411[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(6))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[6 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[6 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[6 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_102(iVar0, Global_1339940.f_3557[iVar0], &(Global_1339940.f_3557.f_11[iVar0 /*16*/]), Global_1339940.f_3557.f_183[iVar0], Global_1339940.f_3557.f_172[iVar0], Global_1339940.f_3557.f_194[iVar0], Global_1339940.f_3557.f_271[iVar0], &(Global_1339940.f_3557.f_282[iVar0 /*16*/]), Global_1339940.f_3557.f_443[iVar0], Global_1339940.f_3557.f_454[iVar0], Global_1339940.f_3557.f_497[iVar0], Global_1339940.f_3557.f_508[iVar0], Global_1339940.f_3557.f_205[iVar0], Global_1339940.f_3557.f_216[iVar0], Global_1339940.f_3557.f_227[iVar0], Global_1339940.f_3557.f_238[iVar0], Global_1339940.f_3557.f_249[iVar0], Global_1339940.f_3557.f_519[iVar0], Global_1339940.f_3557.f_530[iVar0], Global_1339940.f_3557.f_541[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(2))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[7 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[7 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[7 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_69(iVar0, Global_1339940.f_1713[iVar0], &(Global_1339940.f_1713.f_99[iVar0 /*16*/]), Global_1339940.f_1713.f_282[iVar0], Global_1339940.f_1713.f_293[iVar0], Global_1339940.f_1713.f_260[iVar0], Global_1339940.f_1713.f_11[iVar0], Global_1339940.f_1713.f_22[iVar0], Global_1339940.f_1713.f_33[iVar0], Global_1339940.f_1713.f_44[iVar0], Global_1339940.f_1713.f_55[iVar0], Global_1339940.f_1713.f_66[iVar0], Global_1339940.f_1713.f_77[iVar0], Global_1339940.f_1713.f_88[iVar0], Global_1339940.f_1713.f_271[iVar0], Global_1339940.f_1713.f_304[iVar0], Global_1339940.f_1713.f_357[iVar0], Global_1339940.f_1713.f_326[iVar0 /*3*/], Global_1339940.f_1713.f_326[iVar0 /*3*/].f_1, Global_1339940.f_1713.f_368[iVar0], Global_1339940.f_1713.f_379[iVar0], Global_1339940.f_1713.f_390[iVar0], Global_1339940.f_1713.f_401[iVar0], Global_1339940.f_1713.f_412[iVar0], Global_1339940.f_1713.f_423[iVar0], Global_1339940.f_1713.f_434[iVar0], Global_1339940.f_1713.f_445[iVar0], Global_1339940.f_1713.f_456[iVar0], Global_1339940.f_1713.f_467[iVar0], Global_1339940.f_1713.f_478[iVar0], Global_1339940.f_1713.f_489[iVar0], Global_1339940.f_1713.f_500[iVar0], Global_1339940.f_1713.f_511[iVar0], Global_1339940.f_1713.f_522[iVar0], Global_1339940.f_1713.f_533[iVar0], Global_1339940.f_1713.f_587[iVar0], Global_1339940.f_1713.f_598[iVar0], Global_1339940.f_1713.f_544[iVar0], Global_2467573[iVar0], Global_2467584[iVar0], Global_2467595[iVar0], Global_2467606[iVar0], Global_2467617[iVar0], Global_2467628[iVar0], Global_2467639[iVar0], Global_2467650[iVar0], Global_1339940.f_1713.f_609[iVar0], Global_1339940.f_1713.f_620[iVar0], Global_1339940.f_1713.f_631[iVar0], Global_1339940.f_1713.f_642[iVar0], Global_1339940.f_1713.f_653[iVar0], Global_1339940.f_1713.f_664[iVar0], Global_1339940.f_1713.f_675[iVar0], Global_1339940.f_1713.f_686[iVar0], Global_1339940.f_1713.f_697[iVar0], Global_1339940.f_1713.f_708[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				if (func_25(8))
				{
					iVar0 = false;
					while (iVar0 <= 9)
					{
						if (Global_1338622.f_1181[8 /*11*/][iVar0] == iVar1 + 3 || Global_1338622.f_1081[8 /*11*/][iVar0] == 1)
						{
							if (func_169(Global_1338622.f_1081[8 /*11*/][iVar0]))
							{
								func_165(1);
								_set_screen_draw_position(82, iVar17);
								_0xF5A2C681787E579D(fLocal_89, fLocal_90, fLocal_91, fLocal_92);
								func_37(iVar0, &(Global_1339940.f_4499.f_11[iVar0 /*16*/]), Global_1339940.f_4499[iVar0], Global_1339940.f_4499.f_172[iVar0], Global_1339940.f_4499.f_183[iVar0], Global_1339940.f_4499.f_194[iVar0], Global_1339940.f_4499.f_205[iVar0]);
								_0xE3A3DB414A373DAB();
								func_165(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_36();
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1339940.f_4736[iVar0] = Global_1339940.f_4726[iVar0];
		iVar0++;
	}
}

void func_37(int iParam0, char* sParam1, auto uParam2, int iParam3, auto uParam4, auto uParam5, auto uParam6)
{
	auto uVar0;
	auto uVar11;
	auto uVar13;
	
	if (func_23(8, iParam0))
	{
		uVar13 = 2;
		func_38(iParam0, &uVar0, &uVar11, &uVar13, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_38(int iParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, char* sParam5, int iParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10)
{
	struct<9> Var0;
	struct<8> Var9;
	
	Global_1339940++;
	if (func_68())
	{
		func_67(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_66(uParam1, 0);
		func_64(uParam1);
		func_63(8, iParam0);
		if (Global_1339940 == 1)
		{
			func_62(iParam4);
		}
		func_57(uParam2, iParam4, uParam1, &Var0);
		request_streamed_texture_dict("TimerBars", false);
		request_streamed_texture_dict("Hunting", false);
		if (has_streamed_texture_dict_loaded("TimerBars") && has_streamed_texture_dict_loaded("Hunting"))
		{
			Var9 = *uParam2;
			Var9.f_1 = *uParam2.f_1;
			Var9 += 0.079f;
			Var9.f_1 += 0.008f;
			Var9.f_2 += 0.157f;
			Var9.f_3 += 0.036f;
			Var9.f_4 += 255;
			Var9.f_5 += 255;
			Var9.f_6 += 255;
			Var9.f_7 = 140;
			if (func_56())
			{
				Var9 += -0.025f;
				Var9.f_2 += 0.05f;
			}
			Global_1339940.f_4767 += Var9.f_3;
			func_48("TimerBars", "ALL_BLACK_bg", &Var9, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_48("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			*uParam1.f_3 = uParam8;
			*uParam1.f_4 = uParam9;
			*uParam1.f_5 = uParam10;
			*uParam1.f_6 = 255;
			func_47(uParam1, 0);
			uParam7 = uParam7;
			*uParam3[0 /*9*/] = *uParam3[0 /*9*/];
			func_40(uParam2, uParam1, sParam5, iParam6, 2);
			func_39();
		}
	}
}

void func_39()
{
	_set_2d_layer(4);
}

void func_40(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_46(sVar0))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_justification(iParam4);
			func_41(func_43(*uParam0), func_42(*uParam0.f_1), sVar0, iParam3, 0);
		}
	}
}

void func_41(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

float func_42(float fParam0)
{
	return fParam0 + fLocal_13;
}

float func_43(float fParam0)
{
	return fParam0 + fLocal_12;
}

bool func_44()
{
	if (func_45())
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

auto func_45()
{
	return Global_1312438;
}

bool func_46(char* sParam0)
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

void func_47(auto uParam0, int iParam1)
{
	set_text_font(*uParam0);
	if (!*uParam0.f_8 == 0f || !*uParam0.f_9 == 0f)
	{
		set_text_wrap(*uParam0.f_8, *uParam0.f_9);
	}
	set_text_scale(*uParam0.f_1, *uParam0.f_2);
	set_text_colour(*uParam0.f_3, *uParam0.f_4, *uParam0.f_5, *uParam0.f_6);
	switch (*uParam0.f_7)
	{
		case 0:
			break;
		
		case 1:
			set_text_outline();
			set_text_drop_shadow();
			break;
		
		case 3:
			set_text_drop_shadow();
			break;
		
		case 2:
			set_text_outline();
			break;
	}
	if (iParam1)
	{
		_set_2d_layer(4);
	}
}

void func_48(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = {*uParam2};
	switch (iParam4)
	{
		case 0:
			func_55(&Var0);
			break;
		
		case 1:
			func_54(&Var0);
			break;
		
		case 5:
			func_53(&Var0);
			break;
		
		case 6:
			func_52(&Var0);
			break;
		
		case 7:
			func_51(&Var0);
			break;
		
		case 8:
			func_50(&Var0);
			break;
		
		case 9:
			func_49(&Var0);
			break;
	}
	if (func_44())
	{
		_set_2d_layer(iParam5);
		if (iParam3 == 1)
		{
			draw_sprite(sParam0, sParam1, func_43(Var0), func_42(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			draw_sprite(sParam0, sParam1, func_43(Var0), func_42(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		_set_2d_layer(4);
	}
}

void func_49(auto uParam0)
{
	*uParam0.f_4 = 128;
	*uParam0.f_5 = 128;
	*uParam0.f_6 = 128;
}

void func_50(auto uParam0)
{
	*uParam0.f_7 = 2;
}

void func_51(auto uParam0)
{
	*uParam0.f_7 = 5;
}

void func_52(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 70;
}

void func_53(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 100;
}

void func_54(auto uParam0)
{
	*uParam0.f_4 -= 50;
	*uParam0.f_5 -= 50;
	*uParam0.f_6 -= 50;
}

void func_55(auto uParam0)
{
	*uParam0.f_4 = *uParam0.f_4;
	*uParam0.f_5 = *uParam0.f_5;
	*uParam0.f_6 = *uParam0.f_6;
	*uParam0.f_7 = *uParam0.f_7;
}

bool func_56()
{
	if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) || _get_ui_language_id() == 10)
	{
		return true;
	}
	return false;
}

void func_57(auto uParam0, int iParam1, auto uParam2, auto uParam3)
{
	float fVar0;
	
	fVar0 = func_61(0);
	*uParam0 = 0.795f;
	*uParam0.f_1 = func_60(iParam1);
	*uParam0.f_1 += func_59(uParam2);
	func_58(iParam1, -fVar0);
	*uParam0.f_1 += func_59(uParam2);
	*uParam3 = 0.9375f;
	*uParam3.f_1 = *uParam0.f_1 + 0.009f;
	*uParam3.f_2 = 0.02f;
	*uParam3.f_3 = 0.02f;
}

void func_58(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_1339940.f_930 += fParam1;
			break;
		
		case 2:
			Global_1339940.f_931 += fParam1;
			break;
	}
}

float func_59(auto uParam0)
{
	float fVar0;
	
	switch (*uParam0.f_10)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

auto func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1339940.f_930;
			break;
		
		case 2:
			return Global_1339940.f_931;
			break;
	}
	return Global_1339940.f_930;
}

float func_61(int iParam0)
{
	float fVar0;
	
	fVar0 = 0.025f + 0.006f + 0.0009f;
	if (iParam0 == 1)
	{
		fVar0 += 0.008f;
	}
	return fVar0;
}

void func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_1339940.f_930 = func_26();
			break;
		
		case 2:
			Global_1339940.f_931 = func_26();
			break;
	}
}

void func_63(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4746[iParam0]), iParam1);
}

void func_64(auto uParam0)
{
	float fVar0;
	
	fVar0 = 0.88f - 0.062f + 0.026f + 0.027f + 0.03f;
	if (Global_1339940.f_941)
	{
		fVar0 += -0.034f;
		if (get_is_widescreen() == 0)
		{
			fVar0 += -0.02f;
		}
	}
	if (Global_1339940.f_942 && Global_1339940.f_941 == 0)
	{
		fVar0 += -0.015f - 0.003f;
		if (get_is_widescreen() == 0)
		{
			fVar0 += -0.017f;
		}
	}
	if ((Global_1339940.f_943 && Global_1339940.f_942 == 0) && Global_1339940.f_941 == 0)
	{
		fVar0 += -0.038f;
	}
	if (Global_1339940.f_934 == 1)
	{
		fVar0 += -0.113f;
	}
	if (((_get_ui_language_id() == 7 && _get_ui_language_id() == 1) && !get_is_widescreen()) && Global_1339940.f_943)
	{
		fVar0 += -0.007f;
	}
	if (Global_1339940.f_944)
	{
		if ((((_get_ui_language_id() != 0 && _get_ui_language_id() != 5) && _get_ui_language_id() != 6) && _get_ui_language_id() != 9) && _get_ui_language_id() != 11)
		{
			fVar0 += -0.009f;
		}
		else
		{
			fVar0 += -0.009f;
		}
	}
	if (Global_1339940.f_945)
	{
		if (func_65())
		{
			fVar0 += -0.03f;
		}
		else if ((((_get_ui_language_id() != 0 && _get_ui_language_id() != 5) && _get_ui_language_id() != 6) && _get_ui_language_id() != 9) && _get_ui_language_id() != 11)
		{
			fVar0 += -0.024f;
		}
		else
		{
			fVar0 += -0.019f;
		}
	}
	if (((((((((_get_ui_language_id() == 8 || _get_ui_language_id() == 7) || _get_ui_language_id() == 1) && Global_1339940.f_942 == 0) && Global_1339940.f_941 == 0) && Global_1339940.f_934 == 0) && Global_1339940.f_943 == 0) && Global_1339940.f_944 == 0) && Global_1339940.f_945 == 0) && GAMEPLAY::IS_PC_VERSION())
	{
		fVar0 += -0.005f;
	}
	*uParam0.f_9 = fVar0;
}

bool func_65()
{
	int iVar0;
	auto uVar1;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		_get_screen_active_resolution(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return true;
		}
	}
	return false;
}

void func_66(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.288f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 23;
}

void func_67(auto uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	*uParam0.f_1 = fParam2 + fParam9;
	*uParam0.f_2 = fParam3;
	*uParam0.f_3 = fParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = iParam7;
	*uParam0.f_7 = iParam8;
}

bool func_68()
{
	return true;
}

void func_69(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, int iParam14, int iParam15, int iParam16, float fParam17, float fParam18, auto uParam19, auto uParam20, auto uParam21, auto uParam22, auto uParam23, auto uParam24, auto uParam25, auto uParam26, auto uParam27, auto uParam28, auto uParam29, auto uParam30, auto uParam31, auto uParam32, auto uParam33, auto uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	auto uVar0;
	auto uVar11;
	auto uVar13;
	auto uVar95;
	
	if (func_23(2, iParam0))
	{
		uVar13 = 9;
		if (iParam1 < 9)
		{
			func_70(iParam0, &uVar0, &uVar11, &uVar13, &uVar95, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, iParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_70(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16, auto uParam17, auto uParam18, int iParam19, int iParam20, int iParam21, float fParam22, float fParam23, auto uParam24, auto uParam25, auto uParam26, auto uParam27, auto uParam28, auto uParam29, auto uParam30, auto uParam31, auto uParam32, auto uParam33, auto uParam34, auto uParam35, auto uParam36, auto uParam37, auto uParam38, auto uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	struct<9> Var11;
	
	Global_1339940++;
	if (func_68())
	{
		if (iParam40 == 2)
		{
		}
		func_63(2, iParam0);
		if (Global_1339940 == 1)
		{
			func_62(iParam6);
		}
		func_97(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_56())
		{
			func_96(uParam1, 0);
		}
		else if (iParam51)
		{
			func_66(uParam1, 0);
		}
		else if (iParam21)
		{
			func_95(uParam1, 3);
		}
		else
		{
			func_66(uParam1, 0);
		}
		func_64(uParam1);
		*uParam1.f_9 += 0.03f * 1f - func_93();
		if (iParam19 == 0)
		{
			func_92(iParam0);
		}
		if (iParam41 == 0)
		{
			func_91(iParam0);
		}
		iVar10 = func_90();
		_set_2d_layer(iVar10);
		request_streamed_texture_dict("TimerBars", false);
		if (has_streamed_texture_dict_loaded("TimerBars"))
		{
			if (func_89(iParam19, &(Global_1339940.f_212[iParam0 /*2*/]), &(Global_1339940.f_233[iParam0 /*2*/])))
			{
				iVar9 = true;
			}
			else
			{
				iVar9 = false;
			}
			if (!func_88(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = *uParam2.f_1;
				Var0 += 0.079f;
				Var0.f_1 += 0.012f;
				Var0.f_2 += 0.157f;
				Var0.f_3 += 0.028f;
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_56())
				{
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1339940.f_4767 += Var0.f_3;
				if (iParam41 > 0)
				{
					Var11 = {Var0};
					if (func_184(&(Global_1339940.f_834[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_87(Global_1339940.f_834[iParam0 /*2*/], 1250, 0))
						{
							Global_1339940.f_855[iParam0] -= 17;
						}
						Var11.f_7 = Global_1339940.f_855[iParam0];
						func_86(&Var11, iParam7);
						func_48("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1339940.f_855[iParam0] = 255;
					func_85(&(Global_1339940.f_834[iParam0 /*2*/]), 0, 0);
				}
				func_48("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_79(&Var0, iParam52);
			iVar10 = func_90();
			_set_2d_layer(iVar10);
			func_78(uParam1, iParam42);
			if (_get_ui_language_id() == 9)
			{
				*uParam2.f_1 += -0.009f;
			}
			else
			{
				*uParam2.f_1 += -0.003f;
			}
			if (func_56())
			{
				if (_get_ui_language_id() == 9)
				{
					*uParam2.f_1 += -0.009f;
				}
				else
				{
					*uParam2.f_1 += -0.007f;
				}
			}
			if (func_56() == 0)
			{
				if (iParam51)
				{
					*uParam2.f_1 += 0.003f;
				}
				else if (iParam21)
				{
					*uParam2.f_1 += -0.002f;
				}
			}
			else if (iParam21)
			{
				*uParam2.f_1 += 0.007f;
			}
			else
			{
				*uParam2.f_1 += 0.007f;
			}
			if (!func_88(fParam22, fParam23))
			{
				func_47(uParam1, 0);
				if (iParam51)
				{
					func_77(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam21 == 1)
				{
					func_77(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == -1)
				{
					func_75(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					*uParam2.f_1 -= -0.003f;
					func_40(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (iVar9)
			{
				func_71(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar10, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_39();
		}
	}
}

void func_71(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, auto uParam5, auto uParam6, auto uParam7, auto uParam8, auto uParam9, auto uParam10, auto uParam11, auto uParam12, auto uParam13, auto uParam14, auto uParam15, auto uParam16, auto uParam17, auto uParam18, auto uParam19, auto uParam20, auto uParam21, auto uParam22, auto uParam23, auto uParam24, auto uParam25, auto uParam26, auto uParam27, auto uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	int iVar14;
	
	request_streamed_texture_dict("TimerBars", false);
	request_streamed_texture_dict("Cross", false);
	if (has_streamed_texture_dict_loaded("TimerBars") && has_streamed_texture_dict_loaded("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= iParam0 - 1)
		{
			*uParam1[iVar4 /*9*/] += fVar3 * IntToFloat(iVar4);
			if (func_74(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						iVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						iVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						iVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						iVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						iVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						iVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						iVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						iVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				iVar14 = false;
				if (iVar2 == 2)
				{
					iVar14 = true;
					iVar2 = 1;
				}
				Var5 = {func_73(*(uParam1[iVar4 /*9*/]), iVar0, iParam2, iParam3, iVar1, iVar2)};
				if (iVar14)
				{
					Var5.f_7 = 51;
				}
				func_48("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_72(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_86(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_86(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_86(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_86(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_86(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_86(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_86(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_86(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_48("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return true;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return true;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return true;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return true;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return true;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return true;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return true;
	}
	return false;
}

struct<9> func_73(struct<9> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<9> Var0;
	
	Var0 = {Param0};
	if (iParam12 == 0)
	{
		if (iParam9)
		{
			func_86(&Var0, iParam10);
		}
		else
		{
			func_86(&Var0, iParam11);
		}
	}
	else if (iParam9)
	{
		func_86(&Var0, iParam12);
	}
	else
	{
		func_86(&Var0, iParam13);
	}
	if (iParam9 == 0)
	{
	}
	return Var0;
}

bool func_74(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return true;
	}
	if (iParam0 > iParam1)
	{
		return false;
	}
	return true;
}

void func_75(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_46(sVar0))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_right_justify(iParam4);
			set_text_centre(iParam3);
			func_76(func_43(*uParam0), func_42(*uParam0.f_1), sVar0, 0);
		}
	}
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_77(auto uParam0, auto uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_46(sParam2))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_justification(iParam5);
			if (func_46(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			_set_text_entry(sVar0);
			_0x39BBF623FC803EAC(iParam4);
			add_text_component_substring_player_name(sParam2);
			_draw_text(func_43(*uParam0), func_42(*uParam0.f_1), 0);
		}
	}
}

void func_78(auto uParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_3 = uVar0;
	*uParam0.f_4 = uVar1;
	*uParam0.f_5 = uVar2;
}

void func_79(auto uParam0, int iParam1)
{
	struct<8> Var0;
	auto uVar8;
	auto uVar9;
	auto uVar10;
	auto uVar11;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = *uParam0.f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = *uParam0.f_3;
	get_hud_colour(iParam1, &uVar8, &uVar9, &uVar10, &uVar11);
	Var0.f_4 = uVar8;
	Var0.f_5 = uVar9;
	Var0.f_6 = uVar10;
	Var0.f_7 = uVar11;
	func_80(Var0, 0, 0);
}

void func_80(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = {Param0};
	switch (iParam8)
	{
		case 2:
			func_84(&Var0);
			break;
		
		case 1:
			func_83(&Var0);
			break;
		
		case 3:
			func_82(&Var0);
			break;
		
		case 4:
			func_81(&Var0);
			break;
	}
	if (func_44())
	{
		if (iParam9 == 1)
		{
			draw_rect(func_43(Var0), func_42(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			draw_rect(func_43(Var0), func_42(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_81(auto uParam0)
{
	*uParam0.f_4 = 200;
	*uParam0.f_5 = 20;
	*uParam0.f_6 = 20;
	*uParam0.f_7 = 204;
}

void func_82(auto uParam0)
{
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = 255;
}

void func_83(auto uParam0)
{
	*uParam0.f_4 -= 50;
	*uParam0.f_5 -= 50;
	*uParam0.f_6 -= 50;
}

void func_84(auto uParam0)
{
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 150;
}

void func_85(auto uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
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
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	*uParam0.f_1 = 1;
}

void func_86(auto uParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_4 = uVar0;
	*uParam0.f_5 = uVar1;
	*uParam0.f_6 = uVar2;
}

bool func_87(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam3)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return true;
	}
	return false;
}

bool func_88(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return false;
	}
	return true;
}

bool func_89(int iParam0, auto uParam1, auto uParam2)
{
	if (func_184(uParam1, iParam0, 0))
	{
		return true;
	}
	if (func_184(uParam2, 300, 0))
	{
		if (func_184(uParam2, 800, 0))
		{
			func_14(uParam2);
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_90()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_1339940.f_940)
	{
		iVar0 = 7;
	}
	return iVar0;
}

void func_91(int iParam0)
{
	func_14(&(Global_1339940.f_548[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_569[iParam0 /*2*/]));
}

void func_92(int iParam0)
{
	func_14(&(Global_1339940.f_212[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_233[iParam0 /*2*/]));
}

float func_93()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = _get_screen_aspect_ratio(0);
	_get_screen_active_resolution(&iVar1, &iVar2);
	fVar3 = to_float(iVar1) / to_float(iVar2);
	fVar0 = func_94(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_94(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_95(auto uParam0, int iParam1)
{
	*uParam0 = 4;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.355f + 0.092f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 6;
}

void func_96(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.508f - 0.03f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 20;
}

void func_97(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, float fParam5, float fParam6, auto uParam7)
{
	float fVar0;
	
	fVar0 = func_61(0);
	*uParam0 = 0.795f;
	*uParam0.f_1 = func_60(iParam4);
	*uParam0.f_1 += func_59(uParam7);
	func_99(uParam1, iParam4, fParam5, fParam6);
	func_98(uParam3);
	if (!func_88(fParam5, fParam6))
	{
		func_58(iParam4, -fVar0);
	}
	func_67(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_98(auto uParam0)
{
	*uParam0 = 0.851f;
	*uParam0.f_1 = 0.075f;
	*uParam0.f_2 = 0.001f;
	*uParam0.f_3 = 0.009f;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 250;
}

void func_99(auto uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_88(fParam2, fParam3))
	{
		fVar0 = func_101() + func_60(iParam1);
		fVar1 = func_100();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	*uParam0[0 /*9*/] = fVar1;
	*(uParam0[0 /*9*/]).f_1 = fVar0;
	*(uParam0[0 /*9*/]).f_2 = 0.012f;
	*(uParam0[0 /*9*/]).f_3 = 0.023f;
	*(uParam0[0 /*9*/]).f_4 = 0;
	*(uParam0[0 /*9*/]).f_5 = 0;
	*(uParam0[0 /*9*/]).f_6 = 0;
	*(uParam0[0 /*9*/]).f_7 = 250;
	*uParam0[1 /*9*/] = fVar1;
	*(uParam0[1 /*9*/]).f_1 = fVar0;
	*(uParam0[1 /*9*/]).f_2 = 0.012f;
	*(uParam0[1 /*9*/]).f_3 = 0.023f;
	*(uParam0[1 /*9*/]).f_4 = 0;
	*(uParam0[1 /*9*/]).f_5 = 0;
	*(uParam0[1 /*9*/]).f_6 = 0;
	*(uParam0[1 /*9*/]).f_7 = 250;
	*uParam0[2 /*9*/] = fVar1;
	*(uParam0[2 /*9*/]).f_1 = fVar0;
	*(uParam0[2 /*9*/]).f_2 = 0.012f;
	*(uParam0[2 /*9*/]).f_3 = 0.023f;
	*(uParam0[2 /*9*/]).f_4 = 0;
	*(uParam0[2 /*9*/]).f_5 = 0;
	*(uParam0[2 /*9*/]).f_6 = 0;
	*(uParam0[2 /*9*/]).f_7 = 250;
	*uParam0[3 /*9*/] = fVar1;
	*(uParam0[3 /*9*/]).f_1 = fVar0;
	*(uParam0[3 /*9*/]).f_2 = 0.012f;
	*(uParam0[3 /*9*/]).f_3 = 0.023f;
	*(uParam0[3 /*9*/]).f_4 = 0;
	*(uParam0[3 /*9*/]).f_5 = 0;
	*(uParam0[3 /*9*/]).f_6 = 0;
	*(uParam0[3 /*9*/]).f_7 = 250;
	*uParam0[4 /*9*/] = fVar1;
	*(uParam0[4 /*9*/]).f_1 = fVar0;
	*(uParam0[4 /*9*/]).f_2 = 0.012f;
	*(uParam0[4 /*9*/]).f_3 = 0.023f;
	*(uParam0[4 /*9*/]).f_4 = 0;
	*(uParam0[4 /*9*/]).f_5 = 0;
	*(uParam0[4 /*9*/]).f_6 = 0;
	*(uParam0[4 /*9*/]).f_7 = 250;
	*uParam0[5 /*9*/] = fVar1;
	*(uParam0[5 /*9*/]).f_1 = fVar0;
	*(uParam0[5 /*9*/]).f_2 = 0.012f;
	*(uParam0[5 /*9*/]).f_3 = 0.023f;
	*(uParam0[5 /*9*/]).f_4 = 0;
	*(uParam0[5 /*9*/]).f_5 = 0;
	*(uParam0[5 /*9*/]).f_6 = 0;
	*(uParam0[5 /*9*/]).f_7 = 250;
	*uParam0[6 /*9*/] = fVar1;
	*(uParam0[6 /*9*/]).f_1 = fVar0;
	*(uParam0[6 /*9*/]).f_2 = 0.012f;
	*(uParam0[6 /*9*/]).f_3 = 0.023f;
	*(uParam0[6 /*9*/]).f_4 = 0;
	*(uParam0[6 /*9*/]).f_5 = 0;
	*(uParam0[6 /*9*/]).f_6 = 0;
	*(uParam0[6 /*9*/]).f_7 = 250;
	*uParam0[7 /*9*/] = fVar1;
	*(uParam0[7 /*9*/]).f_1 = fVar0;
	*(uParam0[7 /*9*/]).f_2 = 0.012f;
	*(uParam0[7 /*9*/]).f_3 = 0.023f;
	*(uParam0[7 /*9*/]).f_4 = 0;
	*(uParam0[7 /*9*/]).f_5 = 0;
	*(uParam0[7 /*9*/]).f_6 = 0;
	*(uParam0[7 /*9*/]).f_7 = 250;
}

float func_100()
{
	float fVar0;
	
	fVar0 = 0.919f - 0.081f + 0.004f - 0.006f + 0.05f - 0.001f - 0.005f + 0.065f - 0.0005f;
	return fVar0;
}

float func_101()
{
	float fVar0;
	
	fVar0 = 0.013f - 0.002f + 0.001f + 0.001f - 0.001f;
	return fVar0;
}

void func_102(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, Vector3 fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	auto uVar0;
	auto uVar11;
	auto uVar22;
	auto uVar24;
	
	if (func_23(6, iParam0))
	{
		func_103(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, iParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19);
	}
}

void func_103(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, Vector3 fParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	struct<8> Var0;
	struct<9> Var9;
	struct<9> Var18;
	struct<9> Var27;
	int iVar36;
	int iVar37;
	struct<9> Var38;
	int iVar47;
	float fVar48;
	float fVar49;
	float fVar50;
	float fVar51;
	struct<8> Var52;
	
	Global_1339940++;
	if (func_68())
	{
		func_67(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_67(&Var9, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_67(&Var18, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_67(&Var27, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_56())
		{
			if (iParam23)
			{
				func_120(uParam1, 0);
			}
			else if (iParam11)
			{
				func_95(uParam1, 3);
			}
			else
			{
				func_120(uParam1, 0);
			}
		}
		else if (iParam23)
		{
			func_66(uParam1, 0);
		}
		else if (iParam11)
		{
			func_95(uParam1, 3);
		}
		else
		{
			func_66(uParam1, 0);
		}
		if (Global_2443098 && iParam11)
		{
			if (func_56())
			{
				func_120(uParam1, 0);
			}
			else
			{
				func_66(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((_get_ui_language_id() == 8 && fParam14 >= 100f) && are_strings_equal("AMCH_KMHN", sParam12))
			{
				func_119(uParam2, 0, 0);
			}
			else if ((_get_ui_language_id() == 8 || _get_ui_language_id() == 9) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_119(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_118(uParam2, 0, 0);
			}
			else
			{
				func_117(uParam2, 0, 0);
			}
		}
		else if (_get_ui_language_id() == 8 && (are_strings_equal("HUD_CASH", sParam12) || are_strings_equal("HUD_CASH_NEG", sParam12)))
		{
			func_119(uParam2, 0, 0);
		}
		else
		{
			func_118(uParam2, 0, 0);
		}
		func_64(uParam1);
		func_116(uParam2);
		*uParam1.f_9 += 0.03f * 1f - func_93();
		func_63(6, iParam0);
		if (Global_1339940 == 1)
		{
			func_62(iParam6);
		}
		func_113(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_112(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_111(iParam0);
		}
		if (iParam16 == 0)
		{
			func_110(iParam0);
		}
		request_streamed_texture_dict("TimerBars", false);
		if (has_streamed_texture_dict_loaded("TimerBars"))
		{
			iVar37 = func_90();
			_set_2d_layer(iVar37);
			if (func_89(iParam9, &(Global_1339940.f_86[iParam0 /*2*/]), &(Global_1339940.f_107[iParam0 /*2*/])))
			{
				iVar36 = true;
			}
			else
			{
				iVar36 = false;
			}
			Var27 = *uParam3;
			Var27.f_1 = *uParam3.f_1;
			Var0 = *uParam3;
			Var0.f_1 = *uParam3.f_1 + 0.001f;
			if (iParam22 == 1)
			{
				Var27 += 0.079f;
				Var27.f_1 += 0.002f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.049f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var27 += 0.079f;
				Var27.f_1 += 0.008f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.036f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			else
			{
				Var27 += 0.079f;
				Var27.f_1 += 0.01f;
				Var27.f_2 += 0.157f;
				Var27.f_3 += 0.033f;
				Var27.f_4 += 255;
				Var27.f_5 += 255;
				Var27.f_6 += 255;
				Var27.f_7 = 140;
			}
			if (func_56())
			{
				Var27 += -0.025f;
				Var27.f_2 += 0.05f;
			}
			Global_1339940.f_4767 += Var27.f_3;
			if (iParam16 > 0)
			{
				Var38 = {Var27};
				if (func_184(&(Global_1339940.f_898[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_87(Global_1339940.f_898[iParam0 /*2*/], 1250, 0))
					{
						Global_1339940.f_919[iParam0] -= 17;
					}
					Var38.f_7 = Global_1339940.f_919[iParam0];
					if (iParam15 == 2)
					{
						func_86(&Var38, 6);
					}
					else
					{
						func_86(&Var38, iParam8);
					}
					func_48("TimerBars", "ALL_WHITE_bg", &Var38, 1, 0, iVar37, 0);
				}
			}
			else
			{
				Global_1339940.f_919[iParam0] = 255;
				func_85(&(Global_1339940.f_898[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_48("TimerBars", "ALL_WHITE_bg", &Var27, 1, 0, iVar37, 0);
			}
			else
			{
				func_48("TimerBars", "ALL_BLACK_bg", &Var27, 1, 0, iVar37, 0);
			}
			func_79(&Var27, iParam24);
			iVar37 = func_90();
			_set_2d_layer(iVar37);
			func_78(uParam1, iParam17);
			iVar47 = true;
			if (Global_2443098)
			{
				iVar47 = false;
			}
			if (Global_2443099 == 1)
			{
				iVar47 = true;
			}
			func_47(uParam1, 0);
			if (func_56())
			{
				if (iParam11)
				{
					if (_get_ui_language_id() == 9)
					{
						*uParam3.f_1 += -0.012f;
						*uParam4.f_1 += -0.004f;
					}
					else
					{
						*uParam3.f_1 += -0.004f;
					}
				}
				else if (func_56())
				{
					if (_get_ui_language_id() == 9)
					{
						*uParam3.f_1 += -0.012f;
						*uParam4.f_1 += -0.004f;
					}
					else
					{
						*uParam3.f_1 += -0.008f;
					}
				}
			}
			else if (iParam23)
			{
				*uParam3.f_1 += 0f;
			}
			else if (iParam11 && Global_2443098 == 0)
			{
				*uParam3.f_1 += -0.002f - 0.004f;
			}
			if (iParam22 == 1)
			{
				*uParam3.f_1 -= 0.007f;
				*uParam4.f_1 -= 0.007f;
			}
			if (iParam21 == 2)
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 3)
			{
				sParam7 = "HUD_BOOSTS";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			if (iParam11 == 1)
			{
				if (iVar47)
				{
					func_77(uParam3, uParam1, sParam7, "", iParam17, 2);
				}
				else
				{
					func_77(uParam3, uParam1, sParam7, "", iParam8, 2);
				}
			}
			else if (iParam10 == -1)
			{
				func_75(uParam3, uParam1, sParam7, 0, 1);
			}
			else
			{
				func_40(uParam3, uParam1, sParam7, iParam10, 2);
			}
			if (iParam22 == 1)
			{
				Var9 = *uParam2.f_9;
				Var9.f_1 = *uParam4.f_1 - 0.0175f;
				Var18 = *uParam2.f_9;
				Var18.f_1 = *uParam4.f_1 + 0.0175f;
				request_streamed_texture_dict("MPArrow", false);
				if (has_streamed_texture_dict_loaded("MPArrow"))
				{
					Var9 += 0.0095f;
					Var9 -= 0.015f;
					Var9.f_1 += 0.019f;
					Var9.f_2 += 0.01f;
					Var9.f_3 += 0.01f;
					Var9.f_4 += 0;
					Var9.f_5 += 0;
					Var9.f_6 += 0;
					Var9.f_7 -= 50;
					Var9.f_8 = -90f;
					func_48("MPArrow", "MP_ArrowXLarge", &Var9, 1, 0, iVar37, 0);
					Var18 += 0.0095f;
					Var18 -= 0.015f;
					Var18.f_1 += 0.019f;
					Var18.f_2 += 0.01f;
					Var18.f_3 += 0.01f;
					Var18.f_4 += 0;
					Var18.f_5 += 0;
					Var18.f_6 += 0;
					Var18.f_7 -= 50;
					Var18.f_8 = 90f;
					func_48("MPArrow", "MP_ArrowXLarge", &Var18, 1, 0, iVar37, 0);
				}
			}
			if (iParam18)
			{
				request_streamed_texture_dict("CommonMenu", false);
				if (has_streamed_texture_dict_loaded("CommonMenu"))
				{
					fVar48 = 0f;
					if (iParam11 == 1)
					{
						_set_text_entry_for_width("STRING");
						add_text_component_substring_player_name(sParam7);
						fVar49 = _get_text_screen_width(1);
					}
					else
					{
						_set_text_entry_for_width(sParam7);
						fVar49 = _get_text_screen_width(1);
					}
					if (_get_ui_language_id() == 8 && iParam11 == 0)
					{
						fVar50 = 0.153f - 0.072f;
						fVar51 = -0.457f;
					}
					else if (_get_ui_language_id() == 10 && iParam11 == 0)
					{
						fVar50 = 0.153f - 0.01f - 0.06f;
						fVar51 = -0.457f;
					}
					else if (_get_ui_language_id() == 9 && iParam11 == 0)
					{
						fVar50 = 0.153f - 0.012f - 0.06f;
						fVar51 = -0.457f;
					}
					else
					{
						fVar50 = 0.153f - 0.037f - 0.036f;
						fVar51 = -0.457f + 0.194f;
					}
					fVar50 += 0.03f;
					if (Global_1339940.f_941)
					{
						fVar50 += -0.03f;
					}
					if (GAMEPLAY::IS_PC_VERSION() && !get_is_widescreen())
					{
						fVar50 += -0.015f;
					}
					if (Global_1339940.f_942 && Global_1339940.f_941 == 0)
					{
						fVar50 += -0.015f - 0.003f;
					}
					fVar48 = fVar51 * fVar49 + fVar50;
					Var0 += fVar48;
					Var0 -= 0.015f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.022f;
					Var0.f_3 += 0.04f;
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 -= 50;
					func_48("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar37, 0);
				}
			}
			if (iVar36)
			{
				if (iParam21 != 0)
				{
					func_109(uParam2);
					Var52 = *uParam4 + 0.145f + 0.001f;
					if (func_56())
					{
						Var52.f_1 = *uParam4.f_1 + 0.019f - 0.006f;
					}
					else
					{
						Var52.f_1 = *uParam4.f_1 + 0.019f;
					}
					Var52.f_2 = 0.016f + 0.003f;
					Var52.f_3 = 0.032f + 0.004f;
					Var52.f_7 = 255;
					func_86(&Var52, 1);
					switch (iParam21)
					{
						case 4:
							Var52.f_3 += -0.009f;
							Var52.f_2 += -0.002f;
							if (func_56())
							{
								Var52.f_1 += -0.002f;
							}
							else
							{
								Var52.f_1 += -0.003f;
							}
							request_streamed_texture_dict("MPRPSymbol", false);
							if (has_streamed_texture_dict_loaded("MPRPSymbol"))
							{
								func_48("MPRPSymbol", "RP", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 2:
							request_streamed_texture_dict("TimerBars", false);
							if (has_streamed_texture_dict_loaded("TimerBars"))
							{
								func_48("TimerBars", "Rockets", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 1:
							request_streamed_texture_dict("TimerBars", false);
							if (has_streamed_texture_dict_loaded("TimerBars"))
							{
								func_48("TimerBars", "Spikes", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 3:
							request_streamed_texture_dict("TimerBars", false);
							if (has_streamed_texture_dict_loaded("TimerBars"))
							{
								func_48("TimerBars", "Boost", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 5:
							request_streamed_texture_dict("CrossTheLine", false);
							if (has_streamed_texture_dict_loaded("CrossTheLine"))
							{
								func_86(&Var52, 18);
								func_48("CrossTheLine", "Timer_LargeTick_32", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 6:
							request_streamed_texture_dict("CrossTheLine", false);
							if (has_streamed_texture_dict_loaded("CrossTheLine"))
							{
								func_86(&Var52, 6);
								func_48("CrossTheLine", "Timer_LargeCross_32", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 7:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Beast", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 8:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_B_Time", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 9:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Random", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 10:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Slow_Time", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 11:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Swap", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 12:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Testosterone", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 13:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Thermal", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 14:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Weed", &Var52, 1, 0, 4, 0);
							}
							break;
						
						case 15:
							request_streamed_texture_dict("TimerBar_Icons", false);
							if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
							{
								func_86(&Var52, 118);
								func_48("TimerBar_Icons", "Pickup_Hidden", &Var52, 1, 0, 4, 0);
							}
							break;
						}
				}
				func_47(uParam2, 0);
				iVar37 = func_90();
				_set_2d_layer(iVar37);
				if (iParam21 == 0 || iParam21 == 4)
				{
					if (iParam20)
					{
						func_77(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 4)
					{
						if (iParam13 == 0)
						{
							func_40(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_107(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2444549, 2);
						}
					}
					else if (func_46(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_40(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_107(uParam4, uParam2, "NUMBER", fParam14, Global_2444549, 2);
							}
						}
						else
						{
							func_105(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (are_strings_equal("HUD_CASH", sParam12) || are_strings_equal("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_47(uParam2, 0);
						func_104(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (are_strings_equal("HUD_CASH_NEG", sParam12) || are_strings_equal("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_47(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_104(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_40(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_107(uParam4, uParam2, sParam12, fParam14, Global_2444549, 2);
					}
				}
			}
			func_39();
		}
	}
}

void func_104(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_46(sVar0))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_justification(iParam4);
			_set_text_entry(sVar0);
			add_text_component_integer(iParam3);
			_add_text_component_substring_cash(iParam3, 1);
			_draw_text(func_43(*uParam0), func_42(*uParam0.f_1), 0);
		}
	}
}

void func_105(auto uParam0, auto uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_46(sVar0))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_centre(iParam6);
			set_text_justification(iParam5);
			func_106(func_43(*uParam0), func_42(*uParam0.f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_106(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_107(auto uParam0, auto uParam1, char* sParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	if (!func_46(sParam2))
	{
		if (func_44())
		{
			func_47(uParam1, 0);
			set_text_justification(iParam5);
			func_108(func_43(*uParam0), func_42(*uParam0.f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_108(float fParam0, float fParam1, char* sParam2, Vector3 fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_109(auto uParam0)
{
	*uParam0.f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f - 0.002f - 0.001f;
}

void func_110(int iParam0)
{
	func_14(&(Global_1339940.f_422[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_443[iParam0 /*2*/]));
}

void func_111(int iParam0)
{
	func_14(&(Global_1339940.f_86[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_107[iParam0 /*2*/]));
}

void func_112(auto uParam0, int iParam1)
{
	auto uVar0;
	auto uVar1;
	auto uVar2;
	auto uVar3;
	
	get_hud_colour(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	*uParam0.f_3 = uVar0;
	*uParam0.f_4 = uVar1;
	*uParam0.f_5 = uVar2;
	*uParam0.f_6 = uVar3;
}

void func_113(auto uParam0, auto uParam1, auto uParam2, int iParam3, auto uParam4)
{
	float fVar0;
	
	fVar0 = func_115(uParam0);
	*uParam1 = 0.795f;
	*uParam1.f_1 = func_60(iParam3);
	*uParam1.f_1 += func_59(uParam4);
	*uParam2 = 0.795f;
	*uParam2.f_1 = *uParam1.f_1 + func_114(uParam0);
	func_58(iParam3, -fVar0);
}

float func_114(auto uParam0)
{
	float fVar0;
	
	switch (*uParam0.f_10)
	{
		case 9:
			fVar0 = -0.01f - 0.005f + 0.004f - 0.0005f - 0.002f + 0.002f + 0.0005f;
			break;
		
		case 10:
			fVar0 = -0.025f - 0.003f + 0.002f - 0.006f + 0.001f;
			break;
		
		case 11:
			fVar0 = -0.047f - 0.004f + 0.012f + 0.001f + 0.007f;
			break;
		
		case 12:
			fVar0 = -0.019f + 0.011f + 0.004f;
			break;
		
		case 13:
			fVar0 = -0.012f + 0.001f;
			break;
		
		case 14:
			fVar0 = -0.012f + 0.001f + 0.001f;
			break;
		
		case 15:
			fVar0 = -0.035f - 0.008f + 0.006f + 0.013f + 0.0005f;
			break;
		
		case 16:
			fVar0 = -0.01f - 0.005f + 0.004f - 0.001f + 0.001f;
			break;
		
		case 17:
			fVar0 = -0.01f - 0.005f + 0.004f + 0.005f + 0.0007f;
			break;
		
		case 18:
			fVar0 = -0.01f - 0.005f + 0.004f + 0.005f + 0.003f;
			break;
		
		case 6:
			fVar0 = -0.01f - 0.005f + 0.004f + 0.005f;
			break;
		
		case 19:
			fVar0 = -0.01f - 0.005f + 0.004f + 0.005f;
			break;
	}
	if (func_56())
	{
		fVar0 += 0.003f;
	}
	return fVar0;
}

float func_115(auto uParam0)
{
	float fVar0;
	
	switch (*uParam0.f_10)
	{
		case 9:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f + 0.001f + 0.0018f + 0.0005f - 0.0005f;
			break;
		
		case 10:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f + 0.003f + 0.002f - 0.004f;
			break;
		
		case 11:
			fVar0 = 0.065f + 0.009f - 0.006f - 0.009f + 0.001f - 0.009f;
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = 0.065f + 0.009f;
			break;
		
		case 14:
			fVar0 = 0.065f + 0.009f - 0.015f - 0.022f;
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f + 0.001f + 0.002f + 0.0003f;
			break;
		
		case 17:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f - 0.0005f;
			break;
		
		case 18:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f;
			break;
		
		case 19:
			fVar0 = 0.035f + 0.023f - 0.003f + 0.001f - 0.007f - 0.012f;
			break;
	}
	return fVar0;
}

void func_116(auto uParam0)
{
	float fVar0;
	
	fVar0 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f + 0.001f;
	*uParam0.f_9 = fVar0;
	if (Global_1339940.f_934 == 0)
	{
		switch (*uParam0.f_10)
		{
			case 11:
				*uParam0.f_9 += 0.001f;
				break;
			
			case 10:
				*uParam0.f_9 += 0.001f;
				break;
			
			default:
				break;
			}
	}
	if (Global_1339940.f_934 == 1)
	{
		*uParam0.f_9 = fVar0;
		*uParam0.f_9 += -0.113f;
	}
}

void func_117(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 16;
}

void func_118(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.095f - 0.008f - 0.012f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 17;
}

void func_119(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.095f - 0.008f - 0.012f - 0.06f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 18;
}

void func_120(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.202f;
	*uParam0.f_2 = 0.416f + 0.089f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 23;
}

void func_121(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, auto uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20)
{
	auto uVar0;
	auto uVar11;
	auto uVar13;
	
	if (func_23(0, iParam0))
	{
		uVar13 = 4;
		func_122(iParam0, &uVar0, &uVar11, &uVar13, iParam1, iParam2, 1, sParam3, iParam4, iParam9, iParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20);
	}
}

void func_122(int iParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, auto uParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	struct<9> Var11;
	float fVar20;
	float fVar21;
	struct<8> Var22;
	
	Global_1339940++;
	if (func_68())
	{
		if (iParam15 == 2)
		{
		}
		func_63(0, iParam0);
		if (func_56())
		{
			if (iParam17)
			{
				func_135(uParam1, 0);
			}
			else
			{
				func_96(uParam1, 0);
			}
		}
		else if (iParam19)
		{
			func_66(uParam1, 0);
		}
		else if (iParam10)
		{
			func_95(uParam1, 3);
		}
		else if (iParam17)
		{
			func_134(uParam1, 0);
		}
		else
		{
			func_66(uParam1, 0);
		}
		if (Global_1339940 == 1)
		{
			func_62(iParam6);
		}
		func_132(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, iParam17);
		func_64(uParam1);
		*uParam1.f_9 += 0.03f * 1f - func_93();
		if (iParam11 == 0)
		{
			func_131(iParam0);
		}
		if (iParam16 == 0)
		{
			func_130(iParam0);
		}
		if (func_89(iParam11, &(Global_1339940.f_296[iParam0 /*2*/]), &(Global_1339940.f_317[iParam0 /*2*/])))
		{
			iVar9 = true;
		}
		else
		{
			iVar9 = false;
		}
		request_streamed_texture_dict("TimerBars", false);
		if (has_streamed_texture_dict_loaded("TimerBars"))
		{
			iVar10 = func_90();
			_set_2d_layer(iVar10);
			if (!func_88(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = *uParam2.f_1;
				if (iParam17)
				{
					Var0 += 0.079f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.036f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 += 0.079f;
					Var0.f_1 += 0.012f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.028f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_56())
				{
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1339940.f_4767 += Var0.f_3;
				if (iParam16 > 0)
				{
					Var11 = {Var0};
					if (func_184(&(Global_1339940.f_674[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_87(Global_1339940.f_674[iParam0 /*2*/], 1250, 0))
						{
							Global_1339940.f_695[iParam0] -= 17;
						}
						Var11.f_7 = Global_1339940.f_695[iParam0];
						func_86(&Var11, iParam8);
						func_48("TimerBars", "ALL_WHITE_bg", &Var11, 1, 0, iVar10, 0);
					}
				}
				else
				{
					Global_1339940.f_695[iParam0] = 255;
					func_85(&(Global_1339940.f_674[iParam0 /*2*/]), 0, 0);
				}
				func_48("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar10, 0);
			}
			func_79(&Var0, iParam21);
			if (func_56())
			{
				if (iParam17)
				{
					*uParam2.f_1 += -0.01f;
				}
				else if (iParam10)
				{
					if (_get_ui_language_id() == 9)
					{
						*uParam2.f_1 += -0.009f;
					}
					else
					{
						*uParam2.f_1 += -0.003f;
					}
				}
				else if (iParam17 == 0)
				{
					if (_get_ui_language_id() == 9)
					{
						*uParam2.f_1 += -0.009f;
					}
					else
					{
						*uParam2.f_1 += -0.003f;
					}
				}
				else if (_get_ui_language_id() == 9)
				{
					*uParam2.f_1 += -0.012f;
				}
				else
				{
					*uParam2.f_1 += -0.008f;
				}
			}
			else if (iParam17)
			{
				*uParam2.f_1 += -0.01f + 0.0022f + 0.001f;
			}
			else if (iParam10)
			{
				*uParam2.f_1 += -0.005f + 0.001f;
				*uParam2.f_1 += -0.002f;
			}
			iVar10 = func_90();
			_set_2d_layer(iVar10);
			if (!func_88(fParam12, fParam13))
			{
				if (iParam19)
				{
					func_78(uParam1, iParam8);
					func_47(uParam1, 0);
					func_77(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (iParam10 == 1)
				{
					func_78(uParam1, iParam8);
					func_47(uParam1, 0);
					func_77(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_47(uParam1, 0);
					if (iParam9 == -1)
					{
						func_75(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_40(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (iParam23)
			{
				if (!func_88(fParam12, fParam13))
				{
					fVar20 = func_101() + func_60(iParam6);
					fVar21 = func_129();
				}
				else
				{
					fVar20 = fParam13;
					fVar21 = fParam12;
				}
				Var22.f_1 = fVar20 + 0.0486f;
				Var22 = fVar21 - 0.0505f;
				Var22.f_2 = 0.18f;
				Var22.f_3 = 0.01f;
				Var22.f_4 = 255;
				Var22.f_5 = 255;
				Var22.f_6 = 255;
				Var22.f_7 = 255;
				func_86(&Var22, iParam24);
				func_48("TimerBars", "TPBar", &Var22, 0, 0, iVar10, 0);
			}
			iVar10 = func_90();
			_set_2d_layer(iVar10);
			if (iVar9)
			{
				if (iParam17)
				{
					func_128(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam20);
				}
				else
				{
					func_123(iParam4, iParam5, uParam3, iParam8, uParam14, iVar10, iParam18, iParam20);
				}
			}
			func_39();
		}
	}
}

void func_123(int iParam0, int iParam1, auto uParam2, int iParam3, auto uParam4, int iParam5, int iParam6, int iParam7)
{
	struct<9>[] Var0 = new struct<9>[2];
	float fVar19;
	char* sVar20;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	request_streamed_texture_dict("TimerBars", false);
	if (iParam7 != 0)
	{
		request_streamed_texture_dict("timerbar_lines", false);
	}
	if (has_streamed_texture_dict_loaded("TimerBars"))
	{
		func_127(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_127(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = {*(uParam2[0 /*9*/])};
		func_86(uParam2[1 /*9*/], iParam3);
		func_86(uParam2[3 /*9*/], iParam3);
		fVar19 = to_float(iParam0) / to_float(iParam1) * 100f;
		_set_2d_layer(iParam5);
		*(uParam2[3 /*9*/]).f_7 = 51;
		func_48("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_86(uParam2[3 /*9*/], iParam3);
		*(uParam2[3 /*9*/]).f_7 = 51;
		func_48("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		*(uParam2[3 /*9*/]).f_7 = 255;
		func_124(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4);
		_set_2d_layer(iParam5);
		func_48("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam7 != 0)
		{
			request_streamed_texture_dict("timerbar_lines", false);
			if (has_streamed_texture_dict_loaded("timerbar_lines"))
			{
				sVar20 = "LineMarker90_128";
				switch (iParam7)
				{
					case 1:
						sVar20 = "LineMarker10_128";
						break;
					
					case 2:
						sVar20 = "LineMarker20_128";
						break;
					
					case 3:
						sVar20 = "LineMarker30_128";
						break;
					
					case 4:
						sVar20 = "LineMarker40_128";
						break;
					
					case 5:
						sVar20 = "LineMarker50_128";
						break;
					
					case 6:
						sVar20 = "LineMarker60_128";
						break;
					
					case 7:
						sVar20 = "LineMarker70_128";
						break;
					
					case 8:
						sVar20 = "LineMarker80_128";
						break;
					
					case 9:
						sVar20 = "LineMarker90_128";
						break;
				}
				*(uParam2[3 /*9*/]).f_7 = 255;
				func_86(uParam2[3 /*9*/], 2);
				func_48("timerbar_lines", sVar20, uParam2[3 /*9*/], 0, 0, iParam5, 0);
			}
		}
		_set_2d_layer(iParam5);
		if (iParam6 > 0 && fVar19 >= IntToFloat(iParam6))
		{
			func_86(uParam2[1 /*9*/], 6);
			func_124(*(uParam2[0 /*9*/]), to_float(iParam6), uParam2[1 /*9*/], 1, 1, uParam4);
			_set_2d_layer(iParam5);
			func_48("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			_set_2d_layer(iParam5);
		}
		_set_2d_layer(iParam5);
	}
}

void func_124(struct<9> Param0, Vector3 fParam1, auto uParam2, int iParam3, int iParam4, auto uParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_126(Param0);
	fVar3 = fParam9;
	if (fParam9 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam9 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam9 > 95f && fParam9 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam12 == 0)
	{
		fVar4 = fVar1 - fVar0 / 100f;
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = fVar4 * fVar5 + fVar6;
		fVar2 = Param0;
		fVar8 = func_125(Param0);
		fVar9 = fVar8 - fVar7 / 2f;
	}
	else
	{
		fVar4 = fVar0 - fVar1 / 100f;
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = fVar4 * fVar5 + fVar6;
		if (fParam9 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = fVar8 - fVar2 / 100f;
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = fVar4 * fVar5 + fVar6;
	}
	*uParam10 = fVar9;
	*uParam10.f_1 = Param0.f_1;
	*uParam10.f_2 = fVar7;
	if (iParam11 == 1)
	{
		*uParam10.f_3 = Param0.f_3;
	}
	*uParam10.f_8 = Param0.f_8;
}

float func_125(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vParam0.z / 2f;
	fVar1 = vParam0.x;
	fVar1 += fVar0;
	fVar1 -= 0.002f;
	return fVar1;
}

float func_126(Vector3 vParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vParam0.z / 2f;
	fVar1 = vParam0.x;
	fVar1 -= fVar0;
	return fVar1;
}

void func_127(auto uParam0, auto uParam1)
{
	*uParam0 += *uParam1;
	*uParam0.f_1 += *uParam1.f_1;
	*uParam0.f_2 += *uParam1.f_2;
	*uParam0.f_3 += *uParam1.f_3;
	*uParam0.f_4 += *uParam1.f_4;
	*uParam0.f_5 += *uParam1.f_5;
	*uParam0.f_6 += *uParam1.f_6;
	*uParam0.f_7 += *uParam1.f_7;
}

void func_128(int iParam0, int iParam1, auto uParam2, int iParam3, auto uParam4, int iParam5, int iParam6)
{
	struct<9>[] Var0 = new struct<9>[2];
	float fVar19;
	char* sVar20;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	request_streamed_texture_dict("TimerBars", false);
	if (iParam6 != 0)
	{
		request_streamed_texture_dict("timerbar_lines", false);
	}
	if (has_streamed_texture_dict_loaded("TimerBars"))
	{
		func_127(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_127(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = {*(uParam2[0 /*9*/])};
		func_86(uParam2[1 /*9*/], iParam3);
		func_86(uParam2[3 /*9*/], iParam3);
		fVar19 = to_float(iParam0) / to_float(iParam1) * 100f;
		_set_2d_layer(iParam5);
		*(uParam2[3 /*9*/]).f_7 = 51;
		func_48("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_86(uParam2[3 /*9*/], iParam3);
		*(uParam2[3 /*9*/]).f_7 = 51;
		func_48("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		*(uParam2[3 /*9*/]).f_7 = 255;
		func_124(*(uParam2[0 /*9*/]), fVar19, uParam2[1 /*9*/], 1, 1, uParam4);
		_set_2d_layer(iParam5);
		func_48("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (iParam6 != 0)
		{
			request_streamed_texture_dict("timerbar_lines", false);
			if (has_streamed_texture_dict_loaded("timerbar_lines"))
			{
				sVar20 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar20 = "LineMarker10_128";
						break;
					
					case 2:
						sVar20 = "LineMarker20_128";
						break;
					
					case 3:
						sVar20 = "LineMarker30_128";
						break;
					
					case 4:
						sVar20 = "LineMarker40_128";
						break;
					
					case 5:
						sVar20 = "LineMarker50_128";
						break;
					
					case 6:
						sVar20 = "LineMarker60_128";
						break;
					
					case 7:
						sVar20 = "LineMarker70_128";
						break;
					
					case 8:
						sVar20 = "LineMarker80_128";
						break;
					
					case 9:
						sVar20 = "LineMarker90_128";
						break;
				}
				*(uParam2[1 /*9*/]).f_7 = 255;
				func_86(uParam2[1 /*9*/], 2);
				func_48("timerbar_lines", sVar20, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		_set_2d_layer(iParam5);
		_set_2d_layer(iParam5);
	}
}

float func_129()
{
	float fVar0;
	
	fVar0 = 0.919f - 0.081f + 0.028f + 0.05f - 0.001f - 0.002f;
	return fVar0;
}

void func_130(int iParam0)
{
	func_14(&(Global_1339940.f_632[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_653[iParam0 /*2*/]));
}

void func_131(int iParam0)
{
	func_14(&(Global_1339940.f_296[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_317[iParam0 /*2*/]));
	Global_1339940.f_946.f_205[iParam0] = -1;
}

void func_132(auto uParam0, auto uParam1, auto uParam2, int iParam3, float fParam4, float fParam5, auto uParam6, int iParam7)
{
	float fVar0;
	
	fVar0 = func_61(iParam7);
	*uParam0 = 0.795f;
	*uParam0.f_1 = func_60(iParam3);
	*uParam0.f_1 += func_59(uParam6);
	func_133(uParam1, iParam3, fParam4, fParam5);
	if (!func_88(fParam4, fParam5))
	{
		func_58(iParam3, -fVar0);
	}
	func_67(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_133(auto uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_88(fParam2, fParam3))
	{
		fVar0 = func_101() + func_60(iParam1);
		fVar1 = func_129();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	*uParam0[0 /*9*/] = fVar1;
	*(uParam0[0 /*9*/]).f_1 = fVar0;
	*(uParam0[0 /*9*/]).f_2 = 0.062f;
	*(uParam0[0 /*9*/]).f_3 = 0.016f;
	*(uParam0[0 /*9*/]).f_4 = 255;
	*(uParam0[0 /*9*/]).f_5 = 255;
	*(uParam0[0 /*9*/]).f_6 = 0;
	*(uParam0[0 /*9*/]).f_7 = 250;
	*uParam0[1 /*9*/] = fVar1;
	*(uParam0[1 /*9*/]).f_1 = fVar0;
	*(uParam0[1 /*9*/]).f_2 = 0.069f;
	*(uParam0[1 /*9*/]).f_3 = 0.011f;
	*(uParam0[1 /*9*/]).f_4 = 255;
	*(uParam0[1 /*9*/]).f_5 = 255;
	*(uParam0[1 /*9*/]).f_6 = 0;
	*(uParam0[1 /*9*/]).f_7 = 250;
	*uParam0[2 /*9*/] = fVar1;
	*(uParam0[2 /*9*/]).f_1 = fVar0;
	*(uParam0[2 /*9*/]).f_2 = 0.069f;
	*(uParam0[2 /*9*/]).f_3 = 0.009f;
	*(uParam0[2 /*9*/]).f_4 = 0;
	*(uParam0[2 /*9*/]).f_5 = 0;
	*(uParam0[2 /*9*/]).f_6 = 0;
	*(uParam0[2 /*9*/]).f_7 = 120;
	*uParam0[3 /*9*/] = fVar1;
	*(uParam0[3 /*9*/]).f_1 = fVar0;
	*(uParam0[3 /*9*/]).f_2 = 0.069f;
	*(uParam0[3 /*9*/]).f_3 = 0.008f;
	*(uParam0[3 /*9*/]).f_4 = 0;
	*(uParam0[3 /*9*/]).f_5 = 0;
	*(uParam0[3 /*9*/]).f_6 = 0;
	*(uParam0[3 /*9*/]).f_7 = 90;
}

void func_134(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.508f - 0.03f - 0.106f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 21;
}

void func_135(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.508f - 0.03f + 0.086f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 20;
}

void func_136(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	auto uVar0;
	auto uVar11;
	auto uVar13;
	auto uVar113;
	auto uVar124;
	auto uVar126;
	
	if (func_23(1, iParam0))
	{
		uVar13 = 11;
		func_137(iParam0, &uVar0, &uVar11, &uVar13, &uVar126, &uVar113, &uVar124, iParam1, iParam2, 1, sParam3, iParam4, iParam5, iParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_137(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var9;
	Vector3 vVar11;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<9> Var25;
	
	Global_1339940++;
	if (func_68())
	{
		if (iParam17 == 2)
		{
		}
		func_63(1, iParam0);
		if (func_56())
		{
			func_96(uParam1, 0);
		}
		else if (iParam13)
		{
			func_95(uParam1, 3);
		}
		else
		{
			func_66(uParam1, 0);
		}
		func_66(&vVar11, 0);
		vVar11.z += 0.166f + 0.095f;
		if (Global_1339940 == 1)
		{
			func_62(iParam9);
		}
		func_145(uParam5, 0, 0);
		func_116(uParam5);
		func_47(uParam5, 0);
		iVar23 = 0;
		if (iParam20 > 0)
		{
			iVar23 = 1;
		}
		func_143(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar23);
		Var9 = *uParam2;
		Var9.f_1 = *uParam2.f_1;
		Var9.f_1 += -0.006f - 0.007f;
		func_64(uParam1);
		*uParam1.f_9 += 0.03f * 1f - func_93();
		func_142(&vVar11);
		if (iParam14 == 0)
		{
			func_141(iParam0);
		}
		if (iParam18 == 0)
		{
			func_140(iParam0);
		}
		request_streamed_texture_dict("TimerBars", false);
		if (has_streamed_texture_dict_loaded("TimerBars"))
		{
			iVar24 = func_90();
			_set_2d_layer(iVar24);
			if (func_89(iParam14, &(Global_1339940.f_254[iParam0 /*2*/]), &(Global_1339940.f_275[iParam0 /*2*/])))
			{
				iVar22 = true;
			}
			else
			{
				iVar22 = false;
			}
			if (!func_88(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = *uParam2.f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 += 0.079f;
					Var0.f_1 += 0.012f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.028f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 += 0.079f;
					Var0.f_1 += 0.008f;
					Var0.f_2 += 0.157f;
					Var0.f_3 += 0.036f;
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_56())
				{
					Var0 += -0.025f;
					Var0.f_2 += 0.05f;
				}
				Global_1339940.f_4767 += Var0.f_3;
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var25 = {Var0};
					if (func_184(&(Global_1339940.f_866[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_87(Global_1339940.f_866[iParam0 /*2*/], 1250, 0))
						{
							Global_1339940.f_887[iParam0] -= 17;
						}
						Var25.f_7 = Global_1339940.f_887[iParam0];
						func_86(&Var25, iParam11);
						func_48("TimerBars", "ALL_WHITE_bg", &Var25, 1, 0, iVar24, 0);
					}
				}
				else
				{
					Global_1339940.f_887[iParam0] = 255;
					func_85(&(Global_1339940.f_866[iParam0 /*2*/]), 0, 0);
				}
				func_48("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar24, 0);
			}
			func_79(&Var0, iParam29);
			if (iParam13)
			{
				if (_get_ui_language_id() == 9)
				{
					*uParam2.f_1 += -0.009f;
				}
				else
				{
					*uParam2.f_1 += -0.003f;
					if (func_56() == 0)
					{
						*uParam2.f_1 += -0.002f;
					}
				}
			}
			else if (func_56())
			{
				if (_get_ui_language_id() == 9)
				{
					*uParam2.f_1 += -0.009f;
				}
				else
				{
					*uParam2.f_1 += -0.003f;
				}
			}
			iVar24 = func_90();
			_set_2d_layer(iVar24);
			if (!func_88(fParam15, fParam16))
			{
				func_47(uParam1, 0);
				if (iParam13 == 1)
				{
					func_77(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == -1)
				{
					func_75(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_40(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_40(&Var9, &vVar11, "HUD_MULTSMAL", iParam20, 2);
			}
			if (iVar22)
			{
				func_138(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar24, iParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_39();
		}
	}
}

void func_138(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		request_streamed_texture_dict("TimerBars", false);
		if (has_streamed_texture_dict_loaded("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= iParam1 - 1)
			{
				*uParam2[iVar1 /*9*/] += fVar0 * IntToFloat(iVar1);
				if (iParam1 - iVar1 > iParam0)
				{
					func_86(uParam2[iVar1 /*9*/], iParam5);
					*(uParam2[iVar1 /*9*/]).f_7 = 51;
					func_48("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_86(uParam2[iVar1 /*9*/], iParam5);
					func_48("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_72(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_86(uParam2[iVar1 /*9*/], 2);
						func_48("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_105(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_139(uParam3);
		if (iParam7)
		{
			request_streamed_texture_dict("TimerBars", false);
			if (has_streamed_texture_dict_loaded("TimerBars"))
			{
				*uParam2[0 /*9*/] += 0.058f - 0.06f;
				*(uParam2[0 /*9*/]).f_1 += -0.005f;
				*(uParam2[0 /*9*/]).f_2 += 0.003f - 0.005f + 0.002f;
				*(uParam2[0 /*9*/]).f_3 += 0.009f - 0.01f;
				func_86(uParam2[0 /*9*/], iParam5);
				func_48("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((iParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_105(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_139(auto uParam0)
{
	*uParam0.f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f;
}

void func_140(int iParam0)
{
	func_14(&(Global_1339940.f_590[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_611[iParam0 /*2*/]));
}

void func_141(int iParam0)
{
	func_14(&(Global_1339940.f_254[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_275[iParam0 /*2*/]));
	Global_1339940.f_1368.f_205[iParam0] = -1;
}

void func_142(auto uParam0)
{
	float fVar0;
	
	fVar0 = 0.88f - 0.062f + 0.026f + 0.027f + 0.037f + 0.003f;
	*uParam0.f_9 = fVar0;
}

void func_143(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, float fParam8, float fParam9, auto uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_115(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_61(iParam11);
	}
	*uParam1 = 0.795f;
	*uParam1.f_1 = func_60(iParam7);
	*uParam1.f_1 += func_59(uParam10);
	*uParam4 = 0.795f;
	*uParam4.f_1 = *uParam1.f_1 + func_114(uParam5);
	func_144(uParam2, iParam7, fParam8, fParam9);
	func_98(uParam6);
	if (!func_88(fParam8, fParam9))
	{
		func_58(iParam7, -fVar0);
	}
	func_67(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_144(auto uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_88(fParam2, fParam3))
	{
		fVar0 = func_101() + func_60(iParam1);
		fVar1 = func_100();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	*uParam0[0 /*9*/] = fVar1;
	*(uParam0[0 /*9*/]).f_1 = fVar0;
	*(uParam0[0 /*9*/]).f_2 = 0.012f;
	*(uParam0[0 /*9*/]).f_3 = 0.023f;
	*(uParam0[0 /*9*/]).f_4 = 0;
	*(uParam0[0 /*9*/]).f_5 = 0;
	*(uParam0[0 /*9*/]).f_6 = 0;
	*(uParam0[0 /*9*/]).f_7 = 250;
	*uParam0[1 /*9*/] = fVar1;
	*(uParam0[1 /*9*/]).f_1 = fVar0;
	*(uParam0[1 /*9*/]).f_2 = 0.012f;
	*(uParam0[1 /*9*/]).f_3 = 0.023f;
	*(uParam0[1 /*9*/]).f_4 = 0;
	*(uParam0[1 /*9*/]).f_5 = 0;
	*(uParam0[1 /*9*/]).f_6 = 0;
	*(uParam0[1 /*9*/]).f_7 = 250;
	*uParam0[2 /*9*/] = fVar1;
	*(uParam0[2 /*9*/]).f_1 = fVar0;
	*(uParam0[2 /*9*/]).f_2 = 0.012f;
	*(uParam0[2 /*9*/]).f_3 = 0.023f;
	*(uParam0[2 /*9*/]).f_4 = 0;
	*(uParam0[2 /*9*/]).f_5 = 0;
	*(uParam0[2 /*9*/]).f_6 = 0;
	*(uParam0[2 /*9*/]).f_7 = 250;
	*uParam0[3 /*9*/] = fVar1;
	*(uParam0[3 /*9*/]).f_1 = fVar0;
	*(uParam0[3 /*9*/]).f_2 = 0.012f;
	*(uParam0[3 /*9*/]).f_3 = 0.023f;
	*(uParam0[3 /*9*/]).f_4 = 0;
	*(uParam0[3 /*9*/]).f_5 = 0;
	*(uParam0[3 /*9*/]).f_6 = 0;
	*(uParam0[3 /*9*/]).f_7 = 250;
	*uParam0[4 /*9*/] = fVar1;
	*(uParam0[4 /*9*/]).f_1 = fVar0;
	*(uParam0[4 /*9*/]).f_2 = 0.012f;
	*(uParam0[4 /*9*/]).f_3 = 0.023f;
	*(uParam0[4 /*9*/]).f_4 = 0;
	*(uParam0[4 /*9*/]).f_5 = 0;
	*(uParam0[4 /*9*/]).f_6 = 0;
	*(uParam0[4 /*9*/]).f_7 = 250;
	*uParam0[5 /*9*/] = fVar1;
	*(uParam0[5 /*9*/]).f_1 = fVar0;
	*(uParam0[5 /*9*/]).f_2 = 0.012f;
	*(uParam0[5 /*9*/]).f_3 = 0.023f;
	*(uParam0[5 /*9*/]).f_4 = 0;
	*(uParam0[5 /*9*/]).f_5 = 0;
	*(uParam0[5 /*9*/]).f_6 = 0;
	*(uParam0[5 /*9*/]).f_7 = 250;
	*uParam0[6 /*9*/] = fVar1;
	*(uParam0[6 /*9*/]).f_1 = fVar0;
	*(uParam0[6 /*9*/]).f_2 = 0.012f;
	*(uParam0[6 /*9*/]).f_3 = 0.023f;
	*(uParam0[6 /*9*/]).f_4 = 0;
	*(uParam0[6 /*9*/]).f_5 = 0;
	*(uParam0[6 /*9*/]).f_6 = 0;
	*(uParam0[6 /*9*/]).f_7 = 250;
	*uParam0[7 /*9*/] = fVar1;
	*(uParam0[7 /*9*/]).f_1 = fVar0;
	*(uParam0[7 /*9*/]).f_2 = 0.012f;
	*(uParam0[7 /*9*/]).f_3 = 0.023f;
	*(uParam0[7 /*9*/]).f_4 = 0;
	*(uParam0[7 /*9*/]).f_5 = 0;
	*(uParam0[7 /*9*/]).f_6 = 0;
	*(uParam0[7 /*9*/]).f_7 = 250;
	*uParam0[8 /*9*/] = fVar1;
	*(uParam0[8 /*9*/]).f_1 = fVar0;
	*(uParam0[8 /*9*/]).f_2 = 0.012f;
	*(uParam0[8 /*9*/]).f_3 = 0.023f;
	*(uParam0[8 /*9*/]).f_4 = 0;
	*(uParam0[8 /*9*/]).f_5 = 0;
	*(uParam0[8 /*9*/]).f_6 = 0;
	*(uParam0[8 /*9*/]).f_7 = 250;
	*uParam0[9 /*9*/] = fVar1;
	*(uParam0[9 /*9*/]).f_1 = fVar0;
	*(uParam0[9 /*9*/]).f_2 = 0.012f;
	*(uParam0[9 /*9*/]).f_3 = 0.023f;
	*(uParam0[9 /*9*/].f_4) = 0;
	*(uParam0[9 /*9*/]).f_5 = 0;
	*(uParam0[9 /*9*/]).f_6 = 0;
	*(uParam0[9 /*9*/]).f_7 = 250;
}

void func_145(auto uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.469f + 0.096f - 0.017f + 0.022f - 0.062f - 0.001f - 0.013f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 9;
}

void func_146(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	auto uVar0;
	auto uVar11;
	auto uVar22;
	auto uVar24;
	
	if (func_23(5, iParam0))
	{
		func_103(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, iParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	auto uVar0;
	auto uVar11;
	auto uVar22;
	auto uVar24;
	
	if (func_23(4, iParam0))
	{
		func_103(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam3, iParam4, iParam5, iParam6, iParam7, "", 0, 0f, iParam8, iParam9, iParam12, iParam10, iParam2, 0, 0, 0, iParam11, iParam13);
	}
}

void func_148(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	auto uVar0;
	auto uVar11;
	auto uVar22;
	auto uVar24;
	
	if (func_23(3, iParam0))
	{
		func_103(iParam0, &uVar0, &uVar11, &uVar22, &uVar24, iParam1, 1, sParam2, iParam3, iParam4, iParam5, iParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, iParam9, 0, 0, 0, iParam12);
	}
}

void func_149(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	auto uVar0;
	auto uVar11;
	auto uVar22;
	auto uVar33;
	auto uVar35;
	auto uVar37;
	
	if (func_23(7, iParam0))
	{
		func_150(iParam0, &uVar0, &uVar11, &uVar22, &uVar33, &uVar35, &uVar37, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16);
	}
}

void func_150(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	auto uVar0;
	auto uVar11;
	struct<9> Var13;
	int iVar22;
	int iVar23;
	struct<8> Var24;
	struct<9> Var33;
	
	Global_1339940++;
	if (iParam17 == 2)
	{
	}
	func_67(&Var13, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_63(7, iParam0);
	if (iParam21)
	{
		func_66(uParam1, 0);
	}
	else if (iParam16)
	{
		func_95(uParam1, 3);
	}
	else if (func_56())
	{
		func_120(uParam1, 0);
	}
	else
	{
		func_66(uParam1, 0);
	}
	func_164(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (iParam19)
			{
				func_163(uParam3, 0);
				func_145(uParam2, 0, 0);
			}
			else
			{
				func_163(uParam3, 0);
				func_145(uParam2, 0, 5);
			}
			func_116(uParam2);
			func_116(uParam3);
			break;
		
		case 2:
			func_145(uParam2, 0, 0);
			func_116(&uVar0);
			func_116(uParam3);
			func_162(uParam2);
			break;
		
		case 3:
			func_145(uParam2, 0, 0);
			func_116(&uVar0);
			func_116(uParam3);
			func_162(uParam2);
			break;
		
		case 4:
			func_145(uParam3, 0, 0);
			if (iParam19)
			{
				func_145(uParam2, 0, 0);
			}
			else
			{
				func_145(uParam2, 0, 5);
			}
			func_116(uParam2);
			func_116(uParam3);
			break;
	}
	func_64(uParam1);
	if (Global_1339940.f_941 == 0 && Global_1339940.f_942 == 0)
	{
		if (iParam13 == 1)
		{
			*uParam1.f_9 += -0.016f;
			if (func_56())
			{
				*uParam1.f_9 += -0.008f;
			}
		}
	}
	else if (Global_1339940.f_941 == 0 && Global_1339940.f_942 == 1)
	{
		if (iParam13 == 1)
		{
			*uParam1.f_9 += 0f;
			if (func_56())
			{
				*uParam1.f_9 += -0.009f;
			}
		}
	}
	if (Global_1339940 == 1)
	{
		func_62(iParam8);
	}
	func_161(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar11);
	*uParam1.f_9 += 0.03f * 1f - func_93();
	func_112(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_160(iParam0);
	}
	if (iParam18 == 0)
	{
		func_159(iParam0);
	}
	request_streamed_texture_dict("TimerBars", false);
	if (has_streamed_texture_dict_loaded("TimerBars"))
	{
		iVar23 = func_90();
		_set_2d_layer(iVar23);
		if (func_89(iParam14, &(Global_1339940.f_170[iParam0 /*2*/]), &(Global_1339940.f_191[iParam0 /*2*/])))
		{
			iVar22 = true;
		}
		else
		{
			iVar22 = false;
		}
		Var13 = *uParam4;
		Var13.f_1 = *uParam4.f_1;
		if (Global_1339940.f_934 == 1)
		{
			Var13 += -0.113f;
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var13 += 0.079f;
				Var13.f_1 += 0.008f;
				Var13.f_2 += 0.157f;
				Var13.f_3 += 0.036f;
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 2:
				Var13 += 0.079f;
				Var13.f_1 += 0.008f;
				Var13.f_2 += 0.157f;
				Var13.f_3 += 0.036f;
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 3:
				Var13 += 0.079f;
				Var13.f_1 += 0.008f;
				Var13.f_2 += 0.157f;
				Var13.f_3 += 0.036f;
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
			
			case 4:
				Var13 += 0.079f;
				Var13.f_1 += 0.008f;
				Var13.f_2 += 0.157f;
				Var13.f_3 += 0.036f;
				Var13.f_4 += 255;
				Var13.f_5 += 255;
				Var13.f_6 += 255;
				Var13.f_7 = 140;
				break;
		}
		Var24 = *uParam5 + 0.145f + 0.001f;
		if (func_56())
		{
			Var24.f_1 = *uParam5.f_1 + 0.019f - 0.006f;
		}
		else
		{
			Var24.f_1 = *uParam5.f_1 + 0.019f;
		}
		Var24.f_2 = 0.016f + 0.003f;
		Var24.f_3 = 0.032f + 0.004f;
		Var24.f_7 = 255;
		func_86(&Var24, 1);
		Var24 = *uParam1.f_9 - *uParam2.f_9 - *uParam1.f_9 / 8f;
		if (func_56())
		{
			Var24 -= 0.003f;
		}
		switch (iParam23)
		{
			case 4:
				Var24.f_3 += -0.009f;
				Var24.f_2 += -0.002f;
				if (func_56())
				{
					Var24.f_1 += -0.002f;
				}
				else
				{
					Var24.f_1 += -0.003f;
				}
				request_streamed_texture_dict("MPRPSymbol", false);
				if (has_streamed_texture_dict_loaded("MPRPSymbol"))
				{
					func_48("MPRPSymbol", "RP", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				request_streamed_texture_dict("TimerBars", false);
				if (has_streamed_texture_dict_loaded("TimerBars"))
				{
					func_48("TimerBars", "Rockets", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				request_streamed_texture_dict("TimerBars", false);
				if (has_streamed_texture_dict_loaded("TimerBars"))
				{
					func_48("TimerBars", "Spikes", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 3:
				request_streamed_texture_dict("TimerBars", false);
				if (has_streamed_texture_dict_loaded("TimerBars"))
				{
					func_48("TimerBars", "Boost", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 5:
				request_streamed_texture_dict("CrossTheLine", false);
				if (has_streamed_texture_dict_loaded("CrossTheLine"))
				{
					func_86(&Var24, 18);
					func_48("CrossTheLine", "Timer_LargeTick_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				request_streamed_texture_dict("CrossTheLine", false);
				if (has_streamed_texture_dict_loaded("CrossTheLine"))
				{
					func_86(&Var24, 6);
					func_48("CrossTheLine", "Timer_LargeCross_32", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Beast", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_B_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Random", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Slow_Time", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Swap", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Testosterone", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Thermal", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Weed", &Var24, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				request_streamed_texture_dict("TimerBar_Icons", false);
				if (has_streamed_texture_dict_loaded("TimerBar_Icons"))
				{
					func_86(&Var24, 118);
					func_48("TimerBar_Icons", "Pickup_Hidden", &Var24, 1, 0, 4, 0);
				}
				break;
		}
		if (func_56())
		{
			Var13 += -0.025f;
			Var13.f_2 += 0.05f;
		}
		Global_1339940.f_4767 += Var13.f_3;
		if (Global_1339940.f_934 == 0)
		{
			if (iParam18 > 0)
			{
				Var33 = {Var13};
				if (func_184(&(Global_1339940.f_898[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_87(Global_1339940.f_898[iParam0 /*2*/], 1250, 0))
					{
						Global_1339940.f_919[iParam0] -= 17;
					}
					Var33.f_7 = Global_1339940.f_919[iParam0];
					func_86(&Var33, iParam12);
					func_48("TimerBars", "ALL_WHITE_bg", &Var33, 1, 0, iVar23, 0);
				}
			}
			else
			{
				Global_1339940.f_919[iParam0] = 255;
				func_85(&(Global_1339940.f_898[iParam0 /*2*/]), 0, 0);
			}
			func_48("TimerBars", "ALL_BLACK_bg", &Var13, 1, 0, iVar23, 0);
		}
		func_79(&Var13, iParam22);
		if (iParam16)
		{
			if (_get_ui_language_id() == 9)
			{
				*uParam4.f_1 += -0.012f;
			}
			else
			{
				*uParam4.f_1 += -0.004f;
			}
		}
		else if (func_56())
		{
			if (_get_ui_language_id() == 9)
			{
				*uParam4.f_1 += -0.012f;
			}
			else
			{
				*uParam4.f_1 += -0.008f;
			}
		}
		iVar23 = func_90();
		_set_2d_layer(iVar23);
		func_112(uParam1, iParam20);
		if (Global_1339940.f_934 == 0)
		{
			func_47(uParam1, 0);
			if (func_46(sParam11) == 0)
			{
				if (iParam21 == 1)
				{
					func_77(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam16 == 1)
				{
					*uParam1 = 4;
					func_77(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == -1)
				{
					func_75(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_40(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (iVar22)
		{
			if (iParam9 == 0)
			{
				func_158(iParam0);
			}
			if (iParam9 != 0 && func_184(&(Global_1339940.f_4109.f_336[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_157(uParam3);
						func_156(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_155(uParam3);
					}
					else
					{
						func_154(uParam3);
						func_156(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_155(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_154(uParam3);
					func_156(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_155(uParam3);
				}
				else
				{
					func_157(uParam3);
					func_156(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_155(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_153(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_152(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_151(uParam2);
					}
				}
				if (Global_1339940.f_934 == 1)
				{
					*uParam2.f_7 = 0;
					_set_2d_layer(7);
				}
				func_47(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (iParam19)
						{
							func_77(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 += 0.117f;
							func_156(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 0:
						if (iParam19)
						{
							func_77(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 += 0.117f;
							func_156(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 += 0.12f;
						func_156(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_75(&uVar11, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 += 0.12f;
						func_156(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_75(&uVar11, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 += 0.12f;
						if (iParam19)
						{
							func_77(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_156(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 += 0.117f;
						func_156(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_39();
	}
}

void func_151(auto uParam0)
{
	func_78(uParam0, 109);
}

void func_152(auto uParam0)
{
	func_78(uParam0, 108);
}

void func_153(auto uParam0)
{
	func_78(uParam0, 107);
}

void func_154(auto uParam0)
{
	func_78(uParam0, 6);
}

void func_155(auto uParam0)
{
	func_78(uParam0, 1);
}

void func_156(auto uParam0, auto uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_44())
	{
		func_47(uParam1, 0);
		set_text_right_justify(iParam6);
		set_text_centre(iParam5);
		if (func_46(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		_set_text_entry(sVar0);
		add_text_component_substring_time(iParam2, iParam3);
		_draw_text(func_43(*uParam0), func_42(*uParam0.f_1), 0);
	}
}

void func_157(auto uParam0)
{
	func_78(uParam0, 18);
}

void func_158(int iParam0)
{
	func_14(&(Global_1339940.f_4109.f_336[iParam0 /*2*/]));
}

void func_159(int iParam0)
{
	func_14(&(Global_1339940.f_506[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_527[iParam0 /*2*/]));
}

void func_160(int iParam0)
{
	func_14(&(Global_1339940.f_170[iParam0 /*2*/]));
	func_14(&(Global_1339940.f_191[iParam0 /*2*/]));
}

void func_161(auto uParam0, auto uParam1, auto uParam2, auto uParam3, int iParam4, auto uParam5, auto uParam6, auto uParam7)
{
	float fVar0;
	
	fVar0 = func_115(uParam0);
	*uParam1 = 0.795f;
	*uParam1.f_1 = func_60(iParam4);
	*uParam1.f_1 += func_59(uParam5);
	*uParam2 = 0.795f;
	*uParam2.f_1 = *uParam1.f_1 + func_114(uParam0);
	*uParam7 = 0.795f;
	*uParam7.f_1 = *uParam1.f_1 + func_114(uParam6);
	*uParam3 = *uParam2;
	*uParam3.f_1 = *uParam2.f_1;
	func_58(iParam4, -fVar0);
}

void func_162(auto uParam0)
{
	*uParam0.f_9 = 0.95f - 0.047f + 0.001f + 0.047f - 0.002f - 0.013f + 0.014f - 0.024f + 0.005f;
}

void func_163(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.315f + 0.183f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 15;
}

void func_164(auto uParam0, int iParam1)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0.332f;
	*uParam0.f_2 = 0.5f + 0.004f - 0.01f - 0.11f;
	*uParam0.f_3 = 255;
	*uParam0.f_4 = 255;
	*uParam0.f_5 = 255;
	*uParam0.f_6 = 255;
	*uParam0.f_7 = iParam1;
	*uParam0.f_8 = 0f;
	*uParam0.f_9 = 0f;
	*uParam0.f_10 = 19;
}

void func_165(int iParam0)
{
	if (func_166())
	{
		if (iParam0)
		{
			_0xC6372ECD45D73BCD(1);
		}
		else
		{
			_0xC6372ECD45D73BCD(0);
		}
	}
}

bool func_166()
{
	if (func_167(player_id()))
	{
		return true;
	}
	return false;
}

bool func_167(int iParam0)
{
	switch (func_168(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return false;
		
		default:
	}
	return true;
}

auto func_168(auto uParam0)
{
	return Global_1587523[uParam0 /*444*/].f_180;
}

bool func_169(int iParam0)
{
	if (Global_2444574 == 1)
	{
		return false;
	}
	if (func_172() == 0)
	{
		if (is_pause_menu_active())
		{
			return false;
		}
	}
	if ((iParam0 != 1 && Global_1339940.f_935 == 0) && Global_1339940.f_936 == 0)
	{
		if (func_170())
		{
			return false;
		}
	}
	return true;
}

bool func_170()
{
	Vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_171())
	{
		vVar0 = {0f, -500f, 0f};
		get_mobile_phone_position(&vVar0);
		if (Global_14358 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_171()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

auto func_172()
{
	return Global_25120;
}

bool func_173()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Global_1339940.f_4736[iVar0] != Global_1339940.f_4726[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	if (Global_1339940.f_4766)
	{
		Global_1339940.f_4766 = 0;
		return true;
	}
	return false;
}

bool func_174()
{
	if (Global_1312363)
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_is_text_chat_active())
	{
		return false;
	}
	if (Global_1724230.f_4)
	{
		return false;
	}
	if (Global_1339940.f_938 || Global_1339940.f_939)
	{
		if (Global_1339940.f_940 == 0)
		{
			if (func_178(PLAYER::PLAYER_PED_ID()))
			{
				func_177();
			}
		}
		return true;
	}
	if (func_45())
	{
		if (Global_1339940.f_940 == 0)
		{
			if (func_178(PLAYER::PLAYER_PED_ID()))
			{
				func_177();
			}
		}
		return true;
	}
	if (Global_2445440)
	{
		return false;
	}
	if (Global_1318729)
	{
		return false;
	}
	if (func_176())
	{
		if (Global_1339940.f_940 == 0)
		{
			if (func_178(PLAYER::PLAYER_PED_ID()))
			{
				func_177();
			}
		}
		return true;
	}
	if (Global_17118.f_4 && func_167(player_id()) == 0)
	{
		return false;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (Global_1339940.f_940 == 0)
	{
		if (func_178(PLAYER::PLAYER_PED_ID()))
		{
			func_177();
		}
	}
	if (func_175(8, -1))
	{
		return false;
	}
	if (is_hud_preference_switched_on() == 0)
	{
		return false;
	}
	if (func_172() == 0 || func_172() == 2)
	{
		if (Global_2418472[player_id() /*313*/].f_220 != 99)
		{
			if (((network_is_in_spectator_mode() == 0 && Global_1573828 == 0) && !GAMEPLAY::IS_BIT_SET(Global_2428492.f_1358.f_743, 11)) && Global_1587523[player_id() /*444*/] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int func_175(int iParam0, int iParam1)
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

bool func_176()
{
	if (Global_1705901)
	{
		return true;
	}
	return false;
}

void func_177()
{
	Global_1339940.f_940 = 1;
}

bool func_178(int iParam0)
{
	int iVar0;
	
	if (is_first_person_aim_cam_active())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return true;
			}
		}
	}
	return false;
}

void func_179()
{
	int iVar0;
	
	if (func_182(2))
	{
		iVar0 = false;
		while (iVar0 <= 9)
		{
			if (func_24(2, iVar0) && func_23(2, iVar0))
			{
				func_14(&(Global_1339940.f_1713.f_555[iVar0 /*2*/]));
			}
			else if (func_184(&(Global_1339940.f_1713.f_555[iVar0 /*2*/]), Global_1339940.f_1713.f_576[iVar0], 0) == 0)
			{
				Global_1339940.f_1 = 1;
				func_181(2, iVar0);
			}
			else
			{
				func_180(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1339940.f_4756[iParam0]), iParam1);
}

void func_181(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1339940.f_4726[iParam0]), iParam1);
}

bool func_182(int iParam0)
{
	if (Global_1339940.f_4756[iParam0] > 0)
	{
		return true;
	}
	return false;
}

void func_183(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

bool func_184(auto uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_185(uParam0, iParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam2)
	{
		if (absi(get_time_difference(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_185(auto uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iParam1)
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
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		*uParam0.f_1 = 1;
	}
}

