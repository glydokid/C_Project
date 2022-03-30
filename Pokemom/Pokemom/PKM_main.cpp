#include <stdio.h>
#include "_start.h"
#include "enemy_monster.h"

int main() {
	int pokemon_select = _start();
	int pokemon_AT = 0;
	int pokemon_HP = 0;
	int enemy_AT = 0;
	int enemy_HP = 0;
	int stack = 0;

	if (pokemon_select == 1) {
		_fire_monster_select();

		printf("대결 시작합니다.\n");
		for (int i = 1; i < 6; i++) {
			int T = 1;

			printf("\n현재는 %d단계입니다.\n", i);

			if (i == 1) {
				while (1) {
					printf("\n------현재 스택: %d ------\n", stack);
					if (T == 1) {
						pokemon_AT = _fire_monster_attack();
						printf("\n");
						enemy_AT = _enemy_monster1_attack();
						pokemon_HP = _fire_monster_HP();
						enemy_HP = _enemy_monster1();

						if (pokemon_AT == 170)
							stack = -1;

						enemy_HP -= pokemon_AT;
						printf("적 포켓몬의 체력은: %d 남았습니다\n", enemy_HP);
						if (enemy_HP <= 0)
							break;

						pokemon_HP -= enemy_AT;
						printf("포켓몬의 체력은: %d 남았습니다\n", pokemon_HP);
						if (pokemon_HP <= 0)
							break;
					}

					if (T % 2 != 0 && T != 1) {
						pokemon_AT = _fire_monster_attack();
						printf("\n");
						enemy_AT = _enemy_monster1_attack();

						if (pokemon_AT == 170)
							stack = -1;

						enemy_HP -= pokemon_AT;
						printf("적 포켓몬의 체력은: %d 남았습니다\n", enemy_HP);
						if (enemy_HP <= 0)
							break;

						pokemon_HP -= enemy_AT;
						printf("포켓몬의 체력은: %d 남았습니다\n", pokemon_HP);
						if (pokemon_HP <= 0)
							break;
					}
					else if (T % 2 == 0) {
						enemy_AT = _enemy_monster1_attack();
						printf("\n");
						pokemon_AT = _fire_monster_attack();
						printf("\n");

						if (pokemon_AT == 170)
							stack = -1;

						pokemon_HP -= enemy_AT;
						printf("포켓몬의 체력은: %d 남았습니다\n", pokemon_HP);
						if (pokemon_HP <= 0)
							break;

						enemy_HP -= pokemon_AT;
						printf("적 포켓몬의 체력은: %d 남았습니다\n", enemy_HP);
						if (enemy_HP <= 0)
							break;
					}
					T++;
					stack++;
				}
			}
			printf("\n");
			printf("%d 단계를 이겼습니다.\n", i);
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