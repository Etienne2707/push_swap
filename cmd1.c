#include "push_swap.h"

int sa(t_pile *data)
{
    int c;

    printf("data max : %d data max - 1 : %d \n", data->tab[data->max], data->tab[data->max - 1]);
    c = data->tab[data->max];
    data->tab[data->max] = data->tab[data->max - 1];
    data->tab[data->max - 1] = c;
    printf("data max : %d data max - 1 : %d \n", data->tab[data->max], data->tab[data->max - 1]);
}

int sb(t_pile *data)
{
    int c;

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

int rb(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->pileB[0];
    data->pileB[0] = data->pileB[data->maxB - 1];
    i = 1;
    printf("le max est : %d\n", data->maxB);
    while (i < data->maxB )
    {
        k = data->pileB[i];
        data->pileB[i] = c;
        c = k;
        i++;
    }
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
}

int rrb(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->pileB[data->maxB - 1];
    data->pileB[data->maxB - 1] = data->pileB[0];
    i = data->maxB - 1;
    // printf("%d    %d", data->pileB[data->maxB], data->pileB[0]);
    while (i >= 0)
    {
        k = data->pileB[i];
        data->pileB[i] = c;
        c = k;
        i--;
    }
}

int pa(t_pile *data)
{

    int c;

    c = data->tab[data->max];
    data->pileB[data->maxB] = c;
    data->tab[data->max] = 0;
    if (data->max != 0)
        data->max -= 1;
    data->maxB += 1;
}

int pb(t_pile *data)
{
    int c ;

    c = data->pileB[data->maxB - 1];
    data->tab[data->max] = c;
    data->pileB[data->maxB - 1];
    if (data->maxB != 0)
        data->maxB -= 1;
    data->max += 1;
}