//To find GCD _(HCF)_ of two numbers
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int main()
{
    int a, b;
    a=input();
    b= input();
    int hcf = find_gcd(a,b);
    output(a, b, hcf);
    return 0;
}
int input() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b) 
{
    while (b != 0) {
        int n = a % b;
        a = b;
        b = n;
    }
    return a;
}
void output(int a, int b, int hcf) {
    printf("The GCD (HCF) of %d and %d is %d\n", a, b, hcf);
}



