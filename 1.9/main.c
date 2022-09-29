#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("Hello world!\n");
        goto again;
        printf("hehe\n");
        again:
        printf("你好\n");
    return 0;
}

//C语言中提供了可以随意滥用的goto语句和标记跳转的标号。
//从理论上goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码。
//但是某些场合下goto语句还是用得着的，最常见的用法就是终止程序在某些深度嵌套的结构的处理的过程
//例如：一次跳出两层或多层循环
//这种情况使用break是达不到目的的，它只能从最内层循环退出到上一层的循环
//goto语句真正适合的场景如下：
/*
for(...)
    for(...)
    {
        for(...)
        {
            if(disaster)
                goto error;
        }
    }

    ...
error:
    if(disaster)
        //处理错误情况
*/
