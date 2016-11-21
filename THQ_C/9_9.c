//函数是建立有N个学生数据的单向动态链表
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student
{
    long num;
    float score;
    struct Student * next;
};

int n;

struct Student * creat(void)
{
    struct Student * head;
    struct Student * p1, * p2;
    n=0;
    p1=p2=(struct Student * )malloc(LEN);
    scanf("%ld,%f",&p1->num,&p1->score);
    //这里的scanf有逗号，所以在输入的过程中也要使用12,12.5这样的方法
    head=NULL;
    while(p1->num!=0)
    {
        n=n+1;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct Student *)malloc(LEN);
        //这里的p2相当于p1临时过渡保持的变量[相当于上一次的p1]。其中p1是不断变化的，然后再让前一个p1的next指向当前p1
        scanf("%ld,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return(head);
};

int main()
{
    struct Student * pt;
    pt=creat();
    printf("\nnum:%ld\nscore:%5.1f\n",pt->num,pt->score);
    return 0;
}
