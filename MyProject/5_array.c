#include <stdio.h>

int main_array(void)
{
	// 배열
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다\n", subway_3);*/

	// 여러 개의 변수 동시에 생성
	//int subway_array[3]; // 3개의 정수형 변수 보관
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d 호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
	//}

	// 값 설정
	// 값은 초기화 반드시 해야 함
	/*int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 배열 크기는 항상 상수로 선언(const 도 안됨)
	/*int size = 10;
	int arr[size];*/
	
	//int arr[10] = { 1, 2 }; // 초기값 일부만이라도 선언하면 나머지 값 0으로 채워짐
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[] = { 1, 2 }; // arr[2]

	/*float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	//// 문자 vs 문자열
	//char c = 'A'; // 문자(문자열 x)는 작은 따옴표 사용
	//printf("%c\n", c);

	//// 문자열 끝에는 끝을 의미하는 NULL 문자 "\0" 포함되어야 함
	//char str[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
	//printf("%s\n", str);

	//char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]); // NULL 문자까지 총 7글자 출력
	//}

	/*char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/ // sizeof(kor) = 9
	// 영어 1글자 : 1 byte
	// 한글 1글자 : 2 byte
	// char 크기 : 1 byte

	//char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	//printf("%s\n", c_array); // %s 로 출력

	char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g'}; // 문자열 외에 남는 공간 있으면 \0 자동 입력
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]); // %c 로 출력
	}*/

	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%d\n", c_array[i]); // 아스키 코드 출력(null 문자는 0으로 입력)
	//}

	// 문자열 입력 받기(경찰서 조서 쓰기)
	/*char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/

	// ASCII 코드
	// 7bit, 총 128개 코드(0-127)
	
	/*printf("%d\n", 'a');
	printf("%d\n", 'b');
	printf("%d\n", 'A');
	printf("%d\n", '\0');
	printf("%d\n", '0');*/

	// 참고 2 : 0-127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}


	return 0;
}