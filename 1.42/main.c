#include <stdio.h>
#include <stdlib.h>

int main()
{
    //指针笔试真题：
    //第三题
    int a[4]={1,2,3,4};
    int*ptr1=(int*)(&a+1);
    int*ptr2=(int*)((int)a+1);
    printf("%x,%x\n",ptr1[-1],*ptr2);//4，2000000

    //第四题
    int b[3][2]={(0,1),(2,3),(4,5)};//此处括号()内是逗号表达式，实际上初始化了只有{1，3，5}
    int*p;
    p=b[0];//将元素首地址赋给了p
    printf("%d\n",p[0]);//1

    //第五题
    int c[5][5];
    int(*q)[4];
    q=c;
    printf("%p,%d\n",&q[4][2]-&c[4][2],&q[4][2]-&c[4][2]);//FFFFFFFFFFFFFFFC,-4
    return 0;
}
