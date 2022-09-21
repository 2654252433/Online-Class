#include <stdio.h>
#include <stdlib.h>

int main()  //主函数-程序的入口-main函数有且只有一个
{
    printf("%d\n",sizeof(char));  //表示char类型占内存多大空间
    printf("%d\n",sizeof(int));   //sizeof表示括号里字符所占多大内存
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));

    char ch='B';
    printf("%c\n",ch);

    int age=20;
    printf("%d\n",age);

    short nianling=20;//向内存申请2个字节=16bit位，用来存放20
    printf("%d\n",nianling);

    float weight=95.6f;//向内存申请4个字节，存放小数
    printf("%f\n",weight);

    long num=100;
    printf("%d\n",num);

    float fu=5.0;
    printf("%f\n",fu);

    double sh=3.14;
    printf("%lf\n",sh);

    int num1;
    int num2;
    int sum;
    //输入数据-输入函数scanf
    scanf("%d%d",&num1,&num2);//&是取地址符号
    sum=num1+num2;
    //int sum;  注意:int sum不能放在此处，因为C语言语法规定，变量要定义在当前代码块的最前面
    printf("sum=%d\n",sum);
    return 0;
}

//stdio=std(标准)+input(输入)+output(输出)
//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//printf=print(打印)+function(函数)=打印函数

//char 字符类型
//%d   打印整型
//%c   打印字符
//%f   打印浮点数字-打印小数
//%p   打印地址
//%x   打印16进制数字

//计算机中的单位
//bit 比特位
//byte 字节   一个字节=8个比特位的大小
//kb  1kb=1024byte
//mb  1mb=1024kb
//gb  1gb=1024mb
//tb  1tb=1024gb
//pb  1pb=1024tb
//n位数能够产生2的n次方个数，例如3位数能够产生2^3个数

//全局变量和局部变量如果相同可以使用，局部变量优先，但最好不要两个变量相同
//局部变量的作用域是变量所在的局部范围
//全局变量的作用域是整个工程
