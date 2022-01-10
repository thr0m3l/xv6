#include "fcntl.h"
#include "types.h"
#include "user.h"

// give command : incr 7
// it will output 8
int main(int argc, char *argv[]) {
  printf(1, "%d\n", incr(atoi(argv[1])));
  exit();
}