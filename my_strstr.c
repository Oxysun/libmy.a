/*
** my_strstr.c for my_strstr in /home/saumon/sommer_j/my_strstr
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Fri Oct 21 20:16:31 2016 SOMMER Julien
** Last update Mon Oct 24 14:49:46 2016 SOMMER Julien
*/

void	my_putstr(char *str);

char		*my_strstr(char *str, char *to_find)
{
    int		compteur;
    int		i;
    int		y;
    
    compteur = 0;
    i = 0;
    y = 0;
    while ((str[i] != to_find[y] && str[i] != '\0'))
        ++i;
    if (str[i] == to_find[y])
    {
        compteur = i;
        while ((str[i] == to_find[y]) && (to_find[y] != '\0'))
        {
            y++;
            i++;
        }
        if (to_find[y] == '\0')
            return (&str[compteur]);
    }
    return (0);
}
