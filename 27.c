#include<stdio.h>
int main()
{
    int x = 30, y = 40;
    if(x == y)
        printf("x is equal to y\n");

    else if(x > y)
        printf("x is greater than y\n"
    else if(x < y)
        printf("x is less than y\n")
    return 0;
}
error:
There is a syntax error in the program. The statement printf("x is less than y\n") is missing a semicolon (;).