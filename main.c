#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    printf("%s");

    return 0;
}
