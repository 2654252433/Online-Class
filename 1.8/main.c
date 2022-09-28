#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("请输入密码：");
    scanf("%s",password);
    //输入一串数字后，还剩一个'\0'在缓冲区，需要清理掉
    //第一种解决方法：getchar();  读取掉缓冲区的'\0'，用fflush(stdin)也一样可以
    //第二种解决方法：fflush(stdin);  会清空输入缓冲区所存在的数据
    //第三种解决方法：用while循环直到getchar把\0读走为止
    while((ch=getchar())!='\n')
    {

    }
    printf("请确认(Y/N):");
    ret=getchar();
    if(ret=='Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("确认失败\n");
    }

    printf("%d\n",'\n');// '\n'的ASCLL值就是10

    int cg;
    while((cg=getchar())!=EOF)//遇到ctrl+z才会结束
    {
        if(cg<'0'||cg>'9')//遇到1-9的字符就打印出来，不是的话就不打印
            continue;
        putchar(cg);
    }

    int a;
    for(a=1;a<10;a++)//for循环打印1-9
    {
        if(a==5)
           continue;//遇到continue就会跳过continue下面的代码，和while相同
        printf("%d",a);//12346789
    }

    //for循环建议:不可在for循环体内修改循环变量，防止for循环失去控制
    //建议for语句的循环控制变量的取值采用"前闭后开区间"写法
    //就是第二个a前面是=(闭)，后面是<或者>(开)，上面a<10的a即所说的第二个a
    //for循环的初始化，调整，判断都可被省略
    //如果for循环的判断部分被省略，那么判断条件就是恒为真

    int b=0;
    int c=0;
    //此处如果b,c不赋值于0的话，下面就不会打印hehe
    for( ;b<10;b++)
    {
        for( ;c<10;c++)
        {
            printf("hehe\n");//此处打印10个hehe
        }
    }
    //b=1的时候,c就已经从0-9把hehe打印出来了，而此时c=10饼不会打印hehe
    //b=2的时候,由于c已经为10，没有重新进行初始化，所以不会再打印hehe了

    //笔试题：
    int d=0;
    int e=0;
    for(d=0,e=0;e=0;d++,e++)//判断语句是e=0，此处注意是赋值为0，所以为假，一次也不循环
        //如果判断语句为真，就会死循环
        e++;

    //用do while循环打印1-10
    int f=1;
    do
    {
        printf("%d\n",f);
        f++;
    }
    while(f<11);
    return 0;
}
