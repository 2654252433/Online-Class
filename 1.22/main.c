#include <stdio.h>
#include <stdlib.h>
#define yuansu 5

int my_strlen(char* str)
{
    char* start=str;
    char* end=str;
    while(*end!='\0')
    {
        end++;
    }
    return end-start;
}

int main()
{
    //int* p=NULL;指针不知道初始化什么值的时候，可以先给其初始化个空指针
    //指针减去指针，得到的是数组元素的个数
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]-&arr[0]);//第10个元素与第1个元素之间相差9个元素

    char brr[]="bit";
    int len=my_strlen(brr);
    printf("%d\n",len);

    //C语言标准规定：
    //允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
    //但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
    float value[yuansu];
    float* v;
    for(v=&value[yuansu];v>&value[0];)
    {
        *--v=0;
    }

    int a=10;
    int* pa=&a;
    int** ppa=&pa;//int**二级指针，以此类推还有三级指针、四级指针等....
    printf("%d\n",**ppa);

    int b=10;
    int c=20;
    int d=30;
    int* crr[3]={&b,&c,&d};//指针数组，用来存放指针
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d ",*(crr[i]));
    }
    return 0;
}
