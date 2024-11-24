NewMap2_MapScripts::
	.byte 0


Oak_Get_Pikachu::
# 6 "data/maps/NewMap2/scripts.pory"
	lockall
# 7 "data/maps/NewMap2/scripts.pory"
	compare VAR_TEMP_0, 12
	goto_if_eq Oak_Get_Pikachu_2
# 33 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_9
Oak_Get_Pikachu_1:
# 35 "data/maps/NewMap2/scripts.pory"
	releaseall
	end

Oak_Get_Pikachu_2:
# 8 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_0
# 9 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_1
# 10 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_2
# 11 "data/maps/NewMap2/scripts.pory"
	yesnobox -1, -1
Oak_Get_Pikachu_6:
# 12 "data/maps/NewMap2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Oak_Get_Pikachu_7
# 17 "data/maps/NewMap2/scripts.pory"
	givemon DISOBEDIENT_PIKACHU, 5, , , , , , , , , , , , , , , , , , , , , , TRUE
# 18 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_DISOBEDIENT_PIKACHU, 10, 3
# 19 "data/maps/NewMap2/scripts.pory"
	delay 50
# 20 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 21 "data/maps/NewMap2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_4
# 23 "data/maps/NewMap2/scripts.pory"
	waitfanfare
# 24 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_5
# 25 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 26 "data/maps/NewMap2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_6
# 28 "data/maps/NewMap2/scripts.pory"
	waitfanfare
# 29 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_7
# 30 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_8
	goto Oak_Get_Pikachu_1

Oak_Get_Pikachu_7:
# 13 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_3
# 14 "data/maps/NewMap2/scripts.pory"
	msgbox Oak_Get_Pikachu_Text_2
# 15 "data/maps/NewMap2/scripts.pory"
	yesnobox -1, -1
	goto Oak_Get_Pikachu_6


bulbasaur_pokeball::
# 40 "data/maps/NewMap2/scripts.pory"
	lock
# 41 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 42 "data/maps/NewMap2/scripts.pory"
	delay 30
# 43 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 44 "data/maps/NewMap2/scripts.pory"
	msgbox bulbasaur_pokeball_Text_0
# 45 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_1, bulbasaur_pokeball_2
bulbasaur_pokeball_1:
# 49 "data/maps/NewMap2/scripts.pory"
	release
	end

bulbasaur_pokeball_2:
# 46 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 47 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_1
	goto bulbasaur_pokeball_1


charmander_pokeball::
# 54 "data/maps/NewMap2/scripts.pory"
	lock
# 55 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 56 "data/maps/NewMap2/scripts.pory"
	delay 30
# 57 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 58 "data/maps/NewMap2/scripts.pory"
	msgbox charmander_pokeball_Text_0
# 59 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_2, charmander_pokeball_2
charmander_pokeball_1:
# 63 "data/maps/NewMap2/scripts.pory"
	release
	end

charmander_pokeball_2:
# 60 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 61 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_2
	goto charmander_pokeball_1


squirtle_pokeball::
# 68 "data/maps/NewMap2/scripts.pory"
	lock
# 69 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 70 "data/maps/NewMap2/scripts.pory"
	delay 30
# 71 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 72 "data/maps/NewMap2/scripts.pory"
	msgbox squirtle_pokeball_Text_0
# 73 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_3, squirtle_pokeball_2
squirtle_pokeball_1:
# 77 "data/maps/NewMap2/scripts.pory"
	release
	end

squirtle_pokeball_2:
# 74 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 75 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_3
	goto squirtle_pokeball_1


abra_pokeball::
# 82 "data/maps/NewMap2/scripts.pory"
	lock
# 83 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 84 "data/maps/NewMap2/scripts.pory"
	delay 30
# 85 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 86 "data/maps/NewMap2/scripts.pory"
	msgbox abra_pokeball_Text_0
# 87 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_4, abra_pokeball_2
abra_pokeball_1:
# 91 "data/maps/NewMap2/scripts.pory"
	release
	end

abra_pokeball_2:
# 88 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 89 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_4
	goto abra_pokeball_1


