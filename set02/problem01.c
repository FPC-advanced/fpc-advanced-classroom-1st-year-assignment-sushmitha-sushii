//To find the area of triangle
#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base , height , area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0 ;
}
void input(float *base, float *height)
{
    printf("Enter the base of the triangle: \n");
    scanf("%f",base);
     printf("Enter the height of the triangle: \n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area = (base*height)*0.5;
    
}
void output(float base, float height, float area)
{
    printf("The area of triangle for base %f and height %f is %f",base,height,area);
}