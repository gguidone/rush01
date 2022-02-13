#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int riga_sin_des(char **mat, int lato, int riga)
{
 int i;
 int max_rel;
 int cont;

 cont = 0;
 i = 1;
 max_rel = 0;
 while (i + 1 < lato)
 {
  if ((mat[riga][i] - 48) > max_rel)
  {
   max_rel = mat[riga][i] - 48;
   cont++;
  }
  i++;
 }
 if (cont == mat[riga][0] - 48)
  return (1);
 return (0);
}

int riga_des_sin(char **mat, int lato, int riga)
{
 int i;
 int max_rel;
 int cont;

 cont = 0;
 i = lato - 2;
 max_rel = 0;
 while (i > 0)
 {
  if ((mat[riga][i] - 48) > max_rel)
  {
   max_rel = mat[riga][i] - 48;
   cont++;
  }
  i--;
 }
 if (cont == mat[riga][lato - 1] - 48)
  return (1);
 return (0);
}

int col_up_down(char **mat, int lato, int col)
{
 int i;
 int max_rel;
 int cont;

 cont = 0;
 i = 1;
 max_rel = 0;
 while (i + 1 < lato)
 {
  if ((mat[i][col] - 48) > max_rel)
  {
   max_rel = mat[i][col] - 48;
   cont++;
  }
  i++;
 }
 if (cont == mat[0][col] - 48)
  return (1);
 return (0);
}

int col_down_up(char **mat, int lato, int col)
{
 int i;
 int max_rel;
 int cont;

 cont = 0;
 i = lato - 2;
 max_rel = 0;
 while (i > 0)
 {
  if ((mat[i][col] - 48) > max_rel)
  {
   max_rel = mat[i][col] - 48;
   cont++;
  }
  i--;
 }
 if (cont == mat[lato - 1][col] - 48)
  return (1);
 return (0);
}