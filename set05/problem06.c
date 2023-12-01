// Write a program to find the average of all the odd elements in an array
#include <stdio.h>
int main() 
{
    int n = input_n();
    int arr[n];
    input(n, arr);
    float average = odd_average(n, arr);
    output(average);
    return 0;
}
int input_n() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}
void input(int n, int a[n]) 
{
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i)
     {
        scanf("%d", &a[i]);
    }
}
float odd_average(int n, int a[n]) 
{
    int count = 0;
    int sum = 0;
   for (int i = 0; i < n; ++i) 
   {
        if (a[i] % 2 != 0) 
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) 
    {
        return 0; 
    }

    return (float)sum / count;
}

void output(float avg) {
    printf("\nAverage of odd elements in the array: %.2f\n", avg);
}
