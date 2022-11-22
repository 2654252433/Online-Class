#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    int z=x+y;
    return z;
}

void print(char*str)
{
    printf("%s\n",str);
}

//函数传参，&函数名和函数名都是函数的地址
//函数指针--指向函数的指针--存放函数地址的一个指针
int main()
{
    int(*pa)(int,int)=add;//取add函数的地址放进pa地址里
    printf("%d\n",(*pa)(2,3));//直接调用函数

    void(*p)(char*)=print;//取print函数的地址放进p地址里
    (*p)("hello");//直接调用函数
    return 0;
}
