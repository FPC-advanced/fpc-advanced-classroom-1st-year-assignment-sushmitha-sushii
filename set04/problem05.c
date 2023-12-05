// Write a program to find the index of the largest number in an array
#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int main() 
{
    int size = input_size();
    int array[size];
    input_array(size, array);
    int largestIndex = find_largest_index(size, array);
    output(largestIndex);
    return 0;
}
int input_size()
{
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
    return size;
}
void input_array(int n, int a[n]) 
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
    int find_largest_index(int n, int a[n])
    {
    int maxIndex=0;
    for (int i = 1; i < n; i++) 
    {
        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}
void output(int index)
{
printf("index of the largest number is%d",index);
}
