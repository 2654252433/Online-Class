#include <stdio.h>
#include <stdlib.h>

int main()
{
    //指针类型存放的地址都是8个字节，32位的就是4个字节
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(double*));

    int a=0x11223344;
    int*pa=&a;
    char*pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);//因为是int类型，所以地址加了4个字节
    printf("%p\n",pc);
    printf("%p\n",pc+1);//因为是char类型，所以地址只增加了1个字节
    //指针类型决定了指针进行解引用操作的时候，能够访问空间的大小

    int arr[10]={0};
    int*p=arr;
    int i=0;
    for(i=0;i<10;i++)
    {
        *(p+i)=1;
    }

    //野指针：就是指针指向的位置是不可知的(随机的、不正确的、没有明确限制的)
    //1、指针未初始化
    //int*p;//局部变量指针未初始化，默认为随机值
    //*p=20;
    //2、指针越界访问
    /*int brr[10]={0};
    int*p=brr;
    int i=0;
    for(i=0;i<=11;i++)
    {
        *(p++)=i;
    }  */
    //3、指针指向的空间释放
    return 0;
}
