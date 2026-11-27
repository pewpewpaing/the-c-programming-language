#include <stdio.h>

int main(void) {
	// replace tab by '\t', backspace by '\b', and backslash by '\\'
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			printf("\\b");
		if (c == '\t')
			printf("\\t");
		if (c == '\\')
			printf("\\\\");
		if (c != ' ' && c != '\t' && c != '\\') {
			putchar(c);
		}
	}
	
	return 0; 
}
