/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/lauze_a/rendu/Piscine_C_J08/ex_04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  9 13:42:24 2014 lauze_a lauze_a
** Last update Fri Oct 10 16:56:05 2014 lauze_a lauze_a
*/

#include <stdlib.h>

char	**split_str(char *str, char **tab)
{
  int	i;
  int	c;
  int	r;

  c = 0;
  r = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 48 && str[i] > 57 || str[i] < 65 && str[i] > 122
	  || str[i] < 96 && str[i] > 91)
	{
	  tab[c][r] = str[i];
	  c++;
	  r++;
	  i++;
	}
      i++;
      printf("%s\n", tab[c][r]);
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	count;
  char	**tab;

  i = 0;
  j = 0;
  count = my_strlen(str);
  if ((tab = malloc(count * 8)) == NULL)
    return (0);
  while (str[i] != '\0')
    {
      if ((tab[j] = malloc(count * 1 + 1)) == NULL)
	return (0);
      j++;
      i++;
    }
  split_str(str, tab);
}

int	main(int ac, char **av)
{
  my_str_to_wordtab(av[1]);
  return (0);
}
