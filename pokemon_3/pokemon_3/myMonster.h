#include<Windows.h>
#include"enemyMonster.h"

//round 초기화 해결해 함
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
			printf("공격을 선택하세요\n");
			printf("1. 불공격(필살기 공격력 170/ 2스택 필요)\n");
			printf("2. 할퀴기(공경력 100)\n");
			printf("3. 막기(피해 무력화)\n");
			printf("4. 몬스터볼 (포획 성공시 승리)\n");

			int skill = 0;
			scanf("\n%d", &skill);

			if (skill == 1 && stack >= 2) {
				system("cls");
				printf("불공격(필살기)을 사용합니다.\n");
				attack = 170;
				stack++;
				return attack;
				break;
			}
			else if (skill == 1 && stack < 2) {
				system("cls");
				printf("!!!!!아직 필살기 스택이 쌓이지 않았습니다.!!!!!\n");
			}
			else if (skill == 2) {
				system("cls");
				printf("할퀴기 공격을 사용합니다.\n");
				stack++;
				attack = 100;
				return attack;
				break;
			}
			else if (skill == 3) {
				system("cls");
				printf("막기를 사용합니다.\n");
				printf("상대의 공격을 무력화 합니다.\n");
				stack++;
				break;
			}
			else if (skill == 4 && (pokeball > 0) && ball_HP >= enemy_HP) {
				system("cls");
				printf("포켓볼을 사용합니다.\n");
				int pokeball_per = rand() % 100;

				if (pokeball_per <= 95) {
					printf("포획에 실패하였습니다.\n\n");
					printf("포켓볼 -1\n");
					system("pause");
					system("cls");
					pokeball -= 1;

					printf("남은 포켓볼은 %d개입니다.\n", pokeball);
					attack = 1;

					return attack;
					break;
				}
				else if (pokeball_per >= 96 ) {
					printf("포획에 성공하였습니다.\n\n");
					printf("포켓볼 -1\n");
					system("pause");
					system("cls");
					pokeball -= 1;
					
					attack = 0;

					printf("남은 포켓볼은 %d개입니다.\n", pokeball);

					return attack;
					break;
				}
				break;
			}
			else if (skill == 4 && pokeball < 0) {
				printf("포켓볼을 모두 소진하였습니다.\n");
			}
			else if (skill == 4 && ball_HP <= enemy_HP) {
				printf("적 몬스터의 체력이 많이 남아서 사용이 불가합니다\n");
			}
			else {
				system("cls");
				printf("잘못 입력하셨습니다.\n");
			}
		}
	}
};