#include <stdio.h>
#include <stdlib.h>                              //�Ӵ�С����
int main()
{
    int x[8];
    int a, b, c;
    printf("����8����Ҫ���������\n");
    for (b = 0; b < 8; b++)
    {
        scanf_s("%d", &x[b]);
    }
    printf("\n");
    for (a = 0; a < 7; a++)
    {
        for (b = 0; b < 7 - a; b++)
        {
            if (x[b] < x[b + 1])                 //�Ƚ�
            {
                c = x[b];                        //����
                x[b] = x[b + 1];
                x[b + 1] = c;
            }
        }
    }
    printf("\n");
    for (b = 0; b < 8; b++)
    {
        printf(" %d", x[b]);
    }

    system("pause");
    return 0;
}