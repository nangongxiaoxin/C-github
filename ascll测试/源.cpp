#include <stdio.h>
#include <ctype.h> //���ú���ͷ�ļ�

int main()
{
    //�������ú��� - 0 ��ʾ�� ��0��ʾ��
    printf("%d\n", isupper('a'));//�ж��Ƿ��Ǵ�д��ĸ
    printf("%d\n", islower('a')); //�ж��Ƿ���Сд��ĸ
    printf("%d\n", isalpha('a')); //���ص�ֵ�Ƿ�Ϊ��ĸ
    printf("%d\n", isdigit('8')); //�жϴ�����ǲ���һ������
    //��������ʱ���ֱ�ʾ����ascii��

    //��ӡ�������е�ascii�� ��127��
    int i;
    for (i = 0; i < 127; i++)
    {
        printf("%c,", i);
    }
    return 0;
}