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