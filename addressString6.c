/* strcmp: возвращает <0 при s<t, 0 при s==t, >0 при s>t */
int strcmp(char *s, char *t)
{
  for ( ; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;

}

