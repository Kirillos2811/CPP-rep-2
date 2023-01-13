#include <stdio.h>
#include <string>



void delete_spaces() {
    char str[100];

    printf("Enter a string:");
    gets_s(str);

    int len;
    while(true) {
        if (str[0] == ' ') {
            len = strlen(str);
            for (int i = 0; i < len; i++) {
                str[i] = str[i + 1];
            }
        }
        else {
            break;
        }
    }
    len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[i] = '\0';
        }
        else {
            break;
        }
    }

    printf("Output string:");
    puts(str);
}

int main()
{
    delete_spaces();
}

