//  To find whether a number is a composite number
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n , result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0 ;
}
int input_number()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    int i;
    if(n<=1)
    {
        return 0;
    }
    else
    {
     for(i=2;i<n;i++)
        if(n%i==0)
         return 1;
    }
    return 0;
    
}
void output(int n, int result)
{
    if(result)
    {
        printf("%d is a composite number",n);
    }
    else
    {
       printf("%d is not a composite number",n);
    }
}

