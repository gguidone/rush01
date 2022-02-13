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
#include "header.h"

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
