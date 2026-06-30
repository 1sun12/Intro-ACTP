#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node {
  uint8_t data;
  node *next;
  node *prev;
};

void push (node *dst, node *src, uint8_t data) {
  node *cursor = NULL;
  while (cursor->next != NULL) {
    cursor = cursor->next;
  }

  // cursor should be at the last node now

}

int main(void) {
  node test0;
  node test1;
  test0.data = 5;
  test1.data = 6;
  test0.next = &test1;
  printf("%u", test0.next->data);
  
  return EXIT_SUCCESS;
}
