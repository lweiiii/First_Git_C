/*
共用体定义：
    1:它的定义方式和结构体相似，只是把关键字改为union。
    2:共用体的内存长度分析：
    与结构体不同的是，公用体所占的内存长度是它的最长的成员的长度。
    3．对于公用体的注意点小结：
        1.每一瞬间只有一个成员起作用。
        2.共用体变量中起作用的成员是最后一次放入的数据成员。这点要格外注意。
        3.公用体变量的地址和它的各个数据成员的地址是一样的。
        4.不能对共用体变量名赋值，注意的是，不能在定义功能体变量时对它初始化
*/

//输入一组数据，当job为s表示学生，采用共用体的banji；如果使用的job为t的话，采用共用体的position[职务]

#include <stdio.h>
struct
{
    int num;
    char name[10];
    char sex;
    char job;
    union
      { int banji;
        char position[10];
      }category;
}person[2];

void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
        if(person[i].job == 's')
            scanf("%d",&person[i].category.banji);
        else if(person[i].job == 't')
            scanf("%s",person[i].category.position);
        else
            printf("Input Error!");
    }
    printf("\n");
    for(i=0;i<2;i++)
    {
        if(person[i].job == 's')
            printf("%-6d%-10s%-4c%-10d%\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.banji);
        else
            printf("%-6d%-10s%-4c%-10d%\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
    }
}

/*
程序运行输入和输出
101 li f s 501
102 wang m t pro

101   li        f   115
102   wang      m   116
*/
