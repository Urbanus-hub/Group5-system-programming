#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
   void forkInstance(){
     if (fork()==0){
        //child
     printf("Hello from child");
       else
        //parent
        printf("Hello from parent");
      }
      int main(){
       forkInstance();
}

/*Summary
fork(): Creates a new process. The new process (child) runs concurrently with the original process (parent).
Child Process: Executes the printf("Hello from child\n"); line.
Parent Process: Executes the printf("Hello from parent\n"); line.
Output:
Hello from parent
Hello from child
Or
Hello from child
Hello from parent
*/
