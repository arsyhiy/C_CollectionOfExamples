/* month_name: возвращает имя n-го месяца */
char *month_name(int n)
{
  static char *name[] = {
    "Illegal month",
    "January", "February", "March",
    "Aprill", "May", "June",
    "July", "August", "September",
    "October", "November", "December"
  };
  return (n < 1 || n > 12) ? name[0] : name[n];
}

