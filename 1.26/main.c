#include <stdio.h>
#include <stdlib.h>

//struct-�ṹ��ؼ��� stu-�ṹ���ǩ struct stu-�ṹ������
/*
struct stu
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3;//��������ȫ�ֱ���s1,s2,s3
*/

typedef struct stu//typedef-�����������������
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}stu;//��struct stu��������������ֽ�stu

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
