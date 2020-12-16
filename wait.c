#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main(){

	int idProcesso;
	int status;
	int i;

	idProcesso = fork();
	if (idProcesso < 0) 
		return 1;
	else if (idProcesso == 0){
		for(i=0;i<10;i++){
			printf("%d - Processo filho: %d\n",i, getpid());
			sleep(1);
		}
	}else{
		printf("Processo pai, pid = %d, vou esperar o termino do meu filho"getpid());
		wait(&status);
		if (WIFEXITED(status))
		  printf("Finalizou normalmente: %d\n", WEXITSTATUS(status));
		else if (WIFSIGNALED(status))
		  printf("Cancelado por um sinal: %d\n", WTERMSIG(status));
	}
	return 0;
}