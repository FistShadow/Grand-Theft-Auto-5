void main()
{
	if (is_screen_faded_out())
	{
		do_screen_fade_in(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
	}
}

void func_1()
{
	terminate_this_thread();
}

