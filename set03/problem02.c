//To find whether the given 3 points form a triangle
#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1, y1, x2, y2, x3, y3;
    int result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) 
{
    printf("Enter coordinates of first point (x y): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates of second point (x y): ");
    scanf("%f %f", x2, y2);
    printf("Enter coordinates of third point (x y): ");
    scanf("%f %f", x3, y3);
}
float distance(float x1, float y1, float x2, float y2) 
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) 
{
    float side1, side2, side3;
    side1 = distance(x1, y1, x2, y2);
    side2 = distance(x2, y2, x3, y3);
    side3 = distance(x3, y3, x1, y1);
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) 
    {
        return 1; // It's a triangle
    } else {
        return 0; // It's not a triangle
    }
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) 
{
    if (result) 
    {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    } else 
    {
        printf("The points (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
    }
}
