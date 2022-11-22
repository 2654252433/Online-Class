#include <stdio.h>
#include <stdlib.h>

//参数是指针的形式
void print(int(*p)[5],int x,int y)
{
    int i=0;
    for(i=0;i<x;i++)
    {
        int j=0;
        for(j=0;j<y;j++)
        {
            printf("%d ",*(*(p+i)+j));//*(p+i)=p[i],所以*(*(p+i)+j)=p[i][j]
        }
        printf("\n");
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;//数组的地址要存起来
    //上面的p就是数组指针
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d ",*(*p+i));//第一种方法打印数组
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",(*p)[i]);//第二种方法打印数组
    }
    printf("\n");
    //数组指针一般是用在二维数组中

    int a[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print(a,3,5);
    //1 2 3 4 5
    //2 3 4 5 6
    //3 4 5 6 7
    //此处将每一行看成一个元素，利用数组指针将二维数组看成一维数组int [5]
    return 0;
}
