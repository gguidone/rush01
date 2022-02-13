/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguidone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:13:59 by gguidone          #+#    #+#             */
/*   Updated: 2022/02/13 11:47:18 by gguidone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void put_four_row(char **mat, int lato)
{
	int	i;

	i = 1;
	while (i + 1 <  lato)
	{
		if (mat[i][0] == 49)
			mat[i][1] = 52;
		if (mat[i][lato - 1] == 49)
			mat[i][lato - 2] = 52;
		if (mat[0][i] == 49)
			mat[1][i] = 52;
		if (mat[lato - 1][i] == 49)
			mat[lato - 2][i] = 52;
	   i++;
	}	   
}

void riempi_con_scala(char **mat, int i, int j, int lato, char num)
{
			while (j + 1 < lato)
			{
				mat[i][j] = num;
				num++;
				j++;
				if (num == 53)
					num = 49;
			}
}

void put_one_row(char **mat, int lato)
{
	int	i;
	int	j;
	char num;

	num = 49;
	j = 1;
	i = 1;
	while (i + 1 <  lato)
	{
		if (mat[i][0] == 52)
			riempi_con_scala(mat, i, j, 6, num);
		if (mat[i][lato - 1] == 52)
			riempi_con_scala(mat, i, j, 6, num);
		if (mat[0][i] == 52)
			riempi_con_scala(mat, i, j, 6, num);
		if (mat[lato - 1][i] == 52)
			riempi_con_scala(mat, i, j, 6, num);
		i++;
	}	   
}

void put_four_col(char **mat, int lato)
{
	int	i;

	i = 1;
	while (i + 1 <  lato)
	{
		if (mat[0][i] == 49)
			mat[1][i] = 52;
		if (mat[lato - 1][i] == 49)
			mat[lato - 2][i] = 52;
		if (mat[i][0] == 49)
			mat[i][1] = 52;
		if (mat[i][lato - 1] == 49)
			mat[i][lato - 2] = 52;
	   i++;
	}	   
}

void put_four_middle(char **mat, int lato)
{
	int i;

	i = 1;
	while (i + 1 < lato)
	{
		if ((mat[0][i] == 50 && mat[lato - 1][i] == 51) || (mat[0][i] == 51 && mat[lato - 1][i] == 50))
		{
			if (mat[0][i] == 50)
				mat[2][i] = 52;
			else if (mat[0][i] == 51)
				mat[3][i] = 52;
		}
		if ((mat[i][0] == 50 && mat[i][lato - 1] == 51) || (mat[i][0] == 51 && mat[i][lato - 1] == 50))
		{
			if (mat[i][0] == 50)
				mat[i][2] = 52;
			else if (mat[i][0] == 51)
				mat[i][3] = 52;
		}		
		i++;
	}
}

void put_one_col(char **mat, int lato)
{
	int	i;
	int	j;
	char num;

	num = 49;
	j = 1;
	i = 1;
	while (i + 1 <  lato)
	{
		if (mat[0][i] == 52)
			while (j + 1 < lato)
			{
				mat[j][i] = num;
				num++;
				j++;
				if (num == 53)
					num = 49;
			}
		if (mat[lato - 1][i] == 52)
			while (j + 1 < lato)
			{
				mat[j][i] = num;
				num++;
				j++;
				if (num == 53)
					num = 49;
			}	
		if (mat[i][0] == 52)
			while (j + 1 < lato)
			{
				mat[j][i] = num;
				num++;
				j++;
				if (num == 53)
					num = 49;
			}	
		if (mat[i][lato - 1] == 52)
			while (j + 1 < lato)
			{
				mat[j][i] = num;
				num++;
				j++;
				if (num == 53)
					num = 49;
			}   	
		i++;
	}	   
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

void put_tre(char **mat, int lato)
{
	int	i;

	i = 1;
	while (i + 1 < lato)
	{
		if (mat[0][i] == 49  && mat[5][i] == 50)
		   mat[4][i] = 51;
		if (mat[i][0] == 49 && mat[i][5] == 50)
			mat[i][4] = 51;	
		i++;
	}
}

int	check_num_are_diff_riga(char ** mat, int lato)
{
	int	i;
	int j;
	int z;

	j = 1;
	i = 1;
	while ( j + 2 < lato)
{
	i = 1;
	while ( i + 2 < lato)
	{
		z = i + 1;
		while ( z + 1 < lato)
		{
				if ((mat[j][i] == mat[j][z]) && mat[j][i] != 48)
					return(0);
				z++;
		}
		i++;
	}
	j++;
}
	return(1);
}

int	check_num_are_diff_colonna(char ** mat, int lato)
{
	int	i;
	int j;
	int z;

	j = 1;
	i = 1;
	while ( j + 1 < lato)
{
	i = 1;
	while ( i + 1 < lato)
	{
		z = i + 1;
		while ( z + 1 < lato)
		{
				if (mat[i][j] == mat[z][j] && mat[i][j] != 48)
					return(0);
					z++;
		}
		i++;
	}
	j++;
}
	return(1);
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

/*void try_perm(char **mat, char **temp)
{
	char c[6][4] = {"123", "132", "213", "231", "312", "321"};
	int	i;
	int j;
}*/

int	main(int argc, char **argv)
{
	int	flag;
	if (argc != 2)
		stampa_stringa("Troppi argomenti in input");
	else 
	{
		flag = check_input(argv[1], 4);
		if (flag == 1)
		{
			char str[17]; 
			get_string(argv[1], str);
			char **mat = NULL;
			char **temp = NULL;
		 mat = crea_matrice(mat, 6);
			temp = crea_matrice(temp, 4);
			riempi_matrice(mat, 6);
			put_string(mat, str);
			if (check_error(mat, 6) == 1 && check_error_2(mat, 6) == 1 && check_error_3(mat, 6) == 1)
			{	
				put_one_row(mat, 6);
				put_one_col(mat, 6);
				put_four_row(mat, 6);
				put_four_col(mat, 6);
				put_four_middle(mat, 6);
				put_tre(mat, 6);
				stampa_matrice(mat, 6);
				//copy_four(mat, temp, 6);
				//stampa_matrice(temp, 4);				
			}	
			else
				stampa_stringa("Error!");
		}
	}	
	return (0);
}
