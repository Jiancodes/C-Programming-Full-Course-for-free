#include <stdio.h>
#include <stdbool.h>
int main(){

    // logical operator = && (AND) check if two conditions are true

    float tem = 25;
    bool sunny = true;

    if (tem >= 0 && tem <=30 && sunny)
    {
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!"); 
    }
    


    return 0;
}