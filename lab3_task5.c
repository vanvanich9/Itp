#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int x) {
    int res = 1;
    for(int i = 2; i <= x; i++) res *= i;
    return res;
}

int main(void) {
    int start, end, result[10000];
    int n = 0;
    printf("Starting range of number: ");
    scanf("%d", &start);
    printf("Ending range of number: ");
    scanf("%d", &end);
    for(int i = start; i <= end; i++) {
        int x = i, res = 0;
        while(x) {
            int j = x % 10;
            res += factorial(j);
            x /= 10;
        }
        if(res == i) {
            result[n] = res;
            n++;
        }
    }
    if(n) {
        printf("The strong numbers are: ");
        for(int i = 0; i < n; i++)
            if(n == i + 1)
                printf("%d. ", result[i]);
            else
                printf("%d, ", result[i]);
    } else {
        printf("There are no strong numbers here.");
    }
}