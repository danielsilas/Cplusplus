#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s;
    scanf("%c",&s);
    printf("%c", s+('a'-'A'));
    return 0;
}
