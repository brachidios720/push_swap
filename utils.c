#include "push_swap.h"

int     ft_atoi(const char *str)
{
        int     i;
        int     count;
        int     nb;

        i = 0;
        count = 1;
        nb = 0;
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
                || str[i] == '\f' || str[i] == '\r')
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        count++;
                i++;
        }
        while (str[i] >= 48 && str[i] <= 57)
        {
                nb = nb * 10 + (str[i] - 48);
                i++;
        }
        if (count % 2)
                return (nb);
        else
                return (-nb);
}
