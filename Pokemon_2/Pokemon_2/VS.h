#include"monster.h"
#include"enemy_monster.h"

int _VS() {

	for (int i = 1; i < 6; i++) {
		int monster_HP;
		int enemy_HP;

		switch (i)
		{
		case 1:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster1();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!현재는 1단계입니다!!!!!!!");
				printf("상대방의 체력은 %d입니다.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster1_attack();
				system("pause");
				system("cls");

				printf("플레이어는 %d의 피해를 입었습니다.\n", enemy_attack);
				printf("상대방은 %d의 피해를 입었습니다.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("플레이어의 남은 체력은 %d 입니다.\n", monster_HP);
				printf("상대방의 남은 체력은 %d 입니다.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("플레이어는 패배하였습니다.\n");
				}
				else if (enemy_HP <= 0) {
					printf("플레이가 승리하였습니다.\n");
				}
			}

		case 2:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster2();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!현재는 2단계입니다!!!!!!!");
				printf("상대방의 체력은 %d입니다.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster2_attack();
				system("pause");
				system("cls");

				printf("플레이어는 %d의 피해를 입었습니다.\n", enemy_attack);
				printf("상대방은 %d의 피해를 입었습니다.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("플레이어의 남은 체력은 %d 입니다.\n", monster_HP);
				printf("상대방의 남은 체력은 %d 입니다.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("플레이어는 패배하였습니다.\n");
				}
				else if (enemy_HP <= 0) {
					printf("플레이가 승리하였습니다.\n");
				}
			}

		case 3:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster3();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!현재는 3단계입니다!!!!!!!");
				printf("상대방의 체력은 %d입니다.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster3_attack();
				system("pause");
				system("cls");

				printf("플레이어는 %d의 피해를 입었습니다.\n", enemy_attack);
				printf("상대방은 %d의 피해를 입었습니다.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("플레이어의 남은 체력은 %d 입니다.\n", monster_HP);
				printf("상대방의 남은 체력은 %d 입니다.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("플레이어는 패배하였습니다.\n");
				}
				else if (enemy_HP <= 0) {
					printf("플레이가 승리하였습니다.\n");
				}
			}

		case 4:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster4();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!현재는 4단계입니다!!!!!!!");
				printf("상대방의 체력은 %d입니다.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster4_attack();
				system("pause");
				system("cls");

				printf("플레이어는 %d의 피해를 입었습니다.\n", enemy_attack);
				printf("상대방은 %d의 피해를 입었습니다.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("플레이어의 남은 체력은 %d 입니다.\n", monster_HP);
				printf("상대방의 남은 체력은 %d 입니다.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("플레이어는 패배하였습니다.\n");
				}
				else if (enemy_HP <= 0) {
					printf("플레이가 승리하였습니다.\n");
				}
			}

		case 5:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster5();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!현재는 5단계입니다!!!!!!!");
				printf("상대방의 체력은 %d입니다.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster5_attack();
				system("pause");
				system("cls");

				printf("플레이어는 %d의 피해를 입었습니다.\n", enemy_attack);
				printf("상대방은 %d의 피해를 입었습니다.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("플레이어의 남은 체력은 %d 입니다.\n", monster_HP);
				printf("상대방의 남은 체력은 %d 입니다.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("플레이어는 패배하였습니다.\n");
				}
				else if (enemy_HP <= 0) {
					printf("플레이가 승리하였습니다.\n");
				}
			}
			break;
		}
	}
	return 0;
}