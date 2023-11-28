#include "my_putchar.c"

void my_putchar(char c); //prototype of the function my_putchar

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}