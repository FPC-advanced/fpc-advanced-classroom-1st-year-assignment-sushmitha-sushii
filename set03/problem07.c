//To find the length of a line
#include <stdio.h>
#include <math.h>

typedef struct Point {
    float x, y;
} Point;

typedef struct Line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter x coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y coordinate: ");
    scanf("%f", &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates for Point 1:\n");
    l.p1 = input_point();
    printf("Enter coordinates for Point 2:\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}

void output(Line l) {
    printf("Length of the line between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}
