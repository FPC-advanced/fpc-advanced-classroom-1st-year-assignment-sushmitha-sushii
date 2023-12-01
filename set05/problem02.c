//To find the weight of a camel, given height, length and stomach radius using four functions.
#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
int main()
{
    float stomach_radius,camel_height,camel_length,camel_weight;
    input_camel_details(&stomach_radius,&camel_height,&camel_length);
    camel_weight=find_weight(stomach_radius, camel_height, camel_length);
    output(stomach_radius, camel_height, camel_length,camel_weight);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter stomach radius of the camel: ");
    scanf("%f",radius);
    printf("Enter height of the camel: ");
    scanf("%f",height);
    printf("Enter lenght of the camel: ");
    scanf("%f",length);
}
float find_weight(float radius, float height, float length)
{
    return 3.14159265359 * pow(radius,3) * sqrt(height*length);
}
void output(float radius, float height, float length, float weight)
{
    printf("Stomach Radius: %.2f\n",radius);
    printf("Height: %.2f\n",height);
    printf("Length: %.2f\n",length);
    printf("Weight of the camel: %.2f\n",weight);
}
