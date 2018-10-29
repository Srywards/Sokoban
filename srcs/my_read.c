/*
** my_read.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:37:01 2016 Clem Da
** Last update Thu Dec 15 15:37:11 2016 Clem Da
*/

#include "my.h"

char	*my_read(int ac, char **av)
{
  char	*buffer;
  int	fd;

  buffer = malloc(sizeof(char *) * 1000);
  fd = open(av[1], O_RDONLY);
  read(fd, buffer, 1000);
  my_strcat(buffer, "\n");
  return (buffer);
}
