#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    wchar_t a[20]={0}; wchar_t b[20]={0}; wchar_t c[20]={0};
    wscanf(L"%ls %ls %ls", a, b, c);
    wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);
    return 0;
}
