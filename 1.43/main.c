#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ָ��������⣺
    //������
    int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
    int*ptr1=(int*)(&aa+1);
    int*ptr2=(int*)(*(aa+1));
    printf("%d,%d\n",*(ptr1-1),*(ptr2-1));

    //������
    char *a[]={"work","at","alibaba"};
    char**pa=a;
    pa++;
    printf("%s\n",*pa);

    //�ڰ���
    char*c[]={"ENTER","NEW","POINT","FIRST"};
    char**cp[]={c+3,c+2,c+1,c};
    char***cpp=cp;
    printf("%s\n",**++cpp);
    printf("%s\n",*--*++cpp+3);
    printf("%s\n",*cpp[-2]+3);
    printf("%s\n",cpp[-1][-1]+1);

    return 0;
}
