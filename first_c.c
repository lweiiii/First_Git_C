#include <stdio.h>
#include <stdlib.h>

/*
�����ܣ�����һ������ͷ���ĵ������������洢�������е��ַ�����ת��������ĸ����ڵ���
*/
struct node
{ char data;struct node * next;};

struct node * CreatList(char *s)
{
    struct node *h,*p,*q;
    h=(struct node *)malloc(sizeof(struct node)); //����ͷ���h
    p=q=h;
    while(*s != '\0')
    {
        p=(struct node * )malloc(sizeof(struct node));
        p->data=*s; //��ǰ�ڵ��p->data��ֵ
        q->next=p; //Ҳ����ǰһ���ڵ�q��nextֵΪ��ǰp�ڵ��ֵ
        q=p;       //�ѵ�ǰ�ڵ��ָ��p��ֵ���´�ѭ����q�ã������´ε�ѭ���оͱ�ʾ�ϴ�����p��nextֵ
        s++;
    }
    p->next='\0';
    return h;  //���ص�hָ�������� struct node *���ͣ����������data��û�и�ֵ��next����ָ���һ���ڵ�p��ֵ
};

main()
{
    char str[]="link list";
    struct node *head;
    head=CreatList(str);
    printf("%d\n",head);
    printf("%s\n",head->data);
    printf("%c\n",head->next->data);//�Ӵ�ӡ�Ľ�����Կ���h��ֵ�����
}
