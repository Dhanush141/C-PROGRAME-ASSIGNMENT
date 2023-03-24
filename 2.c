#include <stdio.h>

int main() {
   int n, i;
   printf("Input the number of elements to store in the array :");
   scanf("%d", &n);

   int arr[n];
   printf("Input %d number of elements in the array:\n", n);
   
   for(i = 0; i < n; i++) {
      printf("element - %d : ", i);
      scanf("%d", &arr[i]);
   }

   printf("\nElements of array in reverse order are:\n");

   for(i = n-1; i >= 0; i--)
      printf("%d ", arr[i]);

   return 0;
}
output:
Input the number of elements to store in the array :3
Input 3 number of elements in the array:
element - 0 : 2
element - 1 : 5
element - 2 : 7

Elements of array in reverse order are:
7 5 2