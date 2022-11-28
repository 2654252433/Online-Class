#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//memcpy：（内存复制）#include <string.h>
//void * memcpy (void* destination, const void * source, size_t num);
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置
//这个函数在遇到'\0'的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的

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

//memmove：（内存复制）#include <string.h>
//void * memmove (void* destination, const void * source, size_t num);
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的
//如果源空间和目标空间出现重叠，就得使用memmove函数处理
//但是当目标区域与源区域没有重叠则和memcpy函数功能相同。

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

//C语言标准规定：
//memcpy 只要处理不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

//memcmp(内存比较) #include <string.h>
//int memcmp(const void*ptr1,const void*ptr2,size_t num);
//比较从ptr1和ptr2指针开始的num个字节
//返回值跟strcmp类似

//memset(内存设置) #include <string.h>
//void *memset(void *dest,int c,size_t num);
//第一个参数是目的地，第二个参数是设置的值，第三个参数是设置的字节空间大小
//作用是将某一块内存中的内容全部设置为指定的值， 这个函数通常为新申请的内存做初始化工作。

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[5]={0};
    //自制memcpy函数
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
