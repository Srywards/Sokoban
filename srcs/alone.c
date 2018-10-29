/*
** alone.c for  in /home/da-pur_c/delivery/PSU/PSU_2016_my_sokoban/srcs
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Fri Dec 16 06:02:48 2016 Clem Da
** Last update Fri Dec 16 06:08:18 2016 Clem Da
*/

#include "my.h"

void	alone()
{
  clear();
  refresh();
  mvprintw(LINES / 2,
	   (COLS-my_strlen("Yon Win ! (press a key to exit)")) / 2,
	   "%s", "You Win ! (press a key to exit)");
  getch();
  endwin();
  exit(1);
}
