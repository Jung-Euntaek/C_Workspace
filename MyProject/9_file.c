# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000 // MAX = 10000, 상수로 고정

int main_file(void)
{
	// 파일 입출력
	// 파일에 데이터 저장
	// 저장된 데이터 호출

	// fputs, fgets : 일반적으로 문자열 저장 용도
	
	//char line[MAX];

	// 파일에 쓰기
	//FILE* file = fopen("c:\\test1.txt", "wb");
	//if (file == NULL) // 파일이 없으면
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	//fputs("잘 적히는지 확인해주세요\n", file);

	// 파일 읽기
	//FILE* file = fopen("c:\\test1.txt", "rb");
	//if (file == NULL) // 파일이 없으면
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file) != NULL) // fgets(읽어온 데이터 입력할 곳, 사이즈, 파일)
	//{
	//	printf("%s", line);
	//}

	// 파일 열고 닫지 않은 상태에서 문제 생기면 데이터 손실 가능
	/*fclose(file);*/


	// fprintf, fscanf : 포맷 맞춰 쓸 때 유용
	int num[6] = { 0, 0, 0, 0, 0, 0 }; // 추첨번호
	int bonus = 0; // 보너스 번호
	char str1[MAX];
	char str2[MAX];

	// 파일에 쓰기
	//FILE* file = fopen("c:\\test2.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//// 로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스 번호 ", 7);


	// 파일 읽기
	FILE* file = fopen("c:\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]); // 문자열은 그 자체로 포인터이므로 따로 & 필요 없음
	printf("%s %d %d %d %d %d %d\n", str1,
		num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}