#include <stdio.h>
#include <stdlib.h>
#include <string.h>//��strlenʱ����Ҫ��ͷ�ļ�
#define max 10   //#define����ı�ʶ���������ܹ���������ʹ��

enum Sex//ö�ٹؼ�  enum
{
    MALE,
    FEMALE,
    SECRET
};

int Add(int x,int y)//�Զ��庯�����൱�ں���f(x,y),add���
{
    int z=x+y;
    return z;
}

int main()
{
    int arr[max];
    printf("%d\n",max);
    const int num=4;//const���εı�������Ϊ���������޷����ģ�������������ʹ��
    printf("%d\n",num);

    //MALE FEMALE SECRET-ö�ٳ���
    enum Sex s=FEMALE;//����������
    s=MALE;//����ı������Ըĳ�������ö�ٳ���
    //FEMALE=6;ö�ٳ������ܸ���ֵ
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2

    char arr1[]="abc";
    //"abc"--'a''b''c''\0'--'\0'�ַ����Ľ�����־
    //�ַ����Ľ�����־��һ��\0��ת���ַ���
    //�ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ�������
    //'\0'--0   'a'--97   'A'--65
    char arr2[]={'a','b','c'};
    char arr3[]={'a','b','c','\0'};
    //'a' 'b' 'c' ����'\0'�Ż�ֹͣ��ӡ
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%s\n",arr3);
    printf("%d\n",strlen(arr1));//strlen--string length--�����ַ�������
    printf("%d\n",strlen(arr2));
    printf("%d\n",strlen(arr3));
    printf("c:\test\77\test.c\n");//  \t--ˮƽ�Ʊ������ʾһ�οո�
    printf("c:\\test\\32\\test.c\n");//   ��Ҫ\����ת��
    printf("%c\n",'\'');//���ڴ�ӡ��һ��'
    printf("%d\n",strlen("c:\test\32\test.c"));
    //  ����ӡ��13���ַ�--  c : \t  e s t \32 \t e s t . c
    //  \32--������8�������֣���Ϊʮ���Ƶ�26��ͬʱ��ΪASCLLֵ��Ӧ���ַ�
    printf("%c\n",'\x61');
    //  \x61��61���������ʮ���������֣���Ϊʮ���Ƶ�97��������ASCLLֵ��Ӧ���ַ�
/*
    int input=0;
    printf("���ú�ѧϰ��\n");
    scanf("%d",&input);
    if(input==1)
        printf("��֣����ɹ���\n");
    else
        printf("���б���ú�ѧϰ\n");


    int line;
    while(line<=2000)
    {
        line++;
        printf("��ҪŬ���ô���%d\n",line);
    }
    if(line>2000)
        printf("�۷�ʱ�̹�����\n");
*/
    int num1=10;
    int num2=20;
    int sum;
    int a=100;
    int b=200;
    sum=Add(num1,num2);//sum=num1+num2
//  sum=Add(a,b);
//  sum=Add(2,3);
    printf("sum=%d\n",sum);

    int brr[10]={1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ�����
    int c;
    while(c<10)//��ѭ����ʽ�������ڵ�������ӡ����
    {
        printf("%d\n",brr[c]);
        c++;
    }
//  printf("%d\n",brr[4]); �±�ķ�ʽ����Ԫ��
//  char ch[20]; �����ַ�������
//  float brr[5]; ���嵥���ȸ���������

    int d=1;//��2����λ������������һ���ֽ�=32bitλ
    //0000 0000 0000 0000 0000 0000 0000 0001
    int e=d<<2; //��d��1��������λ��Ҳ����100
    printf("%d\n",e);//������100=4
    printf("%d\n",d);//d�����䣬����1

    //&��λ��
    //|��λ��
    //^��λ���
    int x=3;  //011
    int y=5;  //101
    int z=x&y;//001--��������1����Ӧλ�Ż�1
    int u=x|y;//111--ֻҪ��һ��1����Ӧλ����1
    int w=x^y;//110--����������Ϊ1����ͬΪ0
    printf("%d\n",z);
    printf("%d\n",u);
    printf("%d\n",w);

    int crr[10]={0};
    int sz;
    sz=sizeof(crr)/sizeof(crr[0]);//������Ԫ��/ÿ��Ԫ�صĴ�С=����Ԫ�ظ���
    printf("%d\n",sz);
    printf("%d\n",sizeof(crr));//sizeofҲ���Լ�������
    printf("%d\n",sizeof crr);
    //sizeof������ȥ��Ҳ����
    //printf("%d\n",sizeof int);
    return 0;
}



