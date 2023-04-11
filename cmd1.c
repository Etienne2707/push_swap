#include "push_swap.h"

int sa(t_pile *data)
{
    int c;

    printf("data max : %d data max - 1 : %d \n", data->pileA[data->max], data->pileA[data->max - 1]);
    c = data->pileA[data->max];
    data->pileA[data->max] = data->pileA[data->max - 1];
    data->pileA[data->max - 1] = c;
    printf("data max : %d data max - 1 : %d \n", data->pileA[data->max], data->pileA[data->max - 1]);
    write(1, "sa\n", 3);
}


int sb(t_pile *data)
{
    int c;

    printf("data max : %d data max - 1 : %d \n", data->pileB[data->max], data->pileB[data->max - 1]);
    c = data->pileB[data->max];
    data->pileB[data->max] = data->pileA[data->max - 1];
    data->pileB[data->max - 1] = c;
    printf("data max : %d data max - 1 : %d \n", data->pileB[data->max], data->pileB[data->max - 1]);
    write(1, "sb\n", 3);
}

int ra(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->pileA[0];
    data->pileA[0] = data->pileA[data->max];
    i = 1;
    while (i <= data->max)
    {
        k = data->pileA[i];
        data->pileA[i] = c;
        c = k;
        i++;
    }
    i = 0;
    write(1, "ra\n", 3);
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
    write(1, "rb\n", 3);
}

int rra(t_pile *data)
{
    int i;
    int c;
    int k;

    c = data->pileA[data->max];
    data->pileA[data->max] = data->pileA[0];
    i = data->max - 1;
   // printf("%d    %d", data->pileA[data->max], data->pileA[0]);
    while (i >= 0)
    {
        k = data->pileA[i];
        data->pileA[i] = c;
        c = k;
        i--;
    }
    i = 0;
    write(1, "rra\n", 4);
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
    write(1, "rrb\n", 4);

}

int pa(t_pile *data)
{

    int c;

    c = data->pileA[data->max];
    data->pileB[data->maxB] = c;
    data->pileA[data->max] = 0;
    if (data->max != 0)
        data->max -= 1;
    data->maxB += 1;
    write(1, "pa\n", 3);

}

int pb(t_pile *data)
{
    int c ;

    c = data->pileB[data->maxB - 1];
    data->pileA[data->max] = c;
    data->pileB[data->maxB - 1];
    if (data->maxB != 0)
        data->maxB -= 1;
    data->max += 1;
    write(1, "pb\n", 3);
}