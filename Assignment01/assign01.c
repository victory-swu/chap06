/* 파일명 : assign01.c

 * 내용 : 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오.
           get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레르 구하는 프로그램을 작성하시오.

 * 작성자 : 임승리

 * 날짜 : 2025.05.23

 * 버전 : v1.0

 */

#include <stdio.h>

void Assignment0601();
int get_perimeter(int a, int b);

int main()
{
	Assignment0601();

	return 0;
}

void Assignment0601()
{
	int a, b;

	printf("가로? ");
	scanf_s("%d", &a);
	printf("세로? ");
	scanf_s("%d", &b);

	printf("직사각형의 둘레: %d", get_perimeter(a, b));

	return;
}

int get_perimeter(int a, int b)
{
	return (a + b) * 2;
}