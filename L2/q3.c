#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*The child process can be printed first if we use sleep() in the parent process.
 */
int main(int argc, char *argv[]){
  int f = fork();
  
  if (f < 0){
    fprintf(stderr,"Fork failed\n");
  }

  else if (f == 0){
    printf("hello\n");
  }

  else {
    //    wait(NULL);
   sleep(1);
   printf("goodbye\n");
  }
  
  return 0;
}
