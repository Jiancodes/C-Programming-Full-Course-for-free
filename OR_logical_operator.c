#include <stdio.h>
#include <stdbool.h>
int main(void){

    // logical operator = || (OR) checks if at least one conditions is true

    float tem = 25;

    if (tem <= 0 || tem >= 30)
    {
        printf("\nThe weather is bad!");
    }
    
    else{
        printf("\nThe weather is good!"); 
    }

    return 0;
}