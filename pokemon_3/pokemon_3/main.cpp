#include<stdio.h>
#include"myMonster.h"
#include"start.h"

int main() 
{
	int i = 1;

	myMonster my;
	enemyMonster enemy;

	_start();

	for (i; i < 6; i++) {

		int enemy_HP = enemy._enemyMonster_HP(i);
		int my_HP = my.myMonster_HP();

 		my.ball_round();

		while (1) {
			int my_attack = my.myMonster_Attack();
			int enemy_attack = enemy._enemyMonster_Attack(i);

			system("pause");
			system("cls");

			if (my_attack == 0) {
				enemy_HP *= my_attack;
			}
			else if (my_attack == 1) {
				my_attack = 0;
			}
			
			printf("����ڰ� ������ %d�� ���ظ� �������ϴ�.\n\n", my_attack);
			printf("���� ����ڿ��� %d�����ظ� �������ϴ�.\n\n", enemy_attack);
			enemy_HP -= my_attack;
			my_HP -= enemy_attack;

			system("pause");
			system("cls");

			printf("������� ���� ü��: %d\n\n", my_HP);
			printf("���� ���� ü��: %d\n\n", enemy_HP);

			system("pause");
			system("cls");                   

			if (enemy_HP <= 0) {
				printf("�÷��̾ �¸��Ͽ����ϴ�\n");

				system("pause");
				system("cls");

				printf("%d�ܰ�� �Ѿ�ϴ�.\n",i+1);
				system("pause");
				system("cls");

				break;
			}
			else if (my_HP <= 0) {
				printf("�÷��̾�� �й��Ͽ����ϴ�.\n");
				system("pause");
				system("cls");

				break;
			}

		}
		if (my_HP <= 0) {
			printf("������ �����մϴ�.\n");
			break;
		}
	
	}
	return 0;
}