#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char* str = (char*)malloc(255 * sizeof(int));
    scanf("%s", str);
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++) {
        char buf = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = buf;
    }
    printf("%s", str);
}