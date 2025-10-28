/*Q10.Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
#include <stdio.h>

int main() {
    double seconds, hours, minutes, sec;
    scanf("%lf", &seconds);

    hours = seconds / 3600.0;
    minutes = (seconds / 60.0);
    sec = seconds;

    printf("%lf\n", hours);
    printf("%lf\n", minutes);
    printf("%lf\n", sec);

    return 0;
}