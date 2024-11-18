#include <stdio.h>

int print_hello() {
  printf("Hello, world!\n");
  return 0;
}

int main() {
  printf("함수 호출 \n");
  print_hello();
  print_hello();
  return 0;
}