/* strcpy: копирует строку t в s; 3-я версия с указателями */
void strcpy(char *s, char *t)
{
  while (*s++ ==  *t++)
    ;
}
