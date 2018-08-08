/*
** my_ls.c for my_ls in /home/jeremy.elkaim/PSU_2016_my_ls
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Mon Nov 21 14:00:33 2016 jeremy elkaim
** Last update Sun Dec  4 15:55:31 2016 jeremy elkaim
*/

int	str(char **av)
{
  int	i;
  char	*stri;

  i = 1;
  if (av[i])
    {
      if (av[i][0] == '-')
	{
	  my_putchar('\n');
	}
	if (av[i][1] != '\0')
	  {
	    stri = av[i];
	    ls(av);
	  }
    }
  return (0);
}

int	main(int ac, char **av)
{
  str(av);
  return (0);
}
