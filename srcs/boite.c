/*
** boite.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:41:24 2016 Clem Da
** Last update Thu Dec 15 16:01:27 2016 Clem Da
*/

#include "my.h"

char	**boite1(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x - 1][oui->y] != '#')
    {
      if (tab1[oui->x - 1][oui->y] == 'X' && tab1[oui->x - 2][oui->y] != '#' &&
	  tab1[oui->x - 2][oui->y] != 'X')
	{
	  tab1[oui->x][oui->y] = ' ';
	  tab1[oui->x - 1][oui->y] = 'P';
	  tab1[oui->x - 2][oui->y] = 'X';
	}
    }
  return (tab1);
}

char	**boite2(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x + 1][oui->y] != '#')
    {
      if (tab1[oui->x + 1][oui->y] == 'X' && tab1[oui->x + 2][oui->y] != '#' &&
	  tab1[oui->x + 2][oui->y] != 'X')
	{
	  tab1[oui->x][oui->y] = ' ';
	  tab1[oui->x + 1][oui->y] = 'P';
	  tab1[oui->x + 2][oui->y] = 'X';
	}
    }
  return (tab1);
}

char	**boite3(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x][oui->y - 1] != '#')
    {
      if (tab1[oui->x][oui->y - 1] == 'X' && tab1[oui->x][oui->y - 2] != '#' &&
	  tab1[oui->x][oui->y - 2] != 'X')
	{
	  tab1[oui->x][oui->y] = ' ';
	  tab1[oui->x][oui->y - 1] = 'P';
	  tab1[oui->x][oui->y - 2] = 'X';
	}
    }
  return (tab1);
}

char	**boite4(char **tab, t_oui *oui)
{
  char	**tab1;

  tab1 = tab;
  if (tab1[oui->x][oui->y + 1] != '#')
    {
      if (tab1[oui->x][oui->y + 1] == 'X' && tab1[oui->x][oui->y + 2] != '#' &&
	  tab1[oui->x][oui->y + 2] != 'X')
	{
	  tab1[oui->x][oui->y] = ' ';
	  tab1[oui->x][oui->y + 1] = 'P';
	  tab1[oui->x][oui->y + 2] = 'X';
	}
    }
  return (tab1);
}
