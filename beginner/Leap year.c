#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d%",&year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("Leap year");
        }
        else
        {
            printf("Not Leap year");
        }
    }
    else if (year % 400 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }

    return 0;
}
