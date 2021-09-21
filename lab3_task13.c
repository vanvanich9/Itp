#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
    scanf("%s", str);
    char *str2 = str;
    printf("First String: %s\nCopy String:  %s", str, str2);
}