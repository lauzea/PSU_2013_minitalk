/*
** main.c for  in /home/genesis/rendu/PSU_2013_minitalk
**
** Made by DerpGenesis
** Login   <genesis@epitech.net>
**
** Started on  Mon Mar 10 12:12:59 2014 DerpGenesis
** Last update Sun Mar 23 23:35:13 2014 lauze_a
*/

#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include "../minitalk.h"

int	main(int ac, char **av)
{
  int   pid;
  int	i;
  int	*tab;
  char	*str;

  if (ac == 3)
    {
      pid = my_get_nbr(av[1]);
      str = av[2];
      tab = malloc(8 * sizeof(int));
      i = 0;
      while (str[i] != '\0')
	{
	  tab = convert_str(str[i]);
	  if (tab[i] == 1)
	    {
	      kill(pid, SIGUSR1);
	      my_putstr("1");
	      usleep(10000);
	    }
	  else if (tab[i] == 0)
	    {
	      kill(pid, SIGUSR2);
	      my_putstr("0");
	      usleep(10000);
	    }
	  i++;
	}
    }
  else
    my_putstr("Il manque un/des argument(s).\n");
  return (0);
}
