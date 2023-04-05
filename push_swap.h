#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>


typedef	struct s_pile
{
	int *tab;
	int	data;
	int	pos;
	int max;
	int *pileA;
	int *pileB;
	int maxB;
}   t_pile;

int	ft_atoi(const char *str);
int main(int ac, char **av);
int check_double(t_pile *data, int k);
int alsort(t_pile *data, int ac);
int sa(t_pile *data);
int ra(t_pile *data);
int rra(t_pile *data);
int rb(t_pile *data);
int sb(t_pile *data);	
int rrb(t_pile *data);
int pa(t_pile *data);
int pb(t_pile *data);
int printall(t_pile *data);


#endif