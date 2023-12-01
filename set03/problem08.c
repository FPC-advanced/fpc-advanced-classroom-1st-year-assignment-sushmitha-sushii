//To find the permeter of a polygon
#include<stdio.h>
#include<math.h>
typedef struct point
{
    float x, y;
}
Point;
typedef struct polygon 
{
    int sides;
    Point p[100];
    float perimeter;
} 
Polygon;
int input_n() 
{
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}
Point input_point(char *prompt_msg) 
{
    Point p;
    printf("%s\n", prompt_msg);
    printf("Enter x coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);
    return p;
}
int input_polygon(Polygon *p) 
{
    p->sides = input_n();
    printf("Enter coordinates for each point:\n");
    for (int i = 0; i < p->sides; i++) 
    {
    char prompt[50];
    sprintf(prompt, "Enter coordinates for Point %d:", i + 1);
    p->p[i] = input_point(prompt);
    }
    return p->sides;
}
float find_distance(Point a, Point b) 
{
   return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
void find_perimeter(Polygon *p)
 {
    p->perimeter = 0.0;
    for (int i = 0; i < p->sides; i++) 
    {
        int next = (i + 1) % p->sides; 
        p->perimeter += find_distance(p->p[i], p->p[next]);
    }
}

void output(Polygon p) 
{
    printf("Perimeter of the polygon with %d sides is: %.2f\n", p.sides, p.perimeter);
}

int main() 
{
    Polygon poly;
    int sides = input_polygon(&poly);
    if (sides < 3)
     {
        printf("A polygon must have at least 3 sides.\n");
        return 1;
     }
    find_perimeter(&poly);
    output(poly);
    return 0;
}
