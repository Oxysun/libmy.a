/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/saumon/Jour07/my_str_to_wordtab
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Tue Oct 25 10:34:18 2016 SOMMER Julien
** Last update Fri Oct 28 14:59:41 2016 SOMMER Julien
*/

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str);

/* Fonction qui détermine si un caractère est alphanumérique ou non
*/

int	char_alphanum(char c)
{
  int	resultat;

  resultat = 0;
  if (c >= '0' && c <= '9')
    resultat = 1;
  else if (c >= 'a' && c <= 'z')
    resultat = 1;
  else if (c >= 'A' && c <= 'Z')
    resultat = 1;
  else
    resultat = 0;
  return (resultat);
}

/* Fonction qui compte le nombre de mots dans la chaîne de caractère
*/

int	my_str_word(char *str)
{
  int	nbr_word;
  int	i;
  
  nbr_word = 0;
  i = 0;
  while (i < my_strlen(str))
    {
      if (char_alphanum(str[i]) == 0)
	  i++;
      else if (char_alphanum(str[i]) == 1)
	{
	  nbr_word++;
	  while (char_alphanum(str[i]) == 1 && (my_strlen(str) > i))
	    i++;
	}
    }
  return (nbr_word);
}


/* Fonction pour remplir les chaînes de caractères contenues dans 
** new_str_word à partir de str.
*/

void	fill_str(char **new_str_word, int word_pos, char *str, int i_temp)
{
  int	char_pos;

  char_pos = 0;
  while (char_alphanum(str[i_temp]) == 1) 
    new_str_word[word_pos][char_pos++] = str[i_temp++];
}

/* Alloue taille à chaque valeur du tableau qui contient les 
** adresses des chaînes de charactères
*/

char	**malloc_word(char **new_str_word, char *str)
{
  int	count;
  int	i;
  int	word_pos;
  int	i_temp;

  i = 0;
  word_pos = 0;
  i_temp = 0;
  while (str[i] != '\0' && word_pos < my_str_word(str))
    {
    count = 0;
    if (char_alphanum(str[i]) == 1)
      {
      while (char_alphanum(str[i++]) == 1)
	  count++;
      new_str_word[word_pos] = malloc(sizeof(char) * (count + 1));
      i_temp = (i - count) - 1;
      fill_str(new_str_word, word_pos, str, i_temp);
      word_pos++;
      }
    else
      i++;
    }
  return (new_str_word);
}

/* Fonction principale qui découpe une chaîne de caractères en mots
** Un mot ne contient que des carctères alphanumériques
** Fonction renvoit un tableau où chaque case contient l'adresse 
** d'une chaîne de caractère représentant un mot.
** Le dernier élément sera égal à NULL
*/

char	**my_str_to_wordtab(char *str)
{
  int	i;
  char	**new_str_word;

  if (str == NULL)
    {
      return (NULL);
    }
  else
    {
      i = my_str_word(str);
      new_str_word = malloc(sizeof(char *) * (i + 1));
      malloc_word(new_str_word, str);
      return (new_str_word);
    }
}
