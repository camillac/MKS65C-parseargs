#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args(char * line){
  char ** array = calloc(5, sizeof(char*));
  char s[100];
  sprintf(s, "%s", line);
  char *s1 = s;
  int x = 0;
  while (s1){
    array[x] = strsep( &s1, " ");
    printf("%s", array[x]);
    x++;
  }

  return array;
}

int main(){
  char * line = "ls -al";
  char ** args = parse_args( line );
  execvp(args[0], args);
  // char ** array = malloc(5 * sizeof(char*));
  // char line[100] = "ls -al";
  // char * s1 = line;
  // int x = 0;
  // while (x < 5){
  //   array[x] = "hello";
  //   // array[x] = strsep( &s1, " ");
  //   printf("%s\n", array[x]);
  //   printf("%s\n", strsep( &s1, " "));
  //   x++;
  // }
  return 0;
}
