#include <stdio.h>
#include<windows.h>

int pokeball = 2;

int _monster_HP() {
	int HP = 500;

	return HP;
}

int _monster_attack() {
	int stack = 0;
	int attack = 0;
	while (1) {
		printf("\n");
		printf("������ �����ϼ���\n");
		printf("1. �Ұ���(�ʻ�� ���ݷ� 170/ 2���� �ʿ�)\n");
		printf("2. ������(����� 100)\n");
		printf("3. ����(���� ����ȭ)\n");
		printf("4. ���ͺ� (��ȹ ������ �¸�)\n");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("�Ұ���(�ʻ��)�� ����մϴ�.\n");
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
			int pokeball_per = rand() % 100;

			if (pokeball_per >= 70) {
				printf("��ȹ�� �����Ͽ����ϴ�.\n");
				printf("���Ϻ� -1\n");
				system("cls");
				pokeball -= 1;

				printf("���� ���Ϻ��� %d���Դϴ�.", pokeball);
			}
			else if (pokeball_per <= 69) {
				printf("��ȹ�� �����Ͽ����ϴ�.\n");
				printf("���Ϻ� -1\n");
				system("cls");
				pokeball -= 1;
				 

				printf("���� ���Ϻ��� %d���Դϴ�.", pokeball);
			}
			break;
		}
		else {
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}

	return attack;
}