#include <stdio.h>
#include <time.h>

int main_condition(void)
{
	// 버스를 탄다고 가정 : 학생 or 일반인
	/*int age = 15;
	if (age >= 20)
	{
		printf("일반인입니다\n");
	}
	else
	{
		printf("학생입니다\n");
	}*/

	// 초등학생 or 중학생 or 고등학생
	// if / else if / else
	//int age = 8;
	//if (age >= 8 && age <= 13) // && : 조건 모두 만족
	//{
	//	printf("초등학생입니다\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다\n");
	//	}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다");
	//}
	//else
	//{
	//	printf("학생이 아닙니다");
	//}

	// break / continue
	// 1번부터 30번까지 있는 반에서 1번부터 5번까지 조별 발표
	//for (int i = 1; i <= 20; i++) 
	//{
	//	if (i >= 6) 
	//	{
	//		printf("나머지 학생은 집에 가세요\n");
	//		break;
	//	}
	//	printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	//}

	// 7번 학생 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표를 준비하세요.\n", i);
		}
	}*/

	// && : 둘 다 만족 / || : 둘 중의 하나만 만족
	//int a = 10;
	//int b = 10;
	//int c = 12;
	//int d = 13;
	//if (a == b || c == d)
	//{
	//	printf("a 와 b, 혹은 c 와 d 도 같습니다\n");
	//}
	//else
	//{
	//	printf("값이 서로 다르네요");
	//}
	
	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("몰라요");
	//}

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i) // 해당 변수의 조건 판별 / 조건마다 break 입력 안하면, 해당 조건 만족 시 이후 조건 모두 수행
	//{
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라요\n"); break;
	//}

	//int age = 25;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13:printf("초등학생입니다\n"); break;
	//case 14:
	//case 15:
	//case 16:printf("중학생입니다\n"); break;
	//case 17:
	//case 18:
	//case 19:printf("고등학생입니다"); break;
	//default:printf("학생이 아닌가봐요\n"); break;
	//}

	// Up & Down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) // 1 : True
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1-100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다!\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요\n\n");
			}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패하셨습니다\n");
			break;
		}
	}

	return 0;
}