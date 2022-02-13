#include "header.h"

int	 check_input(char *str, int lato) 
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0 && (str[cont] < 49 || str[cont] > (lato + 48)))
		{
			stampa_stringa("Errore in input");
			ft_putchar('\n');
			return (0);
		}
		else if (cont % 2 == 1 && str[cont] != ' ')
		{
			stampa_stringa("Errore in input");
			ft_putchar('\n');
			return (0);
		}
		cont++;
	}
	if (cont != 31)
	{
		stampa_stringa("Stringa in input di dimensione sbagliata");
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

int check_error(char **mat, int lato)
{
	int	i;

	i = 1;
	while (i + 1  < lato)
	{
		if (mat[i][0] == mat[i][5] && mat[i][0] != 50)
			return (0);
		if (mat[0][i] == mat[5][i] && mat [0][i] != 50)
			return (0);
		i++;
	}
	return (1);
}

int check_error_2(char **mat, int lato)
{
	if (mat[0][1] == 49 && mat[1][0] != 49)
		return (0);
	if (mat[0][lato - 2] == 49 && mat[1][lato - 1] != 49)
		return (0);
	if (mat[lato - 2][0] == 49 && mat[lato - 1][1] != 49)
		return (0);
	if (mat[lato - 1][lato - 2] == 49 && mat[lato - 2][lato - 1] != 49)
		return (0);
	return (1);
}

int check_error_3(char **mat, int lato)
{
	int	i;

	i = 1;
	while (i + 1  < lato)
	{
		if ((mat[i][0] == 50 && mat[i][5] == 52) || (mat[i][0] == 52 && mat[i][5] == 50))
			return (0);
		if ((mat[i][0] == 51 && mat[i][5] == 52) || (mat[i][0] == 52 && mat[i][5] == 51))
			return (0);
		if ((mat[0][i] == 50 && mat[5][i] == 52) || (mat[0][i] == 52 && mat[5][i] == 50))
			return (0);
		if ((mat[0][i] == 51 && mat[5][i] == 52) || (mat[0][i] == 52 && mat[5][i] == 51))
			return (0);
		i++;
	}
	return (1);
}