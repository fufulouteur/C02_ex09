#include <stdio.h>

char *ft_strcapitalize(char *str) {
  char *str2;

  str2 = str;
  while (*str != '\0') {
    if (*str == '?')
      str++;
    if (*str >= 'a' && *str <= 'z')
      *str -= 32;
    if (*str >= ' ' || *str <= '?')
      while (*str != ' ') {
        str++;
        if(*str >= ' ' || *str <= '?')
        {
          while (*str != 'a')
          str++;
        }
        if (*str == '\0') {
          break;
        }
      }

    str++;
  }
  return str2;
}
