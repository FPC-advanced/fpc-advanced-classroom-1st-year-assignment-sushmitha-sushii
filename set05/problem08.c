//To find the weight of a truck load of n camels.
#include <stdio.h>
#include <math.h>
typedef struct _camel 
{
    float radius, height, length, weight;
} Camel;
void input(int n, Camel c[n], float *truck_weight)
 {
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
    for (int i = 0; i < n; ++i) 
    {
        printf("Enter radius, height, and length for camel %d: ", i + 1);
        scanf("%f %f %f", &c[i].radius, &c[i].height, &c[i].length);
    }
}
void find_camel_weight(int n, Camel c[n]) 
{
  for (int i = 0; i < n; ++i) 
    {
        c[i].weight = int M_PI * c[i].radius * c[i].radius * c[i].height * c[i].length;
    }
}
float compute_total_weight(int n, Camel c[n], float truck_weight) 
{
    float total_weight = truck_weight;
    for (int i = 0; i < n; ++i) 
    {
        total_weight += c[i].weight;
    }
    return total_weight;
}
void output(float total_weight) 
{
    printf("\nTotal weight of the truck load: %.2f\n", total_weight);
}
int main() 
{
    int n;
    float truck_weight;
    printf("Enter the number of camels: ");
    scanf("%d", &n);
    Camel camels[n];
    input(n, camels, &truck_weight);
    find_camel_weight(n, camels);
    float total_weight = compute_total_weight(n, camels, truck_weight);
    output(total_weight);
    return 0;
}
