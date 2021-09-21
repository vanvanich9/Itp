#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int buf = *a;
    *a = *b;
    *b = buf;
}

int main(void) {
    printf("Write two numbers: ");
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);
}