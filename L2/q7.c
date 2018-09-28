#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/*After the stardard output is closed, when the child calls printf() the output will not be in stantard output.
 */
int main(int argc, char *argv[]){
  int f = fork();

  if (f < 0){
    fprintf(stderr, "Fork failed\n");
  }

  else if (f == 0){
    close(STDOUT_FILENO);
    printf("Child\n");
  }
  else{
    wait(NULL);
    printf("Parent\n");
  }

  return 0;
}
