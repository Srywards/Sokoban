/*
** parsing.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Fri Dec 16 05:49:37 2016 Clem Da
** Last update Fri Dec 16 06:01:21 2016 Clem Da
*/

#include "my.h"

char	**key_up(char **tab, t_oui *oui)
{
  clear();
  refresh();
  pos_p(tab, oui);
  tab = haut(tab, oui);
  tab = boite1(tab, oui);
  aff_tab(tab);
}

char	**key_down(char **tab, t_oui *oui)
{
  clear();
  refresh();
  pos_p(tab, oui);
  tab = bas(tab, oui);
  tab = boite2(tab, oui);
  aff_tab(tab);
}

char	**key_left(char **tab, t_oui *oui)
{
  clear();
  refresh();
  pos_p(tab, oui);
  tab = gauche(tab, oui);
  tab = boite3(tab, oui);
  aff_tab(tab);
}

char	**key_right(char **tab, t_oui *oui)
{
  clear();
  refresh();
  pos_p(tab, oui);
  tab = droite(tab, oui);
  tab = boite4(tab, oui);
  aff_tab(tab);
}

char	**recursif(char **tab, t_oui *oui, int ac, char **av)
{
  clear();
  refresh();
  main(ac, av);
}
