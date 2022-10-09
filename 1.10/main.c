#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "add.h"

int getmax(int x,int y)//自定义函数
{
    if(x>y)
        return x;
    else
        return y;
}

/*    这里的x和y是形参，而实参是有具体数值的变量，常量等等......
例如int a=10;int b=20;--这里的a和b就是实参
当实参传给形参的时候，形参其实是实参的一份临时拷贝
对形参的修改是不会改变实参的
void swap1(int x,int y)
{
    int tmp=0;
    tmp=x;
    x=y;
    y=tmp;
} 这种方法是无法实现数值交换的
*/

void swap2(int*pa,int*pb)//void是无返回值
{
    int tmp=0;
    tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}

int main()
{
    char arr1[]="bit";
    char arr2[20]="##########";
    strcpy(arr2,arr1);//字符串拷贝，将arr1拷贝到arr2里面，包括\0也拷贝进去
    //arr2="bit\0######",可是\0是结束标志，所以遇到\0就不打印了
    printf("%s\n",arr2);

    char arr3[]="hello world";
    memset(arr3,'*',5);//memset-内存设置，需引用#include <string.h>
    //第一个是存放的地址，第二个是要改变的值(int)，第三个是存放的字节
    printf("%s\n",arr3);

    int a=10;
    int b=20;
    int max=getmax(a,b);//自定义函数取最大值
    printf("max=%d\n",max);

    int c=10;
    int d=20;
    //int*pa=&c;
    //int*pb=&d;
    printf("%d,%d\n",c,d);
    //这里的swap都被称为调用函数
    //swap1(c,d);-- 传值调用,只是把c和d的值传过去调用了，没有把地址也传过去
    //函数的形参和实参分别有各自的独立空间，对形参的修改不会影响实参

    swap2(&c,&d);//-- 传址调用，把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
    //这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部也可以操作函数外部的变量
    //自定义函数交换两个数的值,swap是交换的意思
    //这里得通过取地址才能交换自定义函数里的值
    //因为void swap2里定义的变量有独立空间（也就是自己独立的地址）
    printf("%d,%d\n",c,d);

    printf("%d\n",printf("%d",printf("%d",43)));//4321
    //链式访问，printf返回的值是字符串的个数
    //所以第一次打印43，而43是两个字符串所以返回了一个2
    //所以再打印一个2，而2是一个字符串，所以再打印一个1

    int e=15;
    int f=25;
    int g=0;
    g=add(e,f);
    printf("%d\n",g);
    return 0;
}