pidgey_pokeball::
# 96 "data/maps/NewMap2/scripts.pory"
	lock
# 97 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_PIDGEY, 10, 3
# 98 "data/maps/NewMap2/scripts.pory"
	delay 30
# 99 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 100 "data/maps/NewMap2/scripts.pory"
	msgbox pidgey_pokeball_Text_0
# 101 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_5, pidgey_pokeball_2
pidgey_pokeball_1:
# 105 "data/maps/NewMap2/scripts.pory"
	release
	end

pidgey_pokeball_2:
# 102 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 103 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_5
	goto pidgey_pokeball_1


ekans_pokeball::
# 110 "data/maps/NewMap2/scripts.pory"
	lock
# 111 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_EKANS, 10, 3
# 112 "data/maps/NewMap2/scripts.pory"
	delay 30
# 113 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 114 "data/maps/NewMap2/scripts.pory"
	msgbox ekans_pokeball_Text_0
# 115 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_6, ekans_pokeball_2
ekans_pokeball_1:
# 119 "data/maps/NewMap2/scripts.pory"
	release
	end

ekans_pokeball_2:
# 116 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 117 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_6
	goto ekans_pokeball_1


eevee_pokeball::
# 124 "data/maps/NewMap2/scripts.pory"
	lock
# 125 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 126 "data/maps/NewMap2/scripts.pory"
	delay 30
# 127 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 128 "data/maps/NewMap2/scripts.pory"
	msgbox eevee_pokeball_Text_0
# 129 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_7, eevee_pokeball_2
eevee_pokeball_1:
# 133 "data/maps/NewMap2/scripts.pory"
	release
	end

eevee_pokeball_2:
# 130 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 131 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_7
	goto eevee_pokeball_1


caterpie_pokeball::
# 138 "data/maps/NewMap2/scripts.pory"
	lock
# 139 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_CATERPIE, 10, 3
# 140 "data/maps/NewMap2/scripts.pory"
	delay 30
# 141 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 142 "data/maps/NewMap2/scripts.pory"
	msgbox caterpie_pokeball_Text_0
# 143 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_8, caterpie_pokeball_2
caterpie_pokeball_1:
# 147 "data/maps/NewMap2/scripts.pory"
	release
	end

caterpie_pokeball_2:
# 144 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 145 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_8
	goto caterpie_pokeball_1


rattatta_pokeball::
# 152 "data/maps/NewMap2/scripts.pory"
	lock
# 153 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_RATTATA, 10, 3
# 154 "data/maps/NewMap2/scripts.pory"
	delay 30
# 155 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 156 "data/maps/NewMap2/scripts.pory"
	msgbox rattatta_pokeball_Text_0
# 157 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_9, rattatta_pokeball_2
rattatta_pokeball_1:
# 161 "data/maps/NewMap2/scripts.pory"
	release
	end

rattatta_pokeball_2:
# 158 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 159 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_9
	goto rattatta_pokeball_1


sandshrew_pokeball::
# 166 "data/maps/NewMap2/scripts.pory"
	lock
# 167 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_SANDSHREW, 10, 3
# 168 "data/maps/NewMap2/scripts.pory"
	delay 30
# 169 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 170 "data/maps/NewMap2/scripts.pory"
	msgbox sandshrew_pokeball_Text_0
# 171 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_10, sandshrew_pokeball_2
sandshrew_pokeball_1:
# 175 "data/maps/NewMap2/scripts.pory"
	release
	end

sandshrew_pokeball_2:
# 172 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 173 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_10
	goto sandshrew_pokeball_1


machop_pokeball::
# 179 "data/maps/NewMap2/scripts.pory"
	lock
# 180 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_MACHOP, 10, 3
# 181 "data/maps/NewMap2/scripts.pory"
	delay 30
# 182 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 183 "data/maps/NewMap2/scripts.pory"
	msgbox machop_pokeball_Text_0
# 184 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_11, machop_pokeball_2
machop_pokeball_1:
# 188 "data/maps/NewMap2/scripts.pory"
	release
	end

