#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
    scanf("%s", str);
    int cnt = 0;
    char *ptr = &str[0];
    while(*ptr++ != '\0')
        cnt++;
    printf("%d", cnt);
}