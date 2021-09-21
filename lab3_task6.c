#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char password[5];
    int cnt = 0;
    printf("password = ");
    scanf("%s", password);
    for(int a = 32; a <= 126; a++) {
        char res[5];
        res[0] = (char)a;
        for(int b = 31; b <= 126; b++) {
            if(b > 31) res[1] = (char)b;
            for(int c = 31; c <= 126; c++) {
                cnt++;
                if(c > 31)
                    res[2] = (char)c;
                if(res[0] == password[0] && res[1] == password[1] && res[2] == password[2]) {
                    printf("found: %s\n", res);
                    printf("number of attempts: %d", cnt);
                    return 0;
                }
            }
        }
    }
}