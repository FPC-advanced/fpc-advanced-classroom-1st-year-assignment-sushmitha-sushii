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
