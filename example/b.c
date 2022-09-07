#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	int fd,newfd;
	
	fd = open("file01",O_RDWR | O_CREAT | O_TRUNC, 0666);
	newfd = dup2(fd,1);
	dprintf(1,"Hello World\n");
	write(1,"I am a few good man", strlen("I am a few good man"));
	getchar();
	return 0;
}