#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int rtn;
	if(argc != 3)
	{
		printf("USE : cmd file1 file2\n");
		exit(0);
	}
	rtn = link(argv[1], argv[2]);
	if(rtn == -1)
	{
		perror(argv[1]);
		exit(0);
	}
	rtn = unlink(argv[1]);
	if(rtn == -1)
	{
		perror(argv[1]);
		exit(0);
	}
	return 0;
}
