#include <stdio.h>
#include<windows.h>

int _fire_monster_select() {
	printf("���̸��� �����ϼ̽��ϴ�.");

	return 0;
}

int _fire_monster_attack() {
	int turn = 0;

	system("cls");
	printf("������ �����ϼ���\n");
	printf("1. �Ұ���(�ʻ�� ����� 170)\n");
	printf("2. ������(����� 100)\n");
	printf("3. ����(���� ����ȭ)\n");

	int skill = 0;
	scanf("%d", &skill);

	if (skill == 1 && turn == 2) {
		system("cls");
		printf("�Ұ���(�ʻ��)�� ����մϴ�.\n");
		printf("��뿡�� 170�� ���ظ� �������ϴ�.");
	}
	else if (skill == 2) {
		system("cls");
		printf("������ ������ ����մϴ�.\n");
		printf("��뿡�� 100�� ���ظ� �������ϴ�.\n");
	}
	else if (skill == 3) {
		system("cls");
		printf("���⸦ ����մϴ�.\n");
		printf("����� ������ ����ȭ �մϴ�.");
	}

	turn++;

	return 0;
}
