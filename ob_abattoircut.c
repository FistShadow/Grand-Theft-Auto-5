#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
#endregion

void main()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3, true);
	}
	while (true)
	{
		wait(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
		{
			if (is_object_within_brain_activation_range(iLocal_3) && _get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (does_entity_have_drawable(iLocal_3))
						{
							request_anim_dict("MISSMIC2");
							if (has_anim_dict_loaded("MISSMIC2"))
							{
								play_entity_anim(iLocal_3, "beefsplitter_loop", "MISSMIC2", 1f, true, 0, 0, 0f, 0);
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
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	remove_anim_dict("MISSMIC2");
	terminate_this_thread();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

