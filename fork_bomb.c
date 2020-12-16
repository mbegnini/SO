#include <sched.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
	int i=0;
	while(i<20){
		if(fork()==-1){
			printf("%d - %d impossivel criar novo processo\n",getpid(), i);
			break;
		}
		i++;
	}
	if(i==20)
		printf("%d - finalizado\n",getpid());
	return 0;
}