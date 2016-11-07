/*
** my_putstr.c for my_putstr in /home/saumon/sommer_j/my_putstr
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:10:35 2016 SOMMER Julien
** Last update Thu Oct 20 11:25:37 2016 SOMMER Julien
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i++;
    }
}
