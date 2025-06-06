//
// Created by jianjian on 2025/5/14.
//
#include <stdio.h>
int main(void)
{
    int c;

    while ((c = getchar() != EOF))
    {
         if (c = '\t')
             putchar('\\t');
         else if (c = '\b')
             putchar('\\b');
         else if (c = '\\')
             putchar('\\\\');
         else
             putchar(c);
    }
}

/*
  switch (c) {
       case '\t':
           printf("\\t");
           break;
       case '\b':
           printf("\\b");
           break;
       case '\\':
           printf("\\\\");
           break;
       default:
           putchar(c);
   }



 printf("\\\\");   \\前面为什么要加两个\\  引用\\用一个\不行吗


 这是一个很好的问题！在C语言中，\\ 实际上只表示一个反斜杠字符 \。
为什么需要两个反斜杠 \\：
C语言中，反斜杠 \ 是一个特殊的转义字符，用来表示特殊字符，比如：
\n 表示换行
\t 表示制表符
\" 表示双引号
\' 表示单引号
所以，如果你要表示一个真正的反斜杠字符，你需要用 \\，第一个反斜杠是用来"转义"第二个反斜杠的。
举例说明：
当你写 printf("\\t"); 时：
第一个 \ 是转义符
第二个 \ 和 t 合起来表示源代码里的字符串内容是 \t
最终输出到屏幕上的是 \t 两个字符
当你写 printf("\\\\"); 时：
第一个 \ 是转义符，第二个 \ 是被转义的反斜杠
第三个 \ 也是转义符，第四个 \ 是被转义的反斜杠
所以，字符串的内容是两个反斜杠 \\
输出到屏幕上的是 \\ 两个字符
如果只用一个反斜杠会怎样？
如果你写 printf("\");，这是错误的语法，编译器会报错，因为单独的 \ 后面必须跟有效的转义字符。
如果你写 printf("\t");，这会输出一个制表符（tab），而不是字符 \ 和 t。
总结：
在C字符串中，一个反斜杠 \ 后面必须跟有效的转义字符
表示一个字面意义上的反斜杠，你需要用 \\
要输出 \t，你需要用 \\t
要输出 \\，你需要用 \\\\
这就是为什么在C语言中，显示反斜杠需要用两个反斜杠的原因。



 */