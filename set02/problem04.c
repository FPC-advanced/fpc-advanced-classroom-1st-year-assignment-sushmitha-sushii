//To find Sum of composite number in an array of different numbers entered by the user
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main()
{
int n ,sum;
n=input_array_size();
int a[n];
input_array(n,a);
sum=sum_composite_numbers(n,a);
output(sum);
return 0 ;
}
int input_array_size()
{
    int n ;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    return n ;
}
void input_array(int n, int a[n])
{
    
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the array values: \n");
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[1]<=1)
        {
            continue;
        }
        int iscomposite = 0;
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                iscomposite=1;
                break;
            }
        }
        if(iscomposite)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}

void output(int sum)
{
printf("The sum of composite numbers in the array is : %d\n",sum);
}



    