#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* safestrcat(char *a, char *b) {
  char *finalString = malloc(strlen(a) + strlen(b) +1);
  strcpy(finalString, a);
  strcat(finalString, b);
  return finalString;
  
  
int substring(char *source, int from, int n, char *target){
  if ((from + n) > strlen(source)){ // substring will extend past length of string
    return -1
  }
  int i = 0;
  while (i < n){
    target[i] = source[from+i-1];
    i = i+1;
  }
  return 0;
