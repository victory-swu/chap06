/* 파일명 : assign03.c

 * 내용 : 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오.
		   distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.

 * 작성자 : 임승리

 * 날짜 : 2025.05.23

 * 버전 : v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Assignment0603();
double distance(int a, int b, int c, int d);

int main()
{
	Assignment0603();

	return 0;
}

void Assignment0603()
{
	int x1, x2, y1, y2;

	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf", x1, y1, x2, y2, distance(x1, x2, y1, y2));

	return;
}

double distance(int a, int b, int c, int d)
{
	int e = pow(a - b, 2);
	int f = pow(c - d, 2);
	double g = sqrt(e + f);

	return g;
}