#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>

int main(){

    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo\n");
        //execl("/workspace/a/hola.exe","hola.exe",NULL);
        execlp("hola.exe","hola.exe",NULL);
        sleep(5);
    }else{
        printf("Soye el proceso padre\n");
        wait(NULL);
    }
    return 0;

}