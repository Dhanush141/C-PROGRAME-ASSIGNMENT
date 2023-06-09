#include <stdio.h>

int findIndex(int arr[], int N, int X) {
    int i;
    for (i = 0; i < N; i++) {
        if (arr[i] == X) {
            return i; // return the index of the first occurrence of X
        }
    }
    return -1; // X not found in the array
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int N = 5;
    int X = 5;
    int index = findIndex(arr, N, X);
    if (index == -1) {
        printf("X not found in the array\n");
    } else {
        printf("Index of first occurrence of X: %d\n", index);
    }
    return 0;
}
output:
Index of first occurrence of X: 2