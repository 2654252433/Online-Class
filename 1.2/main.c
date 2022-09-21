#include <stdio.h>
#include <stdlib.h>
#include <string.h>//用strlen时所需要的头文件
#define max 10   //#define定义的标识符常量，能够在数组中使用

enum Sex//枚举关键  enum
{
    MALE,
    FEMALE,
    SECRET
};

int Add(int x,int y)//自定义函数，相当于函数f(x,y),add相加
{
    int z=x+y;
    return z;
}

int main()
{
    int arr[max];
    printf("%d\n",max);
    const int num=4;//const修饰的变量将定为常变量，无法更改，不能在数组中使用
    printf("%d\n",num);

    //MALE FEMALE SECRET-枚举常量
    enum Sex s=FEMALE;//可以这样用
    s=MALE;//定义的变量可以改成其他的枚举常量
    //FEMALE=6;枚举常量不能改数值
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2

    char arr1[]="abc";
    //"abc"--'a''b''c''\0'--'\0'字符串的结束标志
    //字符串的结束标志是一个\0的转义字符，
    //在计算字符串长度的时候\0是结束标志，不算做字符串内容
    //'\0'--0   'a'--97   'A'--65
    char arr2[]={'a','b','c'};
    char arr3[]={'a','b','c','\0'};
    //'a' 'b' 'c' 遇到'\0'才会停止打印
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);
    printf("%d\n",strlen(arr1));//strlen--string length--计算字符串长度
    printf("%d\n",strlen(arr2));
    printf("%d\n",strlen(arr3));
    printf("c:\test\77\test.c\n");//  \t--水平制表符（表示一段空格）
    printf("c:\\test\\32\\test.c\n");//   需要\进行转义
    printf("%c\n",'\'');//用于打印出一个'
    printf("%d\n",strlen("c:\test\32\test.c"));
    //  将打印出13个字符--  c : \t  e s t \32 \t e s t . c
    //  \32--是两个8进制数字，即为十进制的26，同时作为ASCLL值对应的字符
    printf("%c\n",'\x61');
    //  \x61是61代表的两个十六进制数字，即为十进制的97，代表着ASCLL值对应的字符
/*
    int input=0;
    printf("你会好好学习吗\n");
    scanf("%d",&input);
    if(input==1)
        printf("坚持，你会成功的\n");
    else
        printf("不行必须好好学习\n");


    int line;
    while(line<=2000)
    {
        line++;
        printf("我要努力敲代码%d\n",line);
    }
    if(line>2000)
        printf("巅峰时刻哈哈哈\n");
*/
    int num1=10;
    int num2=20;
    int sum;
    int a=100;
    int b=200;
    sum=Add(num1,num2);//sum=num1+num2
//  sum=Add(a,b);
//  sum=Add(2,3);
    printf("sum=%d\n",sum);

    int brr[10]={1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组
    int c;
    while(c<10)//用循环方式将数组内的数都打印出来
    {
        printf("%d\n",brr[c]);
        c++;
    }
//  printf("%d\n",brr[4]); 下标的方式访问元素
//  char ch[20]; 定义字符型数组
//  float brr[5]; 定义单精度浮点型数组

    int d=1;//移2进制位操作符，整型一个字节=32bit位
    //0000 0000 0000 0000 0000 0000 0000 0001
    int e=d<<2; //将d的1向左移两位，也就是100
    printf("%d\n",e);//二进制100=4
    printf("%d\n",d);//d本身不变，还是1

    //&按位与
    //|按位或
    //^按位异或
    int x=3;  //011
    int y=5;  //101
    int z=x&y;//001--两个都是1，对应位才会1
    int u=x|y;//111--只要有一个1，对应位就是1
    int w=x^y;//110--异或就是相异为1，相同为0
    printf("%d\n",z);
    printf("%d\n",u);
    printf("%d\n",w);

    int crr[10]={0};
    int sz;
    sz=sizeof(crr)/sizeof(crr[0]);//数组总元素/每个元素的大小=数组元素个数
    printf("%d\n",sz);
    printf("%d\n",sizeof(crr));//sizeof也可以计算数组
    printf("%d\n",sizeof crr);
    //sizeof的括号去掉也能用
    //printf("%d\n",sizeof int);
    return 0;
}



