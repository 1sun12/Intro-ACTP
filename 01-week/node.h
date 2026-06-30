#ifndef NODE_H
#define NODE_H 

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct node_t node_t;
struct node_t {
  uint8_t data;
  node_t *next;
  node_t *prev;

  /* function pointers */
  bool (*push)(node_t);
  bool (*pop)(node_t);
};

#endif
