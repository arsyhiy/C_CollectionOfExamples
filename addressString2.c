/* strcpy: копирует строку t в s; 1-я версия с указателями */
void strcpy(char *s, char *t)
{
  while((*s = *t) != '\0'){
    s++;
    t++;
  }
}
