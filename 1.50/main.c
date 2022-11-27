#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//我们一般查文档时，看到如下两种null代表两种不同的意思
//NULL -- 空指针
//Null或者NUL -- \0

//strstr：(查找字符串) #include <string.h>
//char * strstr(const char*， const char*);
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//找到对应字符串的地址，并将其打印出来。
char*my_strstr(char*p1,char*p2)
{
    assert(p1!=NULL);
    assert(p2!=NULL);
    //先把p1,p2地址用其他变量存起来
    char*s1=p1;
    char*s2=p2;
    char*cur=p1;
    //空字符串是任何一个字符串的子串
    //空字符串也是有地址的，不等于空指针
    //空指针是指不指向任何字符串的指针，而空字符串也是字符串哦
    if(*p2=='\0')//若查找的字符串是空字符串
    {
        return p1;
    }
    while(*cur)
    {
        s1=cur;
        s2=p2;
        while((*s1!='\0')&&(*s2!='\0')&&(*s1==*s2))
        {
            s1++;
            s2++;
        }
        if(*s2=='\0')
        {
            return cur;//找到子串
        }
        cur++;
    }
    return NULL;//找不到子串
}

int main()
{
    char*a="abbbcde";
    char*b="bbc";
    char*c=my_strstr(a,b);
    printf("%s\n",c);
    return 0;
}
