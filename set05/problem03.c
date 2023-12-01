//To find the weight of the camel given height, length and stomach radius using four functions (Structures)
#include <stdio.h>
#include <math.h>
struct camel
{
    float radius, height, length, weight;
};
typedef struct camel Camel;
Camel input();
float find_weight(Camel c);
void output(Camel c);
int main() 
{
    Camel myCamel;
    myCamel = input();
    myCamel.weight = find_weight(myCamel);
    output(myCamel);
    return 0;
}
Camel input() 
{
    Camel c;
    printf("Enter stomach radius of the camel: ");
    scanf("%f", &c.radius);
    printf("Enter height of the camel: ");
    scanf("%f", &c.height);
    printf("Enter length of the camel: ");
    scanf("%f", &c.length);
    return c;
}
float find_weight(Camel c) 
{
    return 3.14159265359 * pow(c.radius, 3) * sqrt(c.height * c.length);
}
void output(Camel c) 
{
    printf("Stomach Radius: %.2f\n", c.radius);
    printf("Height: %.2f\n", c.height);
    printf("Length: %.2f\n", c.length);
    printf("Weight of the camel: %.2f\n", c.weight);
}