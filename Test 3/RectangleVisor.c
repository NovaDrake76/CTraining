#include <stdio.h>

int main(void)
{
    float x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float x3, x4, y3, y4;
    scanf("%f %f %f %f", &x3, &y3, &x4, &y4);

    // is this really necessary?
    int a1, a2, a3, a4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    if (a1, a2, a3, a4 == 0)
    {
        if (x1 <= x3 && x2 >= x4 && y1 <= y3 && y2 >= y4)
        {
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", x1, y1, x2, y2, x3, y3, x4, y4);
        }
        else if (x1 >= x3 && x2 <= x4 && y1 >= y3 && y2 <= y4)
        {
            printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", x3, y3, x4, y4, x1, y1, x2, y2);
        }
        else
        {
            printf("Nao posso afirmar!");
        }
    }
}
