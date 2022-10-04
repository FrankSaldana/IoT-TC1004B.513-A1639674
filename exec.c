#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();
    
    if (pid == 0){
        printf("Soy el proceso Hijo y me voy a convertir en ls\n");
        execl("/workspace/IoT-TC1004B.513-A1639674/hola","holamundo","/etc",NULL);
        printf("Esto no debe ejecutarse.");
        }
    else{
            printf("Soy el proceso Padre\n");
    }
    return 0;
}