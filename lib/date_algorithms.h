#ifndef DATE_ALGORITHMS_H
#define DATE_ALGORITHMS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  long year;
  unsigned short month;
  unsigned short day;
} date_t;


double rata_die(date_t);
date_t inverse_rata_die(long);


#endif // DATE_ALGORITHMS_H
