#include <stdio.h>
#include <stdlib.h>

//struct-结构体关键字 stu-结构体标签 struct stu-结构体类型
/*
struct stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3;//定义三个全局变量s1,s2,s3
*/

typedef struct stu//typedef-将类型重新起个名字
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}stu;//将struct stu类型重新起个名字叫stu

struct a
{
  int a;
  char c;
  char arr[20];
  double d;
};

struct b
{
    char ch[10];
    struct a s;
    char*pc;
};

int main()
{
    char arr[]="hello world\n";

    struct b B={"hehe",{100,'w',"hello",3.14},arr};
    printf("%s\n",B.ch);
    printf("%s\n",B.s.arr);
    printf("%s",B.pc);
    printf("%lf\n",B.s.d);
    return 0;
}
