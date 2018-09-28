#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/*The parent and the child can both access the file descriptor returned by open().
  If they are concurrently writing on the file, the child's process will be written on it unless wait() is called
  in the child process.
 */
int main(int argc, char *argv[]){
  int fp, f = fork();
  fp = open("q2out.txt", O_CREAT|O_TRUNC|O_WRONLY, S_IRWXU);
  
  if (f < 0){
    fprintf(stderr, "Fork failed\n");
  }

  else if (f == 0){
    write(fp, "child",6);
  }

  else{
    write(fp, "parent",7);
  }
  return 0;
}
