//ָ��ָ��ĺ���
//*p()��ʾ��p�Ǻ����ķ���ֵΪָ��
//(*p)()��ʾ���Ǳ���pΪָ������ָ��
#include <stdio.h>
int main()
{
    int fun(int x, int y, int(*p)(int,int));
    int max(int,int);
    int min(int,int);
    int add(int,int);
    int a=34,b=-21,n;
    printf("Plz choose 1,2 or 3:");
    scanf("%d",&n);
    if(n==1) fun(a,b,max);
    else if(n==2) fun(a,b,min);
    else if(n==3) fun(a,b,add);
    return 0;
}

int fun(int x,int y,int(*p)(int,int))
{
    int result;
    result=(*p)(x,y);
    printf("%d\n",result);
}

int max(int x,int y)
{
    int z;
    z=x>y?x:y;
    //�����z=x>y?x:y
    printf("Max=");
    return(z);
}

int min(int x,int y)
{
    int z;
    z=x>y?y:x;
    printf("Min=");
    return(z);
}

int add(int x,int y)
{
    int z;
    z=x+y;
    printf("Sum=");
    return(z);
}
