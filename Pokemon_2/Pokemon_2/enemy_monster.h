#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int attack = 0;

int _enemy_monster1() {
	int HP = 150;

	return HP;
}
int _enemy_monster1_attack() {
	printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
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
	switch (skill)
	{
	case 1:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 2:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	default:
		break;
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
	switch (skill)
	{
	case 1:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;

	case 2:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 3:
		printf("적 몬스터가 토네이도를 사용했습니다.\n");
		attack = 100;

	default:
		break;
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
	switch (skill)
	{
	case 1:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 2:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 3:
		printf("적 몬스터가 토네이도를 사용했습니다.\n");
		attack = 100;
		break;

	case 4:
		printf("적 몬스터가 막기를 사용했습니다.\n");
		break;

	default:
		break;
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

	switch (skill)
	{
	case 1:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 2:
		printf("적 몬스터가 몸통박치기를 사용했습니다.\n");
		attack = 70;
		break;

	case 3:
		printf("적 몬스터가 토네이도를 사용했습니다.\n");
		attack = 100;
		break;

	case 4:
		printf("적 몬스터가 막기를 사용했습니다.\n");
		break;

	case 5:
		printf("적 몬스터가 불공격을 사용했습니다.\n");
		attack = 150;

	default:
		break;
	}
	return attack;
}

