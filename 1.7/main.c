#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int age=99;
    if(age<18)
        printf("未成年\n");
    else if(age>=18&&age<23)
        printf("青年\n");
    else if(age>=23&&age<50)
        printf("壮年\n");
    else if(age>=50&&age<90)
        printf("老年\n");
    else
        printf("老顽童\n");
*/

    //悬空else
    int a=0;
    int b=2;
    if(a==1)//没有与该if匹配的else，不输出
        if(b==2)
        printf("hehe\n");
        else//就近原则，else跟上面的if匹配
        printf("haha\n");

    int num=4;
    if(num=5)//赋值语句,非0即真，可以输出
    {
        printf("呵呵\n");
    }

    //判断一个数是否为奇数
    int c;
    scanf("%d",&c);//不加\n，记得取址符号&
    if(c%2==1)
        printf("是奇数\n");
    else
        printf("不是奇数\n");

    //输出1-100之间的奇数
    int d;
    for(d=1;d<=100;d++)
    {
        if(d%2==1)
        printf("%d\n",d);
    }

    //switch语句使用方法
    int e;
    scanf("%d",&e);
    switch(e)//括号的变量必须是整型
    {
    case 1://同样case后面的数字也必须是整型，不能写1.0
        printf("星期一");
        break;
    case 2:
        printf("星期二");
        break;
    case 3:
        printf("星期三");
        break;
    case 4:
        printf("星期四");
        break;
    case 5:
        printf("星期五");
        break;
    case 6:
        printf("星期六");
        break;
    case 7:
        printf("星期天");
        break;
    default://每个switch语句只能出现一个default
        printf("输错了吧");
        break;
    /*case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("工作日");
        break;
    case 6:
    case 7:
        printf("休息日")；
        break;
    这样也是一种switch的写法,将相同的输出合并起来
    */
    }
    int f=1;
    int g=2;
    switch(f)
    {
    case 1:g++;
    case 2:f++;
    case 3:
           switch(f)//switch语句可以嵌套使用
           {
               case 1:f++;
               case 2:g++;f++;break;
           }
    case 4:g++;
        break;
    default:
        break;
    }
    printf("g=%d,f=%d\n",g,f);

    //while语句用法
    int h=1;
    while(h<=10)
    {
        if(h==5)
            break;//循环遇到break会跳出循环，并不会把5打印出来
            //continue;  循环遇到continue会跳上去重新进行循环判断，于是便会一直循环
        printf("%d\n",h);
        h++;
    }

    //int ch=getchar();//getchar是输入，跟scanf一样
    //putchar(ch);//putchar是输出，跟printf一样
    //printf("%c\n",ch);

    int cg;
    //EOF--end of file(文件结束标志)-> -1
    while((cg=getchar())!=EOF)//按ctrl+z才能停下来
    {
        putchar(cg);
    }
    return 0;
}
