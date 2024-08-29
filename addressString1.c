/* strcpy: копирует строку t в s; версия c индексированием массива */

void strcpy(char *s, char *t)
{
  int i;
  
  i = 0;
  while ((s[i] = t[i]) != '\0')
    i++;
}
