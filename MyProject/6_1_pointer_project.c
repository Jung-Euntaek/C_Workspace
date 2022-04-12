#include <stdio.h>
#include <time.h>

// 물고기 6마리
// 사막에서 어항 물 증발
// 증발 전에 어항에 물 주기
// 시간이 지날수록 물 빨리 증발

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0; // 게임 시작 시간(long 으로 type 정의)
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물 준 시간 간격)

	int num; // 몇 번 어항에 물 줄 것인지. 사용자 입력
	initData();

	cursor = arrayFish; // 포인터 변수를 array와 동일하게 사용 가능

	startTime = clock(); // 현재 시간 ms 단위 반환
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num > 6)
		{
			printf("입력값이 잘못되었습니다");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC : ms 을 s(초)로 변환(/1000)
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);
		
		// 어항 물 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물 주기
		// 1. 어항의 물이 0 이면? 물을 주지 않는다
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다\n", num);
		}
		// 2. 어항의 물이 0 이 아닌 경우? 물을 준다 ! 100 넘지 않는지 확인
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 준다
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; // 1만큼 물 주기
		}

		// 20초마다 레벨업
		if (totalElapsedTime / 20 > level - 1) // totalElapsedTime 이 int 형 변수이므로 0.xx == 0으로 간주
		{
			level++; // level up
			printf(" *** 축 레벨업 ! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);

			// 최종 레벨 5
			if (level == 5)
			{
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다\n\n");
				exit(0);
			}
		}

		// 물고기 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			printf("모든 물고기가.. ㅠㅠ 흑흑...\n");
			exit(0);
		}
		else
		{
			printf("물고기가 아직 살아있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;
		// 물 주는 간격 10초 -> 15초 (5초 : prevElapsedTime) -> 25초 (10초 : prevElapsedTime)에 저장해야 함
	}
	return 0;
}
void initData()
{
	level = 1; // 게임 레벨 (1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이 (0-100)
	}
}
void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6); // %3d : 글자에 3칸 할당 (한글은 2칸 차지)
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 시간 흐를 때마다 일정량 감소
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}