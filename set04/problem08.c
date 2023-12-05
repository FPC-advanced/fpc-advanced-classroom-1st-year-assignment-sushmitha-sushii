//To add n fractions
#include<stdio.h>
typedef struct fraction
{
    int num, den;
} fr;
int input_n()
{
    printf("pls enter the num of fractions: ");
    int x;
    scanf("%d",&x);
    return x;
}
fr input_fraction()
{
    fr a;
    printf("num: ");
    scanf("%i", &a.num);
    printf("denom: ");
    scanf("%i",&a.den);
    return a;
}
void input_n_fractions(int n, fr f[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        f[i]=input_fraction();
    }
}
int find_gcd(int a, int b)
{
  int r,gcd;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}
fr add_fractions(fr f1,fr f2)
{
  fr a,sum;
  a.num = (f1.num * f2.den) + (f2.num * f1.den);
  a.den = f1.den * f2.den;
   int gcd= find_gcd(a.num,a.den);
   sum.num = a.num/gcd ;
   sum.den = a.den/gcd ;
  f1=sum;
  return f1;
}
fr add_n_fractions(int n, fr f[n])
{
  fr f1=f[0];
  for(int i=1;i<n;i++)
  {
    f1=add_fractions(f1,f[i]);
  }
  return f1;
}
void output(fr f1)
{
    printf("%i/%i",f1.num,f1.den);
}
int main()
{
   int n ;
   n=input_n();
  fr f[n],f1;
  input_n_fractions(n,f);
  f1=add_n_fractions(n,f);
  output(f1);
  return 0;
  
}
