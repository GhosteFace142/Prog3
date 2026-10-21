#include <stdio.h>

int main()
{
    char name_str[30];
    scanf("%s", name_str);
    printf("\"%s\"\n", name_str);
    printf("\"%20s\"\n", name_str);
    printf("\"%-20s\"\n", name_str);
    printf("\"    %s    \"\n", name_str);
    return 0;
}
