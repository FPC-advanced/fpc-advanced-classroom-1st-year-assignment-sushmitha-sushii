//Tofind out if the name of the camel is a nice name.
#include <stdio.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);
int main() 
{
    char camel_name[50];
    input(camel_name);
    int result = has_nice_name(camel_name);
    output(result);
    return 0;
}
void input(char *name) 
{
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}
int is_vowel(char c) 
{
    c = (char)tolower(c);  
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int has_nice_name(char *c) 
{
    int vowels = 0, consonants = 0;
    for (int i = 0; c[i] != '\0'; i++) 
    {
        if (is_vowel(c[i])) 
        {
            vowels++;
        } else if (isalpha(c[i])) {
            consonants++;
        }
    }

    return (vowels >= 2 && consonants >= 2);
}
void output(int res) {
    if (res) {
        printf("\nThe camel does have a nice name\n");
    } else {
        printf("\nThe camel does not have a nice name\n");
    }
}