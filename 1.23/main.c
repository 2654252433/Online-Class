#include <stdio.h>
#include <stdlib.h>

int i;//全局变量不初始化时，默认为0，而局部变量不初始化为随机值

int main()
{
    i--;//-1
    if(i>sizeof(i))//i是整型，而sizeof(i)为无符号整型
                   //所以此处i被提升为无符号整型，那么-1的符号位1则变成正的了，将会是一个很大的数字
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }

    int arr[]={1,2,3,4,5};
    short* p=(short*)arr;//此处int被强制转换为short类型，一次只能访问两个字节了
    int i=0;
    for(i=0;i<4;i++)
    {
        *(p+i)=0;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    int a,b,c;
    a=5;
    c=++a;
    b=++c,c++,++a,a++;// =优先级高于,
    b+=a++ + c;// +=优先级高于+
    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;
}
