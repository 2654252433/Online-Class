#include <stdio.h>
#include <stdlib.h>

struct Test
{
  int num;
  char*pcname;
  short sdate;
  char cha[2];
  short sba[4];
}*p;

int main()
{
    int a[3][4]={0};
    printf("%d\n",sizeof(a));//48 ������������ܴ�С��Ҳ����3*4*4=48
    printf("%d\n",sizeof(a[0][0]));//4 a[0][0]�������һ��Ԫ�أ�������4���ֽ�
    printf("%d\n",sizeof(a[0]));//16 �˴�a[0]�൱�ڵ�һ����Ϊһά�����������������Ϊa[0]�������������Ž�sizeof()�ڵģ����Լ�����ǵ�һ�еĴ�С
    printf("%d\n",sizeof(a[0]+1));//4/8 a[0]�ǵ�һ������������a[0]+1�������һ�еڶ���Ԫ�ص�ַ��������ָ�ڶ��е�ַ��������4/8�ֽ�
    printf("%d\n",sizeof(*(a[0]+1)));//4 a[0]+1�ǵ�һ�еڶ���Ԫ�ص�ַ�����������ǵ�һ�еڶ���Ԫ�ء�������4���ֽ�
    printf("%d\n",sizeof(a+1));//4/8 a���ǵ�������sizeof�ڣ�������������ʾ��һ�е�ַ��a+1���ʾ�ڶ��е�ַ���ǵ�ַ����4/8
    printf("%d\n",sizeof(*(a+1)));//16 �����õڶ��е�ַ��Ҳ���Ǽ���ڶ��еĴ�С��������16
    printf("%d\n",sizeof(&a[0]+1));//4/8 &a[0]��ʾȡ��һ�еĵ�ַ��+1���ʾȡ�ڶ��еĵ�ַ���ǵ�ַ����4/8
    printf("%d\n",sizeof(*(&a[0]+1)));//16 �����õڶ��е�ַ��Ҳ���ǵڶ��д�С��������16
    printf("%d\n",sizeof(*a));//16 a��ʾ��һ�У�*a���ǽ����õ�һ�У����Լ�����ǵ�һ�еĴ�С����16�ֽ�
    printf("%d\n",sizeof(a[3]));//16 a[3]��Ȼ�������ǵ����У���ʵ����sizeof������ʳ����Ĳ��֣�ֻ����ʸ�sizeof(a[0])һ�������ͣ����Լ���Ļ���һ�еĴ�С����16

    //ָ��������⣺
    //��һ��
    int b[5]={1,2,3,4,5};
    int*ptr=(int*)(&b+1);
    printf("%d,%d\n",*(b+1),*(ptr-1));//2,5

    //�ڶ���
    //����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ�Ϊ���٣�
    //��֪���ṹ��Test���͵ı�����С��20���ֽ�
    p=(struct Test*)0x100000;
    printf("%p\n",p+0x1);//100020 ��Ϊp��20��0x1��0x100000�����Լ�������100020
    printf("%p\n",(unsigned long)p+0x1);//100001 �˴���pת��Ϊ�޷��ų����ͣ�Ҳ����ʮ������100000ת��Ϊʮ����1048576����1048576�ϼ�1������1048577��Ȼ����ת������ʮ�����ƣ�����ֻ��������100000�ϼ���1���ѣ�Ҳ����100001
    printf("%p\n",(unsigned int*)p+0x1);//100004 ��pת��Ϊint�����ټ�1����int���ͼ�1���ڼ���4���ֽڣ���������100000�����ϼ���4��Ҳ����100004
    return 0;
}