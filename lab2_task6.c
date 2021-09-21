#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *ptr;
void goNextUp() {
    ptr++;
}

void goNextDown() {
    ptr--;
}



int main(void) {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    ptr = &arr[0];
}