#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//memcpy�����ڴ渴�ƣ�#include <string.h>
//void * memcpy (void* destination, const void * source, size_t num);
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
//�������������'\0'��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ�����

void*my_memcpy(void*dest,const void*src,size_t num)
{
    void*ret=dest;
    assert(dest!=NULL);
    assert(src!=NULL);
    while(num--)
    {
        *(char*)dest=*(char*)src;
        (char*)dest++;
        (char*)src++;
    }
    return ret;
}

//memmove�����ڴ渴�ƣ�#include <string.h>
//void * memmove (void* destination, const void * source, size_t num);
//��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���
//���Դ�ռ��Ŀ��ռ�����ص����͵�ʹ��memmove��������
//���ǵ�Ŀ��������Դ����û���ص����memcpy����������ͬ��

void*my_memmove(void*dest,const void*src,size_t num)
{
    void*ret=dest;
    assert(dest!=NULL);
    assert(src!=NULL);
    if(dest<src)
    {
        while(num--)
        {
            *(char*)dest=*(char*)src;
            (char*)dest++;
            (char*)src++;
        }
    }
    else
    {
        while(num--)
        {
            *((char*)dest+num)=*((char*)src+num);

        }
    }
    return ret;
}

//C���Ա�׼�涨��
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

//memcmp(�ڴ�Ƚ�) #include <string.h>
//int memcmp(const void*ptr1,const void*ptr2,size_t num);
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//����ֵ��strcmp����

//memset(�ڴ�����) #include <string.h>
//void *memset(void *dest,int c,size_t num);
//��һ��������Ŀ�ĵأ��ڶ������������õ�ֵ�����������������õ��ֽڿռ��С
//�����ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� �������ͨ��Ϊ��������ڴ�����ʼ��������

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[5]={0};
    //����memcpy����
    my_memcpy(arr2,arr1,sizeof(arr1));
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n");

    int arr[]={1,2,3,4,5,6,7,8,9};
    my_memmove(arr+4,arr+2,20);
    for(i=0;i<9;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    int arr3[]={1,2,3,4,5};
    int arr4[]={1,2,5,4,3};
    int ret=memcmp(arr3,arr4,9);
    printf("%d\n",ret);

    char arr5[10]="";
    memset(arr5,'#',10);
    for(i=0;i<10;i++)
    {
        printf("%c",arr5[i]);
    }
    return 0;
}
