// 建立和输出一个简单的链表
//所有结点都是在程序中定义的，不是临时开辟的，也不能用完后释放，这种链表被称为“静态链表”
#include <stdio.h>
struct Student
{
    int num;
    float score;
    struct Student * next;
};

int main()
{
    struct Student a,b,c, * head, * p ; //定义结构体变量作为链表结点
    a.num=10101;a.score=89.5;
    b.num=10103;b.score=90;
    c.num=10107;c.score=85;
    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;  //C结点的next成员不存放其他地址
    p=head;
    do
    {
        printf("%ld %5.1f\n",p->num,p->score);
        p=p->next;   //使p指向下一结点
    }while(p!=NULL);    //输出完c结点后p的值为NULL，循环终止
    return 0;
}
