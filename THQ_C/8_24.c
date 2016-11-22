//指向指针的函数
//*p()表示的p是函数的返回值为指针
//(*p)()表示的是变量p为指向函数的指针
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
    //这里的z=x>y?x:y
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

/*
0)
赋值语句 p = max ; 
作用是将函数 max 的入口地址赋给指针变量p。和数组名代表数组首元素地址类似，函数名代表该函数的入口地址。
这时 p 就是指向函数 max 的指针变量，此时 p 和 max都指向函数开头，调用 *p 就是调用 max 函数。
但是p作为指向函数的指针变量，它只能指向函数入口处而不可能指向函数中间的某一处指令处，因此不能用 *(p + 1)来表示指向下一条指令。
1) 指向函数的指针变量的一般定义形式为：
数据类型 （*指针变量名）（函数参数列表）    
这里数据类型就是函数返回值的类型
2) int (* p) ( int,int ); 它只是定义一个指向函数的指针变量 p, 它不是固定指向哪一个函数的，而只是表示定义这样一个类型的变量，它是专门用来存放函数的入口地址的。在程序中把哪一函数(该函数的值应该是整形的，且有两个整形参数)的地址赋给它，他就指向哪一个函数。在一个函数中，一个函数指针变量可以先后指向同类型的不同函数。
3) p = max; 在给函数指针变量赋值时，只需给出函数名而不必给出函数参数，因为是将函数的入口地址赋给 p ，而不涉及 实参和形参的结合问题，不能写成 p = max(a,b);
4) c = (*p)(a,b) 在函数调用时，只需将( *p ) 代替函数名即可，后面实参依旧。
5) 对于指向函数的指针变量，像 p++ ,p+n.....是无意义的。
