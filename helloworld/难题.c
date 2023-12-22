#include <stdio.h>
#define mian main
int mian() {
    char c1, c2, c3, c4, c5, c6;    // c1-1 c2-2 c3-3 c4-无 c5-4 c6-5
    scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
    c5=getchar(); c6=getchar();
    putchar(c1);putchar(c2);    // putchar(X) = printf("%c", X)
    printf("%c%c\n", c5, c6);

    return 0;
}

/*这段Code定义了六个字符变量c1、c2、c3、c4、c5和c6。
接着，使用scanf函数读取用户输入的四个字符，并将它们分别存储在c1、c2、c3和c4中。
接下来，使用getchar函数读取用户输入的下一个字符，并将其存储在c5和c6中。
getchar函数每次只读取一个字符，所以需要调用两次。
最后，使用putchar函数打印出c1和c2的值，然后使用printf函数打印出c5和c6的值，并在打印完后换行。

putchar函数和printf函数都是C语言中常用的输出函数，前者用于输出单个字符，
后者可以用于输出格式化的字符串。*/