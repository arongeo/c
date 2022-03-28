#include <stdio.h>

typedef enum {
	false,
	true
 } bool;

unsigned int read_input(char* form_name) {
  int input;
  printf("%s", form_name);
  scanf("%u", &input);
  return input;
}

unsigned int solve_pep5() {
	bool multiple_found = false;
	unsigned int result = 1;
	while (multiple_found == false) {
		for (int i = 1; i<20; i++) {
			if (result % i == 0) {
				if (i == 20) {
					
				}
			} else {
				break;
			}
		}
		result++;
	}
}

int main() {
	solve_pep5();
	return 0;
}