#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ָ��������⣺
    //������
    int a[4]={1,2,3,4};
    int*ptr1=(int*)(&a+1);
    int*ptr2=(int*)((int)a+1);
    printf("%x,%x\n",ptr1[-1],*ptr2);//4��2000000

    //������
    int b[3][2]={(0,1),(2,3),(4,5)};//�˴�����()���Ƕ��ű��ʽ��ʵ���ϳ�ʼ����ֻ��{1��3��5}
    int*p;
    p=b[0];//��Ԫ���׵�ַ������p
    printf("%d\n",p[0]);//1

    //������
    int c[5][5];
    int(*q)[4];
    q=c;
    printf("%p,%d\n",&q[4][2]-&c[4][2],&q[4][2]-&c[4][2]);//FFFFFFFFFFFFFFFC,-4
    return 0;
}
