//Write a program to find borga(x) given x.
#include<stdio.h>
#include<math.h>
int input(int x) 
{
    printf("Please input a number: ");
    scanf("%d", &x);
    return x;
}
float borga_X(int x) 
{
    float term = (float)x;
    float result = 1;
    for(int i = 1; term > 0.000001; i++)
     {
        float p = pow(x, i);
        float n = 2 * i + 1;
        float fac = 1;
       for(int j = 1; j <= n; j++)
        {
            fac *= j;
        }
        term = p / fac;
        result += term;
    }
    return result;
}
void output(int x, float result) 
{
    printf("The result of borga_X(%d) is: %f\n", x, result);
}
int main() 
{
    int x = input(x);
    float result = borga_X(x);
    output(x, result);
    return 0;
}