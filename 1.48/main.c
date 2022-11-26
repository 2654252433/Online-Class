#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//前言
//C语言中对字符和字符串的处理很是频繁，但是C语言本身是没有字符串类型的，字符串通常放在常量字符串中或者字符数组中。
//字符串常量适用于那些对它不做修改的字符串函数

//函数介绍：
//strlen(字符串长度): #include <string.h>
//size_t strlen(const char*str);
//字符串以'\0'作为结束标志，stren函数返回的是在字符串中'\0'前面出现的字符个数(不包含'\0').
//参数指向的字符串必须要以'\0'结束。
//注意函数的返回值为size_t，是无符号unsigned int的(易错)
//学会strlen函数的模拟实现
int my_strlen(const char*str)
{
    int count=0;
    assert(str!=NULL);
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

//strcpy(字符串拷贝): #include <string.h>
//char* strcpy(char* destination，const char* source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//源字符串必须以'\0'结束。
//会将源字符串中的'\0'拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串
//目标空间必须可变
//学会模拟实现
char*my_strcpy(char*dest,const char*src)
{
    assert(dest!=NULL);
    assert(src!=NULL);
    char*ret=dest;
    while(*dest++=*src++)//拷贝src指向的字符串到dest指向的空间，包括\0
    {
        ;
    }
    return ret;//返回目的空间的起始地址
}

//strncpy：(受长度限制的字符串拷贝，第三个参数是拷贝字符串的数量) #include <string.h>
//char *strncpy(char * destination, const char * source, size_t num);
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加\0，直到num个。

//strcat(字符串追加): #include <string.h>
//char* strcat(char* destination,const char* source);
//Appends a copy of the source string to the destination string.
//The terminating null character in destination is overwritten by the first character of source, and a null-character is included at the end of the new string formed by the concatenation of both in destination.
//源字符串必须以'\0'结束
//目标空间必须有足够的大，能容纳下源字符串的内容.
//目标空间必须可修改。
//字符串自己给自己追加，如何?答：会导致死循环
char* my_strcat(char*dest,const char*src)
{
    assert(dest!=NULL);
    assert(src!=NULL);
    char*ret=dest;

    while(*dest!='\0')
    {
        dest++;
    }
    while(*dest++=*src++)
    {
        ;
    }
    return ret;
}

//strncat(受长度限制的字符串追加,第三个参数是追加字符串的数量) #include <string.h>
//char*strncat (char* destination, const char* source, size_t num);
//追加完字符串后，会在末尾自动追加个\0

int main()
{
    //自制strlen的实现
    int len=my_strlen("abcdefg");
    printf("%d\n",len);

    //自制strcpy的实现
    char arr1[]="abcdefg";
    char arr2[]="bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);

    //自制strcat的实现
    char brr1[30]="hello";
    char brr2[]="world";
    my_strcat(brr1,brr2);
    printf("%s\n",brr1);
    return 0;
}
