#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
   void forkInstance(){
     if (fork()==0){
     printf("Hello from child");
       else
        printf("Hello from parent");
      }
      int main(){
       forkInstance();
}