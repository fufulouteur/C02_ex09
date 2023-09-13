#include <stdio.h>

char *ft_strcapitalize(char *str) {
  char *str2;

  str2 = str;
  while (str) {
    if (*str >= ' ' && *str <= '?') {
      str++;
      if (*str <= 'a' && *str >= 'z') {
        *str -= 32;
      }
    }
    str++;
  }
  return str2;
}
