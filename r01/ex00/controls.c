#include "header.h"

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

int find_last_four_riga(char **mat, int lato)
{
 int j;
 int i;
 int flag;

 j = 1;
 while (j + 1 < lato)
{
 i = 1;
 flag = 0;
 while (i + 1 < lato && !flag)
 {
  if (mat[j][i] == 52)
   flag = 1;
  i++;
 }
 if (!flag)
 {
  return (j);
 } 
 j++;
}
 return (0);
}

int find_last_four_colonna(char ** mat, int lato)
{
 int j;
 int i;
 int flag;

 i = 1;
 while (i + 1 < lato)
{
 j = 1;
 flag = 0;
 while (j + 1 < lato && !flag)
 {
  if (mat[j][i] == 52)
   flag = 1;
  j++;
 }
 if (!flag)
 {
  return (i);
 } 
 i++;
}
 return (0);
} 