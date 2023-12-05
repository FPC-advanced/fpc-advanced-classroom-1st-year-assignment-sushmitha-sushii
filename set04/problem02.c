//Write a program to find the smallest of three fractions
#include <stdio.h>
typedef struct 
{
    int num, den;
} Fraction;
Fraction input_fraction() 
{
    Fraction frac;
    printf("Enter the numerator: ");
    scanf("%d", &frac.num);
    printf("Enter the denominator: ");
    scanf("%d", &frac.den);
    return frac;
}
Fraction find_smallest(Fraction frac1, Fraction frac2, Fraction frac3) 
{
    int common_den = frac1.den * frac2.den * frac3.den;
    frac1.num *= common_den / frac1.den;
    frac1.den = common_den;
    frac2.num *= common_den / frac2.den;
    frac2.den = common_den;
    frac3.num *= common_den / frac3.den;
    frac3.den = common_den;
    if ((frac1.num * frac2.den) < (frac2.num * frac1.den) && (frac1.num * frac3.den) < (frac3.num * frac1.den)) 
    {
        return frac1;
    } else if ((frac2.num * frac3.den) < (frac3.num * frac2.den)) 
    {
        return frac2;
    } else {
        return frac3;
    }
}
void output(Fraction smallest) 
{
    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
}
int main() 
{
    Fraction frac1, frac2, frac3, smallest;
    frac1 = input_fraction();
    frac2 = input_fraction();
    frac3 = input_fraction();
    smallest = find_smallest(frac1, frac2, frac3);
    output(smallest); 
    return 0;
}