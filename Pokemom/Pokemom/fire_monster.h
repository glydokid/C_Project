#include <stdio.h>
#include<windows.h>

int _fire_monster_select() {
	system("cls");
	printf("���̸��� �����ϼ̽��ϴ�.\n");
	printf("\n");

	return 0;
}

int _fire_monster_HP() {
	int HP = 500;

	return HP;
}

int _fire_monster_attack() {
	int stack = 0;
	int attack = 0;
	while (1) {
		printf("------���� ����: %d ------\n",stack);
		printf("\n");
		printf("������ �����ϼ���\n");
		printf("1. �Ұ���(�ʻ�� ���ݷ� 170/ 2���� �ʿ�)\n");
		printf("2. ������(����� 100)\n");
		printf("3. ����(���� ����ȭ)\n");
		printf("4. ���ͺ� (��ȹ ������ �¸�)");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("�Ұ���(�ʻ��)�� ����մϴ�.\n");
			printf("��뿡�� 170�� ���ظ� �������ϴ�.");
			attack = 170;
			stack++;
			break;
		}
		else if (skill == 1 && stack < 2) {
			system("cls");
			printf("!!!!!���� �ʻ�� ������ ������ �ʾҽ��ϴ�.!!!!!\n");
		}
		else if (skill == 2) {
			system("cls");
			printf("������ ������ ����մϴ�.\n");
			printf("��뿡�� 100�� ���ظ� �������ϴ�.\n");
			stack++;
			attack = 100;
			break;
		}
		else if (skill == 3) {
			system("cls");
			printf("���⸦ ����մϴ�.\n");
			printf("����� ������ ����ȭ �մϴ�.\n");
			stack++;
			break;
		}
		else if (skill == 4) {
			system("cls");
			printf("���Ϻ��� ����մϴ�.\n");
		}
		else {
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}

	return 0;
}
