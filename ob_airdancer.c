#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
#endregion

void main()
{
	if (has_force_cleanup_occurred(2))
	{
		func_1();
	}
	if (does_entity_exist(iLocal_3))
	{
		freeze_entity_position(iLocal_3, true);
	}
	while (true)
	{
		wait(0);
		if (does_entity_exist(iLocal_3))
		{
			if (is_object_within_brain_activation_range(iLocal_3))
			{
				switch (iLocal_2)
				{
					case 0:
						if (does_entity_have_drawable(iLocal_3))
						{
							request_anim_dict("map_objects");
							if (has_anim_dict_loaded("map_objects"))
							{
								play_entity_anim(iLocal_3, "airdancer_test", "map_objects", 1f, true, 0, 0, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	terminate_this_thread();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

