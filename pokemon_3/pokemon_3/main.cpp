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
			
			printf("사용자가 적에게 %d의 피해를 입혔습니다.\n\n", my_attack);
			printf("적이 사용자에게 %d의피해를 입혔습니다.\n\n", enemy_attack);
			enemy_HP -= my_attack;
			my_HP -= enemy_attack;

			system("pause");
			system("cls");

			printf("사용자의 남은 체력: %d\n\n", my_HP);
			printf("적의 남은 체력: %d\n\n", enemy_HP);

			system("pause");
			system("cls");                   

			if (enemy_HP <= 0) {
				printf("플레이어가 승리하였습니다\n");

				system("pause");
				system("cls");

				printf("%d단계로 넘어갑니다.\n",i+1);
				system("pause");
				system("cls");

				break;
			}
			else if (my_HP <= 0) {
				printf("플레이어는 패배하였습니다.\n");
				system("pause");
				system("cls");

				break;
			}

		}
		if (my_HP <= 0) {
			printf("게임을 종료합니다.\n");
			break;
		}
	
	}
	return 0;
}