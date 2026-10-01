#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date;

    printf("===== Date Calculator =====\n");

    printf("Enter Day: ");
    scanf("%d", &date.day);

    printf("Enter Month: ");
    scanf("%d", &date.month);

    printf("Enter Year: ");
    scanf("%d", &date.year);

    if (date.month < 1 || date.month > 12 ||
        date.day < 1 || date.day > 31) {
        printf("\nInvalid date!\n");
    } else {
        printf("\n----- Date Details -----\n");
        printf("Day: %d\n", date.day);
        printf("Month: %d\n", date.month);
        printf("Year: %d\n", date.year);
        printf("Date: %02d/%02d/%04d\n",
               date.day, date.month, date.year);
    }

    return 0;
}
