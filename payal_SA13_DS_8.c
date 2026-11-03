#include <stdio.h>
#include <stdlib.h>
int binary_search(int[], int, int);
int main(void)
{
int input_arr[10];
int num, position, i;
puts("Enter 10 elements in ascending order");
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
position = binary_search(input_arr, 10, num);
if(position == -1)
printf("%d is not present in array\n", num);
else
printf("%d is present in array at position %d\n", num,
position+1);
return 0;
}
int binary_search(int arr[], int size, int search_key)
{
int min = 0;
int max = size - 1;
int mid;
while(min <= max)
{
mid = (min + max) / 2;
if(search_key == arr[mid])
{
return (mid);
}
if(search_key < arr[mid])
{
max = mid - 1;
}
if(search_key > arr[mid])
{
min = mid + 1;
}
}
return -1;
}