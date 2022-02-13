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

void combcol4(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '2';
 col[1] = '3';
 col[2] = '1';
 create_matrix_col(str, col, row);
}

void combcol5(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '3';
 col[1] = '1';
 col[2] = '2';
 create_matrix_col(str, col, row);
}

void combcol6(char **str, char row)
{
 int counter;
 char col[4];

 counter = 0;
 col[0] = '3';
 col[1] = '2';
 col[2] = '1';
 create_matrix_col(str, col, row);
}