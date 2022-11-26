#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//ǰ��
//C�����ж��ַ����ַ����Ĵ������Ƶ��������C���Ա�����û���ַ������͵ģ��ַ���ͨ�����ڳ����ַ����л����ַ������С�
//�ַ���������������Щ���������޸ĵ��ַ�������

//�������ܣ�
//strlen(�ַ�������): #include <string.h>
//size_t strlen(const char*str);
//�ַ�����'\0'��Ϊ������־��stren�������ص������ַ�����'\0'ǰ����ֵ��ַ�����(������'\0').
//����ָ����ַ�������Ҫ��'\0'������
//ע�⺯���ķ���ֵΪsize_t�����޷���unsigned int��(�״�)
//ѧ��strlen������ģ��ʵ��
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

//strcpy(�ַ�������): #include <string.h>
//char* strcpy(char* destination��const char* source);
//Copies the C string pointed by source into the array pointed by destination, including the terminating null character(and stopping at that point).
//Դ�ַ���������'\0'������
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//Ŀ��ռ����ɱ�
//ѧ��ģ��ʵ��
char*my_strcpy(char*dest,const char*src)
{
    assert(dest!=NULL);
    assert(src!=NULL);
    char*ret=dest;
    while(*dest++=*src++)//����srcָ����ַ�����destָ��Ŀռ䣬����\0
    {
        ;
    }
    return ret;//����Ŀ�Ŀռ����ʼ��ַ
}

//strncpy��(�ܳ������Ƶ��ַ��������������������ǿ����ַ���������) #include <string.h>
//char *strncpy(char * destination, const char * source, size_t num);
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��\0��ֱ��num����

//strcat(�ַ���׷��): #include <string.h>
//char* strcat(char* destination,const char* source);
//Appends a copy of the source string to the destination string.
//The terminating null character in destination is overwritten by the first character of source, and a null-character is included at the end of the new string formed by the concatenation of both in destination.
//Դ�ַ���������'\0'����
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������.
//Ŀ��ռ������޸ġ�
//�ַ����Լ����Լ�׷�ӣ����?�𣺻ᵼ����ѭ��
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

//strncat(�ܳ������Ƶ��ַ���׷��,������������׷���ַ���������) #include <string.h>
//char*strncat (char* destination, const char* source, size_t num);
//׷�����ַ����󣬻���ĩβ�Զ�׷�Ӹ�\0

int main()
{
    //����strlen��ʵ��
    int len=my_strlen("abcdefg");
    printf("%d\n",len);

    //����strcpy��ʵ��
    char arr1[]="abcdefg";
    char arr2[]="bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);

    //����strcat��ʵ��
    char brr1[30]="hello";
    char brr2[]="world";
    my_strcat(brr1,brr2);
    printf("%s\n",brr1);
    return 0;
}
