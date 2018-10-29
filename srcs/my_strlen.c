/*
** my_strlen.c for  in /home/da-pur_c/delivery/Bootsrap/PSU_2016_my_popup
** 
** Made by Clem Da
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Dec  6 14:41:26 2016 Clem Da
** Last update Tue Dec  6 14:42:02 2016 Clem Da
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
