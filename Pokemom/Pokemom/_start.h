#include <stdio.h>
#include<windows.h>
#include"fire_monster.h"
int _start() {

	printf("������ �����մϴ�. �ƹ�Ű�� �����ּ���.\n");
	system("pause");

	system("cls");

	printf("���ϸ��� �����մϴ�.\n");
	printf("1. ���̸�\n");
	printf("2. ������\n");
	printf("3. �̻��ؾ�\n");

	int pokemon_select;
	scanf("%d", &pokemon_select);

	if (pokemon_select == 1) {
		_fire_monster_select();
	}
	
	return 0;
}