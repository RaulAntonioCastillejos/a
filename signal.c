#include <signal.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void hola(int signalNumb){
    printf("recibí la senal %d",signalNumb);

}
int bandera;
void terminar(int x){
    printf("terminar");
    bandera = 0;
}
int main(){

    signal(12,terminar);
    signal(2,hola);
   
    bandera = 1;
    while(bandera == 1){
        printf("trabajando\n");
        sleep(1);
        
    }
    printf("aqui nunca llega");
    return 0;
}