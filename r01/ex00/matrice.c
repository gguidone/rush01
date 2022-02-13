#include "header.h"
#include <stdlib.h>

char  **crea_matrice(char **mat, int lato)
{
	mat = (char **) malloc(lato * sizeof(char *));
	int	i;

	i = 0;
	while (i < lato)
	{
		mat[i] = (char *) malloc(lato);
		i++;
	}
	return (mat);
}

void riempi_matrice(char **mat, int lato)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (j < lato)
	{
		i = 0;
		while (i < lato)
		{
			mat[j][i] = 48;
			i++;
		}
		j++;
	}
}

void stampa_matrice(char **mat, int lato)
{
	int	i;
	int j;

	j = 0;
	while (j < lato)
	{
		i = 0;
		while ( i < lato)
		{
			ft_putchar(mat[j][i]);
			if (i != 5)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}		
}

void copy_four(char **mat, char **temp, int lato)
{
	int	i;
	int j;	

	j = 1;
	i = 1;
	while ( j + 1 < lato)
	{
		i = 1;
		while ( i + 1 < lato)
		{
			if (mat[j][i] == 52)
				temp[j - 1][i - 1] = 52;	
			else 
				temp[j - 1][i - 1] = 48;				
			i++;
		}
		j++;
	}
}
