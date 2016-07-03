#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
#endregion

void main()
{
	int iVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_5))
		{
			if (is_object_within_brain_activation_range(iLocal_5) && _get_number_of_instances_of_streamed_script(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar0 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
							if (is_valid_interior(iVar0))
							{
								if (is_interior_ready(iVar0))
								{
									if (is_interior_scene())
									{
										request_ptfx_asset();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (has_ptfx_asset_loaded())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4))
								{
									iLocal_4 = get_closest_object_of_type(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!does_particle_fx_looped_exist(iLocal_3))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
									{
										iVar0 = get_interior_from_entity(PLAYER::PLAYER_PED_ID());
										if (is_valid_interior(iVar0))
										{
											if (is_interior_ready(iVar0))
											{
												if (is_interior_scene())
												{
													iLocal_3 = start_particle_fx_looped_on_entity("scr_obfoundry_cauldron_steam", iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
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
	if (does_particle_fx_looped_exist(iLocal_3))
	{
		stop_particle_fx_looped(iLocal_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_4))
	{
		set_object_as_no_longer_needed(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
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

