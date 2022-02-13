#include "header.h"

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