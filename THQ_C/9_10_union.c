/*
�����嶨�壺
    1:���Ķ��巽ʽ�ͽṹ�����ƣ�ֻ�ǰѹؼ��ָ�Ϊunion��
    2:��������ڴ泤�ȷ�����
    ��ṹ�岻ͬ���ǣ���������ռ���ڴ泤����������ĳ�Ա�ĳ��ȡ�
    3�����ڹ������ע���С�᣺
        1.ÿһ˲��ֻ��һ����Ա�����á�
        2.����������������õĳ�Ա�����һ�η�������ݳ�Ա�����Ҫ����ע�⡣
        3.����������ĵ�ַ�����ĸ������ݳ�Ա�ĵ�ַ��һ���ġ�
        4.���ܶԹ������������ֵ��ע����ǣ������ڶ��幦�������ʱ������ʼ��
*/

//����һ�����ݣ���jobΪs��ʾѧ�������ù������banji�����ʹ�õ�jobΪt�Ļ������ù������position[ְ��]

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
����������������
101 li f s 501
102 wang m t pro

101   li        f   115
102   wang      m   116
*/
