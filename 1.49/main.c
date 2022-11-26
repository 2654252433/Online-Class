#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//strcmp：(字符串比较) #include <string.h>
//int strcmp(const char*str1, const char*str2);
//This function starts comparing the first character of each string.
//lf they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.
//标准规定：
//第一个字符串大于第二个字符串，则返回大于0的数字0
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//那么如何判断两个字符串? 答：比较的是两个字符串的首字母谁更大，如果一样则比较下一个

//strncmp:(受长度限制的字符串比较，第三个参数为比较字符的个数) #include <string.h>
//int strncmp(const char * strl, const char * str2, size_t num);

int my_strcmp(const char*str1,const char*str2)
{
    assert(str1&&str2);//str1和str2都不能为空指针
    while(*str1==*str2)
    {
        if(*str1=='\0')
        {
            return 0;//两个字符串都比到\0了，相等
        }
        str1++;
        str2++;
    }
    if(*str1>*str2)
        return 1;//大于
    else
        return -1;//小于
}

int main()
{
    char*p1="abcde";
    char*p2="acbde";
    int ret=my_strcmp(p1,p2);
    printf("%d\n",ret);
    return 0;
}
