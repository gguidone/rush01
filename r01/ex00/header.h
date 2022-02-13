#ifndef HEADER_H
# define HEADER_H

void ft_putchar(char c);
void stampa_stringa(char *str);
void put_string(char **mat, char *str);
char *get_string(char *str, char *str2);
int	 check_input(char *str, int lato);
char  **crea_matrice(char **mat, int lato);
void riempi_matrice(char **mat, int lato);
void stampa_matrice(char **mat, int lato);
int check_error(char **mat, int lato);
int check_error_3(char **mat, int lato);
void put_four_row(char **mat, int lato);
void riempi_con_scala(char **mat, int i, int j, int lato, char num);
void put_one_row(char **mat, int lato);
void put_four_col(char **mat, int lato);
void put_four_middle(char **mat, int lato);
void put_one_col(char **mat, int lato);
int check_error_2(char **mat, int lato);
void put_tre(char **mat, int lato);
int	check_num_are_diff_riga(char ** mat, int lato);
int	check_num_are_diff_colonna(char ** mat, int lato);
void copy_four(char **mat, char **temp, int lato);
void create_matrix_row(char **str, char *col, int row);
void create_matrix_col(char **str, char *row, int col);
void rowcombn(char **str, int comb_number, int row);
void colcombn(char **str, int comb_number, int col);
void combcol1(char **str, char row);
void combcol2(char **str, char row);
void combcol3(char **str, char row);
void combcol4(char **str, char row);
void combcol5(char **str, char row);
void combcol6(char **str, char row);
void combrow1(char **str, char row);
void combrow2(char **str, char row);
void combrow3(char **str, char row);
void combrow4(char **str, char row);
void combrow5(char **str, char row);
void combrow6(char **str, char row);

#endif