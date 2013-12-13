#include <stdio.h>


void removeSpace(char *str) {
	char * p1 = str;
	char * p2 = str;
	do {
		while ( *p2 == ' ') { 
			p2++;
		}
		*p1 = *p2;
		p1++;
		p2++;
	}while( *p2 != '\0');
	
	*p1 = '\0';
	
}

int main(int argc, char * argv[]) {

	/* must be defined as an array */
	/* if defined as a pont, it will be read only space */
	char str[] = "       hello                world      ";
	removeSpace(str);
	printf("%s\n", str);

	return 1;
}
