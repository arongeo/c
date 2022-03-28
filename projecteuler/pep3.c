#include <stdio.h>

unsigned int read_input() {
  unsigned int input;
  scanf("%u", &input);
  return input;
}

int solve_pep3(unsigned int input) {
  unsigned int factors[100];
  unsigned int factors_multiplied;
	int factors_length = 0;
  for (int a = 0; a<100; a++) {
   factors[a] = 1; 
  }
  for (int i = 0; i<100; i++) {
    factors_multiplied = factors_multiplied * factors[i];
  }
  while (input != factors_multiplied) {
  }
}

int main() {
  return solve_pep3(read_input());
}