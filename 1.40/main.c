#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[]="abcdef";
    printf("%d\n",sizeof(arr));//7 sizeof(arr)计算的是数组的大小，因为字符串里面结尾有个\0，所以大小是7字节
    printf("%d\n",sizeof(arr+0));//4/8 arr+0没有变化，计算的还是数组地址的大小，是4/8字节
    printf("%d\n",sizeof(*arr));//1 *arr是首元素，所以计算的是首元素的大小，也就是1字节
    printf("%d\n",sizeof(arr[1]));//1 arr[1]是数组第二个元素，所以计算的大小还是1字节
    printf("%d\n",sizeof(&arr));//4/8 &arr是取数组地址，是地址那就是4/8字节
    printf("%d\n",sizeof(&arr+1));//4/8 &arr+1取的是下一个数组的地址，但是还是地址，所以是4/8字节
    printf("%d\n",sizeof(&arr[0]+1));//4/8 &arr[0]+1取的是第二个元素的地址，只要取的是地址，那就是4/8字节

    printf("\n");

    printf("%d\n",strlen(arr));//6 strlen计算的是\0前面字符的大小，也就是6字节
    printf("%d\n",strlen(arr+0));//6 arr+0没有变化，还是计算从数组首地址往后的大小，还是6字节
    printf("%d\n",strlen(*arr));//程序错误 *arr是首元素，等于把97作为地址传过去寻找\0，非法访问，会挂掉
    printf("%d\n",strlen(arr[1]));//程序错误 arr[1]表示第二个元素，也就是把b(98)作为地址传过去，非法访问，跟上一个一样
    printf("%d\n",strlen(&arr));//6 &arr是取首元素地址，所以计算从首元素地址开始，共6个字节
    printf("%d\n",strlen(&arr+1));//随机值 &arr+1表示下一个数组，而下一个数组有啥谁也不知道，所以是随机值
    printf("%d\n",strlen(&arr[0]+1));//5 &arr[0]+1表示从第二个元素地址开始，所以比第一个少了一个字节，也就是5字节

    printf("\n");

    char*p="abcdef";//这里指的是把常量字符串a的地址放进p里，并不是把abcdef放进p里
    printf("%d\n",sizeof(p));//4/8 计算指针变量p的大小，而p是地址，所以是4/8
    printf("%d\n",sizeof(p+1));//4/8 p+1计算的是字符b的地址，所以是4/8
    printf("%d\n",sizeof(*p));//1 *p就是解引用得到a，所以是1个字节
    printf("%d\n",sizeof(p[0]));//1 p[0]=*(p+0)=a,所以还是解引用a，也就是1个字节
    printf("%d\n",sizeof(&p));//4/8 取p地址，是地址就是4/8
    printf("%d\n",sizeof(&p+1));//4/8 取b的地址，是地址就是4/8
    printf("%d\n",sizeof(&p[0]+1));//4/8 同样是取b地址，4/8字节

    printf("\n");

    printf("%d\n",strlen(p));//6 从a地址开始寻找\0，所以是6个字节
    printf("%d\n",strlen(p+1));//5 p+1就是b的地址，从b地址寻找\0,也就是5个字节
    printf("%d\n",strlen(*p));//程序错误 *p就是解引用得到a，传过去的不是地址，是97，所以非法访问会报错
    printf("%d\n",strlen(p[0]));//程序错误 p[0]同样是得到a，传过去的不是地址，会报错
    printf("%d\n",strlen(&p));//随机值 &p是取地址，a只是传给了p，但并不代表p的地址后面就是bcdef，所以p地址后面是随机的
    printf("%d\n",strlen(&p+1));//随机值 &p+1是跳过了p的地址，而后面地址是啥谁也不知道，所以是随机的
    printf("%d\n",strlen(&p[0]+1));//5 &p[0]+1表示字符串第二个字符b，从b开始寻起\0，所以是5个字节
    return 0;
}
