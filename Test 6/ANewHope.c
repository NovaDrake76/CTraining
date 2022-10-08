// #include <stdio.h>

// int main()
// {
//     int k;
//     char p[200];
//     scanf("%d", &k);
//     scanf("%s", p);
//     printf("%s", vignere(k, p));
//     return 0;
// }

// char *vignere(int k, char *p)
// {
//     int i, j, l;
//     char *c;
//     l = strlen(p);
//     c = (char *)malloc(l * sizeof(char));
//     for (i = 0; i < l; i++)
//     {
//         j = i % 4;
//         c[i] = p[i] + (k % 10);
//         k /= 10;
//     }
//     return c;
// }
