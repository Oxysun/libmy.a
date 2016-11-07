/*
** my_strncat.c for my_strncat in /home/saumon/sommer_j/my_strncat
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 17:09:56 2016 SOMMER Julien
** Last update Fri Oct 28 15:01:41 2016 SOMMER Julien
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i_dest;
  int	i_src;

  i_dest = 0;
  i_src = 0;
  while (dest[i_dest] != '\0')
    i_dest++;
  while (src[i_src] != '\0' && i_src < n)
    {
      dest[i_dest] = src[i_src];
      i_dest++;
      i_src++;
    }
  dest[i_dest] = '\0';
  return (dest);
}
