#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


/*
�ļ��Ĵ򿪺͹ر�
�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��
ANSIC�涨ʹ��fopen���������ļ���fclose���ر��ļ���

FILE* fopen(const char* filename��const char* mode);
int fclose(FILE* stream);

���·��������ǰ·�����ڵ��ļ��У����磺fopen("text.txt","r");
����·������·���ľ���·�������磺fopen("E:\\codeblock\\ѧϰ��\\1.71\\text.txt","r");
..  �������ʾ��һ��·��
.   һ�����ʾ��ǰ·��
���磺fopen("../../text.txt","r");

΢��ͼƬ��
΢��ͼƬ��
*/
int main()
{
    FILE*pf=fopen("E:\\codeblock\\ѧϰ��\\1.71\\text.txt","w");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    fclose(pf);
    pf=NULL;
    return 0;
}
