#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

int main(int argc, char* argv[])
{
    char cwd[1024];
	if(argc < 2){
		fprintf(stderr, "Usage : ./unistd_chdir path\n");
		return 0;
	}
	if(chdir(argv[1])==0){
		getcwd(cwd, sizeof(cwd));
		printf("%s\n",cwd);
	}
	else{
		fprintf(stderr, "Path error\n");
		return 0;
	}
}
