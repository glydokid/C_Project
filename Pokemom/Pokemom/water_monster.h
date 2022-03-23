#include <stdio.h>
#include<windows.h>

int _water_monster_select() {
	system("cls");
	printf("꼬북이를 선택하셨습니다.\n");

	return 0;
}

int _water_monster_HP() {
	int HP = 500;

	return HP;
}

int _water_monster_attack() {
	int stack = 0;
	while (1) {
		printf("------현재 스택: %d  ------\n", stack);
		printf("\n");
		printf("공격을 선택하세요\n");
		printf("1. 물공격(필살기 공격력 170/ 2스택 필요)\n");
		printf("2. 몸통박치기(공경력 100)\n");
		printf("3. 막기(피해 무력화)\n");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("물공격(필살기)을 사용합니다.\n");
			printf("상대에게 170의 피해를 입혔습니다.");
			stack++;
			break;
		}
		else if (skill == 1 && stack < 2) {
			system("cls");
			printf("!!!!!아직 필살기 스택이 쌓이지 않았습니다.!!!!!\n");
		}
		else if (skill == 2) {
			system("cls");
			printf("몸통박치기 공격을 사용합니다.\n");
			printf("상대에게 100의 피해를 입혔습니다.\n");
			stack++;
			break;
		}
		else if (skill == 3) {
			system("cls");
			printf("막기를 사용합니다.\n");
			printf("상대의 공격을 무력화 합니다.");
			stack++;
			break;
		}
		else {
			system("cls");
			printf("잘못 입력하셨습니다.\n");
		}
	}

	return 0;
}

