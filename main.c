#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<mystring.h>

int main() {
	safestrcat("some stuff", "some other stuff");
	char a[100];
	substring("this is the source", 5, 10, a);
	return 0;
}
