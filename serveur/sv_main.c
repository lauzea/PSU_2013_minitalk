/*
** main.c for main_serveur in /home/lauze_a/rendu/PSU_2013_minitalk/server
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Wed Mar  5 13:55:24 2014 lauze_a
** Last update Sun Mar 23 23:37:22 2014 lauze_a
*/

#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "../minitalk.h"
x
void	sig1()
{
  my_putchar('1');
}

void	sig2()
{
  my_putchar('0');
}

int	wait_signal()
{
  signal(SIGUSR1, *sig1);
  signal(SIGUSR2, *sig2);
}

int	aff_pid()
{
  int	pid;

  pid = getpid();
  my_putstr("Pid Serveur= ");
  my_put_nbr(pid);
  my_putchar('\n');
}

int	main()
{
  aff_pid();
  wait_signal();
  while(-1);
  return (0);
}
