#include <stdio.h>

int main( argc,char *argv[]) 
{
    char str[256];
 
    fgets(str, sizeof(str), stdin);
    printf( str );
    printf("¥n");
    return 0;
}
