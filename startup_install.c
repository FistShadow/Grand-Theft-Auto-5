void main()
{
	network_set_script_is_safe_for_network_game();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		wait(false);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

