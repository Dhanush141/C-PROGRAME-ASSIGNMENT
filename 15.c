#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    printf("Maximum number is %d", max);
    
    return 0;
}
output:
, if the user enters 12, 6, and 9, then the program will output Maximum number is 12.