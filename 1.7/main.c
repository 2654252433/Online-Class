#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int age=99;
    if(age<18)
        printf("δ����\n");
    else if(age>=18&&age<23)
        printf("����\n");
    else if(age>=23&&age<50)
        printf("׳��\n");
    else if(age>=50&&age<90)
        printf("����\n");
    else
        printf("����ͯ\n");
*/

    //����else
    int a=0;
    int b=2;
    if(a==1)//û�����ifƥ���else�������
        if(b==2)
        printf("hehe\n");
        else//�ͽ�ԭ��else�������ifƥ��
        printf("haha\n");

    int num=4;
    if(num=5)//��ֵ���,��0���棬�������
    {
        printf("�Ǻ�\n");
    }

    //�ж�һ�����Ƿ�Ϊ����
    int c;
    scanf("%d",&c);//����\n���ǵ�ȡַ����&
    if(c%2==1)
        printf("������\n");
    else
        printf("��������\n");

    //���1-100֮�������
    int d;
    for(d=1;d<=100;d++)
    {
        if(d%2==1)
        printf("%d\n",d);
    }

    //switch���ʹ�÷���
    int e;
    scanf("%d",&e);
    switch(e)//���ŵı�������������
    {
    case 1://ͬ��case���������Ҳ���������ͣ�����д1.0
        printf("����һ");
        break;
    case 2:
        printf("���ڶ�");
        break;
    case 3:
        printf("������");
        break;
    case 4:
        printf("������");
        break;
    case 5:
        printf("������");
        break;
    case 6:
        printf("������");
        break;
    case 7:
        printf("������");
        break;
    default://ÿ��switch���ֻ�ܳ���һ��default
        printf("����˰�");
        break;
    /*case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("������");
        break;
    case 6:
    case 7:
        printf("��Ϣ��")��
        break;
    ����Ҳ��һ��switch��д��,����ͬ������ϲ�����
    */
    }
    int f=1;
    int g=2;
    switch(f)
    {
    case 1:g++;
    case 2:f++;
    case 3:
           switch(f)//switch������Ƕ��ʹ��
           {
               case 1:f++;
               case 2:g++;f++;break;
           }
    case 4:g++;
        break;
    default:
        break;
    }
    printf("g=%d,f=%d\n",g,f);

    //while����÷�
    int h=1;
    while(h<=10)
    {
        if(h==5)
            break;//ѭ������break������ѭ�����������5��ӡ����
            //continue;  ѭ������continue������ȥ���½���ѭ���жϣ����Ǳ��һֱѭ��
        printf("%d\n",h);
        h++;
    }

    //int ch=getchar();//getchar�����룬��scanfһ��
    //putchar(ch);//putchar���������printfһ��
    //printf("%c\n",ch);

    int cg;
    //EOF--end of file(�ļ�������־)-> -1
    while((cg=getchar())!=EOF)//��ctrl+z����ͣ����
    {
        putchar(cg);
    }
    return 0;
}
