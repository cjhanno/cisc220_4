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

//fscanf(fp, "%s", buff);
//printf("1: %s\n", buff);

//fgets(buff, 255, fp);
//printf("2: %s\n", buff );

//fgets(buff, 255, fp);
//printf("3: %s\n", buff);
//fclose(fp);
//}

//printf("Total size of poem.txt = %d bytes\n", len);
//printf(fp);

//fseek(fp, 0, SEEK_END);
//int len = ftell(fp);

//char buff[255];

int main() {

FILE* fp = fopen("poem.txt", "r+");
fclose(fp);

return 0;
}

