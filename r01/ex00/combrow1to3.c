/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassyao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:25:52 by ohassyao          #+#    #+#             */
/*   Updated: 2022/02/13 18:25:52 by ohassyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void combrow1(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '1';
 col[1] = '2';
 col[2] = '3';
 create_matrix_row(str, col, row);
}

void combrow2(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '1';
 col[1] = '3';
 col[2] = '2';
 create_matrix_row(str, col, row);
}

void combrow3(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '2';
 col[1] = '1';
 col[2] = '3';
 create_matrix_row(str, col, row);
}



