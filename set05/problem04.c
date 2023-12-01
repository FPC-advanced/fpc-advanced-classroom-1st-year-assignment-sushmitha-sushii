//Write a program to find out the mood of a Camel.
#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);
int main() 
{
    float stomach_radius, camel_height, camel_length;
    int mood;
    input_camel_details(&stomach_radius, &camel_height, &camel_length);
    mood = find_mood(stomach_radius, camel_height, camel_length);
    output(stomach_radius, camel_height, camel_length, mood);
    return 0;
}
void input_camel_details(float *radius, float *height, float *length)
 {
    printf("Enter stomach radius of the camel: ");
    scanf("%f", radius);
    printf("Enter height of the camel: ");
    scanf("%f", height);
    printf("Enter length of the camel: ");
    scanf("%f", length);
}
int find_mood(float radius, float height, float length) 
{
    int mood = -1; 
    if (radius < height && radius < length)
        mood = 0; 
    else if (height < length && height < radius)
        mood = 1; 
    else if (length < height && length < radius)
        mood = 2; 
    return mood;
}
void output(float radius, float height, float length, int mood) 
{
    printf("Stomach Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);

    if (mood == 0)
        printf("camel is  Sick\n");
    else if (mood == 1)
        printf("camel is Happy\n");
    else if (mood == 2)
        printf("camel is Tense\n");
    else
        printf("Mood: Neutral or Invalid\n");
}