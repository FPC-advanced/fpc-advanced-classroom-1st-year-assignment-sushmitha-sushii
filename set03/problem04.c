//To find nth number in fibonacci sequence.
#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main() 
{
    int n, fibo;
    n = input();
    fibo = find_fibo(n);
    output(n, fibo);
    return 0;
}
int input() {
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    return n;
}
int find_fibo(int n) 
{
    if (n <= 1) 
    {
        return n;
    } else 
    {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) 
        {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}
void output(int n, int fibo) 
{
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}

