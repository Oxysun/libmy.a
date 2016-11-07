/*
** my_getnbr.c for my_getnbr in /home/saumon/sommer_j/my_getchar
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Mon Oct 24 11:36:01 2016 SOMMER Julien
** Last update Mon Oct 24 12:42:24 2016 SOMMER Julien
*/

void	my_putchar(char c);

void	my_put_nbr(int nbr);

int	my_getnbr(char *str)
{
  int	i;
  int	str_nbr;
  int	i_less;

  i = 0;
  str_nbr = 0;
  i_less = 0;
  if (str[i] != '-' && str[i] != '+' && (str[i] < '0' || str[i] > '9'))
    str_nbr = 0;
  else
    {
      while (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	      i_less++;
	  i++;
	}
      while (str[i] >= '0' && str[i] <= '9')
	{
	  str_nbr = (str_nbr * 10) + (str[i] - 48);
	  i++;
	}
      if (i_less % 2 == 1)
	str_nbr = str_nbr * (-1);
    }
  return (str_nbr);
}
