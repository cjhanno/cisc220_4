#include<stdio.h>

//#Assignment_4 Question_3 - Capitalizer.c program
//#Capitalize the first letter of every other word
//#Start from first word of each line
//#Program updates the file with capitals
//#Take the filename to capitalize its text as a - commant-line argument - for testing
//#use poem.txt 

//FILE *poems;
//poems = fopen("poem.txt","r+");
//char poetry[333];
//fscanf(poems, "%s", poetry);


//int a;
//for( a=0; a<333; a=a+1 ) {
//      printf("value of a: %c\n", poetry[a]);
//}
//while(1) {
//      if( feof(poems) ) {
//              break;}
//      printf("%s",poetry);
//while(1) {
//        fgets(buff, 255, fp);
//       if( feof(fp) ) {
//                break ;}
//        printf("%s", buff);
//}

int main() {

FILE* fp;
char buff[255];

fp = fopen("poem.txt","w");
fprintf(fp, "this is testing...\n line2\n");
fclose(fp); 

fp = fopen("poem.txt", "r");
fscanf(fp, "%s", buff);
printf("1: %s\n", buff);

fgets(buff, 255, fp);
printf("2: %s\n", buff );

fgets(buff, 255, fp);
printf("3: %s\n", buff);
fclose(fp);

return 0;
}

