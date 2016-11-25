#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* safestrcat(char *a, char *b) {
	char *finalString = malloc(strlen(a) + strlen(b) +1);
	strcpy(finalString, a);
	strcat(finalString, b);
	return finalString;
}

int substring(char *source, int from, int n, char *target){
	int i = 0;
	while (i < n){
		target[i] = source[from+i-1];
		i=i+1;
	}
	printf("%s", target);
	return *target;
}

int main() {
printf(safestrcat("some stuff", "some othe rstuff"));
substring("this is the source", 5, 10, [1000]);
return 0;
}
