#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int[], int);
int main(void)
{
int input_arr[8];
int i;
puts("Enter 8 elements for array");
for(i = 0; i < 8; i++)
{
scanf("%d", &input_arr[i]);
}
puts("::INSERTION SORT::");
puts("Unsorted array before insertion sort");
for(i = 0; i < 8; ++i)
{
printf("%d ", input_arr[i]);
}
insertion_sort(input_arr, 8);
puts("\nSorted array after insertion sort");
for(i = 0; i < 8; ++i)
{
printf("%d ", input_arr[i]);
}
}
void insertion_sort(int x[], int size)
{
int i, j, temp;
for(i = 1; i < size; ++i)
{
temp = x[i];
j = i - 1;
while(j >= 0 && x[j] > temp)
{
x[j + 1] = x[j];
--j;
}
x[j + 1] = temp;
}
}