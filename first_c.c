#include <stdio.h>
#include <stdlib.h>

/*
程序功能：建立一个具有头结点的单项链表，并将存储在数组中的字符依次转储到链表的各个节点中
*/
struct node
{ char data;struct node * next;};

struct node * CreatList(char *s)
{
    struct node *h,*p,*q;
    h=(struct node *)malloc(sizeof(struct node)); //定义头结点h
    p=q=h;
    while(*s != '\0')
    {
        p=(struct node * )malloc(sizeof(struct node));
        p->data=*s; //当前节点的p->data的值
        q->next=p; //也就是前一个节点q的next值为当前p节点的值
        q=p;       //把当前节点的指针p赋值给下次循环的q用，则在下次的循环中就表示上次依次p的next值
        s++;
    }
    p->next='\0';
    return h;  //返回的h指针类型是 struct node *类型，但是里面的data并没有赋值，next就是指向第一个节点p的值
};

main()
{
    char str[]="link list";
    struct node *head;
    head=CreatList(str);
    printf("%d\n",head);
    printf("%s\n",head->data);
    printf("%c\n",head->next->data);//从打印的结果可以看出h的值的情况
}
