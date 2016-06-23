#region Local Var
	struct<2> Local_0 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
#endregion

void main()
{
	switch (Local_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 2:
			if (Local_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (Local_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (Local_0.f_1 == -1029820160)
			{
			}
			break;
	}
	terminate_this_thread();
}

void func_1(int iParam0)
{
	if (_0xAB58C27C2E6123C6("DISPLAY_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_pop_scaleform_movie_function_void();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (_0xAB58C27C2E6123C6("SET_DATA_SLOT"))
	{
		_push_scaleform_movie_function_parameter_int(iParam0);
		_push_scaleform_movie_function_parameter_int(iParam1);
		_push_scaleform_movie_function_parameter_int(iParam2);
		_push_scaleform_movie_function_parameter_int(iParam3);
		_push_scaleform_movie_function_parameter_int(false);
		_push_scaleform_movie_function_parameter_int(false);
		if (iParam4)
		{
			_push_scaleform_movie_function_parameter_int(true);
		}
		else
		{
			_push_scaleform_movie_function_parameter_int(false);
		}
		func_3(sParam5);
		_pop_scaleform_movie_function_void();
	}
}

void func_3(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

