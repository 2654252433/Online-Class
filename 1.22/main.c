#include <stdio.h>
#include <stdlib.h>
#define yuansu 5

int my_strlen(char* str)
{
    char* start=str;
    char* end=str;
    while(*end!='\0')
    {
        end++;
    }
    return end-start;
}

int main()
{
    //int* p=NULL;ָ�벻֪����ʼ��ʲôֵ��ʱ�򣬿����ȸ����ʼ������ָ��
    //ָ���ȥָ�룬�õ���������Ԫ�صĸ���
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]-&arr[0]);//��10��Ԫ�����1��Ԫ��֮�����9��Ԫ��

    char brr[]="bit";
    int len=my_strlen(brr);
    printf("%d\n",len);

    //C���Ա�׼�涨��
    //����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
    //���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
    float value[yuansu];
    float* v;
    for(v=&value[yuansu];v>&value[0];)
    {
        *--v=0;
    }

    int a=10;
    int* pa=&a;
    int** ppa=&pa;//int**����ָ�룬�Դ����ƻ�������ָ�롢�ļ�ָ���....
    printf("%d\n",**ppa);

    int b=10;
    int c=20;
    int d=30;
    int* crr[3]={&b,&c,&d};//ָ�����飬�������ָ��
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d ",*(crr[i]));
    }
    return 0;
}
