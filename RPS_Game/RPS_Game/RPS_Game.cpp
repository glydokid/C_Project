#include <stdio.h>
#include <stdlib.h> //random, srand 함수
#include <time.h> //time 함수

//기록 보관 동적 변수 선언
int turn = 0;
int record_size = 100;
int* com_RPS_record = (int*)malloc(sizeof(int) * record_size);

//사람 VS 컴퓨터 비교 함수
int _comVShu(int hu, int com) {

	if (hu == com) {
		printf("컴퓨터 : %d \n", com);
		printf("비겼습니다.\n");
		return 0;
	}

	else if ((hu == 1 && com == 2) || (hu == 2 && com == 3) || (hu == 3 && com == 1)) {
		printf("컴퓨터 : %d \n", com);
		printf("졌습니다.\n");
		return 1;
	}

	else {
		printf("컴퓨터 : %d \n", com);
		printf("이겼습니다.\n");
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

//컴퓨터 출력 기록
int _com_record(int com_record) {


	//컴퓨터가 낸 가위바위보 기록 저장, 배열 초기화
	for (int i = 0; i < record_size; i++) {
		com_RPS_record[i] = 0;
	}
	com_RPS_record[turn] = com_record;

	for (int i = 0; i < record_size; i++) {
		printf("%d", com_RPS_record[i]);
	}

	free(com_RPS_record);

	turn++;

	return *com_RPS_record;
}

int main() {
	//게임머니 설정
	int Game_money;
	printf("게임머니를 설정하세요: ");
	scanf("%d", &Game_money);
	//입력받은 게임머니를 사용자와 컴퓨터애게 동분할
	int Hu_game_money = Game_money;
	int Com_game_money = Game_money;
	int record = 0;

	while (true) {
		
		//배팅금액 설정
		int Baeting_money;
		printf("\n---------------------------------------\n");
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
		
		//사용자와 컴퓨터 게임머니 계산 후 적용
		Hu_game_money = Money_result;
		Com_game_money = (Game_money * 2) - Hu_game_money;

		record = _com_record(com_RPS);
		printf("%d",record);
		
		//둘중 한명이라도 0원이 된다면 게임 종료
		if (Hu_game_money <= 0 || Com_game_money <= 0) {
			break;
		}

	}

	return 0;
}
