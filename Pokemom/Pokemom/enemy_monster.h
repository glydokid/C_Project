#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int attack = 0;

int _enemy_monster1() {
	int HP = 150;

	return HP;
}
int _enemy_monster1_attack() {
	printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.");        
	attack = 70;
	return attack;
}


int _enemy_monster2() {
	int HP = 250;

	return HP;
}
int _enemy_monster2_attack() {
	srand(time(NULL));
	int skill = 0;
	skill = rand() % 2 + 1;
	if (skill == 1) {
		printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.");
		attack = 70;
	}
	else if (skill == 2) {
		printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.");
		attack = 85;
	}

	return attack;
}


int _enemy_monster3() {
	int HP = 350;

	return HP;
}
int _enemy_monster3_attack() {
	srand(time(NULL));
	int skill = 0;
	skill = rand() % 3 + 1;
	if (skill == 1) {
		printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.");
		attack = 70;
	}
	else if (skill == 2) {
		printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.");
		attack = 85;
	}
	else if (skill == 3) {
		printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.");
		attack = 100;
	}

	return attack;
}


int _enemy_monster4() {
	int HP = 450;

	return HP;
}
int _enemy_monster4_attack() {
	srand(time(NULL));
	int skill = 0;
	skill = rand() % 4 + 1;
	if (skill == 1) {
		printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.");
		attack = 70;
	}
	else if (skill == 2) {
		printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.");
		attack = 85;
	}
	else if (skill == 3) {
		printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.");
		attack = 100;
	}
	else if (skill == 4) {
		printf("�� ���Ͱ� ���⸦ ����߽��ϴ�.");
	}

	return attack;
}


int _enemy_monster5() {
	int HP = 550;

	return HP;
}
int _enemy_monster5_attack() {
	int stack = 0;
	srand(time(NULL));
	int skill = 0;
	skill = rand() % 4 + 1;

	if (skill == 1) {
		printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.");
		attack = 70;
	}
	else if (skill == 2) {
		printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.");
		attack = 85;
	}
	else if (skill == 3) {
		printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.");
		attack = 100;
	}
	else if (skill == 4) {
		printf("�� ���Ͱ� ���⸦ ����߽��ϴ�.");
	}
	else if (skill == 5) {
		printf("�� ���Ͱ� �Ұ����� ����߽��ϴ�.");
		attack = 150;
	}

	return attack;
}

