#include <stdio.h>
#include<windows.h>

int _grass_monster_select() {
	system("cls");
	printf("�̻��� ���� �����ϼ̽��ϴ�.\n");
	printf("\n");

	return 0;
}

int _grass_monster_HP() {
	int HP = 500;

	return HP;
}

int _grass_monster_attack() {
	int stack = 0;
	int attack = 0;
	while (1) {
		printf("------���� ����: %d 1------\n", stack);
		printf("\n");
		printf("������ �����ϼ���\n");
		printf("1. Ǯ�� ������ ����(�ʻ�� ���ݷ� 170/ 2���� �ʿ�)\n");
		printf("2. �����ġ��(����� 100)\n");
		printf("3. ����(���� ����ȭ)\n");
		printf("4. ���ͺ� (��ȹ ������ �¸�)");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("Ǯ�� ������ ����(�ʻ��)�� ����մϴ�.\n");
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
			printf("�����ġ�� ������ ����մϴ�.\n");
			printf("��뿡�� 100�� ���ظ� �������ϴ�.\n");
			attack = 100;
			stack++;
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


