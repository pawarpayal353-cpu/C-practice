#include <stdio.h>
#include <stdlib.h>
int linear_search(int[], int);
int main(void)
{
int input_arr[10];
int num, position, i;
puts("Enter 10 elements for array");
for(i = 0; i < 10; i++)
{
scanf("%d", &input_arr[i]);
}
puts("Array elements are");
for(i = 0; i < 10; i++)
{
printf("%d ", input_arr[i]);
}
printf("\nEnter an element to search in array:");
scanf("%d", &num);
position = linear_search(input_arr, num);
if(position == -1)
printf("%d is not present in array\n", num);
else
printf("%d is present in array at position %d\n", num,
position+1);
return 0;
}
int linear_search(int arr[], int search_key)
{
int i;
for(i = 0; i < 10; i++)
{
if(arr[i] == search_key)
{
return i;
}
}
return -1;
}