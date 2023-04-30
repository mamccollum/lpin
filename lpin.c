/*
 * Use the ANSI escape sequences to initiate a print sequence.
 * According to the PINE manual, use ESC [5i ot begin printing and
 * ESC [4i to end printing.
 * 
 * After 5i, take stdin and print it to stdout until EOF, then
 * send 4i to stdout.
 * 
 */

#include <stdio.h>

#define ESC 27

int main(void) {
	printf("%c[5i", ESC);
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	printf("%c[4i", ESC);
	return 0;
}
