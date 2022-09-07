#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{	
	pid_t pid;
	printf("MYPID = %d, MYPPID = %d\n",getpid(),getppid());
	pid = fork();
	if(pid == 0){ //child
		printf("Hello I am child : %d\n",getpid());
	}
	else if(pid == -1){
		perror("fork");
	}
	else{ //parent
		printf("Hello I am parent : %d",getpid());
	}
	sleep(1);
	return 0;
}