#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    printf( str,"%s\n");

    return 0;
}
