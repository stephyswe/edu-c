#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

char *hittaLangstaOrdet(char *str1, char *str2, char *str3)
{
    if (strlen(str1) > strlen(str2) && strlen(str1) > strlen(str3))
        return str1;
    if (strlen(str2) > strlen(str1) && strlen(str2) > strlen(str3))
        return str2;
    return str3;
}

void hittaLangstaOrdetArray(char *str1, char *str2, char *str3, char *output)
{
    if (strlen(str1) > strlen(str2) && strlen(str1) > strlen(str3))
        strcpy(str1, output);
    else if (strlen(str2) > strlen(str1) && strlen(str2) > strlen(str3))
        return strcpy(str2, output);
    else
        return strcpy(str3, output);
}

void main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    char *longest = hittaLangstaOrdet(s1, s2, s3);
    printf("%s\n", longest);
}