/*
** my_error.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Thu Dec 15 15:39:16 2016 Clem Da
** Last update Fri Dec 16 06:09:02 2016 Clem Da
*/

#include "my.h"

void	my_error()
{
  write(2, "USAGE\n\t./my_sokoban map\n\nDESCRIPTION\n\tmap\t\
  file representing the warehouse map, containing '#' for walls,\
  \n\t\t  'P' for the player, 'X' for boxes and 'O' for storage locations.\n",
  my_strlen("USAGE\n\t./my_sokoban map\n\nDESCRIPTION\n\tmap\t\
  file representing the warehouse map, containing '#' for walls,\
  \n\t\t  'P' for the player, 'X' for boxes and 'O' for storage locations.\n"));
  exit(84);
}
