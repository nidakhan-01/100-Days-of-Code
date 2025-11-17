/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.*/
#include <stdio.h>

int main() {
    FILE *f = fopen("numbers.txt", "r");
    if(f == NULL) {
        printf("numbers.txt not found");
        return 0;
    }

    int num, sum = 0, count = 0;

    while(fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(f);

    if(count == 0) {
        printf("No numbers found");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / count);

    return 0;
}s