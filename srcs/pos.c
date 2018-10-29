/*
** pos.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:45:59 2016 Clem Da
** Last update Thu Dec 15 15:46:42 2016 Clem Da
*/

#include "my.h"

int	pos_p(char **tab, t_oui *oui)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j] != '\n')
	{
	  if (tab[i][j] == 'P')
	    {
	      oui->x = i;
	      oui->y = j;
	      j++;
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int	pos_o(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j] != '\n')
	{
	  if (tab[i][j] == 'O')
	    {
	      return (0);
	      j++;
	    }
	  j++;
	}
      i++;
    }
  return (1);
}
