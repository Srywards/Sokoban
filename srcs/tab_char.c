/*
** tab_char.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:37:29 2016 Clem Da
** Last update Thu Dec 15 15:38:59 2016 Clem Da
*/

#include "my.h"

char	**tab_char(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  tab = malloc(sizeof(char **) * my_strlen(str));
  while (str[k])
    {
      j = 0;
      tab[i] = malloc(sizeof(char *) * my_strlen(str));
      while (str[k] != '\n')
	{
	  tab[i][j] = str[k];
	  j++;
	  k++;
	}
      tab[i][j] = str[k];
      i++;
      k++;
    }
  return (tab);
}
