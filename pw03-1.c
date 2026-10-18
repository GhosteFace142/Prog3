#include <stdio.h>
#include <string.h>

int main()
{
    char SibSUTIS_str[20] = "SibSUTIS";
    printf("SIZEOF: %zd\n", sizeof(SibSUTIS_str));
    printf("STRLEN: %zd\n", strlen(SibSUTIS_str));
    printf("FREE_BYTES: %zd\n", sizeof(SibSUTIS_str)-strlen(SibSUTIS_str)-1);
    return 0;
}
