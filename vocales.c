#include<unistd.h>
#include<ctype.h>

int main(){

    char c;
    char may;
    int n;

    do{
        char num = '1';
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if(may == 'A' || may == 'E' || may == 'I'|| may =='O'|| may == 'U' ){

            write(STDOUT_FILENO,&num,1);
        }
        
    }while(n != 0);
    return 0;
}