#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//strcmp��(�ַ����Ƚ�) #include <string.h>
//int strcmp(const char*str1, const char*str2);
//This function starts comparing the first character of each string.
//lf they are equal to each other, it continues with the following pairs until the characters differ or until a terminating null-character is reached.
//��׼�涨��
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������0
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//��ô����ж������ַ���? �𣺱Ƚϵ��������ַ���������ĸ˭�������һ����Ƚ���һ��

//strncmp:(�ܳ������Ƶ��ַ����Ƚϣ�����������Ϊ�Ƚ��ַ��ĸ���) #include <string.h>
//int strncmp(const char * strl, const char * str2, size_t num);

int my_strcmp(const char*str1,const char*str2)
{
    assert(str1&&str2);//str1��str2������Ϊ��ָ��
    while(*str1==*str2)
    {
        if(*str1=='\0')
        {
            return 0;//�����ַ������ȵ�\0�ˣ����
        }
        str1++;
        str2++;
    }
    if(*str1>*str2)
        return 1;//����
    else
        return -1;//С��
}

int main()
{
    char*p1="abcde";
    char*p2="acbde";
    int ret=my_strcmp(p1,p2);
    printf("%d\n",ret);
    return 0;
}
