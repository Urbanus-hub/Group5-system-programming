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
