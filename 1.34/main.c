#include <stdio.h>
#include <stdlib.h>

int add(int x,int y)
{
    int z=x+y;
    return z;
}

void print(char*str)
{
    printf("%s\n",str);
}

//�������Σ�&�������ͺ��������Ǻ����ĵ�ַ
//����ָ��--ָ������ָ��--��ź�����ַ��һ��ָ��
int main()
{
    int(*pa)(int,int)=add;//ȡadd�����ĵ�ַ�Ž�pa��ַ��
    printf("%d\n",(*pa)(2,3));//ֱ�ӵ��ú���

    void(*p)(char*)=print;//ȡprint�����ĵ�ַ�Ž�p��ַ��
    (*p)("hello");//ֱ�ӵ��ú���
    return 0;
}
