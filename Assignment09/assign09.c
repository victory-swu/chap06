/* 파일명 : assign09.c

 * 내용 : red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오.
		   앞에서 정의한 get_red, get_green, get_blue 함수를 함깨 이용해서 입력받은 RGB 색상의 보색을 구해서 툴력하는 프로그램을 작성하시오.

 * 작성자 : 임승리

 * 날짜 : 2025.05.23

 * 버전 : v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_red(unsigned int r);
int get_green(unsigned int g);
int get_blue(unsigned int b);
int make_rgb(int r, int g, int b);
void Assignment0609();


int main()
{
	Assignment0609();

	return 0;
}

void Assignment0609()
{
	unsigned int x;

	printf("RGB 색상? ");
	scanf("%x", &x);

	printf("RGB %06X의 보색: %06X", x, make_rgb(get_red(x), get_green(x), get_blue(x)));

	return;
}

int get_red(unsigned int r)
{
	unsigned int red;
	red = r >> 16;

	return red;
}

int get_green(unsigned int g)
{
	unsigned int green;
	green = g << 16;
	green = green >> 24;

	return green;
}

int get_blue(unsigned int b)
{
	unsigned int blue;
	blue = b << 24;
	blue = blue >> 24;

	return blue;
}

int make_rgb(int r, int g, int b)
{
	unsigned int rgb = (r << 16) + (g << 8) + b;

	return ~rgb & 0xFFFFFF;
}