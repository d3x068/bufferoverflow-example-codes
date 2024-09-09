#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[5];
    strcpy(buffer,"This should be overflow");
    printf("buffer : %s",buffer);
    return 0;
}
