#include "fcntl.h"
#include "stat.h"
#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  struct number *n = malloc(sizeof(struct number));
  n->num1 = atoi(argv[2]);
  n->num2 = atoi(argv[3]);

  char *c = argv[1];
  char choice = c[0];

  if (choice == 'p') {
    printf(1, "%d\n", mult(n));
  } else if (choice == 'd') {
    printf(1, "%d\n", div(n));
  } else if (choice == 'm') {
    printf(1, "%d\n", mod(n));
  } else {
    printf(1, "Not valid instruction\n");
  }

  exit();
}