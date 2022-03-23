#include <stdio.h>
#include "_start.h"

int main() {
	int pokemon_select = _start();

	if (pokemon_select == 1) {
		_fire_monster_select();

		_fire_monster_attack();

	}else if (pokemon_select == 2) {
		_water_monster_select();

		_water_monster_attack();

	}
	else if (pokemon_select == 3) {
		_grass_monster_select();

		_grass_monster_attack();
	}


}