#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr1[10]={1,2,3};//不完全初始化，剩下的元素默认初始化为0
    char arr2[5]={'a',98};//该数组放了a,b,0,0,0，其中后面三位是默认为0
    char arr3[5]="ab";//该数组也是放了a,b,0,0,0，但是第三个元素是我们放进去的\0
    char arr4[]="abcdef";//该数组里面有a,b,c,d,e,f,\0
    printf("%d\n",sizeof(arr4));//计算arr4所占空间的大小，包含\0
    printf("%d\n",strlen(arr4));//计算字符串的长度，遇到'\0'就会停止
    //strlen和sizeof没有什么关联
    //strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引用头文件
    //sizeof计算变量、数组、类型的大小-单位是字节-操作符
    int i=0;
    for(i=0;i<(int)strlen(arr4);i++)//因为strlen返回的是一个无符号整型值，所以前面加个int
    {
        printf("%c ",arr4[i]);//打印arr4[]里的内容
    }

    printf("\n");
    //二维数组
    int arr5[3][4]={{1,2,3},{4,5}};
    int arr6[][4]={{1,2,3,4},{5,6,7,8}};
    int a=0;
    for(a=0;a<2;a++)
    {
        int b=0;
        for(b=0;b<4;b++)
        {
            printf("%d ",arr6[a][b]);//打印二维数组
        }
        printf("\n");
    }

    return 0;
}
