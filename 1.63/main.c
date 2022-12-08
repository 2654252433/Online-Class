#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//calloc
//C语言还提供了一个函数叫calloc,calloc函数也用来动态内存分配。原型如下：
//void* calloc(size_t num,size_t size);
//需引用头文件#include <stdlib.h>
//函数的功能是为num这个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0.
//与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为全0.

//malloc与calloc相比，malloc效率高点，但是不会初始化；calloc效率低点，但是会给你初始化为0，未来看你是否想初始化再决定使用哪个函数

//realloc:(调整动态开辟内存空间的大小)
//realloc函数的出现让动态内存管理更加灵活。
//有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，
//那为了合理的时候内存，我们一定会对内存的大小做灵活的调整。那rea11oc函数就可以做到对动态开辟内存大小的调整。
//void* realloc(void* ptr, size_t size);
//1.ptr是要调整的内存地址
//2.size调整之后新大小
//3.返回值为调整之后的内存起始位置。
//4.这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
//5.realloc在调整内存空间的是存在两种情况:

//rea11oc使用的注意事项:
//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域，
//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间,最后返回新开辟的内存空间地址
//3.得用一个新的变量来接受realloc函数的返回值

//常见的动态内存错误:
//1、对NULL指针的解引用操作
/*
void test()
{
    int*p=(int*)malloc(INT_MAX/4);
    *p= 20;//如果p的值是NULL，就会有问题
    free(p);
}
*/

//2、对动态开辟空间的越界访问
/*
void test()
{
    int i=0;
    int*p=(int*)malloc(10*sizeof(int));
    if(NULL== p)
    {
       exit(EXIT_FAILURE);
    }
    for(i=0;i<=10;i++)
    {
       *(p+i)=i;//当i是10的时候越界访问
    }
    free(p);
}
*/

//3、对非动态开辟内存使用free释放
/*
void test()
{
    int a=10;
    int *p=&a;
    free(p);//定义的a是栈区的，不能用free释放
}
*/

//4、使用free释放一块动态开辟内存的一部分
/*
void test()
{
    int*p=(int*)mal1oc(100);
    p++;
    free(p);//p不再指向动态内存的起始位置
}
*/

//5、对同一块动态内存多次释放
/*
void test()
{
    int *p= (int*)malloc(100);
    free(p);
    free(p);//重复释放
}
*/

//6、动态开辟内存忘记释放(内存泄露)
/*
while(1)
{
   malloc(1);//内存不释放，占的内存会越来越大
}
*/
//所以切记：动态开辟的空间一定要释放，并且正确释放。
int main()
{
    int*p=(int*)calloc(10,sizeof(int));
    if(p==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<10;i++)
        {
            printf("%d ",*(p+i));
        }
    }
    //free释放动态开辟空间
    free(p);
    p=NULL;

    printf("\n");

    int*k=(int*)malloc(20);
    if(k==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<5;i++)
        {
            *(k+i)=i;
        }
    }
    //假设这里20个字节不能我们满足的使用了
    //希望有40个字节的空间
    //这里就可以使用realloc来调整动态开辟的内存
    int*ptr=realloc(k,40);
    //万一开辟的内存空间太大，开辟失败会返回一个空指针
    //空指针再返回给原地址就完蛋了，所以用一个新变量来接收一下比较好
    if(ptr!=NULL)
    {
        k=ptr;
        int i=0;
        for(i=5;i<10;i++)
        {
           *(k+i)=i;
        }
        for(i=0;i<10;i++)
        {
           printf("%d ",*(k+i));
        }
    }
    free(k);
    k=NULL;
    return 0;
}
