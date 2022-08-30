//WAP to take date as an input in below given format and convert the date format and display the result as given below.

#include<stdio.h>

int main(){
    int date,month,year;
    printf("Enter the date=");
    scanf("%d",&date);
    printf("Enter the month=");
    scanf("%d",&month);
    printf("Enter the year=");
    scanf("%d",&year);
    printf("Day-%d,Month-%d,Year-%d",date,month,year);
    return 0;
}
