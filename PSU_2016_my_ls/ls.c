/*
** ls.c for ls in /home/jeremy.elkaim/PSU_2016_my_ls
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Nov 30 10:32:31 2016 jeremy elkaim
** Last update Sun Dec  4 15:57:32 2016 jeremy elkaim
*/
#include <dirent.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

int	directory(char *str)
{
/*
  DIR	*dirp;
  struct dirent	*entry;
  {
    if ((dirp = opendir ('/')) == NULL)
      {
	my_putstr('opendir problem\n');
	return (1);
      }
    while ((entry = readdir(dirp)) != NULL)
      {
	my_putstr(entry->d_name);
      }
    closedir(dirp);
*/
    return (0);
//  }
}

int	ls(char **av)
{
  int	i;

  i = 1;
  if (av[i][2] == 'l')
    {
      my_putstr('test');
    }
   return (0);
}
