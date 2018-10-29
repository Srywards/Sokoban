/*
** my_popup.c for  in /home/da-pur_c/delivery/Bootsrap/PSU_2016_my_popup
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Dec  6 14:40:03 2016 Clem Da
** Last update Fri Dec 16 06:05:55 2016 Clem Da
*/

#include "my.h"

void	ouioui(int key, char **tab, int ac, char **av)
{
  t_oui	*oui;

  oui = malloc(sizeof(t_oui));
  while (key != 'e')
    {
      key = getch();
      if (key == KEY_UP)
	key_up(tab, oui);
      if (key == KEY_DOWN)
	key_down(tab, oui);
      if (key == KEY_LEFT)
	key_left(tab, oui);
      if (key == KEY_RIGHT)
	key_right(tab, oui);
      if (key == ' ')
	recursif(tab, oui, ac, av);
      if (pos_o(tab) == 1)
	alone();
    }
  endwin();
}

int	main(int ac, char **av)
{
  char	*str;
  char	**tab;
  int	i;
  int	key;

  if (ac != 2 || ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
    my_error();
  tab = tab_char(my_read(ac, av));
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
  curs_set(0);
  aff_tab(tab);
  ouioui(key, tab, ac, av);
  return (0);
}
