#include "gregorian_calendar.h"

int
main(void)
{
  date_t d1 = {.year = 0, .month = 3, .day = 1};
  date_t d2 = {.year = -1, .month = 12, .day = 31};

  long rd1 = rata_die(d1);
  long rd2 = rata_die(d2);

  date_t d3 = inverse_rata_die(rd1);
  date_t d4 = inverse_rata_die(1);

  printf("%4ld/%2d/%2d:\t%ld\n", d1.year, d1.month, d1.day, rd1);
  printf("%4ld/%2d/%2d:\t%ld\n", d2.year, d2.month, d2.day, rd2);

  printf("%ld:\t%4ld/%2d/%2d\n", rd1, d3.year, d3.month, d3.day);
  printf("%ld:\t%4ld/%2d/%2d\n", rd2, d4.year, d4.month, d4.day);

  exit(0);
}
