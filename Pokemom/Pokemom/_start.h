#include <stdio.h>
#include<windows.h>
#include"fire_monster.h"
#include"water_monster.h"
#include"grass_monster.h"

int _start() {

	printf("게임을 시작합니다. 아무키나 눌러주세요.\n");
	system("pause");

	system("cls");

	printf("포켓몬을 선택합니다.\n");
	printf("1. 파이리\n");
	printf("2. 꼬북이\n");
	printf("3. 이상해씨\n");

	int pokemon_select;
	scanf("%d", &pokemon_select);
	
	return pokemon_select;
}