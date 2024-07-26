#include<sys/types.h>
#include<stdio.h>
int main(){
    fork();
    fork();
    fork();
    printf("This is fork() system call\n ");
    return 0;
}