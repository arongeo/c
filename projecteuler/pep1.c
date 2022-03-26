#include <stdio.h>

unsigned int read_input() {
  int input;
  scanf("%u", &input);
  return input;
}

unsigned int solve_pep1(int input) {
  unsigned int result = 0;
  for (int i = 0; i<input; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      result += i;
    }
  }
  printf("%u\n", result);
  return 0;
}a

int main() {
  return solve_pep1(read_input());
}