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

