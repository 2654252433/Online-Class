#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(X,Y) (X>Y?X:Y)

void test()
{
    static int l=1;//�������l�Ǿֲ�����
    //static�Ǿ�̬�������Ὣÿ��l��ֵ��������������lÿ�γ�ȥ��Ͳ�������
    //static�ı��˱�����������ʹ��ֻ�����Լ����ڵ�Դ�ļ���ʹ��
    l++;
    printf("l=%d\n",l);
}

int Max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

struct Book
{
    char name[20];//���ֽ���C���Գ������
    short price;//55
};

int main()
{
    int a=0;//00000000 00000000 00000000 00000000
    int b=~a;//11111111 11111111 11111111 11111111
    //  ~�ǰ�λȡ����0���1��1���0
    //ԭ�룬���룬����
    //�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
    //b=11111111 11111111 11111111 11111111(����)
    //��ԭ�����ƣ��õ����룺11111111 11111111 11111111 11111110
    //�ٵõ�ԭ�룺10000000 00000000 00000000 00000001
    //����ͷ��1�������λ�Ǹ��������Դ�ӡ��������-1
    printf("%d\n",b);//�õ�����-1

    int c=10;
    int d=c++;//����++���ȸ�ֵ��������+1
    //int e=++c;//ǰ��++��������+1���ٸ�ֵ
    //int f=c--;����--���ȸ�ֵ��������-1
    //int g=--c;ǰ��--��������-1���ٸ�ֵ
    printf("c=%d,d=%d\n",c,d);
    //printf("c=%d,e=%d\n",c,e);

    int h=(int)3.14;
    //()����Ÿ�������ǿ��ת�����ͣ���������ת����������
    printf("%d\n",h);//���Ϊ3

    int i=10;
    int j=20;
    int max;
    max=(i>j?i:j);//�ж�i��j�Ĵ�С�����i>jΪ��,���Ϊi����֮�����Ϊj
    //exp1 ? exp2 : exp3   ��������������Ŀ����������Ϊ��������������
    printf("%d\n",max);

    //register int k=3//register�ǼĴ������������洢�ڼĴ������棬�ܸ����ٵ��ó���ʹ��
    //registerֻ�ǽ���ʹ�ã���Ҫ�洢̫�࣬���������Զ��ж�Ҫ��Ҫ�洢��ȥ

    //typedef unsigned float u_float;//typedef�ض������ͣ����������¸���

    int m;
    while(m<5)
    {
        test();
        m++;
    }

    //extern int v;//extern�����ⲿ�ļ���������Դ�ļ��ı���Ҳ��������
    //printf("g_val=%d\n",v);

    int n=10;
    int o=20;
    int Max=MAX(n,o);
    printf("max=%d\n",max);
    max=MAX(n,o);
    printf("max=%d\n",max);

    //ָ�����������ŵ�ַ
    int q=10;//4���ֽ�
    int*p=&q;//ȡ��ַ
    printf("%p\n",&q);//��ӡ��ַ
    printf("%p\n",p);//Ҳ�Ǵ�ӡ��ַ
    *p=30;// *�ǽ����ò��������ڵ�ַ����ı�q��ֵ
    printf("q=%d\n",q);
    char ch='r';
    char*s=&ch;
    *s='t';
    printf("%c\n",ch);
    printf("%d\n",sizeof(s));

    //���ýṹ������-����һ�������͵Ľṹ�����
    struct Book b1={"C���Գ������",55};
    struct Book* pb=&b1;
    //����pb��ӡ���ҵ������ͽṹ
    //  .  �ṹ�����.��Ա
    //  -> �ṹ��ָ��->��Ա
    printf("������%s\n",pb->name);
    printf("�۸�%d\n",pb->price);
    printf("������%s\n",b1.name);
    printf("�۸�%d\n",b1.price);
    b1.price=15;
    strcpy(b1.name,"C++");
    //strcpy=string+copy--�ַ�������--�⺯��--��Ҫͷ�ļ�include <string.h>
    printf("������%s\n",b1.name);
    printf("�޸ĺ�ļ۸�%d\n",b1.price);
    return 0;
}
