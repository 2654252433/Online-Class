#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("Hello world!\n");
        goto again;
        printf("hehe\n");
        again:
        printf("���\n");
    return 0;
}

//C�������ṩ�˿����������õ�goto���ͱ����ת�ı�š�
//��������goto�����û�б�Ҫ�ģ�ʵ����û��goto���Ҳ���Ժ����׵�д�����롣
//����ĳЩ������goto��仹���õ��ŵģ�������÷�������ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ���Ĺ���
//���磺һ�������������ѭ��
//�������ʹ��break�Ǵﲻ��Ŀ�ĵģ���ֻ�ܴ����ڲ�ѭ���˳�����һ���ѭ��
//goto��������ʺϵĳ������£�
/*
for(...)
    for(...)
    {
        for(...)
        {
            if(disaster)
                goto error;
        }
    }

    ...
error:
    if(disaster)
        //����������
*/
