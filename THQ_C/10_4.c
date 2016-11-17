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
/*
程序功能及要点回顾：
功能：从键盘输入10个学生的有关数据，然后转存到磁盘文件中去
要点：fread(buffer,size,count,fp);fwrite(buffer,size,count,fp)
    buffer:表示一个地址，对fread来说是用来存放从文件读入的数据的存储区的地址；对于fwrite来说是要把此地址开始的存储区中的数据向文件输出(以上指的是起始地址)
    size:要读写的字节数
    count:要读写多少个数据项(每个数据项的长度size)
    fp:FILE类型的指针
*/
