#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=-16;
    int b=a>>1;//���Ʋ��������ƶ����Ƕ�����λ
    //�洢���ڴ���ǲ���
    //���Ʋ�������
    //1���������ƣ��ұ߶�������߲�ԭ����λ(ͨ��һ�㶼�Ǹ�������)
    //2���߼����ƣ��ұ߶�������߲�0
    printf("%d\n",b);

    int c=5;
    int d=c<<1;
    printf("%d\n",d);
    //���Ʋ���������߶������ұ߲�0

    //������λ���������Ҫ�ƶ�����λ�������׼��δ�����
    //���磺int num=10;
    //      num>>-1;    error


    // &--��λ��,��������1��Ϊ1��ֻҪ��һ����0��Ϊ0
    int e=3;
    int f=5;
    int g=e&f;
    printf("%d\n",g);

    // |--��λ����������0��Ϊ0��ֻҪ��һ����1��Ϊ1
    int h=3;
    int i=5;
    int j=h|i;
    printf("%d\n",j);

    // ^--��λ���,��ͬΪ0������Ϊ1
    int k=3;
    int l=5;
    int m=k^l;
    printf("%d\n",m);
    //C������û��ͬ����ţ�����ֻҪȡ���ķǼ��ɣ�����: m=!(k^l)

    int n=10;
    char o='r';
    char*p=&c;
    int arr[10]={0};
    printf("%d\n",sizeof n);//4 �˴���ʡ��n������
    printf("%d\n",sizeof(int));//4 ���Ͳ���ʡ������

    printf("%d\n",sizeof(o));//1 �ַ�����Ϊ1
    printf("%d\n",sizeof(char));//1

    printf("%d\n",sizeof(p));//8����4 ָ���С����64λ����32λ
    printf("%d\n",sizeof (char*));//8 ָ�������

    printf("%d\n",sizeof(arr));//40
    printf("%d\n",sizeof(int [10]));//40 ����ȥ�����֣��Ⱥ�ǰ��ľ������������

    return 0;
}
