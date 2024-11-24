ViridianForest_MapScripts::
# 2 "data/maps/ViridianForest/scripts.pory"
	map_script ViridianForest_OnLoad, ViridianForest_MapScripts_ViridianForest_OnLoad
	.byte 0

ViridianForest_MapScripts_ViridianForest_OnLoad:
# 3 "data/maps/ViridianForest/scripts.pory"
	removeobject 1
# 4 "data/maps/ViridianForest/scripts.pory"
	removeobject 2
# 5 "data/maps/ViridianForest/scripts.pory"
	removeobject 3
# 6 "data/maps/ViridianForest/scripts.pory"
	removeobject 4
# 7 "data/maps/ViridianForest/scripts.pory"
	setflag FLAG_UNUSED_0x021
	end


Spearow_Attack::
# 13 "data/maps/ViridianForest/scripts.pory"
	lock
# 14 "data/maps/ViridianForest/scripts.pory"
	addobject 1
# 15 "data/maps/ViridianForest/scripts.pory"
	addobject 2
# 16 "data/maps/ViridianForest/scripts.pory"
	addobject 3
# 17 "data/maps/ViridianForest/scripts.pory"
	addobject 4
# 18 "data/maps/ViridianForest/scripts.pory"
	applymovement 1, walk_down
# 19 "data/maps/ViridianForest/scripts.pory"
	applymovement 1, walk_down
# 20 "data/maps/ViridianForest/scripts.pory"
	applymovement 2, walk_down
# 21 "data/maps/ViridianForest/scripts.pory"
	applymovement 3, walk_down
# 22 "data/maps/ViridianForest/scripts.pory"
	applymovement 4, walk_up
# 23 "data/maps/ViridianForest/scripts.pory"
	waitmovement 1
# 24 "data/maps/ViridianForest/scripts.pory"
	msgbox Spearow_Attack_Text_0
# 25 "data/maps/ViridianForest/scripts.pory"
	msgbox Spearow_Attack_Text_1
# 26 "data/maps/ViridianForest/scripts.pory"
	msgbox Spearow_Attack_Text_2
# 27 "data/maps/ViridianForest/scripts.pory"
	msgbox Spearow_Attack_Text_3
# 28 "data/maps/ViridianForest/scripts.pory"
	warp MAP_VIRIDIAN_POKE_CENTER, -1, 8, 4
# 29 "data/maps/ViridianForest/scripts.pory"
	release
	end


Spearow_Attack_Text_0:
# 24 "data/maps/ViridianForest/scripts.pory"
	.string "Spearow attacked!$"

Spearow_Attack_Text_1:
# 25 "data/maps/ViridianForest/scripts.pory"
	.string "Pikachu tried to fight back but was\n"
	.string "overwhelmed!$"

Spearow_Attack_Text_2:
# 26 "data/maps/ViridianForest/scripts.pory"
	.string "Pikachu Fainted!$"

Spearow_Attack_Text_3:
# 27 "data/maps/ViridianForest/scripts.pory"
	.string "You rushed to the nearest Pokemon\n"
	.string "Center!$"
