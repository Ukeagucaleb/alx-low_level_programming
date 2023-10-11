#include <stdio.h>

int main() {
  int endianness = get_endianness();

  if (endianness == 1) {
    printf("The machine is little-endian.\n");
  } else {
    printf("The machine is big-endian.\n");
  }

  return 0;
 }
