#include <stdio.h>
#include <string.h>

int main()
{
    char SibSUTIS_str[20] = "SibSUTIS";
    printf("SIZEOF: %zu\n", sizeof(SibSUTIS_str));
    printf("STRLEN: %zu\n", strlen(SibSUTIS_str));
    printf("FREE_BYTES: %zu\n", sizeof(SibSUTIS_str)-strlen(SibSUTIS_str)-1);
    return 0;
}
