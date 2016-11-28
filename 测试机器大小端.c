#include<stdio.h>

/*
int main(int argc, char *argv[])
{
    int i = 0x12345678;
    char *c = (char *)&i;

    printf("%x \n", *c);

    return 0;
}
*/


/*
#include<stdio.h>
int main(int argc, char *argv[])
{
    int i = 0x12345678;
    char c = i;

    printf("%x \n", c);

    return 0;
}

#注：这种方式的定义一个int型的数据类型，初始化为十六进制0x12345678,在内存中存放的位置从低位到高位,依次为（低位）87654321（高位）；
再定义一个占一个字节的char型，然后把int型数据赋值给char型数据，因为char占一个字节，int占四个字节，这样赋值就会丢掉三个字节，
但是这正是我们需要的，如果它打印出78(小端模式)，如果打印出12(大端模式)。
*/

#include<stdio.h>

typedef union NODE
{
    int i;
    char c;
}Node;

int main(int argc, char *argv[])
{
    Node node;

    node.i = 0x12345678;

    printf("%x\n", node.c);

    return 0;
}

/*
注:这种方式运用到了union(共用体)，所谓的共用体.
就是共同使用一块内存，共用体的大小是共用体中的所有类型最大的哪一个，例如上面的共用体中int是四个字节，char为一个字节，
那么这个共用体的大小就是四个字节。
当然这个要看你的系统是多少位的（在这里我说的是32位系统，64位系统int是8个字节），先对共用体中的int型数据i赋初值，
然后在用char去访问一个字节的数据，如果打印出结果为78（小端模式），反之为大端模式。
*/
