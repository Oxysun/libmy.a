/*
** my_put_nbr.c for my_put_nbr in /home/saumon/rendutemp/my_put_nbr
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Sat Oct 22 12:49:51 2016 SOMMER Julien
** Last update Tue Oct 25 20:41:59 2016 SOMMER Julien
*/

void	my_putchar(char c);

void	my_put_nbr(int n)
{
  int	neg;

  neg = 0;
  if (n == (-2147483648))
    {
      neg = ((n % 10) * (-1));
      n = n / 10;
    }
  if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  if (n < 10)
    my_putchar(n + 48);
  else
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
  if (neg != 0)
    my_putchar(neg + 48);
}
