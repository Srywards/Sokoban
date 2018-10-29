/*
** my_strcat.c for my_strcat in /home/da-pur_c/delivery/CPool_Day07
** 
** Made by Clément Da-Purificacao
** Login   <da-pur_c@epitech.net>
** 
** Started on  Tue Oct 11 14:00:38 2016 Clément Da-Purificacao
** Last update Wed Oct 12 09:02:22 2016 Clément Da-Purificacao
*/

int	my_strlan2(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	len;

  len = my_strlan2(dest);
  i = 0;
  while (src[i])
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}
