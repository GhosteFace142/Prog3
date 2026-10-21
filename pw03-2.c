#include <stdio.h>
#include <string.h>

int main()
{
    char word1_str[15];
    char word2_str[15];
    scanf("%s %s", word1_str, word2_str);
    printf("%s-%s\n", word1_str, word2_str);
    printf("TOTAL_LEN: %ld\n", strlen(word1_str)+strlen(word2_str));
    return 0;
}
