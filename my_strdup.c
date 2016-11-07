/*
** my_strdup.c for my_strdup in /home/saumon/Jour07/my_strdup
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Mon Oct 24 18:37:53 2016 SOMMER Julien
** Last update Mon Oct 24 19:30:19 2016 SOMMER Julien
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  int	i;
  char	*strdup_char;

  i = my_strlen(str);
  strdup_char = malloc(i * (sizeof(*strdup_char) + 1));
  my_strcpy(strdup_char, str);
  return (strdup_char);
}
