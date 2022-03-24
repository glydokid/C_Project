#include <stdio.h>
#include "_start.h"
#include "enemy_monster.h"

int main() {
	int pokemon_select = _start();
	int pokemon_AT = 0;
	int pokemon_HP = 0;

	if (pokemon_select == 1) {
		_fire_monster_select();

		printf("대결 시작합니다.\n");
		for (int i = 0; i < 3; i++) {
			int stage = 1;
			printf("현재는 %d단계입니다.\n", stage);

			pokemon_AT = _fire_monster_attack();
			pokemon_HP = _fire_monster_HP();
		}
	}
	else if (pokemon_select == 2) {
		_water_monster_select();

		printf("대결을 시작합니다.\n");
		for (int i = 0; i < 3; i++) {
			int stage = 1;
			printf("현재는 %d단계입니다.\n", stage);

			pokemon_AT = _water_monster_attack();
			pokemon_HP = _water_monster_HP();
		}
	}
	else if (pokemon_select == 3) {
		_grass_monster_select();

		printf("대결을 시작합니다.\n");
		for (int i = 0; i < 3; i++) {
			int stage = 1;
			printf("현재는 %d단계입니다.\n", stage);

			pokemon_AT = _grass_monster_attack();
			pokemon_HP = _grass_monster_HP();
		}
	}
}