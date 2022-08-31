// read 2 values, the coordinates of 2 points in a rectangle: the top left and the bottom right. Then, read the coordinates of a point in the plane. If the point is inside the rectangle, print "Dentro!". If the point is outside the rectangle, print "Fora!".

#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2, x, y;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &x);
    scanf("%d", &y);
    if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
    {
        printf("Dentro!");
    }
    else
    {
        printf("Fora!");
    }
    return 0;
}