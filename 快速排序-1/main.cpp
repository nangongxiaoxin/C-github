#include <stdio.h>
#include <iostream>

using namespace std;

void quick(int arr[], int n)
{
    //元素个数
    //设置基准值
    int pivot = arr[0];
    int left = 0, right = n - 1;
    while (left < right)
    {

        while (left < right && arr[right] > pivot)
        {
            right--;
        }
        if (left < right)
        {
            arr[left] = arr[right];
            left++;
        }
        while (left < right && arr[left] <= pivot)
        {
            left++;
        }
        if (left < right)
        {
            arr[right] = arr[left];
            right--;
        }
    }
    arr[left] = pivot; //基准元素归位
    if (left > 1)
    {
        //递归地对左子序列 进行快速排序
        quick(arr, left);
    }

    if (n - left - 1 > 1)
    {
        //右列
        //arr+left 为此时arr中固定基准值的地址 +1为右列的开始地址
        quick(arr + left + 1, n - left - 1);
    }
}

int main()
{

    int i, arr[] = {23, 56, 9, 75, 18, 42, 11, 67};
    quick(arr, 8);
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d\t", arr[i]);
    }

    cout << "------------------------------------------" << endl;
    int *x = arr + 1;
    cout << arr + 1 << endl;
    cout << x[1] << endl;
    return 0;
}