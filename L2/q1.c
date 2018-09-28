#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/*The value of the variable in the child process is whatever the child set it as
  The value of the variable is whatever the parent value is until the child changes it just to its own process.
 */

int main(int argc, char *argv[]){
  int n = 10;
  int f = fork();

  if (f < 0){
    fprintf(stderr, "fork failed\n");
    exit(1);
  }

  else if (f == 0){
    n+=10;
    printf("%d\n", n);
  }

  else{
    n+=2;
    printf("%d\n", n);
  }
 
  return 0;
}
