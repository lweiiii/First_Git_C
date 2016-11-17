#include <stdio.h>
#define SIZE 3
struct student_type
{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE];  //����ȫ�ֽṹ������stud,����10��ѧ������

void save()
    {
        FILE *fp;
        int i;
        if((fp=fopen("stu.dat","wb")) == NULL)
        {
            printf("Can't open file\n");
            return;
        }
        for(i=0;i<SIZE;i++)
            if(fwrite(&stud[i],sizeof(struct student_type),1,fp)!=1)
                printf("file write error\n");
        fclose(fp);
    }

int main()
    {
        int i;
        printf("Plz enter data of student:\n");
        for(i=0;i<SIZE;i++)
            scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
        save();
        return 0;

    }
/*
�����ܼ�Ҫ��عˣ�
���ܣ��Ӽ�������10��ѧ�����й����ݣ�Ȼ��ת�浽�����ļ���ȥ
Ҫ�㣺fread(buffer,size,count,fp);fwrite(buffer,size,count,fp)
    buffer:��ʾһ����ַ����fread��˵��������Ŵ��ļ���������ݵĴ洢���ĵ�ַ������fwrite��˵��Ҫ�Ѵ˵�ַ��ʼ�Ĵ洢���е��������ļ����(����ָ������ʼ��ַ)
    size:Ҫ��д���ֽ���
    count:Ҫ��д���ٸ�������(ÿ��������ĳ���size)
    fp:FILE���͵�ָ��
*/