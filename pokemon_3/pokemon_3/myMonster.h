#include<Windows.h>
#include"enemyMonster.h"

//round �ʱ�ȭ �ذ��� ��
class myMonster
{
	int HP = 500;
	int attack;
	int stack = 0;
	int pokeball = 2;
	int round;

public:
	int myMonster_HP() {
		HP;

		return HP;
	}

	int ball_round() {
		enemyMonster enemy;
		int enemy_HP = enemy._enemyMonster_HP(round);

		return enemy_HP;

		round++;
	}

	int myMonster_Attack() {
		int enemy_HP = ball_round();

		int ball_HP = enemy_HP - (enemy_HP * 80 / 100);
		
		attack = 0;
		while (1) {
			printf("������ �����ϼ���\n");
			printf("1. �Ұ���(�ʻ�� ���ݷ� 170/ 2���� �ʿ�)\n");
			printf("2. ������(����� 100)\n");
			printf("3. ����(���� ����ȭ)\n");
			printf("4. ���ͺ� (��ȹ ������ �¸�)\n");

			int skill = 0;
			scanf("\n%d", &skill);

			if (skill == 1 && stack >= 2) {
				system("cls");
				printf("�Ұ���(�ʻ��)�� ����մϴ�.\n");
				attack = 170;
				stack++;
				return attack;
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
				return attack;
				break;
			}
			else if (skill == 3) {
				system("cls");
				printf("���⸦ ����մϴ�.\n");
				printf("����� ������ ����ȭ �մϴ�.\n");
				stack++;
				break;
			}
			else if (skill == 4 && (pokeball > 0) && ball_HP >= enemy_HP) {
				system("cls");
				printf("���Ϻ��� ����մϴ�.\n");
				int pokeball_per = rand() % 100;

				if (pokeball_per <= 95) {
					printf("��ȹ�� �����Ͽ����ϴ�.\n\n");
					printf("���Ϻ� -1\n");
					system("pause");
					system("cls");
					pokeball -= 1;

					printf("���� ���Ϻ��� %d���Դϴ�.\n", pokeball);
					attack = 1;

					return attack;
					break;
				}
				else if (pokeball_per >= 96 ) {
					printf("��ȹ�� �����Ͽ����ϴ�.\n\n");
					printf("���Ϻ� -1\n");
					system("pause");
					system("cls");
					pokeball -= 1;
					
					attack = 0;

					printf("���� ���Ϻ��� %d���Դϴ�.\n", pokeball);

					return attack;
					break;
				}
				break;
			}
			else if (skill == 4 && pokeball < 0) {
				printf("���Ϻ��� ��� �����Ͽ����ϴ�.\n");
			}
			else if (skill == 4 && ball_HP <= enemy_HP) {
				printf("�� ������ ü���� ���� ���Ƽ� ����� �Ұ��մϴ�\n");
			}
			else {
				system("cls");
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			}
		}
	}
};