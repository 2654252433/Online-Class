#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[],int sz)
{
    int i=0;
    //ȷ��ð�����������
    int flag=1;//������һ��Ҫ����������Ѿ�����
    for(i=0;i<sz-1;i++)
    {
        //ÿһ��ð������
        int j=0;
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              int swap=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=swap;
              flag=0;//���������������ʵ����ȫ����
            }
        }
        if(flag==1)
        {
            break;//�������һ���Ѿ��ź����˾�ֱ������ѭ���ˣ�
        }
    }
}

int main()
{
    int arr[]={9,8,7,6,5,0,1,2,3,4};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    //��arr���������ų�����
    bubble_sort(arr,sz);//ð��������
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    int arr1[]={1,2,3,4,5,6,7};
    //������������Ԫ�ص�ַ
    //1��sizeof(������)--���������������Ĵ�С����λ���ֽ�
    //2��&+��������ȡ��������������ĵ�ַ��ֻ������ӡ�����Ǵ���Ԫ�ص�ַ��ʼ
    //����������������⣬���е�����������ʾ��Ԫ�صĵ�ַ
    printf("%p\n",arr);
    printf("%p\n",arr+1);//�ڶ���Ԫ�ص�ַ
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);//�ڶ���Ԫ�ص�ַ
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);//�˴�����28��7��Ԫ�أ�ÿ��Ԫ��ռ4���ֽ�
    printf("%d\n",*arr1);
    printf("%d\n",*arr1+1);//�ڶ���Ԫ�ص�ֵ
    return 0;
}
