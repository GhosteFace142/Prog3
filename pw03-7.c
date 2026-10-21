#include <stdio.h>
#include <string.h>
#define a "LinuxDistro"
int main()
{
    const char b[] = "2026";
    printf("DISTRO: %s\n", a);
    printf("RDATE: %s\n", b); 
    printf("STRLEN: %zu\n", strlen(a)); 
    printf("SIZEOF: %zu\n", sizeof(a));     
    return 0;
}
