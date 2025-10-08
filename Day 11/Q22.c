/*Q22.Write a program to find profit or loss percentage given cost price and selling price.*/
#include <stdio.h>
int main() {
    float cp, sp, profit, loss, percent;
    printf("Enter cost price\n");
    scanf("%f", &cp);
    printf("Enter selling price\n");
    scanf("%f", &sp);
    if (sp > cp) {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit Percentage = %f", percent);
    } else if (cp > sp) {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss Percentage = %f", percent);
    } else
        printf("No Profit No Loss");
    return 0;
}