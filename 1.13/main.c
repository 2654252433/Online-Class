#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr1[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
    char arr2[5]={'a',98};//���������a,b,0,0,0�����к�����λ��Ĭ��Ϊ0
    char arr3[5]="ab";//������Ҳ�Ƿ���a,b,0,0,0�����ǵ�����Ԫ�������ǷŽ�ȥ��\0
    char arr4[]="abcdef";//������������a,b,c,d,e,f,\0
    printf("%d\n",sizeof(arr4));//����arr4��ռ�ռ�Ĵ�С������\0
    printf("%d\n",strlen(arr4));//�����ַ����ĳ��ȣ�����'\0'�ͻ�ֹͣ
    //strlen��sizeofû��ʲô����
    //strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ�����ͷ�ļ�
    //sizeof������������顢���͵Ĵ�С-��λ���ֽ�-������
    int i=0;
    for(i=0;i<(int)strlen(arr4);i++)//��Ϊstrlen���ص���һ���޷�������ֵ������ǰ��Ӹ�int
    {
        printf("%c ",arr4[i]);//��ӡarr4[]�������
    }

    printf("\n");
    //��ά����
    int arr5[3][4]={{1,2,3},{4,5}};
    int arr6[][4]={{1,2,3,4},{5,6,7,8}};
    int a=0;
    for(a=0;a<2;a++)
    {
        int b=0;
        for(b=0;b<4;b++)
        {
            printf("%d ",arr6[a][b]);//��ӡ��ά����
        }
        printf("\n");
    }

    return 0;
}
