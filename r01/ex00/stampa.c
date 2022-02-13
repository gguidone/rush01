#include <unistd.h>
#include <stdlib.h>
#include "header.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void stampa_stringa(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *get_string(char *str, char *str2)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			str2[cont / 2] = str[cont];
		}
		cont++;
	}
	str2[(cont + 1) / 2] = '\0';
	return (str2);
}

void put_string(char **mat, char *str)
{
	int	conts;
	int contm;

	conts = 0;
	contm = 1;
	while (str[conts] != '\0')
	{
		if (contm == 5)
			contm = 1;
		if (conts < 4)
			mat [0][contm] = str[conts];
		else if (conts < 8)
			mat [5][contm] = str[conts];
		else if (conts < 12)
			mat [contm][0] = str[conts];
		else 
			mat [contm][5] = str[conts];
		conts++;
		contm++;
	}
}