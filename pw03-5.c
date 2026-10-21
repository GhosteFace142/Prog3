#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("CODE_DEC: %d\n", a);
    printf("CODE_HEX: %x\n", a);
    printf("CODE_OCT: %o\n", a);
    printf("UPPER: %c\n", toupper(a));
    char b = a + 1;
    printf("NEXT: %c\n", b);
    char d = a - 1;
    printf("PREV: %c\n", d);
    return 0;
}
