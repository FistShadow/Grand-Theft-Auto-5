void main()
{
	if (has_force_cleanup_occurred(2))
	{
		terminate_this_thread();
	}
}

