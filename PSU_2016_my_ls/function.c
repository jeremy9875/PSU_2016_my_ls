/*
** fonction.c for fonction in /home/jeremy.elkaim/PSU_2016_my_ls
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Nov 29 11:57:42 2016 jeremy elkaim
** Last update Sun Dec  4 15:45:53 2016 jeremy elkaim
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (i != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}

int	my_putnbr(int nb)
{
  int	div;

  if (nb < 0);
  {
    nb *= -1;
    my_putchar('-');
  }
  div = 1;
  while ((nb / div) > 9)
    {
      div *= 10;
    }
  while (div >= 1)
    {
      my_putchar(nb / div % 10 + '0');
      div /=10;
    }
  return (0);
}
