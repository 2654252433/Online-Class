#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("**********************\n");
    printf("******  0.exit  ******\n");
    printf("****1.add    2.sub****\n");
    printf("****3.mul    4.div****\n");
    printf("******  5.rox  *******\n");
    printf("**********************\n");
}

int Add(int x,int y)//加法
{
    return x+y;
}

int Sub(int x,int y)//减法
{
    return x-y;
}

int Mul(int x,int y)//乘法
{
    return x*y;
}

int Div(int x,int y)//除法
{
    return x/y;
}

int Xor(int x,int y)//异或
{
    return x^y;
}

//函数指针数组的用途：转移表
//制作一个简易计算器
int main()
{
    int (*arr[])(int,int)={0,Add,Sub,Mul,Div,Xor};
    int x=0;
    int y=0;
    int input=0;
    do
    {
       menu();
       printf("请输入操作方法\n");
       scanf("%d",&input);
       if(input>=1&&input<=5)
       {
        printf("请输入:\n");
        scanf("%d %d",&x,&y);
        int ret=arr[input](x,y);
        printf("%d\n",ret);
       }
       else if(input==0)
       {
        printf("退出程序\n");
       }
       else
       {
        printf("输入错误，请重新输入\n");
       }
    }while(input);
    return 0;
}
