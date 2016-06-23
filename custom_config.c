void main()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		terminate_this_thread();
	}
	terminate_this_thread();
}

