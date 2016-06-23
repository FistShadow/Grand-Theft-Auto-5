void main()
{
	if (has_force_cleanup_occurred(3))
	{
		terminate_this_thread();
	}
	terminate_this_thread();
}

