#include<stdio.h>
int main() {
    int year;
    printf("Enter Year:");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("The year is a leap year");
    } else {
        printf("The year is not a leap year");
    }
}