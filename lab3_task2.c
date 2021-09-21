#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int used[26];
char symb[26];
int main(void) {
    char str[10000];
    for(int i = 0; i < 26; i++)
        symb[i] = (char)(i + 'a');
    scanf("%[^\n]s", str);
    int size = (int)strlen(str);
    for(int i = 0; i < size; i++) {
        if(used[str[i]-'a'] || str[i] < 'a' || str[i] > 'z') continue;
        for(int j = i; j < size; j++)
            if(str[j] == str[i])
                used[str[i]-'a']++;
    }
    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            if(used[i] < used[j] || (used[i] == used[j] && symb[i] > symb[j])) {
                int temp = used[i];
                used[i] = used[j];
                used[j] = temp;
                char buf = symb[i];
                symb[i] = symb[j];
                symb[j] = buf;
            }
        }
    }
    for(int i = 0; i < 26; i++) {
        if(used[i]) {
            printf("%c ", symb[i]);
            while (used[i]--) printf(".");
            printf("\n");
        }
    }
}