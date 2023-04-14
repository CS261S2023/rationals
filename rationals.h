/*
 * This file contains the definitions of the structure that defines
 * rational numbers and the templates for functions. 
 */
#ifndef __RATIONAL
#define __RATIONAL

/*
 * This structure represents a single rational number a/b 
 */

struct rational {
  int num;
  int den;
};


/*
 * these are prototypes/templates for the functions
 */

struct rational* new(int num, int den);
struct rational* add(struct rational* r1, struct rational* r2);

#endif
