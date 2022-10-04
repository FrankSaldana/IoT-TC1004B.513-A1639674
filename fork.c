#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba\n");

    int pid = fork();
    
    if (pid == 0){
        printf("Soy el proceso Hijo\n");
        sleep(10);
        printf("ya terminé");
        }
    else{
            printf("Soy el proceso Padre\n");
    }
    return 0;
}