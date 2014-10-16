/*
** my_get_nbr.c for my_get_nbr in /home/lauze_a/rendu/PSU_2013_minitalk/client
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Wed Mar  5 14:09:28 2014 lauze_a
** Last update Sat Mar 22 12:52:17 2014 DerpGenesis
*/

#include "../minitalk.h"

int             my_get_nbr(char *str)
{
  int           res;

  if (*str == '-')
    return (-my_get_nbr(str + 1));
  if (*str == '+')
    return (my_get_nbr(str + 1));
  res = 0;
  while (*str)
    {
      res = res * 10;
      res = res + *str - '0';
      str = str + 1;
    }
  return (res);
}
