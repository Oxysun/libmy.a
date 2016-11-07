/*
** my_putchar.c for my_putchar in /home/saumon/sommer_j/my_putchar
** 
** Made by SOMMER Julien
** Login   <sommer_j@etna-alternance.net>
** 
** Started on  Mon Oct 17 12:23:07 2016 SOMMER Julien
** Last update Mon Oct 17 16:54:28 2016 SOMMER Julien
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
