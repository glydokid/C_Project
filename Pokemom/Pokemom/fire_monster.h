#include <stdio.h>
#include<windows.h>

int _fire_monster_select() {
	printf("파이리를 선택하셨습니다.");

	return 0;
}

int _fire_monster_attack() {
	int turn = 0;

	system("cls");
	printf("공격을 선택하세요\n");
	printf("1. 불공격(필살기 공경력 170)\n");
	printf("2. 할퀴기(공경력 100)\n");
	printf("3. 막기(피해 무력화)\n");

	int skill = 0;
	scanf("%d", &skill);

	if (skill == 1 && turn == 2) {
		system("cls");
		printf("불공격(필살기)을 사용합니다.\n");
		printf("상대에게 170의 피해를 입혔습니다.");
	}
	else if (skill == 2) {
		system("cls");
		printf("할퀴기 공격을 사용합니다.\n");
		printf("상대에게 100의 피해를 입혔습니다.\n");
	}
	else if (skill == 3) {
		system("cls");
		printf("막기를 사용합니다.\n");
		printf("상대의 공격을 무력화 합니다.");
	}

	turn++;

	return 0;
}
