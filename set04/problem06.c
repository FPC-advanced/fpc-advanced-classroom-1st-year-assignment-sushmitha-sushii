//To count the number of words in a string using strtok (_string.h_)
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);
int main()
{
    char input[MAX_LENGTH];
    input_string(input);
    int word_count = count_words(input);
    output(input, word_count);
    return 0;
}
void input_string(char *a) 
{
    printf("Enter a string: ");
    fgets(a, MAX_LENGTH, stdin);
    size_t len = strlen(a);
    if (len > 0 && a[len - 1] == '\n')
    {
        a[len - 1] = '\0';
    }
}
int count_words(char *string) 
{
    char *token;
    int count = 0;
    token = strtok(string, " ");
    while (token != NULL) 
    {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}
void output(char *string, int no_words) 
{
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}