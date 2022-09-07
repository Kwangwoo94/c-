#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(){
	int fd;
	ssize_t byte_written, byte_read;
	char data[128] = "I am few bad man";
	char rdata[128];
	
	umask(0);
	
	fd = open("file01",O_RDWR | O_CREAT | O_TRUNC,0666);
	
	if(fd == -1){
		perror("open");
		exit(1);
	}
	printf("FD = %d",fd);
	byte_written = write(fd,data,strlen(data));
	if(byte_written == -1)
		printf("Write error");
	
	close(fd);
	
	fd = open("file01",O_RDONLY);
	while(1){
		byte_read = read(fd,rdata,sizeof(rdata));
		if(byte_read == 0)
			break;
		printf("READ = %s\n",rdata);
	}
	close(fd);
	//sleep(100);
	return 0;
}