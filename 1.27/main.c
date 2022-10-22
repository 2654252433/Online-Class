#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char*a,const char*b)//实现自己的字符串拷贝，const防止两个地址弄反后检测不出来
{
    char*ret=a;//先将目的地源地址保存一份
    assert(a!=NULL);//断言，如果a=NULL就会报错
    assert(b!=NULL);//以防传过去的是个空指针搞破坏
    while(*a++=*b++)//先使用再各自加1，最后\0也传过去了，但是\0的ASCLL值是0，所以\0传过去就退出循环并不打印
    {
      ;
    }
    return ret;
}

int my_strlen(const char* c)//实现自己的strlen函数功能
{
    int count=0;
    assert(c!=NULL);
    while(*c!='\0')
    {
        count++;
        c++;
    }
    return count;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    //VC6.0环境下，<=10就死循环了
    //gcc编译器，<=11就死循环
    //VS2013   , <=12死循环
    for(i=0;i<=9;i++)
    {
        printf("hehe\n");
        arr[i]=0;
    }

    //不使用库函数strcpy，使用自己的函数编写strcpy
    char arr1[]="###########";
    char arr2[]="bit";
    printf("%s\n",my_strcpy(arr1,arr2));

    const int num=10;
    const int*p=&num;
    //int*const p=&num;
    //const int*const p=&num;
    int n=100;
    //const放在指针变量的*左边时，修饰的是*p，此时*p不能被改变
    //const放在指针变量的*右边时，修饰的是指针变量p，此时p不能被改变
    //*p=20;
    p=&n;
    printf("%d\n",num);

    char arr3[]="abcdefg";
    int let=my_strlen(arr3);
    printf("%d\n",let);
    return 0;
}
