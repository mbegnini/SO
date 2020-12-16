#include <sched.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int i;
	int cpu_atual;
	
	cpu_atual = sched_getcpu();
	
	printf("Eu sou o programa %s e estou executando na CPU %d\n", argv[0], cpu_atual);
	
	fork();
	for(i = 0; i < 100; i++){
		sleep(1);
		int cpu_nova = sched_getcpu();
		if(cpu_atual != cpu_nova){
		   cpu_atual = cpu_nova;
		   printf("Agora estou executando na CPU %d\n", cpu_atual);
		}	
    }	
	
	return 0;
}	
