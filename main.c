#include <stdio.h>

int main(int argc,char *argv[]) 
{
    char str[256];
    puts(str, sizeof(str), stdin);
    printf(str, "%s\n");

    return 0;
}
