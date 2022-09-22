#include "date_algorithms.h"

int
main(void)
{
  date_t d1 = {.year = 0, .month = 3, .day = 1};
  long rd1 = rata_die(d1);

  date_t d2 = inverse_rata_die(1);
  long rd2 = rata_die(d2);

  printf("%4ld/%2d/%2d:\t%ld\n", d1.year, d1.month, d1.day, rd1);
  printf("%4ld/%2d/%2d:\t%ld\n", d2.year, d2.month, d2.day, rd2);

  exit(0);
}
