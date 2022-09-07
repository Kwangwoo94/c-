#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc,char * argv[]){
	printf("MYPID(%s) = %d, MYPPID = %d\n",argv[0],getpid(),getppid());
	for(int i=0;i<atoi(argv[1]);i++){
		printf("My task looping --- %d\n",i);
		sleep(1);
	}
	return 0;
}