#include <stdio.h>
#include<windows.h>

int _water_monster_select() {
	system("cls");
	printf("�����̸� �����ϼ̽��ϴ�.\n");

	return 0;
}

int _water_monster_HP() {
	int HP = 500;

	return HP;
}

int _water_monster_attack() {
	int stack = 0;
	while (1) {
		printf("------���� ����: %d  ------\n", stack);
		printf("\n");
		printf("������ �����ϼ���\n");
		printf("1. ������(�ʻ�� ���ݷ� 170/ 2���� �ʿ�)\n");
		printf("2. �����ġ��(����� 100)\n");
		printf("3. ����(���� ����ȭ)\n");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("������(�ʻ��)�� ����մϴ�.\n");
			printf("��뿡�� 170�� ���ظ� �������ϴ�.");
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
			stack++;
			break;
		}
		else if (skill == 3) {
			system("cls");
			printf("���⸦ ����մϴ�.\n");
			printf("����� ������ ����ȭ �մϴ�.");
			stack++;
			break;
		}
		else {
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}

	return 0;
}

