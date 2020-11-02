#include <stdio.h>

int main(void)
{
    int czynnik, min = 0, pos = 0, n = 1;;
    do
    {
        scanf("%d", &czynnik);
        if (czynnik != 0 && czynnik <= min)
        {
            min = czynnik;
            pos = n;
        }
        n++;
    } while (czynnik != 0);
    printf("%d\n%d\n", min, pos);
    return 0;
}