#include <stdio.h>
#include <string.h>

#define MAXLINES 5000 /* максимальное количество сортируемых строк  */

char *lineptr[MAXLINES]; /* указатели на строки */

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);

/* сортировка строк входного потока */
main()
{
  iny nlines; /* количество введенных строк */

  if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
    qsort(lineptr, 0, nlines-1);
    writelines(lineptr, nlines);
    return 0;
  } else {
    printf("error: input too bit to sort\n");
    return 1;
  }
}
#define MAXLEN 1000 /* максимальная длина входной строки  */
int getline(char*, int);
char *alloc(int);

/* readlines: считывание строк из входного потока */
int readlines(char *lineptr[], int maxlines)
{
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = getline(line, MAXLEN) > 0)
  if (nlines >= maxline || (p= alloc(len)) == NULL)
      return -1;
  else {
      line[len-1] = '\0'; /* удаление конца строки */
      strcpy(p, line);
      lineptr[nlines++] = p;
    }
  return nlines;
}

/* writelines: вывод строк в выходной поток */
void writelines(char *lineptr[], int nlines)
{
  int i;
  
  for (i= 0; i < nlines; i++)
    printf("%s\n", lineptr[i]);
}
