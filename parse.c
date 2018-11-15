#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args(char * line){
  char ** array = calloc(1, sizeof(char**));
  char * s1 = line;
  int x = 0;
  while (s1){
    strcat(array[x], strsep( &s1, " "));
    x++;
  }
  return array;
}

int main(){
  char * line = "ls -al";
  char ** args = parse_args( line );
  execvp(args[0], args);
}
