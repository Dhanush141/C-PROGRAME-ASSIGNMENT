#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Input 10 elements in the array:\n");

    for(i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", arr+i);
    }

    printf("\nElements in array: ");

    for(i = 0; i < 10; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}
output:
Input 10 elements in the array:
element - 0 : 1
element - 1 : 1
element - 2 : 2
element - 3 : 3
element - 4 : 4
element - 5 : 5
element - 6 : 6
element - 7 : 7
element - 8 : 8
element - 9 : 9

Elements in array: 1 1 2 3 4 5 6 7 8 9