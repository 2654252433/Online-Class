#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=-16;
    int b=a>>1;//右移操作符，移动的是二进制位
    //存储到内存的是补码
    //右移操作符：
    //1、算术右移：右边丢弃，左边补原符号位(通常一般都是该种右移)
    //2、逻辑右移：右边丢弃，左边补0
    printf("%d\n",b);

    int c=5;
    int d=c<<1;
    printf("%d\n",d);
    //左移操作符：左边丢弃，右边补0

    //对于移位运算符，不要移动负数位，这个标准是未定义的
    //例如：int num=10;
    //      num>>-1;    error


    // &--按位与,两个都是1才为1，只要有一个是0则为0
    int e=3;
    int f=5;
    int g=e&f;
    printf("%d\n",g);

    // |--按位或，两个都是0才为0，只要有一个是1则为1
    int h=3;
    int i=5;
    int j=h|i;
    printf("%d\n",j);

    // ^--按位异或,相同为0，相异为1
    int k=3;
    int l=5;
    int m=k^l;
    printf("%d\n",m);
    //C语言中没有同或符号，但是只要取异或的非即可，例如: m=!(k^l)

    int n=10;
    char o='r';
    char*p=&c;
    int arr[10]={0};
    printf("%d\n",sizeof n);//4 此处可省略n的括号
    printf("%d\n",sizeof(int));//4 类型不能省略括号

    printf("%d\n",sizeof(o));//1 字符类型为1
    printf("%d\n",sizeof(char));//1

    printf("%d\n",sizeof(p));//8或者4 指针大小看是64位还是32位
    printf("%d\n",sizeof (char*));//8 指针的类型

    printf("%d\n",sizeof(arr));//40
    printf("%d\n",sizeof(int [10]));//40 数组去掉名字，等号前面的就是数组的类型

    return 0;
}
