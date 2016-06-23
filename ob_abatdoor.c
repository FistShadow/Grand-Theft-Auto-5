#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	Vector3 vLocal_4 = 0;
	Vector3 vLocal_7 = 0;
	int iLocal_10 = 0;
#endregion

void main()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_10))
	{
		freeze_entity_position(iLocal_10, true);
		vLocal_4 = {get_entity_coords(iLocal_10, 1)};
		vLocal_7 = {get_entity_rotation(iLocal_10, 2)};
	}
	while (true)
	{
		wait(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_10))
		{
			if (is_object_within_brain_activation_range(iLocal_10))
			{
				switch (iLocal_2)
				{
					case 0:
						if (does_entity_have_drawable(iLocal_10))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = create_object(joaat("p_abat_roller_1_col"), vLocal_4, 1, true, false);
									set_entity_rotation(iLocal_3, vLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (does_entity_have_drawable(iLocal_10))
						{
							if (_get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
							{
								request_anim_dict("map_objects");
								if (has_anim_dict_loaded("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (does_entity_have_drawable(iLocal_10))
						{
							if (_get_number_of_instances_of_streamed_script(joaat("michael2")) > 0)
							{
								if (Global_88042)
								{
									if (has_anim_dict_loaded("map_objects"))
									{
										play_entity_anim(iLocal_10, "P_Abat_roller_1_open", "map_objects", 1f, false, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						vVar0 = {vLocal_4 + Vector(3.45f, 0f, 0f)};
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
						{
							vVar3 = {get_entity_coords(iLocal_3, 1)};
							if (!func_2(vVar3, vVar0, 0.1f, 0))
							{
								vVar6 = {vVar0 - vVar3};
								set_entity_coords(iLocal_3, vVar3 + func_1(vVar6) * FtoV(get_frame_time()) * Vector(fVar9, fVar9, fVar9), 1, false, 0, 1);
							}
							else
							{
								Global_88043 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_2(Vector3 vParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_3(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_4()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		delete_object(&iLocal_3);
	}
	set_model_as_no_longer_needed(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	terminate_this_thread();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (are_strings_equal(sParam0, sParam0))
	{
	}
}

