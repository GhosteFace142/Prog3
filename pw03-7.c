#include <stdio.h>
#include <string.h>
#define a "LinuxDistro"
int main()
{
    const char b[] = "2026";
    printf("DISTRO: %s\n", a);
    printf("RDATE: %s\n", b); 
    printf("STRLEN: %ld\n", strlen(a)); 
    printf("SIZEOF: %ld\n", sizeof(a));     
    return 0;
}
