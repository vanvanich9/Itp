#include <stdio.h>

void swap(unsigned char *byte1, unsigned char *byte2) {
    unsigned temp = *byte1;
    *byte1 = *byte2;
    *byte2 = temp;
}

union Register64 {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
        unsigned char byte5;
        unsigned char byte6;
        unsigned char byte7;
        unsigned char byte8;
    } bytes;
    unsigned long long int value;
};

typedef union Register64 EAX;

int main() {
    EAX reg;
    printf("Original message: ");
    scanf("%lld", &reg.value);
    swap(&reg.bytes.byte1, &reg.bytes.byte2);
    swap(&reg.bytes.byte3, &reg.bytes.byte4);
    swap(&reg.bytes.byte5, &reg.bytes.byte6);
    swap(&reg.bytes.byte7, &reg.bytes.byte8);
    printf("Encrypted message: %lld\n", reg.value);
    swap(&reg.bytes.byte1, &reg.bytes.byte2);
    swap(&reg.bytes.byte3, &reg.bytes.byte4);
    swap(&reg.bytes.byte5, &reg.bytes.byte6);
    swap(&reg.bytes.byte7, &reg.bytes.byte8);
    printf("Decrypted message: %lld", reg.value);
}