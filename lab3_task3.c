#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE *fin;
    int arr[10000], n = 0;
    fin = fopen("input.txt", "r");
    int number;
    while(!feof(fin)) {
        fscanf(fin, "%d ", &number);
        int state = 1;
        for(int i = 0; i < n && state; i++) {
            if(arr[i] == number)
                state = 0;
        }
        if(state) {
            printf("%d ", number);
            arr[n] = number;
            n++;
        }
    }
}