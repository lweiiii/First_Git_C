#include <stdio.h>
#define SIZE 3
struct student_type
{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE];  //定义全局结构体数组stud,包含10个学生数据

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
