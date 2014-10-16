/*
** my_putstr.c for my_putstr in /home/lauze_a/rendu/PSU_2013_minitalk
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Mar  5 14:20:45 2014 lauze_a
** Last update Wed Mar  5 15:26:44 2014 lauze_a
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write (1, &c, 1);
}

int     my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (i);
}
