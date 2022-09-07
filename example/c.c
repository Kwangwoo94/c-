#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int signo){
	printf("SIGNO : %d\n",signo);
	if(signo == 3){
		printf("I am a good man\n");
	}
	if(signo == 34){
		printf("I am a bad man\n");
	}
	if(signo == 15){
		printf("Good bye\n");
		exit(1);
	}
}

int main(){
	signal(1, SIG_IGN);
	signal(2, SIG_IGN);
	signal(SIGTERM, handler);
	signal(3, handler);
	signal(34, handler);
	for(int i=0;;i++){
		printf("Hello world --- %d\n",i);
		sleep(2);
		pause();
	}
	return 0;
}