#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){
    pid_t idPai;
    pid_t idProcesso;

    idPai = getppid();
    idProcesso = getpid();

    printf("PID:\t %d \nPPID:\t %d \n", idProcesso, idPai);

	
    while(1){}

    return 0;
}
