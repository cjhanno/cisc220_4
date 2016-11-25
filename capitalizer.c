#include<stdio.h>
int toupper(int c);
//#Assignment_4 Question_3 - Capitalizer.c program
//#Capitalize the first letter of every other word
//#Start from first word of each line
//#Program updates the file with capitals
//#Take the filename to capitalize its text as a - commant-line argument - for testing
//#use poem.txt 

int main() {
int i = 2;
char c;
char previous = ' ';
FILE* fp = fopen("poem.txt", "r+");

while((c = fgetc(fp)) != EOF) {
	if(previous=='\n' ){
		putchar (toupper(c));
		i = 1;
	}
	else if(previous==' '){
		if (i%2 == 0)
			putchar (toupper(c));
		else
			putchar(c);
		i+=1;
	}
	else{
		putchar(c);
	}	
	previous = c;

}
	
fclose(fp);

return 0;
}

