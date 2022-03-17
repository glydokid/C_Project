#include <stdio.h>
#include <stdlib.h> //random, srand 함수
#include <time.h> //time 함수

//사람 VS 컴퓨터 비교 함수
int _comVShu(int hu, int com) {

	if (hu == com) {
		printf("비겼습니다.\n");
		return 0;
	}

	else if (com > (hu + 1) % 3) {
		printf("이겼습니다.\n");
		return 1;
	}

	else {
		printf("졌습니다.\n");
		return -1;
	}
	
}

//게임머니 계산
int _result_money(int hu_money, int com_money,int baeting, int vs_result) {
	if (vs_result == 0)
		printf("사용자의 남은 게임머니는 %d원 입니다.\n", hu_money);

	else if (vs_result > 0) {
		hu_money += baeting;
		printf("사용자의 남은 게임머니는 %d원 입니다.\n", hu_money);
	}
	else if (vs_result < 0) {
		hu_money -= baeting;
		printf("사용자의 남은 게임머니는 %d원 입니다.\n", hu_money);
	}
	return hu_money;
}

int main() {
	//게임머니 설정
	int Game_money;
	printf("게임머니를 설정하세요: ");
	scanf("%d", &Game_money);
	int Hu_game_money = Game_money;
	int Com_game_money = Game_money;

	while (true) {

		//배팅금액 설정
		int Baeting_money;
		printf("---------------------------------------\n");
		printf("금액을 배팅하세요:");
		scanf("%d", &Baeting_money);

		printf("가위(1), 바위(2), 보(3)중 하나를 입력하시오:\n");

		//컴퓨터의 가위바위보 랜덤 출력
		srand(time(NULL));
		int com_RPS;
		com_RPS = rand() % 3 + 1;

		//사람 가위바위보 입력
		int hu_RPS;
		scanf("%d", &hu_RPS);

		//함수를 이용한 대결, 게임머니 계산
		int Vs_result;
		Vs_result = _comVShu(hu_RPS, com_RPS);

		//게임머니 계산
		int Money_result;
		Money_result = _result_money(Hu_game_money, Com_game_money, Baeting_money, Vs_result);
		Hu_game_money = Money_result;
		Com_game_money = (Game_money * 2) - Hu_game_money;

		if (Hu_game_money <= 0 || Com_game_money <= 0) {
			break;
		}
	}

	return 0;
}
