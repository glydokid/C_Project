#include"monster.h"
#include"enemy_monster.h"

int _VS() {

	for (int i = 1; i < 6; i++) {
		int monster_HP;
		int enemy_HP;


		switch (i)
		{
		case 1:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster1();
			printf("!!!!!!!����� 1�ܰ��Դϴ�!!!!!!!\n");

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("������ ü���� %d�Դϴ�.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster1_attack();
				system("pause");
				system("cls");

				printf("�÷��̾�� %d�� ���ظ� �Ծ����ϴ�.\n", enemy_attack);
				printf("������ %d�� ���ظ� �Ծ����ϴ�.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("�÷��̾��� ���� ü���� %d �Դϴ�.\n", monster_HP);
				printf("������ ���� ü���� %d �Դϴ�.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
					break;
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
					system("pause");
					system("cls");
					printf("���� �ܰ�� �Ѿ�ϴ�.\n");
				}
			}
			break;

		case 2:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster2();
			printf("!!!!!!!����� 2�ܰ��Դϴ�!!!!!!!\n");

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("������ ü���� %d�Դϴ�.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster2_attack();
				system("pause");
				system("cls");

				printf("�÷��̾�� %d�� ���ظ� �Ծ����ϴ�.\n", enemy_attack);
				printf("������ %d�� ���ظ� �Ծ����ϴ�.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("�÷��̾��� ���� ü���� %d �Դϴ�.\n", monster_HP);
				printf("������ ���� ü���� %d �Դϴ�.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
					break;
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
					system("pause");
					system("cls");
					printf("���� �ܰ�� �Ѿ�ϴ�.\n");
				}
			}
			break;

		case 3:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster3();
			printf("!!!!!!!����� 3�ܰ��Դϴ�!!!!!!!\n");

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("������ ü���� %d�Դϴ�.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster3_attack();
				system("pause");
				system("cls");

				printf("�÷��̾�� %d�� ���ظ� �Ծ����ϴ�.\n", enemy_attack);
				printf("������ %d�� ���ظ� �Ծ����ϴ�.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("�÷��̾��� ���� ü���� %d �Դϴ�.\n", monster_HP);
				printf("������ ���� ü���� %d �Դϴ�.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
					break;
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
					system("pause");
					system("cls");
					printf("���� �ܰ�� �Ѿ�ϴ�.\n");
				}
			}
			break;

		case 4:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster4();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 4�ܰ��Դϴ�!!!!!!!\n");
				printf("������ ü���� %d�Դϴ�.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster4_attack();
				system("pause");
				system("cls");

				printf("�÷��̾�� %d�� ���ظ� �Ծ����ϴ�.\n", enemy_attack);
				printf("������ %d�� ���ظ� �Ծ����ϴ�.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("�÷��̾��� ���� ü���� %d �Դϴ�.\n", monster_HP);
				printf("������ ���� ü���� %d �Դϴ�.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
					break;
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
					system("pause");
					system("cls");
					printf("���� �ܰ�� �Ѿ�ϴ�.\n");
				}
			}
			break;

		case 5:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster5();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 5�ܰ��Դϴ�!!!!!!!\n");
				printf("������ ü���� %d�Դϴ�.\n", enemy_HP);

				int monster_attack = _monster_attack();
				system("pause");
				system("cls");

				int enemy_attack = _enemy_monster5_attack();
				system("pause");
				system("cls");

				printf("�÷��̾�� %d�� ���ظ� �Ծ����ϴ�.\n", enemy_attack);
				printf("������ %d�� ���ظ� �Ծ����ϴ�.\n", monster_attack);
				monster_HP -= enemy_attack;
				enemy_HP -= monster_attack;

				system("pause");
				system("cls");

				printf("�÷��̾��� ���� ü���� %d �Դϴ�.\n", monster_HP);
				printf("������ ���� ü���� %d �Դϴ�.\n", enemy_HP);

				system("pause");
				system("cls");

				if (monster_HP <= 0) {
					printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
					break;
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
					system("pause");
					system("cls");
					break;
				}
			}
			break;
		}
	}
	return 0;
}