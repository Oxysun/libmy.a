/*
** my_strncmp.c for my_strncmp in /home/saumon/sommer_j/my_strncmp
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 15:48:43 2016 SOMMER Julien
** Last update Fri Oct 21 16:01:45 2016 SOMMER Julien
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	resultat;

  i = 0;
  resultat = 0;

  while (i < n && s1[i] == s2[i])
      i++;
  if (s1[i] > s2[i])
    resultat = 1;
  else if (s1[i] < s2[i])
    resultat = -1;
  else
    resultat = 0;
  return (resultat);
}
