#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *ptrUp, *ptrDown;
void goNextUp() {
    ptrUp++;
}

void goNextDown() {
    ptrDown--;
}



int main(void) {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    ptrUp = &arr[0];
    ptrDown = &arr[n-1];

}