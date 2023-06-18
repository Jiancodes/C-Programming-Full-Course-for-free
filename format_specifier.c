#include <stdio.h> // stdio.h 头文件定义了三种变量类型、几个宏和各种函数或执行输入和输出。
int main(){

    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double   C语言中常用的小数有两种类型，分别是float 或double；float 称为单精度浮点型，double 称为双精度浮点型。
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("item 1: $%-8.2f\n", item1);
    printf("item 2: $%-8.2f\n", item2);
    printf("item 3: $%-8.2f\n", item3);

    return 0;
}
