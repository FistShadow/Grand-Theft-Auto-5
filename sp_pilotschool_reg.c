void main()
{
	start_save_data(&Global_2883584, 1, 1);
	func_1();
	stop_save_data();
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2563984, true);
}

void func_1()
{
	register_int_to_save(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA");
}

