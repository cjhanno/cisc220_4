#include<string.h>
#include<stdlib.h>

char* safestrcat (char *a, char *b) {
	char *AandB = malloc(strlen(a)+strlen(b)+1);
	strcpy(a, AandB);
	strcpy(b, AandB);
	return AandB;
}

	
