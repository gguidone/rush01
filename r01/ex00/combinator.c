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

void create_matrix_row(char **str, char *col, int row)
{
 int counter;
 int insert;

 counter = 1;
 insert = 0;
 while ((str[row][1] == '0')
  || (str[row][2] == '0')
  || (str[row][3] == '0')
  || (str[row][4] == '0'))
  {
   while (counter < 5)
   {
    if (str[row][counter] != '4')
    {
     str[row][counter] = col[insert];
     insert++;
     counter++;
    }
    else
     counter++;
   }
  }
}

void create_matrix_col(char **str, char *row, int col)
{
 int counter;
 int insert;

 counter = 1;
 insert = 0;
 while ((str[1][col] == '0')
  || (str[2][col] == '0')
  || (str[3][col] == '0')
  || (str[4][col] == '0'))
  {
   while (counter < 5)
   {
    if (str[counter][col] != '4')
    {
     str[counter][col] = row[insert];
     insert++;
     counter++;
    }
    else
     counter++;
   }
  }
}

void rowcombn(char **str, int comb_number, int row)
{
 if(comb_number == 1)
 {
  combrow1(str, row);
 }
 else if (comb_number == 2)
 {
  combrow2(str, row);
 }
 else if (comb_number == 3)
 {
  combrow3(str, row);
 }
 else if (comb_number == 4)
 {
  combrow4(str, row);
 }
 else if (comb_number == 5)
 {
  combrow5(str, row);
 }
 else
 {
  combrow6(str, row);
 }
}

void colcombn(char **str, int comb_number, int col)
{
 if(comb_number == 1)
 {
  combcol1(str, col);
 }
 else if (comb_number == 2)
 {
  combcol2(str, col);
 }
 else if (comb_number == 3)
 {
  combcol3(str, col);
 }
 else if (comb_number == 4)
 {
  combcol4(str, col);
 }
 else if (comb_number == 5)
 {
  combcol5(str, col);
 }
 else
 {
  combcol6(str, col);
 }
}