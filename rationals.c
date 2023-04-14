#include <stdio.h>
#include <stdlib.h>

#include "rationals.h"

struct rational* new(int num, int den) {
  struct rational* r = malloc(sizeof(struct rational));
  r->num = num;
  r->den = den;
  return r;
}

struct rational* add(struct rational* r1, struct rational* r2) {
  struct rational* sum = malloc(sizeof(struct rational));
  sum->num = r1->num * r2->den + r2->num * r1->den;
  sum->den = r1->den * r2->den;
  return sum;
};

