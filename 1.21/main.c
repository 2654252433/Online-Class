#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ָ�����ʹ�ŵĵ�ַ����8���ֽڣ�32λ�ľ���4���ֽ�
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(double*));

    int a=0x11223344;
    int*pa=&a;
    char*pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);//��Ϊ��int���ͣ����Ե�ַ����4���ֽ�
    printf("%p\n",pc);
    printf("%p\n",pc+1);//��Ϊ��char���ͣ����Ե�ַֻ������1���ֽ�
    //ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С

    int arr[10]={0};
    int*p=arr;
    int i=0;
    for(i=0;i<10;i++)
    {
        *(p+i)=1;
    }

    //Ұָ�룺����ָ��ָ���λ���ǲ���֪��(����ġ�����ȷ�ġ�û����ȷ���Ƶ�)
    //1��ָ��δ��ʼ��
    //int*p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
    //*p=20;
    //2��ָ��Խ�����
    /*int brr[10]={0};
    int*p=brr;
    int i=0;
    for(i=0;i<=11;i++)
    {
        *(p++)=i;
    }  */
    //3��ָ��ָ��Ŀռ��ͷ�
    return 0;
}
