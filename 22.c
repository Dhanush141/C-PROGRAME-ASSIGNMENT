#include<stdio.h>
int main()
{   
 int arr[]={2, 3, 4, 1, 6};  
  printf("%u, %u, %un", arr, &arr[0], &arr);  
  return 0;
}
output:
1200, 1200, 6422276