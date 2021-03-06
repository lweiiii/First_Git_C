//程序功能：口袋中有5种颜色的球若干，求每次取三个是不同颜色的取法

#include <stdio.h>
main()
{
    enum color {red,yellow,blue,white,black};
    enum color i,j,k,pri;int n,loop;
    n=0;

    for(i=red;i<=black;i++)
        for(j=red;j<=black;j++)
        if(i!=j)
        {
            for(k=red;k<=black;k++)
            {
                if((k!=i)&&(k!=j))
                {
                    n=n+1;
                    printf("%-4d",n);
                    for(loop=1;loop<=3;loop++)
                    {
                        switch(loop)
                            {
                                case 1:pri=i;break;
                                case 2:pri=j;break;
                                case 3:pri=k;break;
                                default:break;
                            }
                        switch(pri)
                            {
                                case red:printf("%-10s","red");break;
                                case yellow:printf("%-10s","yellow");break;
                                case blue:printf("%-10s","blue");break;
                                case white:printf("%-10s","white");break;
                                case black:printf("%-10s","black");break;
                            }
                    }
                }
            printf("\n");
            }
        }
        printf("\ntotal:% 5d\n",n);
}

/*
知识回顾：
 在实际应用中，有的变量只有几种可能取值。如人的性别只有两种可能取值，星期只有七种可能取值。在 C 语言中对这样取值比较特殊的变量可以定义为枚举类型。所谓枚举是指将变量的值一一列举出来，变量只限于列举出来的值的范围内取值。
定义一个变量是枚举类型，可以先定义一个枚举类型名，然后再说明这个变量是该枚举类型。

例如：
enum weekday{sun,mon,tue,wed,thu,fri,sat}；
定义了一个枚举类型名 enum weekday，然后定义变量为该枚举类型。例如：
enum weekday day；
当然，也可以直接定义枚举类型变量。例如：
enum weekday{sun,mon,tue,wed,thu,fri,sat} day；
其中，sum,mon,…,sat 等称为枚举元素或枚举常量，它们是用户定义的标识符。
需要说明的有以下几点。
① 枚举元素不是变量，而是常数，因此枚举元素又称为枚举常量。因为是常量，所以不能对枚举元素进行赋值。
② 枚举元素作为常量，它们是有值的，C 语言在编译时按定义的顺序使它们的值为,1,2,…。
在上面的说明中，sun 的值为 0，mon 的值为 1，…sat 的值为 6，如果有赋值语句
day=mon；
则 day 变量的值为 1。当然，这个变量值是可以输出的。例如：
printf ("%d",day)；
将输出整数 1。
如果在定义枚举类型时指定元素的值，也可以改变枚举元素的值。例如：
enum weekday{sun=7,mon=1,tue,wed,thu,fri,sat}day；
这时，sun 为 7，mon 为 1，以后元素顺次加 1，所以 sat 就是 6 了。
③ 枚举值可以用来作判断。例如：
if (day==mon) {…}
if (day>mon) {…}
枚举值的比较规则是：按其在说明时的顺序号比较，如果说明时没有人为指定，则第一个枚举元素的值认作 0。例如，mon>sun，sat>fri。
④ 一个整数不能直接赋给一个枚举变量，必须强制进行类型转换才能赋值。例如：
day=(enum weekday)2；
这个赋值的意思是，将顺序号为 2 的枚举元素赋给 day，相当于workday=tue；
*/
