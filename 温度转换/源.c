#include<stdio.h>
#include<stdlib.h>
float calculate(float t);
int main()
{
    float t = 0;
    float c=0;

    printf("�����뻪���¶ȣ�");
    scanf_s("%f", &t);
    c = calculate(t);
    printf("�����¶�Ϊ:%5.2f", c);



    system("pause");
    return 0;
}

float calculate(float t)
{
    float c =5.0 / 9 * (t-32);
    return c;
}