#include <stdio.h>

// Function to check if a number is perfect or not
int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;  // num is a perfect number
    }
    return 0;  // num is not a perfect number
}

int main() {
    int lower, upper, i;
    printf("Enter the lower and upper limits of the range: ");
    scanf("%d %d", &lower, &upper);

    printf("The perfect numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
output:
Enter the lower and upper limits of the range: 1 100
The perfect numbers between 1 and 100 are:
6 28