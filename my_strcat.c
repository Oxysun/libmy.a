/*
** my_strcat.c for my_strcat in /home/saumon/sommer_j/my_strcat
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 16:05:46 2016 SOMMER Julien
** Last update Fri Oct 28 15:00:08 2016 SOMMER Julien
*/

char	*my_strcat(char *dest, char *src)
{
  int	i_dest;
  int	i_src;
  
  i_dest = 0;
  i_src = 0;
  while (dest[i_dest] != '\0')
    i_dest++;
  while (src[i_src] != '\0')
    {
      dest[i_dest] = src[i_src];
      i_dest++;
      i_src++;
    }
  i_dest++;
  dest[i_dest] = '\0';
  return (dest);
}
