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

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 1�ܰ��Դϴ�!!!!!!!");
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
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
				}
			}

		case 2:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster2();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 2�ܰ��Դϴ�!!!!!!!");
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
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
				}
			}

		case 3:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster3();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 3�ܰ��Դϴ�!!!!!!!");
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
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
				}
			}

		case 4:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster4();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 4�ܰ��Դϴ�!!!!!!!");
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
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
				}
			}

		case 5:
			monster_HP = _monster_HP();
			enemy_HP = _enemy_monster5();

			while (monster_HP >= 0 && enemy_HP >= 0) {
				printf("!!!!!!!����� 5�ܰ��Դϴ�!!!!!!!");
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
				}
				else if (enemy_HP <= 0) {
					printf("�÷��̰� �¸��Ͽ����ϴ�.\n");
				}
			}
			break;
		}
	}
	return 0;
}