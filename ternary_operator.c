/* ternary operator = shortcut to if/else when assigning/returning a value
(condition) ? value if true : value if false */
#include <stdio.h>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}


int main(){

    int max = findMax(3, 4);
    printf("%d", max);




    return 0;
}
