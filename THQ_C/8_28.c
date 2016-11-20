//指向指针的指针 字符串常量想要引用也要找到首元素的指针地址
// (*name)[n] 表示的name是一个指向数组的指针变量，要是想引用数组的元素的话要使用 (*name)[i]的形式
// * name[n]表示的是name数组中存放的是n个元素，每个元素都是一个指针，要想引用元素的话使用 name[i]即可，但是由于元素中存放的指针，所有想要引用真正元素的值的话使用 *name[i]

#include <stdio.h>
int main()
{
    char *name[] = {"Follow me","Great Wall","FORTRAN"};
    //name本身就是指针，指向数组的 name[i]直接引用数组元素表示指向字符串的一个指针，想引用具体的值的话使用*name[i]或者*(name+i)
    char **p;
    //p是一个指针 指向一个指向字符串变量的指针
    int i;
    for(i=0;i<3;i++)
    {
        p=name+i;
        printf("%s\n",*p);
    }
    return 0;
}

/*
char (*name)[] = {"Follow me","Great Wall","FORTRAN"};
printf("%d",(*name)[0]);
此时打印的值为一个地址，因为Follow me这些字符串实际代表的都是指针
*/
