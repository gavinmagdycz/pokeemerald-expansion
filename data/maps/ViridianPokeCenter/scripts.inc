ViridianPokeCenter_MapScripts::
# 2 "data/maps/ViridianPokeCenter/scripts.pory"
	map_script ViridianPokeCenter_OnLoad, ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad
	.byte 0

ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad:
# 3 "data/maps/ViridianPokeCenter/scripts.pory"
	compare VAR_PIKACHU_STATE, 0
	goto_if_eq ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_1
	return

ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_1:
# 4 "data/maps/ViridianPokeCenter/scripts.pory"
	lock
# 5 "data/maps/ViridianPokeCenter/scripts.pory"
	msgbox ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_0
# 6 "data/maps/ViridianPokeCenter/scripts.pory"
	msgbox ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_1
# 7 "data/maps/ViridianPokeCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/ViridianPokeCenter/scripts.pory"
	delay 120
# 9 "data/maps/ViridianPokeCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 10 "data/maps/ViridianPokeCenter/scripts.pory"
	msgbox ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_2
# 11 "data/maps/ViridianPokeCenter/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 12 "data/maps/ViridianPokeCenter/scripts.pory"
	waitmoncry
# 13 "data/maps/ViridianPokeCenter/scripts.pory"
	special Set_Friendship
# 14 "data/maps/ViridianPokeCenter/scripts.pory"
	release
	end


ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_0:
# 5 "data/maps/ViridianPokeCenter/scripts.pory"
	.string "Your Pikachu is in bad shape! How dare\n"
	.string "you let it get like this!$"

ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_1:
# 6 "data/maps/ViridianPokeCenter/scripts.pory"
	.string "In any case, it seems like it will make a\n"
	.string "full recovery.$"

ViridianPokeCenter_MapScripts_ViridianPokeCenter_OnLoad_Text_2:
# 10 "data/maps/ViridianPokeCenter/scripts.pory"
	.string "Your Pikachu has made a full recovery!$"
