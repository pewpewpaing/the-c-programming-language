#include <stdio.h>

int main(void) {
	int nl = 0;

	int c;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("\n%d\n", nl);
}
