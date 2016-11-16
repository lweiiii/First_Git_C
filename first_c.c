#include <stdio.h>
#include <stdlib.h>

struct node
{ char data;struct node * next;};

struct node * CreatList(char *s)
{
    struct node *h,*p,*q;
    h=(struct node *)malloc(sizeof(struct node));
    p=q=h;
    while(*s != '\0')
    {
        p=(struct node * )malloc(sizeof(struct node));
        p->data=*s;
        q->next=p;
        q=p;
        s++;
    }
    p->next='\0';
    return h;
};

main()
{
    char str[]="link list";
    struct node *head;
    head=CreatList(str);
    printf("%d\n",head);
    printf("%s\n",head->data);
    printf("%c\n",head->next->data);
}
