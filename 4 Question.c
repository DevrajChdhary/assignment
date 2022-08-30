//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

#include<stdio.h>

int main(){
    float A;
    int R;
    printf("Enter the radius of circle=");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("%0.2f",A);
    return 0;
}
