#include "push_swap.h"

int alsort(t_pile *data, int ac)
{
    int i;

    i = 0;
    while (i != ac - 2)
    {
       // printf("pileA[i] = %d || pileA[i + 1] = %d    \n %d \n", data->pileA[i], data->pileA[i + 1], ac);
        if (data->pileA[i] > data->pileA[i + 1])
            return (0);
        i++;
    }
    printf("Deja trier ");
    return (1);
}

int printall(t_pile *data)
{
    int i;
    int u;

    i = 0;
    u = 0;
    while (data->pileA[i])
    {
        printf("pileA[%d]%d\n", i, data->pileA[i]);
        i++;
    }
    printf("-------------------------------------------------------------------------------\n");
    while (data->pileB[u])
    {
        printf("pileB[%d]%d\n", u, data->pileB[u]);
        u++;
    }
    i = 0;
    while (data->tab[i])
    {
        i++;
    }
    return 1;
}

int tabcpy(t_pile *data)
{
    int i;

    i = 0;
    data->tab = malloc(sizeof(int) * data->max + 2);
    while (data->pileA[i])
    {
        data->tab[i] = data->pileA[i];
        i++;
    }
    return 1;
}

int sortall(t_pile *data)
{
    int i;
    int c;
    int k;

    i = 0;
    c = 0;
    while (i <= data->max)
    {
        c = i + 1;
        while (c <= data->max)
        {
            if (data->tab[i] > data->tab[c])
            {
                k = data->tab[i];
                data->tab[i] = data->tab[c];
                data->tab[c] = k;
            }
            c++;
        }
        i++;
    }



}

void    sort1(t_pile *data)
{

    while(data->pileA[data->max] != data->tab[data->pos])
    {
        ra(data);
    }
    pa(data);
}

void    rsort1(t_pile *data)
{
    while(data->pileA[data->max] != data->tab[data->pos])
    {
        rra(data);
    }
    pa(data);
}


int localisation(t_pile *data)
{
    int i;
    int c;

    i = 0;
    c = 0;
    
    while (data->pileA[i] != data->tab[data->pos])
        i++;
    if (i <= data->max)
        sort1(data);
    else
        rsort1(data);
    data->pos = data->pos + 1;
    
}