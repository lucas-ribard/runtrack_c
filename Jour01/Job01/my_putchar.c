#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);  //write the character c on the stdout
}