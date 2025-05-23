/* ���ϸ�: assign19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��϶�
          ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�,
          graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�
          0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��϶�

 * �ۼ���: �ӽ¸�

 * ��¥: 2025.05.23

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0619();
void graph(int a, int b);

int main()
{
    srand(time(NULL));

    Assignment0619();

    return 0;
}

void Assignment0619()
{
    int i, x;

    for (i = 1;i < 4;i++)
    {
        int x = rand() % 10000;

        printf("%d:", x);
        graph(x, 100);
        printf("\n");
    }
}

void graph(int a, int b)
{
    int i;

    for (i = 0; i < a / b; i++)
    {
        printf("*");
    }
}