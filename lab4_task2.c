#include <stdio.h>

struct exam_date {
    int day;
    char* month;
    int year;
};

struct student {
    char* name;
    char* surname;
    int noGroup;
    struct exam_date *examDate;
};

int main() {
    char name[1000], surname[1000], month[1000];
    int day, year, noGroup;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your surname: ");
    scanf("%s", surname);
    printf("Enter number of your group: ");
    scanf("%d", &noGroup);
    printf("Enter day of your exam: ");
    scanf("%d", &day);
    printf("Enter month of your exam: ");
    scanf("%s", month);
    printf("Enter year of your exam: ");
    scanf("%d", &year);
    struct exam_date examDate = {day, month, year};
    struct student person = {name, surname, noGroup, &examDate};
    printf("You are %s %s\nYour group: %d\n", person.name, person.surname, person.noGroup);
    printf("Your date exam is %d %s %d", person.examDate->day, person.examDate->month, person.examDate->year);
}