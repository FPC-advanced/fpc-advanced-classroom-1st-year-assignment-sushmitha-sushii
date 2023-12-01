//To find the distance between two points.
#include<stdio.h>
#include<math.h>
struct _point
{
  float x;
  float y;
};
typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{
    Point point1 , point2;
    float distance;
    point1=input();
    point2=input();
    dist(point1,point2,&distance);
    output(point1,point2,distance);
    return 0;
} 
Point input()
{
    Point p;
    printf("Enter x coordinate: ");
    scanf("%f",&p.x);
    printf("Enter y coordinate: ");
    scanf("%f",&p.y);
    return p;
}
void dist(Point a, Point b, float *res)
{
    *res=sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}
void output(Point a, Point b, float res)
{
    printf("\n Distance between points (%.2f,%.2f)and(%.2f,%.2f)")
}


