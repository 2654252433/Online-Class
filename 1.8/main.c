#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ret=0;
    int ch=0;
    char password[20]={0};
    printf("���������룺");
    scanf("%s",password);
    //����һ�����ֺ󣬻�ʣһ��'\0'�ڻ���������Ҫ�����
    //��һ�ֽ��������getchar();  ��ȡ����������'\0'����fflush(stdin)Ҳһ������
    //�ڶ��ֽ��������fflush(stdin);  ��������뻺���������ڵ�����
    //�����ֽ����������whileѭ��ֱ��getchar��\0����Ϊֹ
    while((ch=getchar())!='\n')
    {

    }
    printf("��ȷ��(Y/N):");
    ret=getchar();
    if(ret=='Y')
    {
        printf("ȷ�ϳɹ�\n");
    }
    else
    {
        printf("ȷ��ʧ��\n");
    }

    printf("%d\n",'\n');// '\n'��ASCLLֵ����10

    int cg;
    while((cg=getchar())!=EOF)//����ctrl+z�Ż����
    {
        if(cg<'0'||cg>'9')//����1-9���ַ��ʹ�ӡ���������ǵĻ��Ͳ���ӡ
            continue;
        putchar(cg);
    }

    int a;
    for(a=1;a<10;a++)//forѭ����ӡ1-9
    {
        if(a==5)
           continue;//����continue�ͻ�����continue����Ĵ��룬��while��ͬ
        printf("%d",a);//12346789
    }

    //forѭ������:������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
    //����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д��
    //���ǵڶ���aǰ����=(��)��������<����>(��)������a<10��a����˵�ĵڶ���a
    //forѭ���ĳ�ʼ�����������ж϶��ɱ�ʡ��
    //���forѭ�����жϲ��ֱ�ʡ�ԣ���ô�ж��������Ǻ�Ϊ��

    int b=0;
    int c=0;
    //�˴����b,c����ֵ��0�Ļ�������Ͳ����ӡhehe
    for( ;b<10;b++)
    {
        for( ;c<10;c++)
        {
            printf("hehe\n");//�˴���ӡ10��hehe
        }
    }
    //b=1��ʱ��,c���Ѿ���0-9��hehe��ӡ�����ˣ�����ʱc=10�������ӡhehe
    //b=2��ʱ��,����c�Ѿ�Ϊ10��û�����½��г�ʼ�������Բ����ٴ�ӡhehe��

    //�����⣺
    int d=0;
    int e=0;
    for(d=0,e=0;e=0;d++,e++)//�ж������e=0���˴�ע���Ǹ�ֵΪ0������Ϊ�٣�һ��Ҳ��ѭ��
        //����ж����Ϊ�棬�ͻ���ѭ��
        e++;

    //��do whileѭ����ӡ1-10
    int f=1;
    do
    {
        printf("%d\n",f);
        f++;
    }
    while(f<11);
    return 0;
}
