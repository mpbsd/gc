#include "gregorian_calendar.h"

double
rata_die(date_t d)
{
  long rd;

  if (d.month < 3) {
    d.month += 12;
    d.year -= 1;
  }
  rd = d.day + (153 * d.month - 457) / 5 + 365 * d.year + d.year / 4 - d.year / 100 + d.year / 400 - 306;

  return rd;
}

date_t
inverse_rata_die(long rd)
{
  long z, h, a, b, c;
  date_t d;

  z = rd + 306;
  h = 100 * z - 25;
  a = h / 3652425;
  b = a - a / 4;
  d.year = (100 * b + h) / 36525;
  c = b + z - 365 * d.year - d.year / 4;
  d.month = (5 * c + 456) / 153;
  d.day = c - (153 * d.month - 457) / 5;

  if (d.month > 12) {
    d.year += 1;
    d.month -= 12;
  }

  return d;
}
