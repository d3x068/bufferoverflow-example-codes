#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buffer[5];
    memcpy(buffer,"a very long strings",10);
    printf("%s",buffer);
    return 0;
}
