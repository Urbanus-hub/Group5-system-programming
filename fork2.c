#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkInstance(){
    if (fork()==0){
        printf("Hello from child\n");

        
    }
    else{
        printf("Hello from parent\n");
    }
    
}
int main(){
        forkInstance();
        return 0;
    }