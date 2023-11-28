#include <stdio.h>


char my_strcpy(char *src) {
    char dest[12];
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return *dest;
}
