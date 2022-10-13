#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int sz)
{
    int i=0;
    //确定冒泡排序的躺数
    int flag=1;//假设这一趟要排序的数据已经有序
    for(i=0;i<sz-1;i++)
    {
        //每一趟冒泡排序
        int j=0;
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              int swap=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=swap;
              flag=0;//本躺排序的数据其实不完全有序
            }
        }
        if(flag==1)
        {
            break;//如果其中一趟已经排好序了就直接跳出循环了，
        }
    }
}

int main()
{
    int arr[]={9,8,7,6,5,0,1,2,3,4};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    //对arr进行排序，排成升序
    bubble_sort(arr,sz);//冒泡排序函数
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    int arr1[]={1,2,3,4,5,6,7};
    //数组名就是首元素地址
    //1、sizeof(数组名)--计算的是整个数组的大小，单位是字节
    //2、&+数组名，取出的是整个数组的地址，只不过打印出来是从首元素地址开始
    //除了以上两种情况外，所有的数组名都表示首元素的地址
    printf("%p\n",arr);
    printf("%p\n",arr+1);//第二个元素地址
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);//第二个元素地址
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);//此处加了28，7个元素，每个元素占4个字节
    printf("%d\n",*arr1);
    printf("%d\n",*arr1+1);//第二个元素的值
    return 0;
}
