#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[5];
    gets(buffer);
    printf("buffer : %s\n",buffer);
    return 0;
}
