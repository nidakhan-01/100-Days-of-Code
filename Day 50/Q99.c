/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5], monthName[4];
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    day[0] = date[0]; day[1] = date[1]; day[2] = '\0';
    month[0] = date[3]; month[1] = date[4]; month[2] = '\0';
    for(int i=0;i<4;i++) year[i] = date[6+i];
    year[4] = '\0';

    if(strcmp(month,"01")==0) strcpy(monthName,"Jan");
    else if(strcmp(month,"02")==0) strcpy(monthName,"Feb");
    else if(strcmp(month,"03")==0) strcpy(monthName,"Mar");
    else if(strcmp(month,"04")==0) strcpy(monthName,"Apr");
    else if(strcmp(month,"05")==0) strcpy(monthName,"May");
    else if(strcmp(month,"06")==0) strcpy(monthName,"Jun");
    else if(strcmp(month,"07")==0) strcpy(monthName,"Jul");
    else if(strcmp(month,"08")==0) strcpy(monthName,"Aug");
    else if(strcmp(month,"09")==0) strcpy(monthName,"Sep");
    else if(strcmp(month,"10")==0) strcpy(monthName,"Oct");
    else if(strcmp(month,"11")==0) strcpy(monthName,"Nov");
    else if(strcmp(month,"12")==0) strcpy(monthName,"Dec");

    printf("%s-%s-%s", day, monthName, year);
    return 0;
}