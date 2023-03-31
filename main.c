#include "push_swap.h"

int check_double(t_pile *data, int k)
{
    int i;
    int c;

    i = 0;
    while (i != k - 2)
    {
        c = i + 1;
        while (c != k)
        {
            if (data->tab[i] == data->tab[c])
            {
            //    printf("Error");
                return (0);
            }
            c++;
        }
        i++;
    }
    return (1);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;
	char *str2;

	i = 0;
	sign = 1;
	result = 0;
	str2 = (char *)str;
	while ((str2[i] >= 9 && str2[i] <= 13 )|| str2[i] == 32)
		i++;
	if (str2[i] == '+')
		i++;
	else if (str2[i] == '-')
	{
		i++;
		sign = sign * - 1;
	}
	while (str2[i] >= '0' && str2[i] <= '9' && str2[i] != '\0')
	{
		result *= 10;
		result = result + str2[i] - '0';
		i++;
	}
	return (result * sign);
}

int main(int ac, char **av)
{
    int i;
    int y;
    int c;

    i = 1;
    c = 0;
   
    t_pile data;
    data.tab = malloc(sizeof(int) * ac); 
    data.max = ac - 2;
    if (ac <= 1)
        return(0);
    while (av[i] != 0)
    {
        y = 0;
        if (av[i][0] == 0)
            return 0;
        while (av[i][y] != '\0')
        {           

            if (av[i][y] < '0' || av[i][y] > '9')
            {
                printf("Error");
                return (0);
            }
            y++;        
        }
        data.tab[c] = ft_atoi(av[i]);
        c++;
        i++;
    }
    if (check_double(&data, ac) == 0)
        return (0);
    if (alsort(&data,ac) == 1)
        return(1);
    rra(&data);
}