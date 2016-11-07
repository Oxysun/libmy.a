/*
** my_strlen.c for my_strlen in /home/saumon/sommer_j/my_strlen
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:28:10 2016 SOMMER Julien
** Last update Thu Oct 20 11:50:32 2016 SOMMER Julien
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i++;
    }
  return (i);
}