machop_pokeball_2:
# 185 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 186 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_11
	goto machop_pokeball_1


growlithe_pokeball::
# 192 "data/maps/NewMap2/scripts.pory"
	lock
# 193 "data/maps/NewMap2/scripts.pory"
	showmonpic SPECIES_GROWLITHE, 10, 3
# 194 "data/maps/NewMap2/scripts.pory"
	delay 30
# 195 "data/maps/NewMap2/scripts.pory"
	hidemonpic
# 196 "data/maps/NewMap2/scripts.pory"
	msgbox growlithe_pokeball_Text_0
# 197 "data/maps/NewMap2/scripts.pory"
	goto_if_unset FLAG_TEMP_12, growlithe_pokeball_2
growlithe_pokeball_1:
# 201 "data/maps/NewMap2/scripts.pory"
	removeobject 3
# 202 "data/maps/NewMap2/scripts.pory"
	release
	end

growlithe_pokeball_2:
# 198 "data/maps/NewMap2/scripts.pory"
	addvar VAR_TEMP_0, 1
# 199 "data/maps/NewMap2/scripts.pory"
	setflag FLAG_TEMP_12
	goto growlithe_pokeball_1


Oak_Get_Pikachu_Text_0:
# 8 "data/maps/NewMap2/scripts.pory"
	.string "Since you slept in so late, all the\n"
	.string "pokemon have been taken$"

Oak_Get_Pikachu_Text_1:
# 9 "data/maps/NewMap2/scripts.pory"
	.string "However, it seems like I do have one\n"
	.string "last pokemon. Its a bit feisty, but its\l"
	.string "all I have left$"

Oak_Get_Pikachu_Text_2:
# 10 "data/maps/NewMap2/scripts.pory"
	.string "Accept the pokemon?$"

Oak_Get_Pikachu_Text_3:
# 13 "data/maps/NewMap2/scripts.pory"
	.string "If you don't take this pokemon, you'll\n"
	.string "never be a pokemon master!$"

Oak_Get_Pikachu_Text_4:
# 22 "data/maps/NewMap2/scripts.pory"
	.string "You got a Disobedient Pikachu!$"

Oak_Get_Pikachu_Text_5:
# 24 "data/maps/NewMap2/scripts.pory"
	.string "Oh and you will need this as well for\n"
	.string "your pokemon journey$"

Oak_Get_Pikachu_Text_6:
# 27 "data/maps/NewMap2/scripts.pory"
	.string "You got a Pokedex!$"

Oak_Get_Pikachu_Text_7:
# 29 "data/maps/NewMap2/scripts.pory"
	.string "If your goal is to challenge the\n"
	.string "pokemon league, you'll have to beat all\l"
	.string "8 gym leaders. The first is in Pewter\l"
	.string "city, north of here.$"

Oak_Get_Pikachu_Text_8:
# 30 "data/maps/NewMap2/scripts.pory"
	.string "Good luck on your pokemon journey!$"

Oak_Get_Pikachu_Text_9:
# 33 "data/maps/NewMap2/scripts.pory"
	.string "You should look around, maybe there's a pokemon left for you!$"

bulbasaur_pokeball_Text_0:
# 44 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took bulbasaur!$"

charmander_pokeball_Text_0:
# 58 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took\n"
	.string "charmander!$"

squirtle_pokeball_Text_0:
# 72 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took squirtle!$"

abra_pokeball_Text_0:
# 86 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took abra!$"

pidgey_pokeball_Text_0:
# 100 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took pidgey!$"

ekans_pokeball_Text_0:
# 114 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took ekans!$"

eevee_pokeball_Text_0:
# 128 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took eevee!$"

caterpie_pokeball_Text_0:
# 142 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took caterpie!$"

rattatta_pokeball_Text_0:
# 156 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took ratatta!$"

sandshrew_pokeball_Text_0:
# 170 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took sandshrew!$"

machop_pokeball_Text_0:
# 183 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took machop!$"

growlithe_pokeball_Text_0:
# 196 "data/maps/NewMap2/scripts.pory"
	.string "Oh no! Someone already took growlithe!$"
