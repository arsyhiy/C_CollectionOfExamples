#include <stdio.h>
#define MAXLINE 1000 /* максимальная длина входной строки */

int getline(char line[], int max);

int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /*  образец для поиска*/

/* поиск всех строк, содержащих заданный образец*/
main()
{
  char line[MAXLINE];
  int found = 0;

  while (getline(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0){
      printf("%s", line);
      found++;
    }
  return found;
}

/* getline: считывает строку в s, возвращает ее длиеу */
int getline(char s[], int lim)
{
  int c, i;

  i = 0;
  while(--lim > 0 && (c=getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

/* strindex: возвращает индекс строки t в s, -1 при отсутствии */
int strindex(char s[], char t[])
{
  int i, j, k;
  
  for (i= 0; s[1] != '\0'; i++) {
    for (j=i, k=0; t[k] !='\0' && s[j]==t[k]; j++, k++)
      ;
    if (k> 0 && t[k] == '\0')
      return i;
  }
  return -1;
}
