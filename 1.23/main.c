#include <stdio.h>
#include <stdlib.h>

int i;//ȫ�ֱ�������ʼ��ʱ��Ĭ��Ϊ0�����ֲ���������ʼ��Ϊ���ֵ

int main()
{
    i--;//-1
    if(i>sizeof(i))//i�����ͣ���sizeof(i)Ϊ�޷�������
                   //���Դ˴�i������Ϊ�޷������ͣ���ô-1�ķ���λ1���������ˣ�������һ���ܴ������
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }

    int arr[]={1,2,3,4,5};
    short* p=(short*)arr;//�˴�int��ǿ��ת��Ϊshort���ͣ�һ��ֻ�ܷ��������ֽ���
    int i=0;
    for(i=0;i<4;i++)
    {
        *(p+i)=0;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    int a,b,c;
    a=5;
    c=++a;
    b=++c,c++,++a,a++;// =���ȼ�����,
    b+=a++ + c;// +=���ȼ�����+
    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;
}
