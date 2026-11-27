#include <stdio.h>

int main(void) {
	int inspace = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (inspace == 0) {
				inspace = 1;
				putchar(c);
			}		
		}

		if (c != ' ') {
			inspace = 0;
			putchar(c);
		}
	}
}
