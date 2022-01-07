#include <stdio.h>

int main()
{
    int tab[100], i = 0, j = 1, k = 0, l, p;
    scanf("%i", &l);
    do
    {
        scanf("%i", &p);
        tab[k] = p;
        k++;
    } while (k < l);
    while (j < l)
    {
        if (tab[i] > tab[j])
        {
            printf("%i %i\n", tab[i], tab[j]);
        }
        i++;
        j++;
    }
    return 0;
}
