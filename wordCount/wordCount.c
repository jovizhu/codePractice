#include <stdio.h>

typedef enum {false, true} bool;

bool isAlpha(char ch) {
	if(( (ch <= 'z') && (ch>= 'a') ) || ( ( ch <= 'Z') && (ch >='A') ) ) {
		return true;
	}
	return false;
}

int wordCount(const char *str) {
	
	char *ptr =str;
	bool inWord = false;
	int wordcount = 0;
	while( *ptr != '\0') {
		while (isAlpha(*ptr)) {
			ptr++;	
			if(!inWord) {
				wordcount++;
			}
			inWord = true;
		}

		inWord = false;
		while ( (!isAlpha(*ptr)) && ( *ptr != '\0')) {
			ptr++;
		}
	}
	
	return wordcount;
}

int main (int arc, char * argv[]) {
	char *str = "ru lal lalf  df132 dfd2";
	int wordcount =0;
	wordcount = wordCount(str);
	printf("The word count is %d\n", wordcount);
	
}
