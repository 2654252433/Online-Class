#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("**********************\n");
    printf("******  0.exit  ******\n");
    printf("****1.add    2.sub****\n");
    printf("****3.mul    4.div****\n");
    printf("******  5.rox  *******\n");
    printf("**********************\n");
}

int Add(int x,int y)//�ӷ�
{
    return x+y;
}

int Sub(int x,int y)//����
{
    return x-y;
}

int Mul(int x,int y)//�˷�
{
    return x*y;
}

int Div(int x,int y)//����
{
    return x/y;
}

int Xor(int x,int y)//���
{
    return x^y;
}

//����ָ���������;��ת�Ʊ�
//����һ�����׼�����
int main()
{
    int (*arr[])(int,int)={0,Add,Sub,Mul,Div,Xor};
    int x=0;
    int y=0;
    int input=0;
    do
    {
       menu();
       printf("�������������\n");
       scanf("%d",&input);
       if(input>=1&&input<=5)
       {
        printf("������:\n");
        scanf("%d %d",&x,&y);
        int ret=arr[input](x,y);
        printf("%d\n",ret);
       }
       else if(input==0)
       {
        printf("�˳�����\n");
       }
       else
       {
        printf("�����������������\n");
       }
    }while(input);
    return 0;
}
