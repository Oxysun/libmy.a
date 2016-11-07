/*
** my_swap.c for my_swap in /home/saumon/sommer_j/my_swap
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Thu Oct 20 13:57:19 2016 SOMMER Julien
** Last update Thu Oct 20 14:56:10 2016 SOMMER Julien
*/

void	my_swap(int *a, int *b)
{
  int	c;
  int	d;

  c = *a;
  d = *b;
  *b = c;
  *a = d;
}
