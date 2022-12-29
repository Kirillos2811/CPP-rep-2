#include <stdio.h>
#include <string>

int main()
{
    char str[100];
    gets_s(str);
    int length = strlen(str);
    char buff = str[0];
    str[0] = str[length - 1];
    str[length - 1] = buff;
    printf("Output string:");
    puts(str);
}

