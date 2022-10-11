#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int con;
void holaMundo(int signak Number){
    if(signalNumber == 10){
        printf("Es la senal 10\n");
        con = 2;
    } 
    else{
        printf("Es otra senal");
        }
    con =2;
}

void nomematas(int sig){
    printf("jajaja. no me matas\n")
}

int main(){
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(12,nomematas);
    con = 1;
    while(con ==1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n"); 
    /*
    Proceso Infinito While
    */
    return 0;
}


