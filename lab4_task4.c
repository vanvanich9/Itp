#include <stdio.h>

typedef struct data {
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;
} date;

int main() {
    unsigned int day, month, year;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);
    date Date = {day, month, year % 100};
    printf("%d.%d.%d", Date.day, Date.month, Date.year);
}