/*
** my_strcpy.c for my_strcpy in /home/saumon/sommer_j/my_strcpy
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 12:40:33 2016 SOMMER Julien
** Last update Fri Oct 21 13:01:04 2016 SOMMER Julien
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
