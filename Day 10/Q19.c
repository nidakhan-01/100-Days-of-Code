/*Q19.Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
#include <stdio.h>
#include <math.h>
int main(void) {
    int a,b,c, sum=0;
    printf("Enter the values for a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    int h,perpendicular,base;
    if((a>b)&&(a>c))
    {
        h =a;
        perpendicular = b;
        base = c;
    }
     else if((b>a)&&(b>c))
    {
        h =b;
        perpendicular = a;
        base = c;
    }
    else
    {
        h =c;
        perpendicular = a;
        base = b;
    }
    if(((a+b)>c)||((b+c)>a)||((a+c)>b))
    {
         if((a==b)&&(b==c))
        {
            printf("Equilateral");
        }
        else if((a==b)||(b==c)||a==c)
        {
            printf("Isosceles");
        }
        else if((h*h)==(perpendicular*perpendicular)+(base*base))
        {
             printf("Right Angled traingle");
        }
        else
        {
            printf("Scalene");
        }

    }
    return 0;
}