#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int cnt = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) printf(" ");
        for(int j = 0; j <= i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}