#include <stdio.h>
#include <string.h>

void twoDimensional() {
    FILE *fin = fopen("input.txt", "r");
    int arr[1000][1000];
    int rows = 0, columns = 0;
    while(!feof(fin)) {
        char *s = NULL, num[10000];
        size_t size = 0;
        getline(&s, &size, fin);
        char *ptr = &s[0];
        int cur = 0, cnt = 0;
        while(1) {
            if(*ptr != ' ' && *ptr != '\0' && *ptr != '\n') {
                num[cur] = *ptr;
                cur++;
            } else {
                int step = 1, value = 0;
                for(int i = cur - 1; i >= 0; i--) {
                    value += (num[i] - '0') * step;
                    step *= 10;
                }
                cur = 0;
                arr[rows][cnt] = value;
                cnt++;
            }
            if(*ptr == '\0')
                break;
            ptr++;
        }
        columns = cnt;
        rows++;
    }
    fclose(fin);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    twoDimensional();
}