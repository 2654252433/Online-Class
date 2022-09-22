#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(X,Y) (X>Y?X:Y)

void test()
{
    static int l=1;//这里面的l是局部变量
    //static是静态变量，会将每次l的值保留下来，这样l每次出去后就不会销毁
    //static改变了变量的作用域，使其只能在自己所在的源文件里使用
    l++;
    printf("l=%d\n",l);
}

int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

struct Book
{
    char name[20];//名字叫做C语言程序设计
    short price;//55
};

int main()
{
    int a=0;//00000000 00000000 00000000 00000000
    int b=~a;//11111111 11111111 11111111 11111111
    //  ~是按位取反，0变成1，1变成0
    //原码，反码，补码
    //负数在内存中存储的时候，存储的是二进制的补码
    //b=11111111 11111111 11111111 11111111(补码)
    //往原码逆推，得到反码：11111111 11111111 11111111 11111110
    //再得到原码：10000000 00000000 00000000 00000001
    //而开头的1代表符号位是负数，所以打印出来的是-1
    printf("%d\n",b);//得到的是-1

    int c=10;
    int d=c++;//后置++，先赋值，再自身+1
    //int e=++c;//前置++，先自身+1，再赋值
    //int f=c--;后置--，先赋值，再自身-1
    //int g=--c;前置--，先自身-1，再赋值
    printf("c=%d,d=%d\n",c,d);
    //printf("c=%d,e=%d\n",c,e);

    int h=(int)3.14;
    //()里面放个类型是强制转换类型，将浮点型转换成了整型
    printf("%d\n",h);//输出为3

    int i=10;
    int j=20;
    int max;
    max=(i>j?i:j);//判断i和j的大小，如果i>j为真,输出为i，反之，输出为j
    //exp1 ? exp2 : exp3   条件操作符（三目操作符，因为有三个操作数）
    printf("%d\n",max);

    //register int k=3//register是寄存器，将变量存储在寄存器里面，能更快速的拿出来使用
    //register只是建议使用，不要存储太多，编译器会自动判断要不要存储进去

    //typedef unsigned float u_float;//typedef重定义类型，将类型重新改名

    int m;
    while(m<5)
    {
        test();
        m++;
    }

    //extern int v;//extern声明外部文件，让其他源文件的变量也能拿来用
    //printf("g_val=%d\n",v);

    int n=10;
    int o=20;
    int Max=MAX(n,o);
    printf("max=%d\n",max);
    max=MAX(n,o);
    printf("max=%d\n",max);

    //指针变量用来存放地址
    int q=10;//4个字节
    int*p=&q;//取地址
    printf("%p\n",&q);//打印地址
    printf("%p\n",p);//也是打印地址
    *p=30;// *是解引用操作符，在地址里面改变q的值
    printf("q=%d\n",q);
    char ch='r';
    char*s=&ch;
    *s='t';
    printf("%c\n",ch);
    printf("%d\n",sizeof(s));

    //利用结构体类型-创建一个该类型的结构体变量
    struct Book b1={"C语言程序设计",55};
    struct Book* pb=&b1;
    //利用pb打印出我的书名和结构
    //  .  结构体变量.成员
    //  -> 结构体指针->成员
    printf("书名：%s\n",pb->name);
    printf("价格：%d\n",pb->price);
    printf("书名：%s\n",b1.name);
    printf("价格：%d\n",b1.price);
    b1.price=15;
    strcpy(b1.name,"C++");
    //strcpy=string+copy--字符串拷贝--库函数--需要头文件include <string.h>
    printf("书名：%s\n",b1.name);
    printf("修改后的价格：%d\n",b1.price);
    return 0;
}
