#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args(char * line){
  char * array[5];
  char * s1 = line;
  int x = 0;
  while (s1 != NULL){
    array[x] = strsep( &s1, " ");
    x++;
  }
  return array;
}

int main(){
  char * line = "ls -a -l";
  char ** args = parse_args( line );
  execvp(args[0], args);
}
