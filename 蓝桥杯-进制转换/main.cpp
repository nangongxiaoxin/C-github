#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int char_to_num(char ch);                                         //定义10进制字符转换为数字
char num_to_char(int num);                                        //数字转字符
long source_to_decimal(char temp[], int source);                  //原数转为10进制
int decimal_to_object(char temp[], long decimal_num, int object); //10进制数转为目标进制
void outprint(char temp[], int length_temp);                      //输出

int main()
{
    int source;       //原数进制
    int object;       //目标数进制
    int flag = 1;     //标记是否继续
    int length_temp;  //转换为目标数制后字符数组的长度
    long decimal_num; //储存转换成的10进制数
    char temp[101];   //用以存储原数

    while (flag == 1)
    {
        cout << "输入转换前的数：";
        cin >> temp;
        cout << "转换前的进制为：";
        cin >> source;
        cout << "转换后的进制为：";
        cin >> object;
        cout << "转换后的数为：";

        decimal_num = source_to_decimal(temp, source);
        length_temp = decimal_to_object(temp, decimal_num, object);
        outprint(temp, length_temp);
        printf("输入1继续，其他为退出：");
        scanf("%d", &flag);
    }
}
//转换为10进制
long source_to_decimal(char temp[], int source)
{
    int i;
    int decimal_num_temp = 0;
    int length_temp; //临时统计字符数量
    for (i = 0; temp[i] != '\0'; i++)
    {
        //length_temp = i; //可优化为1次赋值
    }
    //length_temp = length_temp - 1;
    length_temp = i;
    //cout << temp << endl;//检查temp的内容
    for (i = 0; i <= length_temp - 1; i++) //累加，用字符长度作为条件
    {
        //利用基数和数相乘，将先读取的数逐步推向高数位（即进制转换的基本原理123 = 1* 10^2 + 2* 10^1 + 3*10 ^0）
        decimal_num_temp = (decimal_num_temp * source) + char_to_num(temp[i]);
    }
    return decimal_num_temp;
}

//10进制转其他进制
int decimal_to_object(char temp[], long decimal_num, int object)
{
    int i = 0;
    while (decimal_num)
    {
        temp[i] = num_to_char(decimal_num % object); //除以基数取余法 再 将余数转换为进制
        decimal_num = decimal_num / object;          //从后向前解决
        i++;
    }
    temp[i] = '\0';
    return i;
}
//字符转数字
int char_to_num(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return ch - '0'; //利用差值将数字字符转换为数字
    }
    if (ch >= 'A' && ch <= 'F')
    {
        return ch - 'A'; //利用差值将字母字符转换为数字
    }
    if (ch >= 'a' && ch <= 'f')
    {
        return ch - 'a'; //同上
    }
    else
    {
        exit(0);
    }
}

//数字转字符
char num_to_char(int num)
{
    if (num >= 0 && num <= 9)
    {
        return (char)(num - 0 + '0'); //使用(char)强制转换
    }
    if (num >= 10 && num <= 15)
    {
        return (char)(num - 10 + 'A');
    }
    else
    {
        exit(0);
    }
}

//逆序输出
void outprint(char temp[], int length_temp)
{
    for (int j = length_temp - 1; j >= 0; j--)
    {
        printf("%c", temp[j]);
    }
    printf("\n");
}