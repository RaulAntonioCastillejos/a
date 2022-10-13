#include <stdio.h>

int main(){

    FILE *IsOutput;
    FILE *tomayIntput;
    char readBuffer[80];
    IsOutput = popen("ls *.c","r");
    tomayIntput = popen("wc -l","w");
    while(fgets(readBuffer,80,IsOutput)){
        fputs(readBuffer,tomayIntput);
    
    }
    pclose(IsOutput);
    pclose(tomayIntput);
    
}

