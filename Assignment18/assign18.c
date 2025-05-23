/* 파일명: assign18.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
          0~999 사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.

 * 작성자: 임승리

 * 날짜: 2025.05.23

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0618();
void divisors(int x);

int main()
{
    srand(time(NULL));

    Assignment0618();

    return 0;
}

void Assignment0618()
{
    int i, x;

    for (i = 1;i < 4;i++)
    {
        int x = rand() % 1000;

        divisors(x);
    }

}

void divisors(int x)
{
    int i;
    int c = 0;


    printf("%d의 약수: ", x);

    for (i = 1; i <= x; i++)
    {

        if (x % i == 0) {
            c++;
            printf("%d ", i);
        }
    }
    printf("=> 총 %d개\n", c);
}