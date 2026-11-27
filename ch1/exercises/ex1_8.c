#include <stdio.h>

// A program to count blanks, tabs, and newlines
int main(void) {
	int ns = 0;			// ns = number of spaces
	int nt = 0;			// nt = number of tabs
	int nl = 0;			// nl = number of lines

	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') 
			++ns;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("Total number of spaces: %d\n", ns);
	printf("Total number of tabs: %d\n", nt);
	printf("Total number of newlines: %d\n", nl);
}	
