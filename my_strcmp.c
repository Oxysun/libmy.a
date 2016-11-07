/*
** my_strcmp.c for my_strcmp in /home/saumon/sommer_j/my_strcmp
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 15:27:25 2016 SOMMER Julien
** Last update Fri Oct 21 15:46:10 2016 SOMMER Julien
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	resultat;

  resultat = 0;
  i = 0;
  while ((s1[i] == s2[i]) && s1[i] != '\0')
    {
      i++;
    }
  if (s1[i] > s2[i])
    resultat = 1;
  else if (s1[i] < s2[i])
    resultat = -1;
  else
    resultat = 0;
  return (resultat);
}
