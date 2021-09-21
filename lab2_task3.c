#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void drawTriangle(int h) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < h - i - 1; j++) printf("%c", ' ');
        for(int j = 0; j < i * 2 + 1; j++) printf("%c", '*');
        for(int j = 0; j < h - i - 1; j++) printf("%c", ' ');
        printf("%c", '\n');
    }

}

void drawRightTriangle(int h) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j <= i; j++) printf("%c", '*');
        printf("%c", '\n');
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < h - i; j++) printf("%c", '*');
        printf("%c", '\n');
    }
}

void drawRectangle(int h, int w) {
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            printf("%c", '*');
        }
        printf("%c", '\n');
    }

}

int main(void) {
    drawTriangle(6);
    drawRectangle(6, 4);
    drawRightTriangle(3);
}