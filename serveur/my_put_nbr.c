/*
** my_put_nbr.c for my_put_nbr in /home/lauze_a/rendu/PSU_2013_minitalk/server
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Wed Mar  5 14:05:18 2014 lauze_a
** Last update Fri Mar 21 15:58:59 2014 DerpGenesis
*/

#include "../minitalk.h"

void    my_put_nbr(int nb)
{
  int   neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          neg = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
