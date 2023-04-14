/*
 * This file contains executable code for testing rationals
 */

#include <stdio.h>
#include <stdlib.h>

#include "rationals.h"


int main(int argc, char** argv) {
  struct rational* r1 = new(5,7);
  struct rational* r2 = new(3,5);
  struct rational* sum = add(r1,r2);
  printf("result of sum: %d / %d\n", sum->num, sum->den);

  return 0;
}
