/*
** key.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:42:48 2016 Clem Da
** Last update Thu Dec 15 15:43:39 2016 Clem Da
*/

#include "my.h"

char	**haut(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x - 1][oui->y] != '#' && tab1[oui->x - 1][oui->y] != 'X')
    {
      tab1[oui->x][oui->y] = ' ';
      tab1[oui->x - 1][oui->y] = 'P';
    }
  return (tab1);
}

char	**bas(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x + 1][oui->y] != '#' && tab1[oui->x + 1][oui->y] != 'X')
    {
      tab1[oui->x][oui->y] = ' ';
      tab1[oui->x + 1][oui->y] = 'P';
    }
  return (tab1);
}

char	**gauche(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x][oui->y - 1] != '#' && tab1[oui->x][oui->y - 1] != 'X')
    {
      tab1[oui->x][oui->y] = ' ';
      tab1[oui->x][oui->y - 1] = 'P';
    }
  return (tab1);
}

char	**droite(char **tab, t_oui *oui)
{
  char**tab1;

  tab1 = tab;
  if (tab1[oui->x][oui->y + 1] != '#' && tab1[oui->x][oui->y + 1] != 'X')
    {
      tab1[oui->x][oui->y] = ' ';
      tab1[oui->x][oui->y + 1] = 'P';
    }
  return (tab1);
}
