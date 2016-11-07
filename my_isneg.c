/*
** my_isneg.c for my_isneg in /home/saumon/archives/FDI-DEVC/Jour01/my_isneg
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Mon Oct 24 13:16:35 2016 SOMMER Julien
** Last update Fri Oct 28 15:09:09 2016 SOMMER Julien
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
  int	resultat;

  resultat = '\0';
  if (n < 0)
    resultat = 0;
  else
    resultat = 1;
  return (resultat);
}
