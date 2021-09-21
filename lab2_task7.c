#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    FILE *fin, *fout;
    fin = fopen ("input.txt","r");
    fout = fopen ("output.txt","w");
    char x;
    while(1) {
        x = fgetc(fin);
        if(x == EOF) break;
        else fputc(x, fout);
    }
    fclose(fin);
    fclose(fout);
}