#include <stdio.h>
#include <string>

int main()
{
    char str[100];
    char reverse_str[100];
    printf("Enter a string:");
    gets_s(str);

    int str_len = strlen(str);
    int j = 0;
    for (int i = str_len - 1; i >= 0; i--) {
        reverse_str[j] = str[i];
        j++;
    }
    reverse_str[str_len] = '\0';
   
    printf("Reverse string:");
    puts(reverse_str);
}

