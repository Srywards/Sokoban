/*
** my.h for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 08:57:06 2016 Clem Da
** Last update Fri Dec 16 06:04:19 2016 Clem Da
*/

#ifndef MY_H_
# define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>
#include <ncurses.h>
#include <string.h>

typedef struct	s_oui
{
  int	x;
  int	y;
}		t_oui;

int		pos_p(char **tab, t_oui *oui);
int		pos_o(char **tab);
char		**boite1(char **tab, t_oui *oui);
char		**boite2(char **tab, t_oui *oui);
char		**boite3(char **tab, t_oui *oui);
char		**boite4(char **tab, t_oui *oui);
char		**haut(char **tab, t_oui *oui);
char		**bas(char **tab, t_oui *oui);
char		**gauche(char **tab, t_oui *oui);
char		**droite(char **tab, t_oui *oui);
char		**key_up(char **tab, t_oui *oui);
char		**key_down(char **tab, t_oui *oui);
char		**key_left(char **tab, t_oui *oui);
char		**key_right(char **tab, t_oui *oui);
char		**recursif(char **tab, t_oui *oui, int ac, char **av);
void		aff_tab(char **tab);
void		my_error();
void		alone();
char		*my_read(int ac, char **av);
char		**tab_char(char *str);
int		main(int ac, char **av);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
void		my_nbr(int nb);
int		my_put_nbrbase(int nb, char *base);
void		my_binaire(int nb);
void		my_hexamin(int nb);
void		my_hexamaj(int nb);
void		my_octal(int nb);
void		my_ptr(int nb);
void		my_schelou(char *str);
char		*my_strdup(char *src);
void		my_char(int c);
char		*my_strcat(char *dest, char *src);

#endif
