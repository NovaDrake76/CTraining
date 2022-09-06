// get a minimum time, then recieve times until the user enters '-1' and print how many times the user entered a time that was faster or equal than the minimum time, and how many series there should be, given that every time faster or equal than the minimum time is qualified to compete, and each serie can host a maximum of 8 competitors.

#include <stdio.h>

int main()
{
    int count = 0, series = 0;
    float min, time;
    scanf("%f", &minTime);
    while (1)
    {
        scanf("%f", &time);
        if (time == -1)
        {
            break;
        }
        if (time <= minTime)
        {
            count++;
        }
    }
    series = count / 8;
    if (count % 8 != 0)
    {
        series++;
    }
    printf("%d %d", count, series);
}
