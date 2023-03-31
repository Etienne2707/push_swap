#include "push_swap.h"

int alsort(t_pile *data, int ac)
{
    int i;

    i = 0;
    while (i != ac - 2)
    {
       // printf("tab[i] = %d || tab[i + 1] = %d    \n %d \n", data->tab[i], data->tab[i + 1], ac);
        if (data->tab[i] > data->tab[i + 1])
            return (0);
        i++;
    }
    printf("Deja trier ");
    return (1);
}