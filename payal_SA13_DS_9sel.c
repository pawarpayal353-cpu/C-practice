#include <stdio.h>
#include <stdlib.h>
void selection_sort(int[], int);
int main(void)
{
int input_arr[8];
int i;
puts("Enter 8 elements for array");
for(i = 0; i < 8; i++)
{
scanf("%d", &input_arr[i]);
}
puts("::SELECTION SORT::");
puts("Unsorted array before selection sort");
for(i = 0; i < 8; ++i)
{
printf("%d ", input_arr[i]);
}
selection_sort(input_arr, 8);
puts("\nSorted array after selection sort");
for(i = 0; i < 8; ++i)
{
printf("%d ", input_arr[i]);
}
return 0;
}
void selection_sort(int x[], int size)
{
int i, j, temp;
for(i = 0; i < size - 1; ++i)
{
for(j = i + 1; j < size; ++j)
{
if(x[i] > x[j])
{
temp = x[i];
x[i] = x[j];
x[j] = temp;
}
}
}
}