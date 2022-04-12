#include <stdio.h>

// 전역변수 선언 위치
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // 연관 업체 게임(포인터 변수)
};

//typedef struct GameInformation {
//	char* name;
//	int year;
//	int price;
//	char* company;
//
//	struct GameInfo* friendGame;
//} GAME_INFO; // GameInformation 을 typedef 이용해 GAME_INFO로 치환


typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO; // GameInformation 은 사용 불가, GAME_INFO만 사용 가능

int main_struct(void)
{
	// 게임 출시
	// 이름 : 나도게임
	// 발매년도 : 2017년
	// 가격 : 50원
	// 제작사 : 나도회사

	char* name1 = "나도게임"; // * name1 : "나도게임" 이라는 상수문자열 가리키는 포인터, name1 포인터에 공간 할당 X
	int year1 = 2017;
	int price1 = 50;
	char* company1 = "나도회사";

	// 다른 게임

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	// 구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명  : %s\n", gameInfo1.name);
	printf("  발매년도  : %d\n", gameInfo1.year);
	printf("  가격  : %d\n", gameInfo1.price);
	printf("  제작사  : %s\n", gameInfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
	printf("-- 다른 게임 출시 정보 --\n");
	printf("  게임명  : %s\n", gameInfo2.name);
	printf("  발매년도  : %d\n", gameInfo2.year);
	printf("  가격  : %d\n", gameInfo2.price);
	printf("  제작사  : %s\n", gameInfo2.company);

	// 구조체 배열
	struct GameInfo gameArray[2] = {
		{"나도게임", 2017, 50, "나도회사"},
		{"너도게임", 2017, 100, "너도회사"}
	};
	
	// 구조체 포인터
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("-- 미션맨 게임 출시 정보 --\n");
	/*printf("  게임명  : %s\n", (*gamePtr).name);
	printf("  발매년도  : %d\n", (*gamePtr).year);
	printf("  가격  : %d\n", (*gamePtr).price);
	printf("  제작사  : %s\n", (*gamePtr).company);*/
	printf("  게임명  : %s\n", gamePtr->name); // 포인터 변수는 화살표 사용 가능
	printf("  발매년도  : %d\n", gamePtr->year);
	printf("  가격  : %d\n", gamePtr->price);
	printf("  제작사  : %s\n", gamePtr->company);

	// 연관 업체 게임 소개
	gameInfo1.friendGame = &gameInfo2;
	printf("-- 연관업체 게임 출시 정보 --\n");
	printf("  게임명  : %s\n", gameInfo1.friendGame->name);
	printf("  발매년도  : %d\n", gameInfo1.friendGame->year);
	printf("  가격  : %d\n", gameInfo1.friendGame->price);
	printf("  제작사  : %s\n", gameInfo1.friendGame->company);

	// typedef
	// 자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i = 3;
	실수 실수변수 = 3.23f; // float f = 3.23f
	printf("\n\n정수변수 : %d, 실수변수 : %.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "한글게임2";

	return 0;
}