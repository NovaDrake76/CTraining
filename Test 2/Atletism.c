#include <stdio.h>
int main()
{
    int c = 0, s = 0, l = 0, n, i;
    char x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%c", &x);
        while (x != 'F')
        {
            if (x == 'C')
                c++;
            else if (x == 'S')
                s++;
            else if (x == 'L')
                l++;
            scanf("%c", &x);
        }
    }
    printf("%d %d %d %d", c, s, l, c + s + l);
    return 0;
}