#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main()
{
    const char a[] = "Сбой матрицы";
    const wchar_t b[] = L"Сбой матрицы";
    setlocale(LC_ALL, "");
    printf("char  -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(a), strlen(a));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(b), wcslen(b));
    return 0;
}
