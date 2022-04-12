#include <time.h>
#include <stdlib.h> // <time.h>만 추가해서는 작동 안할 때
#include <stdio.h>

int main_random(void)
{
	//srand(time(NULL)); // 난수 초기화 : 안 하면 동일 숫자 반복 출력
	//int num = rand() % 3; // 랜덤으로 추출할 범위 지정(0, 1, 2 중 하나)
	
	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	return 0;
}
