#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char*a,const char*b)//ʵ���Լ����ַ���������const��ֹ������ַŪ�����ⲻ����
{
    char*ret=a;//�Ƚ�Ŀ�ĵ�Դ��ַ����һ��
    assert(a!=NULL);//���ԣ����a=NULL�ͻᱨ��
    assert(b!=NULL);//�Է�����ȥ���Ǹ���ָ����ƻ�
    while(*a++=*b++)//��ʹ���ٸ��Լ�1�����\0Ҳ����ȥ�ˣ�����\0��ASCLLֵ��0������\0����ȥ���˳�ѭ��������ӡ
    {
      ;
    }
    return ret;
}

int my_strlen(const char* c)//ʵ���Լ���strlen��������
{
    int count=0;
    assert(c!=NULL);
    while(*c!='\0')
    {
        count++;
        c++;
    }
    return count;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    //VC6.0�����£�<=10����ѭ����
    //gcc��������<=11����ѭ��
    //VS2013   , <=12��ѭ��
    for(i=0;i<=9;i++)
    {
        printf("hehe\n");
        arr[i]=0;
    }

    //��ʹ�ÿ⺯��strcpy��ʹ���Լ��ĺ�����дstrcpy
    char arr1[]="###########";
    char arr2[]="bit";
    printf("%s\n",my_strcpy(arr1,arr2));

    const int num=10;
    const int*p=&num;
    //int*const p=&num;
    //const int*const p=&num;
    int n=100;
    //const����ָ�������*���ʱ�����ε���*p����ʱ*p���ܱ��ı�
    //const����ָ�������*�ұ�ʱ�����ε���ָ�����p����ʱp���ܱ��ı�
    //*p=20;
    p=&n;
    printf("%d\n",num);

    char arr3[]="abcdefg";
    int let=my_strlen(arr3);
    printf("%d\n",let);
    return 0;
}
