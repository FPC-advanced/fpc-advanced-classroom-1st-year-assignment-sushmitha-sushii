// To find prime numbers between 2 to n Eratosthenes Sieve method.
#include<stdio.h>
#include<stdbool.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
 int n;
 n=input_array_size();
 int a[n];
 init_array( n,a);
 erotosthenes_sieve(n, a);
 output(n, a);
 return 0;

}
int input_array_size()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    return n;
}
void init_array(int n, int a[n])
{
 for(int i=0; i<n ;i++)
 {
   a[i]=i+2;
}
}
void erotosthenes_sieve(int n, int a[n])
{
    bool isPrime[n];
    for (int i = 0; i < n; i++)
     {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; p++)
     {
        if (isPrime[p - 2] == true)
         {
            for (int i = p * p - 2; i <= n; i += p) 
            {
                isPrime[i - 2] = false;
            }
        }
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime[i]) {
            a[index++] = i + 2;
        }
    }
    n = index;
}
void output(int n, int a[n])
 {
    printf("Prime numbers between 2 and %d are: \n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
