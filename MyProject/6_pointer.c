#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArray(int* ptr);

int main_pointer(void)
{
	// 포인터 : 주소 넘길 때 사용
	// 철수(101호) / 영희(201호) / 민수(301호)
	// 각 문에 암호
	//int 철수 = 1; // 암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수); // &철수 : "철수" 변수가 메모리 공간에서 차지하는 위치
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//// 미션맨
	//
	//// 첫 번째 미션 : 각 집의 암호 확인
	//int * 미션맨; // 포인터 변수
	//미션맨 = &철수; // 철수의 주소 전달
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨); // *미션맨 : 해당 주소가 갖는 값
	//
	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//// 두 번째 미션 : 각 암호에 x3
	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);

	//// 스파이
	//// 미션맨이 바꾼 암호에서 -2
	//int * 스파이 = 미션맨; // 동일 메모리 주소 가리킴
	//printf("\n ... 스파이가 미션 수행하는 중 ... \n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);

	//printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 놀람 ... \n\n");

	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//// 참고 : 미션맨의 주소
	//printf("미션맨의 주소 : %d\n", &미션맨);
	//printf("스파이의 주소 : %d\n", &스파이);

	// 배열
	//int arr[3] = { 5, 10, 15 };
	//int* ptr = arr; // 배열 원소 각각의 주소 가짐
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	//}
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	//	printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	//	printf("배열 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	//}
	//// *(arr + i) == arr[i]
	//// arr == arr 배열 첫번째 값의 주소 == &arr[0]
	//printf("arr 자체의 값 : %d\n", arr);
	//printf("arr[0] 의 주소 : %d\n", &arr[0]);

	//printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // *(arr + 0)
	//printf("arr[0] 의 실제 값 : %d\n", *&arr[0]); // *& 는 아무것도 없는 것과 같다(상쇄)

	// SWAP
	//int a = 10;
	//int b = 20;
	//printf("a 의 주소 : %d\n", &a);
	//printf("b 의 주소 : %d\n", &b);

	//// a와 b의 값 바꾸기
	//printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	//swap(a, b);
	//printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
	//
	//// 값에 의한 복사 (Call by value) -> 값만 복사한다는 의미 (10, 20 만 함수에 던진 것, a, b를 던진 것 X)
	//// main 함수 내에서와 swap 함수 내에서 a, b의 공간이 다름

	//// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체 넘기기
	//printf("(주소값 전달) Swap 함수 전 => a : %d, b : %d\n", a, b);
	//swap_addr(&a, &b);
	//printf("(주소값 전달) Swap 함수 후 => a : %d, b : %d\n", a, b);
	
	// 배열일 때, arr2 == &arr2[0]
	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2); // == changeArray(&arr2[0])
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}

	// scanf 에서 &num 과 같이 & 을 사용하는 이유?

	return 0;
}

void swap(int a, int b)
{
	printf("(Swap 함수 내) a 의 주소 : %d\n", &a);
	printf("(Swap 함수 내) b 의 주소 : %d\n", &b);
	
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}
void swap_addr(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달) Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}
void changeArray(int* ptr)
{
	ptr[2] = 50;
}