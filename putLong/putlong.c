#include <stdio.h>

int putlong(unsigned long n) {
	if (n < 10) {
		putchar (n+'0');
		return;
	}
	putlong(n/10);
	putchar(n%10+'0');
}

int main( int argc, char * argv[]) {
	unsigned long n = 999999999;
	putlong(n);
}
