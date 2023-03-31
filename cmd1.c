#include "push_swap.h"

int sa(t_pile *data)
{
    int i;
    int c;

    i = 0;
    printf("data max : %d data max - 1 : %d \n", data->tab[data->max], data->tab[data->max - 1]);
    c = data->tab[data->max];
    data->tab[data->max] = data->tab[data->max - 1];
    data->tab[data->max - 1] = c;
    printf("data max : %d data max - 1 : %d \n", data->tab[data->max], data->tab[data->max - 1]);
}

int sb(t_pile *data)
{
    int i;
    int c;

    i = 0;
    printf("data max : %d data max - 1 : %d \n", data->pileB[data->max], data->pileB[data->max - 1]);
    c = data->pileB[data->max];
    data->pileB[data->max] = data->tab[data->max - 1];
    data->pileB[data->max - 1] = c;
    printf("data max : %d data max - 1 : %d \n", data->pileB[data->max], data->pileB[data->max - 1]);
}

int ra(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->tab[0];
    data->tab[0] = data->tab[data->max];
    i = 1;
    while (i <= data->max)
    {
        k = data->tab[i];
        data->tab[i] = c;
        c = k;
        i++;
    }
    i = 0;
}


int rra(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->tab[data->max];
    data->tab[data->max] = data->tab[0];
    i = data->max - 1;
   // printf("%d    %d", data->tab[data->max], data->tab[0]);
    while (i >= 0)
    {
        k = data->tab[i];
        data->tab[i] = c;
        c = k;
        i--;
    }
    i = 0;
    while (i <= data->max)
    {
        printf("%d\n", data->tab[i]);
        i++;
    }
}