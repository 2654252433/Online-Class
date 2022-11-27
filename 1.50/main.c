#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//����һ����ĵ�ʱ��������������null�������ֲ�ͬ����˼
//NULL -- ��ָ��
//Null����NUL -- \0

//strstr��(�����ַ���) #include <string.h>
//char * strstr(const char*�� const char*);
//Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
//�ҵ���Ӧ�ַ����ĵ�ַ���������ӡ������
char*my_strstr(char*p1,char*p2)
{
    assert(p1!=NULL);
    assert(p2!=NULL);
    //�Ȱ�p1,p2��ַ����������������
    char*s1=p1;
    char*s2=p2;
    char*cur=p1;
    //���ַ������κ�һ���ַ������Ӵ�
    //���ַ���Ҳ���е�ַ�ģ������ڿ�ָ��
    //��ָ����ָ��ָ���κ��ַ�����ָ�룬�����ַ���Ҳ���ַ���Ŷ
    if(*p2=='\0')//�����ҵ��ַ����ǿ��ַ���
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
            return cur;//�ҵ��Ӵ�
        }
        cur++;
    }
    return NULL;//�Ҳ����Ӵ�
}

int main()
{
    char*a="abbbcde";
    char*b="bbc";
    char*c=my_strstr(a,b);
    printf("%s\n",c);
    return 0;
}
