#include <stdio.h>
// sprintf : print with format and stores in buffer without size checking

int main(int argc, char const *argv[])
{
    char buffer[5];
    sprintf(buffer, "hello world, my number is %d", 1337);
    return 0;
}
