#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


/*
文件的打开和关闭
文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。
在编写程序的时候，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指针和文件的关系。
ANSIC规定使用fopen函数来打开文件，fclose来关闭文件。

FILE* fopen(const char* filename，const char* mode);
int fclose(FILE* stream);

相对路径：即当前路径所在的文件夹，例如：fopen("text.txt","r");
绝对路径：即路径的具体路径，例如：fopen("E:\\codeblock\\学习课\\1.71\\text.txt","r");
..  两个点表示上一级路径
.   一个点表示当前路径
例如：fopen("../../text.txt","r");

微信图片：
微信图片：
*/
int main()
{
    FILE*pf=fopen("E:\\codeblock\\学习课\\1.71\\text.txt","w");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    fclose(pf);
    pf=NULL;
    return 0;
}
