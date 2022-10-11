#include <stdio.h>
#include <stdlib.h>

//进行一个函数递归
//递归的两个必要条件：
//1、存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2、每次递归调用之后越来越接近这个限制条件

void dayin(int n)
{
    if(n>9)
    {
        dayin(n/10);//运行到这里的时候会在里面再进行一个循环
    }
    printf("%d ",n%10);
}

int strlen(char*str)
{
    if(*str!='\0')//如果第一个元素不是\0的话，就扫描数组下一个地址是不是\0
        return 1+strlen(str+1);
        //首先扫描数组第一个元素，不是就扫描下一个，直到最后扫描到\0，返回扫描次数，也就是字符串长度
    else
        return 0;
}

int fac(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fac(n-1);
}

int fbl(int i)
{
    int a=1;
    int b=1;
    int c=1;
    while(i>2)
    {
        c=a+b;//每次运算都往后移动一位
        a=b;
        b=c;
        i--;
    }
    return c;
}

int main()
{
    //接受一个整型值（无符号），按照顺序打印它的每一位
    //例如，输入1234，输出1 2 3 4
    unsigned int num=0;
    scanf("%d",&num);
    dayin(num);

    //编写函数不允许创建临时变量，求字符串的长度
    char arr[]="bit";
    int len=strlen(arr);
    //arr是数组，数组传参，传过去的不是整个数组，而是数组第一个元素的地址
    printf("\n%d\n",len);

    //写一个递归函数，求n的阶乘
    int i=0;
    int ret=0;
    scanf("%d",&i);
    ret=fac(i);
    printf("%d\n",ret);

    //写一个递归，输入一个数a，求第a位置的斐波那契数列
    int a=0;
    int b=0;
    scanf("%d",&a);
    b=fbl(a);
    printf("%d\n",b);
    return 0;
}
