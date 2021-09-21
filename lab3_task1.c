#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int used[26];
int main(void) {
    char str[10000], out[10000];
    scanf("%[^\n]s", str);
    int size = (int)strlen(str);
    int maxSymbols = 0, cnt = 0;
    for(int i = 0; i < size; i++) {
        if(used[str[i]-'a'] || str[i] < 'a' || str[i] > 'z') continue;
        printf("%c ", str[i]);
        out[cnt] = str[i];
        cnt++;
        for(int j = i; j < size; j++) {
            if(str[j] == str[i]) {
                used[str[i]-'a']++;
                printf(".");
            }
        }
        if(maxSymbols < used[str[i]- 'a'])
            maxSymbols = used[str[i] - 'a'];
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < cnt; i++)
        printf("%c ", out[i]);
    printf("\n");
    while(maxSymbols--) {
        for(int i = 0; i < cnt; i++) {
            if(used[out[i]-'a']) {
                used[out[i]-'a']--;
                printf(". ");
            } else printf("  ");
        }
        printf("\n");
    }
}