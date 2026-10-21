#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    wchar_t a[4] = {0};
    wscanf(L"%ls", a);
    wprintf(L"Агент %ls авторизован в системе\n", a);
    return 0;
}
