#include <stdio.h>
#include <stdlib.h>

//����һ�������ݹ�
//�ݹ��������Ҫ������
//1�����������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2��ÿ�εݹ����֮��Խ��Խ�ӽ������������

void dayin(int n)
{
    if(n>9)
    {
        dayin(n/10);//���е������ʱ����������ٽ���һ��ѭ��
    }
    printf("%d ",n%10);
}

int strlen(char*str)
{
    if(*str!='\0')//�����һ��Ԫ�ز���\0�Ļ�����ɨ��������һ����ַ�ǲ���\0
        return 1+strlen(str+1);
        //����ɨ�������һ��Ԫ�أ����Ǿ�ɨ����һ����ֱ�����ɨ�赽\0������ɨ�������Ҳ�����ַ�������
    else
        return 0;
}

int fac(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fac(n-1);
}

int fbl(int i)
{
    int a=1;
    int b=1;
    int c=1;
    while(i>2)
    {
        c=a+b;//ÿ�����㶼�����ƶ�һλ
        a=b;
        b=c;
        i--;
    }
    return c;
}

int main()
{
    //����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
    //���磬����1234�����1 2 3 4
    unsigned int num=0;
    scanf("%d",&num);
    dayin(num);

    //��д��������������ʱ���������ַ����ĳ���
    char arr[]="bit";
    int len=strlen(arr);
    //arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���������һ��Ԫ�صĵ�ַ
    printf("\n%d\n",len);

    //дһ���ݹ麯������n�Ľ׳�
    int i=0;
    int ret=0;
    scanf("%d",&i);
    ret=fac(i);
    printf("%d\n",ret);

    //дһ���ݹ飬����һ����a�����aλ�õ�쳲���������
    int a=0;
    int b=0;
    scanf("%d",&a);
    b=fbl(a);
    printf("%d\n",b);
    return 0;
}
