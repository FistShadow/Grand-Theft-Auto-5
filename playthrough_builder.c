void main()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		terminate_this_thread();
	}
}

