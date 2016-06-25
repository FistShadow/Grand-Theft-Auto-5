#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void main()
{
	int iVar0;
	
	iLocal_0 = -1;
	network_set_script_is_safe_for_network_game();
	STREAMING::REQUEST_IPL("prologue06_int");
	STREAMING::REQUEST_IPL("prologue01");
	STREAMING::REQUEST_IPL("prologue02");
	STREAMING::REQUEST_IPL("prologue03");
	STREAMING::REQUEST_IPL("prologue04");
	STREAMING::REQUEST_IPL("prologue05");
	STREAMING::REQUEST_IPL("prologue06");
	STREAMING::REQUEST_IPL("prologuerd");
	STREAMING::REQUEST_IPL("Prologue01c");
	STREAMING::REQUEST_IPL("Prologue01d");
	STREAMING::REQUEST_IPL("Prologue01e");
	STREAMING::REQUEST_IPL("Prologue01f");
	STREAMING::REQUEST_IPL("Prologue01g");
	STREAMING::REQUEST_IPL("prologue01h");
	STREAMING::REQUEST_IPL("prologue01i");
	STREAMING::REQUEST_IPL("prologue01j");
	STREAMING::REQUEST_IPL("prologue01k");
	STREAMING::REQUEST_IPL("prologue01z");
	STREAMING::REQUEST_IPL("prologue03b");
	STREAMING::REQUEST_IPL("prologue04b");
	STREAMING::REQUEST_IPL("prologue05b");
	STREAMING::REQUEST_IPL("prologue06b");
	STREAMING::REQUEST_IPL("prologuerdb");
	STREAMING::REQUEST_IPL("prologue_occl");
	STREAMING::REQUEST_IPL("DES_ProTree_start");
	STREAMING::REQUEST_IPL("DES_ProTree_start_lod");
	STREAMING::REQUEST_IPL("prologue04_cover");
	STREAMING::REQUEST_IPL("prologue03_grv_fun");
	STREAMING::REMOVE_IPL("prologue03_grv_dug");
	STREAMING::REMOVE_IPL("prologue_grv_torch");
	_0xAF12610C644A35C9("prologue", 1);
	STREAMING::REQUEST_MODEL(joaat("csb_prolsec"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("csb_prolsec")))
	{
		wait(0);
	}
	set_player_model(player_id(), joaat("csb_prolsec"));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 169.2f);
	}
	display_radar(false);
	set_player_control(player_id(), false, 0);
	_new_load_scene_start_safe(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = GAMEPLAY::GET_GAME_TIMER() + 10000;
	while (!is_new_load_scene_loaded() && GAMEPLAY::GET_GAME_TIMER() < iVar0)
	{
		wait(0);
	}
	shutdown_loading_screen();
	start_audio_scene("MISSION_FAILED_SCENE");
	do_screen_fade_in(2500);
	new_load_scene_stop();
	request_additional_text("NG_INSTALL", false);
	while (true)
	{
		if (!is_screen_faded_in())
		{
			do_screen_fade_in(0);
		}
		draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		draw_rect(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		set_text_scale(0.5f, 0.5f);
		set_text_centre(1);
		if (timera() > 10000 && has_additional_text_loaded(false))
		{
			iLocal_0 = get_random_int_in_range(false, 5);
			if (iLocal_0 - iLocal_1 != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		disable_frontend_this_frame();
		if (_0x14832BF2ABA53FC5())
		{
			_0xC79AE21974B01FB2();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

