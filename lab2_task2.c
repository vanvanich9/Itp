#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void drawTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) printf("%c", ' ');
        for(int j = 0; j < i * 2 + 1; j++) printf("%c", '*');
        for(int j = 0; j < n - i - 1; j++) printf("%c", ' ');
        printf("%c", '\n');
    }
}

int main(void) {
    drawTriangle(6);
}