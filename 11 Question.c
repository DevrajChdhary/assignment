//WAP to take time as an input in below given format and convert the time format and dispaly the result .
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter hour and minutes\nHH:MM\n");
    scanf("%d:%d", &a, &b);
    printf("%d hour %d minute",a,b);
    return 0;
}
