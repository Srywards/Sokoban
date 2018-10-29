/*
** aff_tab.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:45:22 2016 Clem Da
** Last update Thu Dec 15 15:45:48 2016 Clem Da
*/

#include "my.h"

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      printw("%s", tab[i]);
      i++;
    }
}
